#include "libqabstractseries.hpp"
#include "libqboxset.hpp"
#include "../libqbrush.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include "libqboxplotseries.hpp"
#include "libqboxplotseries.h"

QBoxPlotSeries* q_boxplotseries_new() {
    return QBoxPlotSeries_new();
}

QBoxPlotSeries* q_boxplotseries_new2(void* parent) {
    return QBoxPlotSeries_new2((QObject*)parent);
}

const QMetaObject* q_boxplotseries_meta_object(void* self) {
    return QBoxPlotSeries_MetaObject((QBoxPlotSeries*)self);
}

void q_boxplotseries_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QBoxPlotSeries_OnMetaObject((QBoxPlotSeries*)self, (intptr_t)callback);
}

const QMetaObject* q_boxplotseries_qbase_meta_object(void* self) {
    return QBoxPlotSeries_QBaseMetaObject((QBoxPlotSeries*)self);
}

void* q_boxplotseries_metacast(void* self, const char* param1) {
    return QBoxPlotSeries_Metacast((QBoxPlotSeries*)self, param1);
}

void q_boxplotseries_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QBoxPlotSeries_OnMetacast((QBoxPlotSeries*)self, (intptr_t)callback);
}

void* q_boxplotseries_qbase_metacast(void* self, const char* param1) {
    return QBoxPlotSeries_QBaseMetacast((QBoxPlotSeries*)self, param1);
}

int32_t q_boxplotseries_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBoxPlotSeries_Metacall((QBoxPlotSeries*)self, param1, param2, param3);
}

void q_boxplotseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QBoxPlotSeries_OnMetacall((QBoxPlotSeries*)self, (intptr_t)callback);
}

int32_t q_boxplotseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QBoxPlotSeries_QBaseMetacall((QBoxPlotSeries*)self, param1, param2, param3);
}

const char* q_boxplotseries_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_boxplotseries_append(void* self, void* box) {
    return QBoxPlotSeries_Append((QBoxPlotSeries*)self, (QBoxSet*)box);
}

bool q_boxplotseries_remove(void* self, void* box) {
    return QBoxPlotSeries_Remove((QBoxPlotSeries*)self, (QBoxSet*)box);
}

bool q_boxplotseries_take(void* self, void* box) {
    return QBoxPlotSeries_Take((QBoxPlotSeries*)self, (QBoxSet*)box);
}

bool q_boxplotseries_append2(void* self, libqt_list /* of QBoxSet* */ boxes) {
    return QBoxPlotSeries_Append2((QBoxPlotSeries*)self, boxes);
}

bool q_boxplotseries_insert(void* self, int index, void* box) {
    return QBoxPlotSeries_Insert((QBoxPlotSeries*)self, index, (QBoxSet*)box);
}

int32_t q_boxplotseries_count(void* self) {
    return QBoxPlotSeries_Count((QBoxPlotSeries*)self);
}

libqt_list /* of QBoxSet* */ q_boxplotseries_box_sets(void* self) {
    libqt_list _arr = QBoxPlotSeries_BoxSets((QBoxPlotSeries*)self);
    return _arr;
}

void q_boxplotseries_clear(void* self) {
    QBoxPlotSeries_Clear((QBoxPlotSeries*)self);
}

int32_t q_boxplotseries_type(void* self) {
    return QBoxPlotSeries_Type((QBoxPlotSeries*)self);
}

void q_boxplotseries_on_type(void* self, int32_t (*callback)()) {
    QBoxPlotSeries_OnType((QBoxPlotSeries*)self, (intptr_t)callback);
}

int32_t q_boxplotseries_qbase_type(void* self) {
    return QBoxPlotSeries_QBaseType((QBoxPlotSeries*)self);
}

void q_boxplotseries_set_box_outline_visible(void* self, bool visible) {
    QBoxPlotSeries_SetBoxOutlineVisible((QBoxPlotSeries*)self, visible);
}

bool q_boxplotseries_box_outline_visible(void* self) {
    return QBoxPlotSeries_BoxOutlineVisible((QBoxPlotSeries*)self);
}

void q_boxplotseries_set_box_width(void* self, double width) {
    QBoxPlotSeries_SetBoxWidth((QBoxPlotSeries*)self, width);
}

double q_boxplotseries_box_width(void* self) {
    return QBoxPlotSeries_BoxWidth((QBoxPlotSeries*)self);
}

void q_boxplotseries_set_brush(void* self, void* brush) {
    QBoxPlotSeries_SetBrush((QBoxPlotSeries*)self, (QBrush*)brush);
}

QBrush* q_boxplotseries_brush(void* self) {
    return QBoxPlotSeries_Brush((QBoxPlotSeries*)self);
}

void q_boxplotseries_set_pen(void* self, void* pen) {
    QBoxPlotSeries_SetPen((QBoxPlotSeries*)self, (QPen*)pen);
}

QPen* q_boxplotseries_pen(void* self) {
    return QBoxPlotSeries_Pen((QBoxPlotSeries*)self);
}

void q_boxplotseries_clicked(void* self, void* boxset) {
    QBoxPlotSeries_Clicked((QBoxPlotSeries*)self, (QBoxSet*)boxset);
}

