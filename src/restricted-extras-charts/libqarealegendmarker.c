#include "libqareaseries.hpp"
#include "../libqcoreevent.hpp"
#include "libqlegend.hpp"
#include "libqlegendmarker.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqarealegendmarker.hpp"
#include "libqarealegendmarker.h"

QAreaLegendMarker* q_arealegendmarker_new(void* series, void* legend) {
    return QAreaLegendMarker_new((QAreaSeries*)series, (QLegend*)legend);
}

QAreaLegendMarker* q_arealegendmarker_new2(void* series, void* legend, void* parent) {
    return QAreaLegendMarker_new2((QAreaSeries*)series, (QLegend*)legend, (QObject*)parent);
}

const QMetaObject* q_arealegendmarker_meta_object(void* self) {
    return QAreaLegendMarker_MetaObject((QAreaLegendMarker*)self);
}

void* q_arealegendmarker_metacast(void* self, const char* param1) {
    return QAreaLegendMarker_Metacast((QAreaLegendMarker*)self, param1);
}

int32_t q_arealegendmarker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAreaLegendMarker_Metacall((QAreaLegendMarker*)self, param1, param2, param3);
}

void q_arealegendmarker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QAreaLegendMarker_OnMetacall((QAreaLegendMarker*)self, (intptr_t)callback);
}

int32_t q_arealegendmarker_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QAreaLegendMarker_QBaseMetacall((QAreaLegendMarker*)self, param1, param2, param3);
}

const char* q_arealegendmarker_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_arealegendmarker_type(void* self) {
    return QAreaLegendMarker_Type((QAreaLegendMarker*)self);
}

void q_arealegendmarker_on_type(void* self, int32_t (*callback)()) {
    QAreaLegendMarker_OnType((QAreaLegendMarker*)self, (intptr_t)callback);
}

int32_t q_arealegendmarker_qbase_type(void* self) {
    return QAreaLegendMarker_QBaseType((QAreaLegendMarker*)self);
}

QAreaSeries* q_arealegendmarker_series(void* self) {
    return QAreaLegendMarker_Series((QAreaLegendMarker*)self);
}

void q_arealegendmarker_on_series(void* self, QAreaSeries* (*callback)()) {
    QAreaLegendMarker_OnSeries((QAreaLegendMarker*)self, (intptr_t)callback);
}

QAreaSeries* q_arealegendmarker_qbase_series(void* self) {
    return QAreaLegendMarker_QBaseSeries((QAreaLegendMarker*)self);
}

