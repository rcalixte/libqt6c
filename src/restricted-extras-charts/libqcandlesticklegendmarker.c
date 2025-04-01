#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "libqcandlestickseries.hpp"
#include "../libqevent.hpp"
#include "../libqfont.hpp"
#include "libqlegend.hpp"
#include "libqlegendmarker.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqcandlesticklegendmarker.hpp"
#include "libqcandlesticklegendmarker.h"

QCandlestickLegendMarker* q_candlesticklegendmarker_new(void* series, void* legend) {
    return QCandlestickLegendMarker_new((QCandlestickSeries*)series, (QLegend*)legend);
}

QCandlestickLegendMarker* q_candlesticklegendmarker_new2(void* series, void* legend, void* parent) {
    return QCandlestickLegendMarker_new2((QCandlestickSeries*)series, (QLegend*)legend, (QObject*)parent);
}

QMetaObject* q_candlesticklegendmarker_meta_object(void* self) {
    return QCandlestickLegendMarker_MetaObject((QCandlestickLegendMarker*)self);
}

void* q_candlesticklegendmarker_metacast(void* self, const char* param1) {
    return QCandlestickLegendMarker_Metacast((QCandlestickLegendMarker*)self, param1);
}

int32_t q_candlesticklegendmarker_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickLegendMarker_Metacall((QCandlestickLegendMarker*)self, param1, param2, param3);
}

