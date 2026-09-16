#include "../libqcoreevent.hpp"
#include "../libqcursor.hpp"
#include "../libqevent.hpp"
#include "../qml/libqjsvalue.hpp"
#include "../libqmatrix4x4.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include "../qml/libqqmlparserstatus.hpp"
#include "libqquickwindow.hpp"
#include "../libqrect.hpp"
#include "libqsgnode.hpp"
#include "libqsgtextureprovider.hpp"
#include "../libqsize.hpp"
#include "../libqtransform.hpp"
#include "../libqvariant.hpp"
#include "libqquickitem.hpp"
#include "libqquickitem.h"

QQuickTransform* q_quicktransform_new() {
    return QQuickTransform_New();
}

QQuickTransform* q_quicktransform_new2(void* parent) {
    return QQuickTransform_New2((QObject*)parent);
}

const QMetaObject* q_quicktransform_meta_object(void* self) {
    return QQuickTransform_MetaObject((QQuickTransform*)self);
}

void q_quicktransform_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickTransform_OnMetaObject((QQuickTransform*)self, (intptr_t)callback);
}

const QMetaObject* q_quicktransform_super_meta_object(void* self) {
    return QQuickTransform_SuperMetaObject((QQuickTransform*)self);
}

void* q_quicktransform_metacast(void* self, const char* param1) {
    return QQuickTransform_Metacast((QQuickTransform*)self, param1);
}

void q_quicktransform_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickTransform_OnMetacast((QQuickTransform*)self, (intptr_t)callback);
}

void* q_quicktransform_super_metacast(void* self, const char* param1) {
    return QQuickTransform_SuperMetacast((QQuickTransform*)self, param1);
}

int32_t q_quicktransform_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickTransform_Metacall((QQuickTransform*)self, param1, param2, param3);
}

void q_quicktransform_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickTransform_OnMetacall((QQuickTransform*)self, (intptr_t)callback);
}

int32_t q_quicktransform_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickTransform_SuperMetacall((QQuickTransform*)self, param1, param2, param3);
}

const char* q_quicktransform_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quicktransform_append_to_item(void* self, void* param1) {
    QQuickTransform_AppendToItem((QQuickTransform*)self, (QQuickItem*)param1);
}

void q_quicktransform_prepend_to_item(void* self, void* param1) {
    QQuickTransform_PrependToItem((QQuickTransform*)self, (QQuickItem*)param1);
}

void q_quicktransform_apply_to(void* self, void* matrix) {
    QQuickTransform_ApplyTo((QQuickTransform*)self, (QMatrix4x4*)matrix);
}

void q_quicktransform_on_apply_to(void* self, void (*callback)(void*, void*)) {
    QQuickTransform_OnApplyTo((QQuickTransform*)self, (intptr_t)callback);
}

void q_quicktransform_super_apply_to(void* self, void* matrix) {
    QQuickTransform_SuperApplyTo((QQuickTransform*)self, (QMatrix4x4*)matrix);
}

void q_quicktransform_update(void* self) {
    QQuickTransform_Update((QQuickTransform*)self);
}

void q_quicktransform_on_update(void* self, void (*callback)()) {
    QQuickTransform_OnUpdate((QQuickTransform*)self, (intptr_t)callback);
}

void q_quicktransform_super_update(void* self) {
    QQuickTransform_SuperUpdate((QQuickTransform*)self);
}

const char* q_quicktransform_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quicktransform_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quicktransform_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quicktransform_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quicktransform_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quicktransform_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quicktransform_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quicktransform_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quicktransform_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quicktransform_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quicktransform_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quicktransform_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quicktransform_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quicktransform_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quicktransform_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quicktransform_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quicktransform_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quicktransform_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quicktransform_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quicktransform_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quicktransform_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quicktransform_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quicktransform_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quicktransform_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quicktransform_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quicktransform_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quicktransform_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quicktransform_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quicktransform_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quicktransform_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quicktransform_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quicktransform_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quicktransform_dynamic_property_names\n");
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

QBindingStorage* q_quicktransform_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quicktransform_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quicktransform_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quicktransform_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quicktransform_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quicktransform_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quicktransform_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quicktransform_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quicktransform_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quicktransform_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quicktransform_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quicktransform_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quicktransform_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quicktransform_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quicktransform_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quicktransform_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quicktransform_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quicktransform_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quicktransform_event(void* self, void* event) {
    return QQuickTransform_Event((QQuickTransform*)self, (QEvent*)event);
}

bool q_quicktransform_super_event(void* self, void* event) {
    return QQuickTransform_SuperEvent((QQuickTransform*)self, (QEvent*)event);
}

void q_quicktransform_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickTransform_OnEvent((QQuickTransform*)self, (intptr_t)callback);
}

bool q_quicktransform_event_filter(void* self, void* watched, void* event) {
    return QQuickTransform_EventFilter((QQuickTransform*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quicktransform_super_event_filter(void* self, void* watched, void* event) {
    return QQuickTransform_SuperEventFilter((QQuickTransform*)self, (QObject*)watched, (QEvent*)event);
}

void q_quicktransform_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickTransform_OnEventFilter((QQuickTransform*)self, (intptr_t)callback);
}

void q_quicktransform_timer_event(void* self, void* event) {
    QQuickTransform_TimerEvent((QQuickTransform*)self, (QTimerEvent*)event);
}

void q_quicktransform_super_timer_event(void* self, void* event) {
    QQuickTransform_SuperTimerEvent((QQuickTransform*)self, (QTimerEvent*)event);
}

void q_quicktransform_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickTransform_OnTimerEvent((QQuickTransform*)self, (intptr_t)callback);
}

void q_quicktransform_child_event(void* self, void* event) {
    QQuickTransform_ChildEvent((QQuickTransform*)self, (QChildEvent*)event);
}

void q_quicktransform_super_child_event(void* self, void* event) {
    QQuickTransform_SuperChildEvent((QQuickTransform*)self, (QChildEvent*)event);
}

void q_quicktransform_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickTransform_OnChildEvent((QQuickTransform*)self, (intptr_t)callback);
}

void q_quicktransform_custom_event(void* self, void* event) {
    QQuickTransform_CustomEvent((QQuickTransform*)self, (QEvent*)event);
}

void q_quicktransform_super_custom_event(void* self, void* event) {
    QQuickTransform_SuperCustomEvent((QQuickTransform*)self, (QEvent*)event);
}

void q_quicktransform_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickTransform_OnCustomEvent((QQuickTransform*)self, (intptr_t)callback);
}

void q_quicktransform_connect_notify(void* self, void* signal) {
    QQuickTransform_ConnectNotify((QQuickTransform*)self, (QMetaMethod*)signal);
}

void q_quicktransform_super_connect_notify(void* self, void* signal) {
    QQuickTransform_SuperConnectNotify((QQuickTransform*)self, (QMetaMethod*)signal);
}

void q_quicktransform_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickTransform_OnConnectNotify((QQuickTransform*)self, (intptr_t)callback);
}

void q_quicktransform_disconnect_notify(void* self, void* signal) {
    QQuickTransform_DisconnectNotify((QQuickTransform*)self, (QMetaMethod*)signal);
}

void q_quicktransform_super_disconnect_notify(void* self, void* signal) {
    QQuickTransform_SuperDisconnectNotify((QQuickTransform*)self, (QMetaMethod*)signal);
}

void q_quicktransform_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickTransform_OnDisconnectNotify((QQuickTransform*)self, (intptr_t)callback);
}

QObject* q_quicktransform_sender(void* self) {
    return QQuickTransform_Sender((QQuickTransform*)self);
}

QObject* q_quicktransform_super_sender(void* self) {
    return QQuickTransform_SuperSender((QQuickTransform*)self);
}