const char* q_arealegendmarker_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_arealegendmarker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_arealegendmarker_label(void* self) {
    libqt_string _str = QLegendMarker_Label((QLegendMarker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_arealegendmarker_set_label(void* self, const char* label) {
    QLegendMarker_SetLabel((QLegendMarker*)self, qstring(label));
}

QBrush* q_arealegendmarker_label_brush(void* self) {
    return QLegendMarker_LabelBrush((QLegendMarker*)self);
}

void q_arealegendmarker_set_label_brush(void* self, void* brush) {
    QLegendMarker_SetLabelBrush((QLegendMarker*)self, (QBrush*)brush);
}

QFont* q_arealegendmarker_font(void* self) {
    return QLegendMarker_Font((QLegendMarker*)self);
}

void q_arealegendmarker_set_font(void* self, void* font) {
    QLegendMarker_SetFont((QLegendMarker*)self, (QFont*)font);
}

QPen* q_arealegendmarker_pen(void* self) {
    return QLegendMarker_Pen((QLegendMarker*)self);
}

void q_arealegendmarker_set_pen(void* self, void* pen) {
    QLegendMarker_SetPen((QLegendMarker*)self, (QPen*)pen);
}

QBrush* q_arealegendmarker_brush(void* self) {
    return QLegendMarker_Brush((QLegendMarker*)self);
}

void q_arealegendmarker_set_brush(void* self, void* brush) {
    QLegendMarker_SetBrush((QLegendMarker*)self, (QBrush*)brush);
}

bool q_arealegendmarker_is_visible(void* self) {
    return QLegendMarker_IsVisible((QLegendMarker*)self);
}

void q_arealegendmarker_set_visible(void* self, bool visible) {
    QLegendMarker_SetVisible((QLegendMarker*)self, visible);
}

int32_t q_arealegendmarker_shape(void* self) {
    return QLegendMarker_Shape((QLegendMarker*)self);
}

void q_arealegendmarker_set_shape(void* self, int32_t shape) {
    QLegendMarker_SetShape((QLegendMarker*)self, shape);
}

void q_arealegendmarker_clicked(void* self) {
    QLegendMarker_Clicked((QLegendMarker*)self);
}

void q_arealegendmarker_on_clicked(void* self, void (*callback)(void*)) {
    QLegendMarker_Connect_Clicked((QLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_hovered(void* self, bool status) {
    QLegendMarker_Hovered((QLegendMarker*)self, status);
}

void q_arealegendmarker_on_hovered(void* self, void (*callback)(void*, bool)) {
    QLegendMarker_Connect_Hovered((QLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_label_changed(void* self) {
    QLegendMarker_LabelChanged((QLegendMarker*)self);
}

void q_arealegendmarker_on_label_changed(void* self, void (*callback)(void*)) {
    QLegendMarker_Connect_LabelChanged((QLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_label_brush_changed(void* self) {
    QLegendMarker_LabelBrushChanged((QLegendMarker*)self);
}

void q_arealegendmarker_on_label_brush_changed(void* self, void (*callback)(void*)) {
    QLegendMarker_Connect_LabelBrushChanged((QLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_font_changed(void* self) {
    QLegendMarker_FontChanged((QLegendMarker*)self);
}

void q_arealegendmarker_on_font_changed(void* self, void (*callback)(void*)) {
    QLegendMarker_Connect_FontChanged((QLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_pen_changed(void* self) {
    QLegendMarker_PenChanged((QLegendMarker*)self);
}

void q_arealegendmarker_on_pen_changed(void* self, void (*callback)(void*)) {
    QLegendMarker_Connect_PenChanged((QLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_brush_changed(void* self) {
    QLegendMarker_BrushChanged((QLegendMarker*)self);
}

void q_arealegendmarker_on_brush_changed(void* self, void (*callback)(void*)) {
    QLegendMarker_Connect_BrushChanged((QLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_visible_changed(void* self) {
    QLegendMarker_VisibleChanged((QLegendMarker*)self);
}

void q_arealegendmarker_on_visible_changed(void* self, void (*callback)(void*)) {
    QLegendMarker_Connect_VisibleChanged((QLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_shape_changed(void* self) {
    QLegendMarker_ShapeChanged((QLegendMarker*)self);
}

void q_arealegendmarker_on_shape_changed(void* self, void (*callback)(void*)) {
    QLegendMarker_Connect_ShapeChanged((QLegendMarker*)self, (intptr_t)callback);
}

const char* q_arealegendmarker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_arealegendmarker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_arealegendmarker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_arealegendmarker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_arealegendmarker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_arealegendmarker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_arealegendmarker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_arealegendmarker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_arealegendmarker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_arealegendmarker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_arealegendmarker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_arealegendmarker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_arealegendmarker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_arealegendmarker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_arealegendmarker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_arealegendmarker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_arealegendmarker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_arealegendmarker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_arealegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_arealegendmarker_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_arealegendmarker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_arealegendmarker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_arealegendmarker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_arealegendmarker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_arealegendmarker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_arealegendmarker_dynamic_property_names\n");
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

QBindingStorage* q_arealegendmarker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_arealegendmarker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_arealegendmarker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_arealegendmarker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_arealegendmarker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_arealegendmarker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_arealegendmarker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_arealegendmarker_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_arealegendmarker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_arealegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_arealegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_arealegendmarker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_arealegendmarker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_arealegendmarker_event(void* self, void* event) {
    return QAreaLegendMarker_Event((QAreaLegendMarker*)self, (QEvent*)event);
}

bool q_arealegendmarker_qbase_event(void* self, void* event) {
    return QAreaLegendMarker_QBaseEvent((QAreaLegendMarker*)self, (QEvent*)event);
}

void q_arealegendmarker_on_event(void* self, bool (*callback)(void*, void*)) {
    QAreaLegendMarker_OnEvent((QAreaLegendMarker*)self, (intptr_t)callback);
}

bool q_arealegendmarker_event_filter(void* self, void* watched, void* event) {
    return QAreaLegendMarker_EventFilter((QAreaLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

bool q_arealegendmarker_qbase_event_filter(void* self, void* watched, void* event) {
    return QAreaLegendMarker_QBaseEventFilter((QAreaLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

void q_arealegendmarker_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QAreaLegendMarker_OnEventFilter((QAreaLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_timer_event(void* self, void* event) {
    QAreaLegendMarker_TimerEvent((QAreaLegendMarker*)self, (QTimerEvent*)event);
}

void q_arealegendmarker_qbase_timer_event(void* self, void* event) {
    QAreaLegendMarker_QBaseTimerEvent((QAreaLegendMarker*)self, (QTimerEvent*)event);
}

void q_arealegendmarker_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QAreaLegendMarker_OnTimerEvent((QAreaLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_child_event(void* self, void* event) {
    QAreaLegendMarker_ChildEvent((QAreaLegendMarker*)self, (QChildEvent*)event);
}

void q_arealegendmarker_qbase_child_event(void* self, void* event) {
    QAreaLegendMarker_QBaseChildEvent((QAreaLegendMarker*)self, (QChildEvent*)event);
}

void q_arealegendmarker_on_child_event(void* self, void (*callback)(void*, void*)) {
    QAreaLegendMarker_OnChildEvent((QAreaLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_custom_event(void* self, void* event) {
    QAreaLegendMarker_CustomEvent((QAreaLegendMarker*)self, (QEvent*)event);
}

void q_arealegendmarker_qbase_custom_event(void* self, void* event) {
    QAreaLegendMarker_QBaseCustomEvent((QAreaLegendMarker*)self, (QEvent*)event);
}

void q_arealegendmarker_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QAreaLegendMarker_OnCustomEvent((QAreaLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_connect_notify(void* self, void* signal) {
    QAreaLegendMarker_ConnectNotify((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

void q_arealegendmarker_qbase_connect_notify(void* self, void* signal) {
    QAreaLegendMarker_QBaseConnectNotify((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

void q_arealegendmarker_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QAreaLegendMarker_OnConnectNotify((QAreaLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_disconnect_notify(void* self, void* signal) {
    QAreaLegendMarker_DisconnectNotify((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

void q_arealegendmarker_qbase_disconnect_notify(void* self, void* signal) {
    QAreaLegendMarker_QBaseDisconnectNotify((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

void q_arealegendmarker_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QAreaLegendMarker_OnDisconnectNotify((QAreaLegendMarker*)self, (intptr_t)callback);
}

QObject* q_arealegendmarker_sender(void* self) {
    return QAreaLegendMarker_Sender((QAreaLegendMarker*)self);
}

QObject* q_arealegendmarker_qbase_sender(void* self) {
    return QAreaLegendMarker_QBaseSender((QAreaLegendMarker*)self);
}

void q_arealegendmarker_on_sender(void* self, QObject* (*callback)()) {
    QAreaLegendMarker_OnSender((QAreaLegendMarker*)self, (intptr_t)callback);
}

int32_t q_arealegendmarker_sender_signal_index(void* self) {
    return QAreaLegendMarker_SenderSignalIndex((QAreaLegendMarker*)self);
}

int32_t q_arealegendmarker_qbase_sender_signal_index(void* self) {
    return QAreaLegendMarker_QBaseSenderSignalIndex((QAreaLegendMarker*)self);
}

void q_arealegendmarker_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QAreaLegendMarker_OnSenderSignalIndex((QAreaLegendMarker*)self, (intptr_t)callback);
}

int32_t q_arealegendmarker_receivers(void* self, const char* signal) {
    return QAreaLegendMarker_Receivers((QAreaLegendMarker*)self, signal);
}

int32_t q_arealegendmarker_qbase_receivers(void* self, const char* signal) {
    return QAreaLegendMarker_QBaseReceivers((QAreaLegendMarker*)self, signal);
}

void q_arealegendmarker_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QAreaLegendMarker_OnReceivers((QAreaLegendMarker*)self, (intptr_t)callback);
}

bool q_arealegendmarker_is_signal_connected(void* self, void* signal) {
    return QAreaLegendMarker_IsSignalConnected((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

bool q_arealegendmarker_qbase_is_signal_connected(void* self, void* signal) {
    return QAreaLegendMarker_QBaseIsSignalConnected((QAreaLegendMarker*)self, (QMetaMethod*)signal);
}

void q_arealegendmarker_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QAreaLegendMarker_OnIsSignalConnected((QAreaLegendMarker*)self, (intptr_t)callback);
}

void q_arealegendmarker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_arealegendmarker_delete(void* self) {
    QAreaLegendMarker_Delete((QAreaLegendMarker*)(self));
}