void q_candlesticklegendmarker_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCandlestickLegendMarker_OnMetacall((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

int32_t q_candlesticklegendmarker_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickLegendMarker_QBaseMetacall((QCandlestickLegendMarker*)self, param1, param2, param3);
}

const char* q_candlesticklegendmarker_tr(const char* s) {
    libqt_string _str = QCandlestickLegendMarker_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_candlesticklegendmarker_type(void* self) {
    return QCandlestickLegendMarker_Type((QCandlestickLegendMarker*)self);
}

void q_candlesticklegendmarker_on_type(void* self, int64_t (*slot)()) {
    QCandlestickLegendMarker_OnType((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

int64_t q_candlesticklegendmarker_qbase_type(void* self) {
    return QCandlestickLegendMarker_QBaseType((QCandlestickLegendMarker*)self);
}

QCandlestickSeries* q_candlesticklegendmarker_series(void* self) {
    return QCandlestickLegendMarker_Series((QCandlestickLegendMarker*)self);
}

void q_candlesticklegendmarker_on_series(void* self, QCandlestickSeries* (*slot)()) {
    QCandlestickLegendMarker_OnSeries((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

QCandlestickSeries* q_candlesticklegendmarker_qbase_series(void* self) {
    return QCandlestickLegendMarker_QBaseSeries((QCandlestickLegendMarker*)self);
}

const char* q_candlesticklegendmarker_tr2(const char* s, const char* c) {
    libqt_string _str = QCandlestickLegendMarker_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_candlesticklegendmarker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCandlestickLegendMarker_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_candlesticklegendmarker_label(void* self) {
    libqt_string _str = QLegendMarker_Label((QLegendMarker*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_candlesticklegendmarker_set_label(void* self, const char* label) {
    QLegendMarker_SetLabel((QLegendMarker*)self, qstring(label));
}

QBrush* q_candlesticklegendmarker_label_brush(void* self) {
    return QLegendMarker_LabelBrush((QLegendMarker*)self);
}

void q_candlesticklegendmarker_set_label_brush(void* self, void* brush) {
    QLegendMarker_SetLabelBrush((QLegendMarker*)self, (QBrush*)brush);
}

QFont* q_candlesticklegendmarker_font(void* self) {
    return QLegendMarker_Font((QLegendMarker*)self);
}

void q_candlesticklegendmarker_set_font(void* self, void* font) {
    QLegendMarker_SetFont((QLegendMarker*)self, (QFont*)font);
}

QPen* q_candlesticklegendmarker_pen(void* self) {
    return QLegendMarker_Pen((QLegendMarker*)self);
}

void q_candlesticklegendmarker_set_pen(void* self, void* pen) {
    QLegendMarker_SetPen((QLegendMarker*)self, (QPen*)pen);
}

QBrush* q_candlesticklegendmarker_brush(void* self) {
    return QLegendMarker_Brush((QLegendMarker*)self);
}

void q_candlesticklegendmarker_set_brush(void* self, void* brush) {
    QLegendMarker_SetBrush((QLegendMarker*)self, (QBrush*)brush);
}

bool q_candlesticklegendmarker_is_visible(void* self) {
    return QLegendMarker_IsVisible((QLegendMarker*)self);
}

void q_candlesticklegendmarker_set_visible(void* self, bool visible) {
    QLegendMarker_SetVisible((QLegendMarker*)self, visible);
}

int64_t q_candlesticklegendmarker_shape(void* self) {
    return QLegendMarker_Shape((QLegendMarker*)self);
}

void q_candlesticklegendmarker_set_shape(void* self, int64_t shape) {
    QLegendMarker_SetShape((QLegendMarker*)self, shape);
}

void q_candlesticklegendmarker_clicked(void* self) {
    QLegendMarker_Clicked((QLegendMarker*)self);
}

void q_candlesticklegendmarker_on_clicked(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_Clicked((QLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_hovered(void* self, bool status) {
    QLegendMarker_Hovered((QLegendMarker*)self, status);
}

void q_candlesticklegendmarker_on_hovered(void* self, void (*slot)(void*, bool)) {
    QLegendMarker_Connect_Hovered((QLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_label_changed(void* self) {
    QLegendMarker_LabelChanged((QLegendMarker*)self);
}

void q_candlesticklegendmarker_on_label_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_label_brush_changed(void* self) {
    QLegendMarker_LabelBrushChanged((QLegendMarker*)self);
}

void q_candlesticklegendmarker_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_LabelBrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_font_changed(void* self) {
    QLegendMarker_FontChanged((QLegendMarker*)self);
}

void q_candlesticklegendmarker_on_font_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_FontChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_pen_changed(void* self) {
    QLegendMarker_PenChanged((QLegendMarker*)self);
}

void q_candlesticklegendmarker_on_pen_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_PenChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_brush_changed(void* self) {
    QLegendMarker_BrushChanged((QLegendMarker*)self);
}

void q_candlesticklegendmarker_on_brush_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_BrushChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_visible_changed(void* self) {
    QLegendMarker_VisibleChanged((QLegendMarker*)self);
}

void q_candlesticklegendmarker_on_visible_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_VisibleChanged((QLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_shape_changed(void* self) {
    QLegendMarker_ShapeChanged((QLegendMarker*)self);
}

void q_candlesticklegendmarker_on_shape_changed(void* self, void (*slot)(void*)) {
    QLegendMarker_Connect_ShapeChanged((QLegendMarker*)self, (intptr_t)slot);
}

const char* q_candlesticklegendmarker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_candlesticklegendmarker_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_candlesticklegendmarker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_candlesticklegendmarker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_candlesticklegendmarker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_candlesticklegendmarker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_candlesticklegendmarker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_candlesticklegendmarker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_candlesticklegendmarker_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_candlesticklegendmarker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_candlesticklegendmarker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_candlesticklegendmarker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_candlesticklegendmarker_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_candlesticklegendmarker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_candlesticklegendmarker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_candlesticklegendmarker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_candlesticklegendmarker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_candlesticklegendmarker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_candlesticklegendmarker_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_candlesticklegendmarker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_candlesticklegendmarker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_candlesticklegendmarker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_candlesticklegendmarker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_candlesticklegendmarker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_candlesticklegendmarker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_candlesticklegendmarker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_candlesticklegendmarker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_candlesticklegendmarker_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_candlesticklegendmarker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_candlesticklegendmarker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_candlesticklegendmarker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_candlesticklegendmarker_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_candlesticklegendmarker_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_candlesticklegendmarker_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_candlesticklegendmarker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_candlesticklegendmarker_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_candlesticklegendmarker_event(void* self, void* event) {
    return QCandlestickLegendMarker_Event((QCandlestickLegendMarker*)self, (QEvent*)event);
}

bool q_candlesticklegendmarker_qbase_event(void* self, void* event) {
    return QCandlestickLegendMarker_QBaseEvent((QCandlestickLegendMarker*)self, (QEvent*)event);
}

void q_candlesticklegendmarker_on_event(void* self, bool (*slot)(void*, void*)) {
    QCandlestickLegendMarker_OnEvent((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

bool q_candlesticklegendmarker_event_filter(void* self, void* watched, void* event) {
    return QCandlestickLegendMarker_EventFilter((QCandlestickLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

bool q_candlesticklegendmarker_qbase_event_filter(void* self, void* watched, void* event) {
    return QCandlestickLegendMarker_QBaseEventFilter((QCandlestickLegendMarker*)self, (QObject*)watched, (QEvent*)event);
}

void q_candlesticklegendmarker_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCandlestickLegendMarker_OnEventFilter((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_timer_event(void* self, void* event) {
    QCandlestickLegendMarker_TimerEvent((QCandlestickLegendMarker*)self, (QTimerEvent*)event);
}

void q_candlesticklegendmarker_qbase_timer_event(void* self, void* event) {
    QCandlestickLegendMarker_QBaseTimerEvent((QCandlestickLegendMarker*)self, (QTimerEvent*)event);
}

void q_candlesticklegendmarker_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickLegendMarker_OnTimerEvent((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_child_event(void* self, void* event) {
    QCandlestickLegendMarker_ChildEvent((QCandlestickLegendMarker*)self, (QChildEvent*)event);
}

void q_candlesticklegendmarker_qbase_child_event(void* self, void* event) {
    QCandlestickLegendMarker_QBaseChildEvent((QCandlestickLegendMarker*)self, (QChildEvent*)event);
}

void q_candlesticklegendmarker_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickLegendMarker_OnChildEvent((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_custom_event(void* self, void* event) {
    QCandlestickLegendMarker_CustomEvent((QCandlestickLegendMarker*)self, (QEvent*)event);
}

void q_candlesticklegendmarker_qbase_custom_event(void* self, void* event) {
    QCandlestickLegendMarker_QBaseCustomEvent((QCandlestickLegendMarker*)self, (QEvent*)event);
}

void q_candlesticklegendmarker_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickLegendMarker_OnCustomEvent((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_connect_notify(void* self, void* signal) {
    QCandlestickLegendMarker_ConnectNotify((QCandlestickLegendMarker*)self, (QMetaMethod*)signal);
}

void q_candlesticklegendmarker_qbase_connect_notify(void* self, void* signal) {
    QCandlestickLegendMarker_QBaseConnectNotify((QCandlestickLegendMarker*)self, (QMetaMethod*)signal);
}

void q_candlesticklegendmarker_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickLegendMarker_OnConnectNotify((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_disconnect_notify(void* self, void* signal) {
    QCandlestickLegendMarker_DisconnectNotify((QCandlestickLegendMarker*)self, (QMetaMethod*)signal);
}

void q_candlesticklegendmarker_qbase_disconnect_notify(void* self, void* signal) {
    QCandlestickLegendMarker_QBaseDisconnectNotify((QCandlestickLegendMarker*)self, (QMetaMethod*)signal);
}

void q_candlesticklegendmarker_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickLegendMarker_OnDisconnectNotify((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

QObject* q_candlesticklegendmarker_sender(void* self) {
    return QCandlestickLegendMarker_Sender((QCandlestickLegendMarker*)self);
}

QObject* q_candlesticklegendmarker_qbase_sender(void* self) {
    return QCandlestickLegendMarker_QBaseSender((QCandlestickLegendMarker*)self);
}

void q_candlesticklegendmarker_on_sender(void* self, QObject* (*slot)()) {
    QCandlestickLegendMarker_OnSender((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

int32_t q_candlesticklegendmarker_sender_signal_index(void* self) {
    return QCandlestickLegendMarker_SenderSignalIndex((QCandlestickLegendMarker*)self);
}

int32_t q_candlesticklegendmarker_qbase_sender_signal_index(void* self) {
    return QCandlestickLegendMarker_QBaseSenderSignalIndex((QCandlestickLegendMarker*)self);
}

void q_candlesticklegendmarker_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCandlestickLegendMarker_OnSenderSignalIndex((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

int32_t q_candlesticklegendmarker_receivers(void* self, const char* signal) {
    return QCandlestickLegendMarker_Receivers((QCandlestickLegendMarker*)self, signal);
}

int32_t q_candlesticklegendmarker_qbase_receivers(void* self, const char* signal) {
    return QCandlestickLegendMarker_QBaseReceivers((QCandlestickLegendMarker*)self, signal);
}

void q_candlesticklegendmarker_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCandlestickLegendMarker_OnReceivers((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

bool q_candlesticklegendmarker_is_signal_connected(void* self, void* signal) {
    return QCandlestickLegendMarker_IsSignalConnected((QCandlestickLegendMarker*)self, (QMetaMethod*)signal);
}

bool q_candlesticklegendmarker_qbase_is_signal_connected(void* self, void* signal) {
    return QCandlestickLegendMarker_QBaseIsSignalConnected((QCandlestickLegendMarker*)self, (QMetaMethod*)signal);
}

void q_candlesticklegendmarker_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCandlestickLegendMarker_OnIsSignalConnected((QCandlestickLegendMarker*)self, (intptr_t)slot);
}

void q_candlesticklegendmarker_delete(void* self) {
    QCandlestickLegendMarker_Delete((QCandlestickLegendMarker*)(self));
}