void q_quicktransform_on_sender(void* self, QObject* (*callback)()) {
    QQuickTransform_OnSender((QQuickTransform*)self, (intptr_t)callback);
}

int32_t q_quicktransform_sender_signal_index(void* self) {
    return QQuickTransform_SenderSignalIndex((QQuickTransform*)self);
}

int32_t q_quicktransform_super_sender_signal_index(void* self) {
    return QQuickTransform_SuperSenderSignalIndex((QQuickTransform*)self);
}

void q_quicktransform_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickTransform_OnSenderSignalIndex((QQuickTransform*)self, (intptr_t)callback);
}

int32_t q_quicktransform_receivers(void* self, const char* signal) {
    return QQuickTransform_Receivers((QQuickTransform*)self, signal);
}

int32_t q_quicktransform_super_receivers(void* self, const char* signal) {
    return QQuickTransform_SuperReceivers((QQuickTransform*)self, signal);
}

void q_quicktransform_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickTransform_OnReceivers((QQuickTransform*)self, (intptr_t)callback);
}

bool q_quicktransform_is_signal_connected(void* self, void* signal) {
    return QQuickTransform_IsSignalConnected((QQuickTransform*)self, (QMetaMethod*)signal);
}

bool q_quicktransform_super_is_signal_connected(void* self, void* signal) {
    return QQuickTransform_SuperIsSignalConnected((QQuickTransform*)self, (QMetaMethod*)signal);
}

void q_quicktransform_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickTransform_OnIsSignalConnected((QQuickTransform*)self, (intptr_t)callback);
}

void q_quicktransform_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quicktransform_delete(void* self) {
    QQuickTransform_Delete((QQuickTransform*)(self));
}

QQuickItem* q_quickitem_new() {
    return QQuickItem_New();
}

QQuickItem* q_quickitem_new2(void* parent) {
    return QQuickItem_New2((QQuickItem*)parent);
}

QQmlParserStatus* q_quickitem_as_q_qml_parser_status(void* self) {
    return QQuickItem_AsQQmlParserStatus((QQuickItem*)self);
}

QQuickItem* q_quickitem_from_q_qml_parser_status(void* _qqmlparserstatus) {
    return (QQuickItem*)QQuickItem_FromQQmlParserStatus((QQmlParserStatus*)_qqmlparserstatus);
}

const QMetaObject* q_quickitem_meta_object(void* self) {
    return QQuickItem_MetaObject((QQuickItem*)self);
}

void q_quickitem_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QQuickItem_OnMetaObject((QQuickItem*)self, (intptr_t)callback);
}

const QMetaObject* q_quickitem_super_meta_object(void* self) {
    return QQuickItem_SuperMetaObject((QQuickItem*)self);
}

void* q_quickitem_metacast(void* self, const char* param1) {
    return QQuickItem_Metacast((QQuickItem*)self, param1);
}

void q_quickitem_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QQuickItem_OnMetacast((QQuickItem*)self, (intptr_t)callback);
}

void* q_quickitem_super_metacast(void* self, const char* param1) {
    return QQuickItem_SuperMetacast((QQuickItem*)self, param1);
}

int32_t q_quickitem_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickItem_Metacall((QQuickItem*)self, param1, param2, param3);
}

void q_quickitem_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QQuickItem_OnMetacall((QQuickItem*)self, (intptr_t)callback);
}

int32_t q_quickitem_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QQuickItem_SuperMetacall((QQuickItem*)self, param1, param2, param3);
}

const char* q_quickitem_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QQuickWindow* q_quickitem_window(void* self) {
    return QQuickItem_Window((QQuickItem*)self);
}

QQuickItem* q_quickitem_parent_item(void* self) {
    return QQuickItem_ParentItem((QQuickItem*)self);
}

void q_quickitem_set_parent_item(void* self, void* parent) {
    QQuickItem_SetParentItem((QQuickItem*)self, (QQuickItem*)parent);
}

void q_quickitem_stack_before(void* self, void* param1) {
    QQuickItem_StackBefore((QQuickItem*)self, (QQuickItem*)param1);
}

void q_quickitem_stack_after(void* self, void* param1) {
    QQuickItem_StackAfter((QQuickItem*)self, (QQuickItem*)param1);
}

QRectF* q_quickitem_children_rect(void* self) {
    return QQuickItem_ChildrenRect((QQuickItem*)self);
}

libqt_list /* of QQuickItem* */ q_quickitem_child_items(void* self) {
    libqt_list _arr = QQuickItem_ChildItems((QQuickItem*)self);
    return _arr;
}

bool q_quickitem_clip(void* self) {
    return QQuickItem_Clip((QQuickItem*)self);
}

void q_quickitem_set_clip(void* self, bool clip) {
    QQuickItem_SetClip((QQuickItem*)self, clip);
}