void q_boxplotseries_on_clicked(void* self, void (*callback)(void*, void*)) {
    QBoxPlotSeries_Connect_Clicked((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_hovered(void* self, bool status, void* boxset) {
    QBoxPlotSeries_Hovered((QBoxPlotSeries*)self, status, (QBoxSet*)boxset);
}

void q_boxplotseries_on_hovered(void* self, void (*callback)(void*, bool, void*)) {
    QBoxPlotSeries_Connect_Hovered((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_pressed(void* self, void* boxset) {
    QBoxPlotSeries_Pressed((QBoxPlotSeries*)self, (QBoxSet*)boxset);
}

void q_boxplotseries_on_pressed(void* self, void (*callback)(void*, void*)) {
    QBoxPlotSeries_Connect_Pressed((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_released(void* self, void* boxset) {
    QBoxPlotSeries_Released((QBoxPlotSeries*)self, (QBoxSet*)boxset);
}

void q_boxplotseries_on_released(void* self, void (*callback)(void*, void*)) {
    QBoxPlotSeries_Connect_Released((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_double_clicked(void* self, void* boxset) {
    QBoxPlotSeries_DoubleClicked((QBoxPlotSeries*)self, (QBoxSet*)boxset);
}

void q_boxplotseries_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QBoxPlotSeries_Connect_DoubleClicked((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_count_changed(void* self) {
    QBoxPlotSeries_CountChanged((QBoxPlotSeries*)self);
}

void q_boxplotseries_on_count_changed(void* self, void (*callback)(void*)) {
    QBoxPlotSeries_Connect_CountChanged((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_pen_changed(void* self) {
    QBoxPlotSeries_PenChanged((QBoxPlotSeries*)self);
}

void q_boxplotseries_on_pen_changed(void* self, void (*callback)(void*)) {
    QBoxPlotSeries_Connect_PenChanged((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_brush_changed(void* self) {
    QBoxPlotSeries_BrushChanged((QBoxPlotSeries*)self);
}

void q_boxplotseries_on_brush_changed(void* self, void (*callback)(void*)) {
    QBoxPlotSeries_Connect_BrushChanged((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_box_outline_visibility_changed(void* self) {
    QBoxPlotSeries_BoxOutlineVisibilityChanged((QBoxPlotSeries*)self);
}

void q_boxplotseries_on_box_outline_visibility_changed(void* self, void (*callback)(void*)) {
    QBoxPlotSeries_Connect_BoxOutlineVisibilityChanged((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_box_width_changed(void* self) {
    QBoxPlotSeries_BoxWidthChanged((QBoxPlotSeries*)self);
}

void q_boxplotseries_on_box_width_changed(void* self, void (*callback)(void*)) {
    QBoxPlotSeries_Connect_BoxWidthChanged((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_boxsets_added(void* self, libqt_list /* of QBoxSet* */ sets) {
    QBoxPlotSeries_BoxsetsAdded((QBoxPlotSeries*)self, sets);
}

void q_boxplotseries_on_boxsets_added(void* self, void (*callback)(void*, libqt_list /* of QBoxSet* */)) {
    QBoxPlotSeries_Connect_BoxsetsAdded((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_boxsets_removed(void* self, libqt_list /* of QBoxSet* */ sets) {
    QBoxPlotSeries_BoxsetsRemoved((QBoxPlotSeries*)self, sets);
}

void q_boxplotseries_on_boxsets_removed(void* self, void (*callback)(void*, libqt_list /* of QBoxSet* */)) {
    QBoxPlotSeries_Connect_BoxsetsRemoved((QBoxPlotSeries*)self, (intptr_t)callback);
}

const char* q_boxplotseries_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_boxplotseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_boxplotseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_boxplotseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_boxplotseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_boxplotseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_boxplotseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_boxplotseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_boxplotseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_boxplotseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_boxplotseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_boxplotseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_boxplotseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_boxplotseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_boxplotseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_boxplotseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_boxplotseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_boxplotseries_on_name_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_boxplotseries_on_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_boxplotseries_on_opacity_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_boxplotseries_on_use_open_g_l_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_boxplotseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_boxplotseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_boxplotseries_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_boxplotseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_boxplotseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_boxplotseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_boxplotseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_boxplotseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_boxplotseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_boxplotseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_boxplotseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_boxplotseries_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_boxplotseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_boxplotseries_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_boxplotseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_boxplotseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_boxplotseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_boxplotseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_boxplotseries_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_boxplotseries_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_boxplotseries_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_boxplotseries_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_boxplotseries_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_boxplotseries_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_boxplotseries_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_boxplotseries_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_boxplotseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_boxplotseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_boxplotseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_boxplotseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_boxplotseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_boxplotseries_dynamic_property_names\n");
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

QBindingStorage* q_boxplotseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_boxplotseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_boxplotseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_boxplotseries_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_boxplotseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_boxplotseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_boxplotseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_boxplotseries_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_boxplotseries_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_boxplotseries_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_boxplotseries_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_boxplotseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_boxplotseries_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_boxplotseries_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_boxplotseries_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_boxplotseries_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_boxplotseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_boxplotseries_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_boxplotseries_event(void* self, void* event) {
    return QBoxPlotSeries_Event((QBoxPlotSeries*)self, (QEvent*)event);
}

bool q_boxplotseries_qbase_event(void* self, void* event) {
    return QBoxPlotSeries_QBaseEvent((QBoxPlotSeries*)self, (QEvent*)event);
}

void q_boxplotseries_on_event(void* self, bool (*callback)(void*, void*)) {
    QBoxPlotSeries_OnEvent((QBoxPlotSeries*)self, (intptr_t)callback);
}

bool q_boxplotseries_event_filter(void* self, void* watched, void* event) {
    return QBoxPlotSeries_EventFilter((QBoxPlotSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_boxplotseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QBoxPlotSeries_QBaseEventFilter((QBoxPlotSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_boxplotseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QBoxPlotSeries_OnEventFilter((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_timer_event(void* self, void* event) {
    QBoxPlotSeries_TimerEvent((QBoxPlotSeries*)self, (QTimerEvent*)event);
}

void q_boxplotseries_qbase_timer_event(void* self, void* event) {
    QBoxPlotSeries_QBaseTimerEvent((QBoxPlotSeries*)self, (QTimerEvent*)event);
}

void q_boxplotseries_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QBoxPlotSeries_OnTimerEvent((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_child_event(void* self, void* event) {
    QBoxPlotSeries_ChildEvent((QBoxPlotSeries*)self, (QChildEvent*)event);
}

void q_boxplotseries_qbase_child_event(void* self, void* event) {
    QBoxPlotSeries_QBaseChildEvent((QBoxPlotSeries*)self, (QChildEvent*)event);
}

void q_boxplotseries_on_child_event(void* self, void (*callback)(void*, void*)) {
    QBoxPlotSeries_OnChildEvent((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_custom_event(void* self, void* event) {
    QBoxPlotSeries_CustomEvent((QBoxPlotSeries*)self, (QEvent*)event);
}

void q_boxplotseries_qbase_custom_event(void* self, void* event) {
    QBoxPlotSeries_QBaseCustomEvent((QBoxPlotSeries*)self, (QEvent*)event);
}

void q_boxplotseries_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QBoxPlotSeries_OnCustomEvent((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_connect_notify(void* self, void* signal) {
    QBoxPlotSeries_ConnectNotify((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

void q_boxplotseries_qbase_connect_notify(void* self, void* signal) {
    QBoxPlotSeries_QBaseConnectNotify((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

void q_boxplotseries_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QBoxPlotSeries_OnConnectNotify((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_disconnect_notify(void* self, void* signal) {
    QBoxPlotSeries_DisconnectNotify((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

void q_boxplotseries_qbase_disconnect_notify(void* self, void* signal) {
    QBoxPlotSeries_QBaseDisconnectNotify((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

void q_boxplotseries_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QBoxPlotSeries_OnDisconnectNotify((QBoxPlotSeries*)self, (intptr_t)callback);
}

QObject* q_boxplotseries_sender(void* self) {
    return QBoxPlotSeries_Sender((QBoxPlotSeries*)self);
}

QObject* q_boxplotseries_qbase_sender(void* self) {
    return QBoxPlotSeries_QBaseSender((QBoxPlotSeries*)self);
}

void q_boxplotseries_on_sender(void* self, QObject* (*callback)()) {
    QBoxPlotSeries_OnSender((QBoxPlotSeries*)self, (intptr_t)callback);
}

int32_t q_boxplotseries_sender_signal_index(void* self) {
    return QBoxPlotSeries_SenderSignalIndex((QBoxPlotSeries*)self);
}

int32_t q_boxplotseries_qbase_sender_signal_index(void* self) {
    return QBoxPlotSeries_QBaseSenderSignalIndex((QBoxPlotSeries*)self);
}

void q_boxplotseries_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QBoxPlotSeries_OnSenderSignalIndex((QBoxPlotSeries*)self, (intptr_t)callback);
}

int32_t q_boxplotseries_receivers(void* self, const char* signal) {
    return QBoxPlotSeries_Receivers((QBoxPlotSeries*)self, signal);
}

int32_t q_boxplotseries_qbase_receivers(void* self, const char* signal) {
    return QBoxPlotSeries_QBaseReceivers((QBoxPlotSeries*)self, signal);
}

void q_boxplotseries_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QBoxPlotSeries_OnReceivers((QBoxPlotSeries*)self, (intptr_t)callback);
}

bool q_boxplotseries_is_signal_connected(void* self, void* signal) {
    return QBoxPlotSeries_IsSignalConnected((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

bool q_boxplotseries_qbase_is_signal_connected(void* self, void* signal) {
    return QBoxPlotSeries_QBaseIsSignalConnected((QBoxPlotSeries*)self, (QMetaMethod*)signal);
}

void q_boxplotseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QBoxPlotSeries_OnIsSignalConnected((QBoxPlotSeries*)self, (intptr_t)callback);
}

void q_boxplotseries_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_boxplotseries_delete(void* self) {
    QBoxPlotSeries_Delete((QBoxPlotSeries*)(self));
}