const char* q_quickitem_state(void* self) {
    libqt_string _str = QQuickItem_State((QQuickItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickitem_set_state(void* self, const char* state) {
    QQuickItem_SetState((QQuickItem*)self, qstring(state));
}

double q_quickitem_baseline_offset(void* self) {
    return QQuickItem_BaselineOffset((QQuickItem*)self);
}

void q_quickitem_set_baseline_offset(void* self, double baselineOffset) {
    QQuickItem_SetBaselineOffset((QQuickItem*)self, baselineOffset);
}

double q_quickitem_x(void* self) {
    return QQuickItem_X((QQuickItem*)self);
}

double q_quickitem_y(void* self) {
    return QQuickItem_Y((QQuickItem*)self);
}

QPointF* q_quickitem_position(void* self) {
    return QQuickItem_Position((QQuickItem*)self);
}

void q_quickitem_set_x(void* self, double x) {
    QQuickItem_SetX((QQuickItem*)self, x);
}

void q_quickitem_set_y(void* self, double y) {
    QQuickItem_SetY((QQuickItem*)self, y);
}

void q_quickitem_set_position(void* self, void* position) {
    QQuickItem_SetPosition((QQuickItem*)self, (QPointF*)position);
}

double q_quickitem_width(void* self) {
    return QQuickItem_Width((QQuickItem*)self);
}

void q_quickitem_set_width(void* self, double width) {
    QQuickItem_SetWidth((QQuickItem*)self, width);
}

void q_quickitem_reset_width(void* self) {
    QQuickItem_ResetWidth((QQuickItem*)self);
}

void q_quickitem_set_implicit_width(void* self, double implicitWidth) {
    QQuickItem_SetImplicitWidth((QQuickItem*)self, implicitWidth);
}

double q_quickitem_implicit_width(void* self) {
    return QQuickItem_ImplicitWidth((QQuickItem*)self);
}

double q_quickitem_height(void* self) {
    return QQuickItem_Height((QQuickItem*)self);
}

void q_quickitem_set_height(void* self, double height) {
    QQuickItem_SetHeight((QQuickItem*)self, height);
}

void q_quickitem_reset_height(void* self) {
    QQuickItem_ResetHeight((QQuickItem*)self);
}

void q_quickitem_set_implicit_height(void* self, double implicitHeight) {
    QQuickItem_SetImplicitHeight((QQuickItem*)self, implicitHeight);
}

double q_quickitem_implicit_height(void* self) {
    return QQuickItem_ImplicitHeight((QQuickItem*)self);
}

QSizeF* q_quickitem_size(void* self) {
    return QQuickItem_Size((QQuickItem*)self);
}

void q_quickitem_set_size(void* self, void* size) {
    QQuickItem_SetSize((QQuickItem*)self, (QSizeF*)size);
}

int32_t q_quickitem_transform_origin(void* self) {
    return QQuickItem_TransformOrigin((QQuickItem*)self);
}

void q_quickitem_set_transform_origin(void* self, int32_t transformOrigin) {
    QQuickItem_SetTransformOrigin((QQuickItem*)self, transformOrigin);
}

QPointF* q_quickitem_transform_origin_point(void* self) {
    return QQuickItem_TransformOriginPoint((QQuickItem*)self);
}

void q_quickitem_set_transform_origin_point(void* self, void* transformOriginPoint) {
    QQuickItem_SetTransformOriginPoint((QQuickItem*)self, (QPointF*)transformOriginPoint);
}

double q_quickitem_z(void* self) {
    return QQuickItem_Z((QQuickItem*)self);
}

void q_quickitem_set_z(void* self, double z) {
    QQuickItem_SetZ((QQuickItem*)self, z);
}

double q_quickitem_rotation(void* self) {
    return QQuickItem_Rotation((QQuickItem*)self);
}

void q_quickitem_set_rotation(void* self, double rotation) {
    QQuickItem_SetRotation((QQuickItem*)self, rotation);
}

double q_quickitem_scale(void* self) {
    return QQuickItem_Scale((QQuickItem*)self);
}

void q_quickitem_set_scale(void* self, double scale) {
    QQuickItem_SetScale((QQuickItem*)self, scale);
}

double q_quickitem_opacity(void* self) {
    return QQuickItem_Opacity((QQuickItem*)self);
}

void q_quickitem_set_opacity(void* self, double opacity) {
    QQuickItem_SetOpacity((QQuickItem*)self, opacity);
}

bool q_quickitem_is_visible(void* self) {
    return QQuickItem_IsVisible((QQuickItem*)self);
}

void q_quickitem_set_visible(void* self, bool visible) {
    QQuickItem_SetVisible((QQuickItem*)self, visible);
}

bool q_quickitem_is_enabled(void* self) {
    return QQuickItem_IsEnabled((QQuickItem*)self);
}

void q_quickitem_set_enabled(void* self, bool enabled) {
    QQuickItem_SetEnabled((QQuickItem*)self, enabled);
}

bool q_quickitem_smooth(void* self) {
    return QQuickItem_Smooth((QQuickItem*)self);
}

void q_quickitem_set_smooth(void* self, bool smooth) {
    QQuickItem_SetSmooth((QQuickItem*)self, smooth);
}

bool q_quickitem_active_focus_on_tab(void* self) {
    return QQuickItem_ActiveFocusOnTab((QQuickItem*)self);
}

void q_quickitem_set_active_focus_on_tab(void* self, bool activeFocusOnTab) {
    QQuickItem_SetActiveFocusOnTab((QQuickItem*)self, activeFocusOnTab);
}

bool q_quickitem_antialiasing(void* self) {
    return QQuickItem_Antialiasing((QQuickItem*)self);
}

void q_quickitem_set_antialiasing(void* self, bool antialiasing) {
    QQuickItem_SetAntialiasing((QQuickItem*)self, antialiasing);
}

void q_quickitem_reset_antialiasing(void* self) {
    QQuickItem_ResetAntialiasing((QQuickItem*)self);
}

int32_t q_quickitem_flags(void* self) {
    return QQuickItem_Flags((QQuickItem*)self);
}

void q_quickitem_set_flag(void* self, int32_t flag) {
    QQuickItem_SetFlag((QQuickItem*)self, flag);
}

void q_quickitem_set_flags(void* self, int32_t flags) {
    QQuickItem_SetFlags((QQuickItem*)self, flags);
}

QRectF* q_quickitem_bounding_rect(void* self) {
    return QQuickItem_BoundingRect((QQuickItem*)self);
}

void q_quickitem_on_bounding_rect(void* self, QRectF* (*callback)()) {
    QQuickItem_OnBoundingRect((QQuickItem*)self, (intptr_t)callback);
}

QRectF* q_quickitem_super_bounding_rect(void* self) {
    return QQuickItem_SuperBoundingRect((QQuickItem*)self);
}

QRectF* q_quickitem_clip_rect(void* self) {
    return QQuickItem_ClipRect((QQuickItem*)self);
}

void q_quickitem_on_clip_rect(void* self, QRectF* (*callback)()) {
    QQuickItem_OnClipRect((QQuickItem*)self, (intptr_t)callback);
}

QRectF* q_quickitem_super_clip_rect(void* self) {
    return QQuickItem_SuperClipRect((QQuickItem*)self);
}

QQuickItem* q_quickitem_viewport_item(void* self) {
    return QQuickItem_ViewportItem((QQuickItem*)self);
}

bool q_quickitem_has_active_focus(void* self) {
    return QQuickItem_HasActiveFocus((QQuickItem*)self);
}

bool q_quickitem_has_focus(void* self) {
    return QQuickItem_HasFocus((QQuickItem*)self);
}

void q_quickitem_set_focus(void* self, bool focus) {
    QQuickItem_SetFocus((QQuickItem*)self, focus);
}

void q_quickitem_set_focus2(void* self, bool focus, int32_t reason) {
    QQuickItem_SetFocus2((QQuickItem*)self, focus, reason);
}

bool q_quickitem_is_focus_scope(void* self) {
    return QQuickItem_IsFocusScope((QQuickItem*)self);
}

QQuickItem* q_quickitem_scoped_focus_item(void* self) {
    return QQuickItem_ScopedFocusItem((QQuickItem*)self);
}

int32_t q_quickitem_focus_policy(void* self) {
    return QQuickItem_FocusPolicy((QQuickItem*)self);
}

void q_quickitem_set_focus_policy(void* self, int32_t policy) {
    QQuickItem_SetFocusPolicy((QQuickItem*)self, policy);
}

bool q_quickitem_is_ancestor_of(void* self, void* child) {
    return QQuickItem_IsAncestorOf((QQuickItem*)self, (QQuickItem*)child);
}

int32_t q_quickitem_accepted_mouse_buttons(void* self) {
    return QQuickItem_AcceptedMouseButtons((QQuickItem*)self);
}

void q_quickitem_set_accepted_mouse_buttons(void* self, int32_t buttons) {
    QQuickItem_SetAcceptedMouseButtons((QQuickItem*)self, buttons);
}

bool q_quickitem_accept_hover_events(void* self) {
    return QQuickItem_AcceptHoverEvents((QQuickItem*)self);
}

void q_quickitem_set_accept_hover_events(void* self, bool enabled) {
    QQuickItem_SetAcceptHoverEvents((QQuickItem*)self, enabled);
}

bool q_quickitem_accept_touch_events(void* self) {
    return QQuickItem_AcceptTouchEvents((QQuickItem*)self);
}

void q_quickitem_set_accept_touch_events(void* self, bool accept) {
    QQuickItem_SetAcceptTouchEvents((QQuickItem*)self, accept);
}

QCursor* q_quickitem_cursor(void* self) {
    return QQuickItem_Cursor((QQuickItem*)self);
}

void q_quickitem_set_cursor(void* self, void* cursor) {
    QQuickItem_SetCursor((QQuickItem*)self, (QCursor*)cursor);
}

void q_quickitem_unset_cursor(void* self) {
    QQuickItem_UnsetCursor((QQuickItem*)self);
}

bool q_quickitem_is_under_mouse(void* self) {
    return QQuickItem_IsUnderMouse((QQuickItem*)self);
}

void q_quickitem_grab_mouse(void* self) {
    QQuickItem_GrabMouse((QQuickItem*)self);
}

void q_quickitem_ungrab_mouse(void* self) {
    QQuickItem_UngrabMouse((QQuickItem*)self);
}

bool q_quickitem_keep_mouse_grab(void* self) {
    return QQuickItem_KeepMouseGrab((QQuickItem*)self);
}

void q_quickitem_set_keep_mouse_grab(void* self, bool keepMouseGrab) {
    QQuickItem_SetKeepMouseGrab((QQuickItem*)self, keepMouseGrab);
}

bool q_quickitem_filters_child_mouse_events(void* self) {
    return QQuickItem_FiltersChildMouseEvents((QQuickItem*)self);
}

void q_quickitem_set_filters_child_mouse_events(void* self, bool filter) {
    QQuickItem_SetFiltersChildMouseEvents((QQuickItem*)self, filter);
}

void q_quickitem_grab_touch_points(void* self, libqt_list /* of int */ ids) {
    QQuickItem_GrabTouchPoints((QQuickItem*)self, ids);
}

void q_quickitem_ungrab_touch_points(void* self) {
    QQuickItem_UngrabTouchPoints((QQuickItem*)self);
}

bool q_quickitem_keep_touch_grab(void* self) {
    return QQuickItem_KeepTouchGrab((QQuickItem*)self);
}

void q_quickitem_set_keep_touch_grab(void* self, bool keepTouchGrab) {
    QQuickItem_SetKeepTouchGrab((QQuickItem*)self, keepTouchGrab);
}

bool q_quickitem_grab_to_image(void* self, void* callback) {
    return QQuickItem_GrabToImage((QQuickItem*)self, (QJSValue*)callback);
}

bool q_quickitem_contains(void* self, void* point) {
    return QQuickItem_Contains((QQuickItem*)self, (QPointF*)point);
}

void q_quickitem_on_contains(void* self, bool (*callback)(void*, void*)) {
    QQuickItem_OnContains((QQuickItem*)self, (intptr_t)callback);
}

bool q_quickitem_super_contains(void* self, void* point) {
    return QQuickItem_SuperContains((QQuickItem*)self, (QPointF*)point);
}

QObject* q_quickitem_containment_mask(void* self) {
    return QQuickItem_ContainmentMask((QQuickItem*)self);
}

void q_quickitem_set_containment_mask(void* self, void* mask) {
    QQuickItem_SetContainmentMask((QQuickItem*)self, (QObject*)mask);
}

QTransform* q_quickitem_item_transform(void* self, void* param1, bool* param2) {
    return QQuickItem_ItemTransform((QQuickItem*)self, (QQuickItem*)param1, (bool*)param2);
}

QPointF* q_quickitem_map_to_scene(void* self, void* point) {
    return QQuickItem_MapToScene((QQuickItem*)self, (QPointF*)point);
}

QRectF* q_quickitem_map_rect_to_item(void* self, void* item, void* rect) {
    return QQuickItem_MapRectToItem((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickitem_map_rect_to_scene(void* self, void* rect) {
    return QQuickItem_MapRectToScene((QQuickItem*)self, (QRectF*)rect);
}

QPointF* q_quickitem_map_from_scene(void* self, void* point) {
    return QQuickItem_MapFromScene((QQuickItem*)self, (QPointF*)point);
}

QRectF* q_quickitem_map_rect_from_item(void* self, void* item, void* rect) {
    return QQuickItem_MapRectFromItem((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickitem_map_rect_from_scene(void* self, void* rect) {
    return QQuickItem_MapRectFromScene((QQuickItem*)self, (QRectF*)rect);
}

void q_quickitem_polish(void* self) {
    QQuickItem_Polish((QQuickItem*)self);
}

QPointF* q_quickitem_map_from_item2(void* self, void* item, void* point) {
    return QQuickItem_MapFromItem2((QQuickItem*)self, (QQuickItem*)item, (QPointF*)point);
}

QPointF* q_quickitem_map_from_item3(void* self, void* item, double x, double y) {
    return QQuickItem_MapFromItem3((QQuickItem*)self, (QQuickItem*)item, x, y);
}

QRectF* q_quickitem_map_from_item4(void* self, void* item, void* rect) {
    return QQuickItem_MapFromItem4((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickitem_map_from_item5(void* self, void* item, double x, double y, double width, double height) {
    return QQuickItem_MapFromItem5((QQuickItem*)self, (QQuickItem*)item, x, y, width, height);
}

QPointF* q_quickitem_map_to_item2(void* self, void* item, void* point) {
    return QQuickItem_MapToItem2((QQuickItem*)self, (QQuickItem*)item, (QPointF*)point);
}

QPointF* q_quickitem_map_to_item3(void* self, void* item, double x, double y) {
    return QQuickItem_MapToItem3((QQuickItem*)self, (QQuickItem*)item, x, y);
}

QRectF* q_quickitem_map_to_item4(void* self, void* item, void* rect) {
    return QQuickItem_MapToItem4((QQuickItem*)self, (QQuickItem*)item, (QRectF*)rect);
}

QRectF* q_quickitem_map_to_item5(void* self, void* item, double x, double y, double width, double height) {
    return QQuickItem_MapToItem5((QQuickItem*)self, (QQuickItem*)item, x, y, width, height);
}

QPointF* q_quickitem_map_from_global2(void* self, double x, double y) {
    return QQuickItem_MapFromGlobal2((QQuickItem*)self, x, y);
}

QPointF* q_quickitem_map_from_global3(void* self, void* point) {
    return QQuickItem_MapFromGlobal3((QQuickItem*)self, (QPointF*)point);
}

QPointF* q_quickitem_map_to_global2(void* self, double x, double y) {
    return QQuickItem_MapToGlobal2((QQuickItem*)self, x, y);
}

QPointF* q_quickitem_map_to_global3(void* self, void* point) {
    return QQuickItem_MapToGlobal3((QQuickItem*)self, (QPointF*)point);
}

void q_quickitem_force_active_focus(void* self) {
    QQuickItem_ForceActiveFocus((QQuickItem*)self);
}

void q_quickitem_force_active_focus2(void* self, int32_t reason) {
    QQuickItem_ForceActiveFocus2((QQuickItem*)self, reason);
}

QQuickItem* q_quickitem_next_item_in_focus_chain(void* self) {
    return QQuickItem_NextItemInFocusChain((QQuickItem*)self);
}

QQuickItem* q_quickitem_child_at(void* self, double x, double y) {
    return QQuickItem_ChildAt((QQuickItem*)self, x, y);
}

void q_quickitem_ensure_polished(void* self) {
    QQuickItem_EnsurePolished((QQuickItem*)self);
}

void q_quickitem_dump_item_tree(void* self) {
    QQuickItem_DumpItemTree((QQuickItem*)self);
}

QVariant* q_quickitem_input_method_query(void* self, int32_t query) {
    return QQuickItem_InputMethodQuery((QQuickItem*)self, query);
}

void q_quickitem_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    QQuickItem_OnInputMethodQuery((QQuickItem*)self, (intptr_t)callback);
}

QVariant* q_quickitem_super_input_method_query(void* self, int32_t query) {
    return QQuickItem_SuperInputMethodQuery((QQuickItem*)self, query);
}

bool q_quickitem_is_texture_provider(void* self) {
    return QQuickItem_IsTextureProvider((QQuickItem*)self);
}

void q_quickitem_on_is_texture_provider(void* self, bool (*callback)()) {
    QQuickItem_OnIsTextureProvider((QQuickItem*)self, (intptr_t)callback);
}

bool q_quickitem_super_is_texture_provider(void* self) {
    return QQuickItem_SuperIsTextureProvider((QQuickItem*)self);
}

QSGTextureProvider* q_quickitem_texture_provider(void* self) {
    return QQuickItem_TextureProvider((QQuickItem*)self);
}

void q_quickitem_on_texture_provider(void* self, QSGTextureProvider* (*callback)()) {
    QQuickItem_OnTextureProvider((QQuickItem*)self, (intptr_t)callback);
}

QSGTextureProvider* q_quickitem_super_texture_provider(void* self) {
    return QQuickItem_SuperTextureProvider((QQuickItem*)self);
}

void q_quickitem_update(void* self) {
    QQuickItem_Update((QQuickItem*)self);
}

void q_quickitem_children_rect_changed(void* self, void* param1) {
    QQuickItem_ChildrenRectChanged((QQuickItem*)self, (QRectF*)param1);
}

void q_quickitem_on_children_rect_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_ChildrenRectChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_baseline_offset_changed(void* self, double param1) {
    QQuickItem_BaselineOffsetChanged((QQuickItem*)self, param1);
}

void q_quickitem_on_baseline_offset_changed(void* self, void (*callback)(void*, double)) {
    QQuickItem_Connect_BaselineOffsetChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_state_changed(void* self, const char* param1) {
    QQuickItem_StateChanged((QQuickItem*)self, qstring(param1));
}

void q_quickitem_on_state_changed(void* self, void (*callback)(void*, const char*)) {
    QQuickItem_Connect_StateChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_focus_changed(void* self, bool param1) {
    QQuickItem_FocusChanged((QQuickItem*)self, param1);
}

void q_quickitem_on_focus_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_FocusChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_active_focus_changed(void* self, bool param1) {
    QQuickItem_ActiveFocusChanged((QQuickItem*)self, param1);
}

void q_quickitem_on_active_focus_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ActiveFocusChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_focus_policy_changed(void* self, int32_t param1) {
    QQuickItem_FocusPolicyChanged((QQuickItem*)self, param1);
}

void q_quickitem_on_focus_policy_changed(void* self, void (*callback)(void*, int32_t)) {
    QQuickItem_Connect_FocusPolicyChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_active_focus_on_tab_changed(void* self, bool param1) {
    QQuickItem_ActiveFocusOnTabChanged((QQuickItem*)self, param1);
}

void q_quickitem_on_active_focus_on_tab_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ActiveFocusOnTabChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_parent_changed(void* self, void* param1) {
    QQuickItem_ParentChanged((QQuickItem*)self, (QQuickItem*)param1);
}

void q_quickitem_on_parent_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_ParentChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_transform_origin_changed(void* self, int32_t param1) {
    QQuickItem_TransformOriginChanged((QQuickItem*)self, param1);
}

void q_quickitem_on_transform_origin_changed(void* self, void (*callback)(void*, int32_t)) {
    QQuickItem_Connect_TransformOriginChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_smooth_changed(void* self, bool param1) {
    QQuickItem_SmoothChanged((QQuickItem*)self, param1);
}

void q_quickitem_on_smooth_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_SmoothChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_antialiasing_changed(void* self, bool param1) {
    QQuickItem_AntialiasingChanged((QQuickItem*)self, param1);
}

void q_quickitem_on_antialiasing_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_AntialiasingChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_clip_changed(void* self, bool param1) {
    QQuickItem_ClipChanged((QQuickItem*)self, param1);
}

void q_quickitem_on_clip_changed(void* self, void (*callback)(void*, bool)) {
    QQuickItem_Connect_ClipChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_window_changed(void* self, void* window) {
    QQuickItem_WindowChanged((QQuickItem*)self, (QQuickWindow*)window);
}

void q_quickitem_on_window_changed(void* self, void (*callback)(void*, void*)) {
    QQuickItem_Connect_WindowChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_children_changed(void* self) {
    QQuickItem_ChildrenChanged((QQuickItem*)self);
}

void q_quickitem_on_children_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ChildrenChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_opacity_changed(void* self) {
    QQuickItem_OpacityChanged((QQuickItem*)self);
}

void q_quickitem_on_opacity_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_OpacityChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_enabled_changed(void* self) {
    QQuickItem_EnabledChanged((QQuickItem*)self);
}

void q_quickitem_on_enabled_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_EnabledChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_visible_changed(void* self) {
    QQuickItem_VisibleChanged((QQuickItem*)self);
}

void q_quickitem_on_visible_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_VisibleChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_visible_children_changed(void* self) {
    QQuickItem_VisibleChildrenChanged((QQuickItem*)self);
}

void q_quickitem_on_visible_children_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_VisibleChildrenChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_rotation_changed(void* self) {
    QQuickItem_RotationChanged((QQuickItem*)self);
}

void q_quickitem_on_rotation_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_RotationChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_scale_changed(void* self) {
    QQuickItem_ScaleChanged((QQuickItem*)self);
}

void q_quickitem_on_scale_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ScaleChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_x_changed(void* self) {
    QQuickItem_XChanged((QQuickItem*)self);
}

void q_quickitem_on_x_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_XChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_y_changed(void* self) {
    QQuickItem_YChanged((QQuickItem*)self);
}

void q_quickitem_on_y_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_YChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_width_changed(void* self) {
    QQuickItem_WidthChanged((QQuickItem*)self);
}

void q_quickitem_on_width_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_WidthChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_height_changed(void* self) {
    QQuickItem_HeightChanged((QQuickItem*)self);
}

void q_quickitem_on_height_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_HeightChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_z_changed(void* self) {
    QQuickItem_ZChanged((QQuickItem*)self);
}

void q_quickitem_on_z_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ZChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_implicit_width_changed(void* self) {
    QQuickItem_ImplicitWidthChanged((QQuickItem*)self);
}

void q_quickitem_on_implicit_width_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ImplicitWidthChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_implicit_height_changed(void* self) {
    QQuickItem_ImplicitHeightChanged((QQuickItem*)self);
}

void q_quickitem_on_implicit_height_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ImplicitHeightChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_containment_mask_changed(void* self) {
    QQuickItem_ContainmentMaskChanged((QQuickItem*)self);
}

void q_quickitem_on_containment_mask_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_ContainmentMaskChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_palette_changed(void* self) {
    QQuickItem_PaletteChanged((QQuickItem*)self);
}

void q_quickitem_on_palette_changed(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_PaletteChanged((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_palette_created(void* self) {
    QQuickItem_PaletteCreated((QQuickItem*)self);
}

void q_quickitem_on_palette_created(void* self, void (*callback)(void*)) {
    QQuickItem_Connect_PaletteCreated((QQuickItem*)self, (intptr_t)callback);
}

bool q_quickitem_event(void* self, void* param1) {
    return QQuickItem_Event((QQuickItem*)self, (QEvent*)param1);
}

void q_quickitem_on_event(void* self, bool (*callback)(void*, void*)) {
    QQuickItem_OnEvent((QQuickItem*)self, (intptr_t)callback);
}

bool q_quickitem_super_event(void* self, void* param1) {
    return QQuickItem_SuperEvent((QQuickItem*)self, (QEvent*)param1);
}

bool q_quickitem_is_component_complete(void* self) {
    return QQuickItem_IsComponentComplete((QQuickItem*)self);
}

void q_quickitem_on_is_component_complete(void* self, bool (*callback)()) {
    QQuickItem_OnIsComponentComplete((QQuickItem*)self, (intptr_t)callback);
}

bool q_quickitem_super_is_component_complete(void* self) {
    return QQuickItem_SuperIsComponentComplete((QQuickItem*)self);
}

void q_quickitem_item_change(void* self, int32_t param1, void* param2) {
    QQuickItem_ItemChange((QQuickItem*)self, param1, (QQuickItem__ItemChangeData*)param2);
}

void q_quickitem_on_item_change(void* self, void (*callback)(void*, int32_t, void*)) {
    QQuickItem_OnItemChange((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_item_change(void* self, int32_t param1, void* param2) {
    QQuickItem_SuperItemChange((QQuickItem*)self, param1, (QQuickItem__ItemChangeData*)param2);
}

void q_quickitem_geometry_change(void* self, void* newGeometry, void* oldGeometry) {
    QQuickItem_GeometryChange((QQuickItem*)self, (QRectF*)newGeometry, (QRectF*)oldGeometry);
}

void q_quickitem_on_geometry_change(void* self, void (*callback)(void*, void*, void*)) {
    QQuickItem_OnGeometryChange((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_geometry_change(void* self, void* newGeometry, void* oldGeometry) {
    QQuickItem_SuperGeometryChange((QQuickItem*)self, (QRectF*)newGeometry, (QRectF*)oldGeometry);
}

void q_quickitem_update_input_method(void* self) {
    QQuickItem_UpdateInputMethod((QQuickItem*)self);
}

void q_quickitem_on_update_input_method(void* self, void (*callback)()) {
    QQuickItem_OnUpdateInputMethod((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_update_input_method(void* self) {
    QQuickItem_SuperUpdateInputMethod((QQuickItem*)self);
}

bool q_quickitem_width_valid(void* self) {
    return QQuickItem_WidthValid((QQuickItem*)self);
}

void q_quickitem_on_width_valid(void* self, bool (*callback)()) {
    QQuickItem_OnWidthValid((QQuickItem*)self, (intptr_t)callback);
}

bool q_quickitem_super_width_valid(void* self) {
    return QQuickItem_SuperWidthValid((QQuickItem*)self);
}

bool q_quickitem_height_valid(void* self) {
    return QQuickItem_HeightValid((QQuickItem*)self);
}

void q_quickitem_on_height_valid(void* self, bool (*callback)()) {
    QQuickItem_OnHeightValid((QQuickItem*)self, (intptr_t)callback);
}

bool q_quickitem_super_height_valid(void* self) {
    return QQuickItem_SuperHeightValid((QQuickItem*)self);
}

void q_quickitem_set_implicit_size(void* self, double param1, double param2) {
    QQuickItem_SetImplicitSize((QQuickItem*)self, param1, param2);
}

void q_quickitem_on_set_implicit_size(void* self, void (*callback)(void*, double, double)) {
    QQuickItem_OnSetImplicitSize((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_set_implicit_size(void* self, double param1, double param2) {
    QQuickItem_SuperSetImplicitSize((QQuickItem*)self, param1, param2);
}

void q_quickitem_class_begin(void* self) {
    QQuickItem_ClassBegin((QQuickItem*)self);
}

void q_quickitem_on_class_begin(void* self, void (*callback)()) {
    QQuickItem_OnClassBegin((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_class_begin(void* self) {
    QQuickItem_SuperClassBegin((QQuickItem*)self);
}

void q_quickitem_component_complete(void* self) {
    QQuickItem_ComponentComplete((QQuickItem*)self);
}

void q_quickitem_on_component_complete(void* self, void (*callback)()) {
    QQuickItem_OnComponentComplete((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_component_complete(void* self) {
    QQuickItem_SuperComponentComplete((QQuickItem*)self);
}

void q_quickitem_key_press_event(void* self, void* event) {
    QQuickItem_KeyPressEvent((QQuickItem*)self, (QKeyEvent*)event);
}

void q_quickitem_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnKeyPressEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_key_press_event(void* self, void* event) {
    QQuickItem_SuperKeyPressEvent((QQuickItem*)self, (QKeyEvent*)event);
}

void q_quickitem_key_release_event(void* self, void* event) {
    QQuickItem_KeyReleaseEvent((QQuickItem*)self, (QKeyEvent*)event);
}

void q_quickitem_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnKeyReleaseEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_key_release_event(void* self, void* event) {
    QQuickItem_SuperKeyReleaseEvent((QQuickItem*)self, (QKeyEvent*)event);
}

void q_quickitem_input_method_event(void* self, void* param1) {
    QQuickItem_InputMethodEvent((QQuickItem*)self, (QInputMethodEvent*)param1);
}

void q_quickitem_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnInputMethodEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_input_method_event(void* self, void* param1) {
    QQuickItem_SuperInputMethodEvent((QQuickItem*)self, (QInputMethodEvent*)param1);
}

void q_quickitem_focus_in_event(void* self, void* param1) {
    QQuickItem_FocusInEvent((QQuickItem*)self, (QFocusEvent*)param1);
}

void q_quickitem_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnFocusInEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_focus_in_event(void* self, void* param1) {
    QQuickItem_SuperFocusInEvent((QQuickItem*)self, (QFocusEvent*)param1);
}

void q_quickitem_focus_out_event(void* self, void* param1) {
    QQuickItem_FocusOutEvent((QQuickItem*)self, (QFocusEvent*)param1);
}

void q_quickitem_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnFocusOutEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_focus_out_event(void* self, void* param1) {
    QQuickItem_SuperFocusOutEvent((QQuickItem*)self, (QFocusEvent*)param1);
}

void q_quickitem_mouse_press_event(void* self, void* event) {
    QQuickItem_MousePressEvent((QQuickItem*)self, (QMouseEvent*)event);
}

void q_quickitem_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnMousePressEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_mouse_press_event(void* self, void* event) {
    QQuickItem_SuperMousePressEvent((QQuickItem*)self, (QMouseEvent*)event);
}

void q_quickitem_mouse_move_event(void* self, void* event) {
    QQuickItem_MouseMoveEvent((QQuickItem*)self, (QMouseEvent*)event);
}

void q_quickitem_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnMouseMoveEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_mouse_move_event(void* self, void* event) {
    QQuickItem_SuperMouseMoveEvent((QQuickItem*)self, (QMouseEvent*)event);
}

void q_quickitem_mouse_release_event(void* self, void* event) {
    QQuickItem_MouseReleaseEvent((QQuickItem*)self, (QMouseEvent*)event);
}

void q_quickitem_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnMouseReleaseEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_mouse_release_event(void* self, void* event) {
    QQuickItem_SuperMouseReleaseEvent((QQuickItem*)self, (QMouseEvent*)event);
}

void q_quickitem_mouse_double_click_event(void* self, void* event) {
    QQuickItem_MouseDoubleClickEvent((QQuickItem*)self, (QMouseEvent*)event);
}

void q_quickitem_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnMouseDoubleClickEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_mouse_double_click_event(void* self, void* event) {
    QQuickItem_SuperMouseDoubleClickEvent((QQuickItem*)self, (QMouseEvent*)event);
}

void q_quickitem_mouse_ungrab_event(void* self) {
    QQuickItem_MouseUngrabEvent((QQuickItem*)self);
}

void q_quickitem_on_mouse_ungrab_event(void* self, void (*callback)()) {
    QQuickItem_OnMouseUngrabEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_mouse_ungrab_event(void* self) {
    QQuickItem_SuperMouseUngrabEvent((QQuickItem*)self);
}

void q_quickitem_touch_ungrab_event(void* self) {
    QQuickItem_TouchUngrabEvent((QQuickItem*)self);
}

void q_quickitem_on_touch_ungrab_event(void* self, void (*callback)()) {
    QQuickItem_OnTouchUngrabEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_touch_ungrab_event(void* self) {
    QQuickItem_SuperTouchUngrabEvent((QQuickItem*)self);
}

void q_quickitem_wheel_event(void* self, void* event) {
    QQuickItem_WheelEvent((QQuickItem*)self, (QWheelEvent*)event);
}

void q_quickitem_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnWheelEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_wheel_event(void* self, void* event) {
    QQuickItem_SuperWheelEvent((QQuickItem*)self, (QWheelEvent*)event);
}

void q_quickitem_touch_event(void* self, void* event) {
    QQuickItem_TouchEvent((QQuickItem*)self, (QTouchEvent*)event);
}

void q_quickitem_on_touch_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnTouchEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_touch_event(void* self, void* event) {
    QQuickItem_SuperTouchEvent((QQuickItem*)self, (QTouchEvent*)event);
}

void q_quickitem_hover_enter_event(void* self, void* event) {
    QQuickItem_HoverEnterEvent((QQuickItem*)self, (QHoverEvent*)event);
}

void q_quickitem_on_hover_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnHoverEnterEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_hover_enter_event(void* self, void* event) {
    QQuickItem_SuperHoverEnterEvent((QQuickItem*)self, (QHoverEvent*)event);
}

void q_quickitem_hover_move_event(void* self, void* event) {
    QQuickItem_HoverMoveEvent((QQuickItem*)self, (QHoverEvent*)event);
}

void q_quickitem_on_hover_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnHoverMoveEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_hover_move_event(void* self, void* event) {
    QQuickItem_SuperHoverMoveEvent((QQuickItem*)self, (QHoverEvent*)event);
}

void q_quickitem_hover_leave_event(void* self, void* event) {
    QQuickItem_HoverLeaveEvent((QQuickItem*)self, (QHoverEvent*)event);
}

void q_quickitem_on_hover_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnHoverLeaveEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_hover_leave_event(void* self, void* event) {
    QQuickItem_SuperHoverLeaveEvent((QQuickItem*)self, (QHoverEvent*)event);
}

void q_quickitem_drag_enter_event(void* self, void* param1) {
    QQuickItem_DragEnterEvent((QQuickItem*)self, (QDragEnterEvent*)param1);
}

void q_quickitem_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnDragEnterEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_drag_enter_event(void* self, void* param1) {
    QQuickItem_SuperDragEnterEvent((QQuickItem*)self, (QDragEnterEvent*)param1);
}

void q_quickitem_drag_move_event(void* self, void* param1) {
    QQuickItem_DragMoveEvent((QQuickItem*)self, (QDragMoveEvent*)param1);
}

void q_quickitem_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnDragMoveEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_drag_move_event(void* self, void* param1) {
    QQuickItem_SuperDragMoveEvent((QQuickItem*)self, (QDragMoveEvent*)param1);
}

void q_quickitem_drag_leave_event(void* self, void* param1) {
    QQuickItem_DragLeaveEvent((QQuickItem*)self, (QDragLeaveEvent*)param1);
}

void q_quickitem_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnDragLeaveEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_drag_leave_event(void* self, void* param1) {
    QQuickItem_SuperDragLeaveEvent((QQuickItem*)self, (QDragLeaveEvent*)param1);
}

void q_quickitem_drop_event(void* self, void* param1) {
    QQuickItem_DropEvent((QQuickItem*)self, (QDropEvent*)param1);
}

void q_quickitem_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnDropEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_drop_event(void* self, void* param1) {
    QQuickItem_SuperDropEvent((QQuickItem*)self, (QDropEvent*)param1);
}

bool q_quickitem_child_mouse_event_filter(void* self, void* param1, void* param2) {
    return QQuickItem_ChildMouseEventFilter((QQuickItem*)self, (QQuickItem*)param1, (QEvent*)param2);
}

void q_quickitem_on_child_mouse_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickItem_OnChildMouseEventFilter((QQuickItem*)self, (intptr_t)callback);
}

bool q_quickitem_super_child_mouse_event_filter(void* self, void* param1, void* param2) {
    return QQuickItem_SuperChildMouseEventFilter((QQuickItem*)self, (QQuickItem*)param1, (QEvent*)param2);
}

QSGNode* q_quickitem_update_paint_node(void* self, void* param1, void* param2) {
    return QQuickItem_UpdatePaintNode((QQuickItem*)self, (QSGNode*)param1, (QQuickItem__UpdatePaintNodeData*)param2);
}

void q_quickitem_on_update_paint_node(void* self, QSGNode* (*callback)(void*, void*, void*)) {
    QQuickItem_OnUpdatePaintNode((QQuickItem*)self, (intptr_t)callback);
}

QSGNode* q_quickitem_super_update_paint_node(void* self, void* param1, void* param2) {
    return QQuickItem_SuperUpdatePaintNode((QQuickItem*)self, (QSGNode*)param1, (QQuickItem__UpdatePaintNodeData*)param2);
}

void q_quickitem_release_resources(void* self) {
    QQuickItem_ReleaseResources((QQuickItem*)self);
}

void q_quickitem_on_release_resources(void* self, void (*callback)()) {
    QQuickItem_OnReleaseResources((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_release_resources(void* self) {
    QQuickItem_SuperReleaseResources((QQuickItem*)self);
}

void q_quickitem_update_polish(void* self) {
    QQuickItem_UpdatePolish((QQuickItem*)self);
}

void q_quickitem_on_update_polish(void* self, void (*callback)()) {
    QQuickItem_OnUpdatePolish((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_update_polish(void* self) {
    QQuickItem_SuperUpdatePolish((QQuickItem*)self);
}

const char* q_quickitem_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_quickitem_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickitem_set_flag2(void* self, int32_t flag, bool enabled) {
    QQuickItem_SetFlag2((QQuickItem*)self, flag, enabled);
}

bool q_quickitem_grab_to_image22(void* self, void* callback, void* targetSize) {
    return QQuickItem_GrabToImage22((QQuickItem*)self, (QJSValue*)callback, (QSize*)targetSize);
}

QQuickItem* q_quickitem_next_item_in_focus_chain1(void* self, bool forward) {
    return QQuickItem_NextItemInFocusChain1((QQuickItem*)self, forward);
}

void q_quickitem_update_input_method1(void* self, int32_t queries) {
    QQuickItem_UpdateInputMethod1((QQuickItem*)self, queries);
}

void q_quickitem_on_update_input_method1(void* self, void (*callback)(void*, int32_t)) {
    QQuickItem_OnUpdateInputMethod1((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_super_update_input_method1(void* self, int32_t queries) {
    QQuickItem_SuperUpdateInputMethod1((QQuickItem*)self, queries);
}

const char* q_quickitem_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_quickitem_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_quickitem_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_quickitem_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_quickitem_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_quickitem_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_quickitem_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_quickitem_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_quickitem_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_quickitem_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_quickitem_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_quickitem_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_quickitem_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_quickitem_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_quickitem_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_quickitem_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_quickitem_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_quickitem_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_quickitem_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_quickitem_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_quickitem_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_quickitem_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_quickitem_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_quickitem_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_quickitem_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_quickitem_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_quickitem_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_quickitem_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_quickitem_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_quickitem_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_quickitem_dynamic_property_names\n");
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

QBindingStorage* q_quickitem_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_quickitem_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_quickitem_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_quickitem_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_quickitem_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_quickitem_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_quickitem_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_quickitem_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_quickitem_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_quickitem_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_quickitem_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_quickitem_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_quickitem_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_quickitem_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_quickitem_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_quickitem_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_quickitem_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_quickitem_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_quickitem_event_filter(void* self, void* watched, void* event) {
    return QQuickItem_EventFilter((QQuickItem*)self, (QObject*)watched, (QEvent*)event);
}

bool q_quickitem_super_event_filter(void* self, void* watched, void* event) {
    return QQuickItem_SuperEventFilter((QQuickItem*)self, (QObject*)watched, (QEvent*)event);
}

void q_quickitem_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QQuickItem_OnEventFilter((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_timer_event(void* self, void* event) {
    QQuickItem_TimerEvent((QQuickItem*)self, (QTimerEvent*)event);
}

void q_quickitem_super_timer_event(void* self, void* event) {
    QQuickItem_SuperTimerEvent((QQuickItem*)self, (QTimerEvent*)event);
}

void q_quickitem_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnTimerEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_child_event(void* self, void* event) {
    QQuickItem_ChildEvent((QQuickItem*)self, (QChildEvent*)event);
}

void q_quickitem_super_child_event(void* self, void* event) {
    QQuickItem_SuperChildEvent((QQuickItem*)self, (QChildEvent*)event);
}

void q_quickitem_on_child_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnChildEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_custom_event(void* self, void* event) {
    QQuickItem_CustomEvent((QQuickItem*)self, (QEvent*)event);
}

void q_quickitem_super_custom_event(void* self, void* event) {
    QQuickItem_SuperCustomEvent((QQuickItem*)self, (QEvent*)event);
}

void q_quickitem_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnCustomEvent((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_connect_notify(void* self, void* signal) {
    QQuickItem_ConnectNotify((QQuickItem*)self, (QMetaMethod*)signal);
}

void q_quickitem_super_connect_notify(void* self, void* signal) {
    QQuickItem_SuperConnectNotify((QQuickItem*)self, (QMetaMethod*)signal);
}

void q_quickitem_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnConnectNotify((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_disconnect_notify(void* self, void* signal) {
    QQuickItem_DisconnectNotify((QQuickItem*)self, (QMetaMethod*)signal);
}

void q_quickitem_super_disconnect_notify(void* self, void* signal) {
    QQuickItem_SuperDisconnectNotify((QQuickItem*)self, (QMetaMethod*)signal);
}

void q_quickitem_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QQuickItem_OnDisconnectNotify((QQuickItem*)self, (intptr_t)callback);
}

QObject* q_quickitem_sender(void* self) {
    return QQuickItem_Sender((QQuickItem*)self);
}

QObject* q_quickitem_super_sender(void* self) {
    return QQuickItem_SuperSender((QQuickItem*)self);
}

void q_quickitem_on_sender(void* self, QObject* (*callback)()) {
    QQuickItem_OnSender((QQuickItem*)self, (intptr_t)callback);
}

int32_t q_quickitem_sender_signal_index(void* self) {
    return QQuickItem_SenderSignalIndex((QQuickItem*)self);
}

int32_t q_quickitem_super_sender_signal_index(void* self) {
    return QQuickItem_SuperSenderSignalIndex((QQuickItem*)self);
}

void q_quickitem_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QQuickItem_OnSenderSignalIndex((QQuickItem*)self, (intptr_t)callback);
}

int32_t q_quickitem_receivers(void* self, const char* signal) {
    return QQuickItem_Receivers((QQuickItem*)self, signal);
}

int32_t q_quickitem_super_receivers(void* self, const char* signal) {
    return QQuickItem_SuperReceivers((QQuickItem*)self, signal);
}

void q_quickitem_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QQuickItem_OnReceivers((QQuickItem*)self, (intptr_t)callback);
}

bool q_quickitem_is_signal_connected(void* self, void* signal) {
    return QQuickItem_IsSignalConnected((QQuickItem*)self, (QMetaMethod*)signal);
}

bool q_quickitem_super_is_signal_connected(void* self, void* signal) {
    return QQuickItem_SuperIsSignalConnected((QQuickItem*)self, (QMetaMethod*)signal);
}

void q_quickitem_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QQuickItem_OnIsSignalConnected((QQuickItem*)self, (intptr_t)callback);
}

void q_quickitem_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_quickitem_delete(void* self) {
    QQuickItem_Delete((QQuickItem*)(self));
}

QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new(void* other) {
    return QQuickItem__ItemChangeData_New((QQuickItem__ItemChangeData*)other);
}

QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new2(void* other) {
    return QQuickItem__ItemChangeData_New2((QQuickItem__ItemChangeData*)other);
}

QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new3(void* v) {
    return QQuickItem__ItemChangeData_New3((QQuickItem*)v);
}

QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new4(void* v) {
    return QQuickItem__ItemChangeData_New4((QQuickWindow*)v);
}

QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new5(double v) {
    return QQuickItem__ItemChangeData_New5(v);
}

QQuickItem__ItemChangeData* q_quickitem__itemchangedata_new6(bool v) {
    return QQuickItem__ItemChangeData_New6(v);
}

void q_quickitem__itemchangedata_copy_assign(void* self, void* other) {
    QQuickItem__ItemChangeData_CopyAssign((QQuickItem__ItemChangeData*)self, (QQuickItem__ItemChangeData*)other);
}

void q_quickitem__itemchangedata_move_assign(void* self, void* other) {
    QQuickItem__ItemChangeData_MoveAssign((QQuickItem__ItemChangeData*)self, (QQuickItem__ItemChangeData*)other);
}

QQuickItem* q_quickitem__itemchangedata_item(void* self) {
    return QQuickItem__ItemChangeData_Item((QQuickItem__ItemChangeData*)self);
}

void q_quickitem__itemchangedata_set_item(void* self, void* item) {
    QQuickItem__ItemChangeData_SetItem((QQuickItem__ItemChangeData*)self, (QQuickItem*)item);
}

QQuickWindow* q_quickitem__itemchangedata_window(void* self) {
    return QQuickItem__ItemChangeData_Window((QQuickItem__ItemChangeData*)self);
}

void q_quickitem__itemchangedata_set_window(void* self, void* window) {
    QQuickItem__ItemChangeData_SetWindow((QQuickItem__ItemChangeData*)self, (QQuickWindow*)window);
}

double q_quickitem__itemchangedata_real_value(void* self) {
    return QQuickItem__ItemChangeData_RealValue((QQuickItem__ItemChangeData*)self);
}

void q_quickitem__itemchangedata_set_real_value(void* self, double realValue) {
    QQuickItem__ItemChangeData_SetRealValue((QQuickItem__ItemChangeData*)self, realValue);
}

bool q_quickitem__itemchangedata_bool_value(void* self) {
    return QQuickItem__ItemChangeData_BoolValue((QQuickItem__ItemChangeData*)self);
}

void q_quickitem__itemchangedata_set_bool_value(void* self, bool boolValue) {
    QQuickItem__ItemChangeData_SetBoolValue((QQuickItem__ItemChangeData*)self, boolValue);
}

void q_quickitem__itemchangedata_delete(void* self) {
    QQuickItem__ItemChangeData_Delete((QQuickItem__ItemChangeData*)(self));
}

QQuickItem__UpdatePaintNodeData* q_quickitem__updatepaintnodedata_new(void* other) {
    return QQuickItem__UpdatePaintNodeData_New((QQuickItem__UpdatePaintNodeData*)other);
}

QQuickItem__UpdatePaintNodeData* q_quickitem__updatepaintnodedata_new2(void* other) {
    return QQuickItem__UpdatePaintNodeData_New2((QQuickItem__UpdatePaintNodeData*)other);
}

void q_quickitem__updatepaintnodedata_copy_assign(void* self, void* other) {
    QQuickItem__UpdatePaintNodeData_CopyAssign((QQuickItem__UpdatePaintNodeData*)self, (QQuickItem__UpdatePaintNodeData*)other);
}

void q_quickitem__updatepaintnodedata_move_assign(void* self, void* other) {
    QQuickItem__UpdatePaintNodeData_MoveAssign((QQuickItem__UpdatePaintNodeData*)self, (QQuickItem__UpdatePaintNodeData*)other);
}

QSGTransformNode* q_quickitem__updatepaintnodedata_transform_node(void* self) {
    return QQuickItem__UpdatePaintNodeData_TransformNode((QQuickItem__UpdatePaintNodeData*)self);
}

void q_quickitem__updatepaintnodedata_set_transform_node(void* self, void* transformNode) {
    QQuickItem__UpdatePaintNodeData_SetTransformNode((QQuickItem__UpdatePaintNodeData*)self, (QSGTransformNode*)transformNode);
}

void q_quickitem__updatepaintnodedata_delete(void* self) {
    QQuickItem__UpdatePaintNodeData_Delete((QQuickItem__UpdatePaintNodeData*)(self));
}
