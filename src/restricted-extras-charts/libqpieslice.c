#include "../libqbrush.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include "libqpieseries.hpp"
#include "libqpieslice.hpp"
#include "libqpieslice.h"

QPieSlice* q_pieslice_new() {
    return QPieSlice_new();
}

QPieSlice* q_pieslice_new2(const char* label, double value) {
    return QPieSlice_new2(qstring(label), value);
}

QPieSlice* q_pieslice_new3(void* parent) {
    return QPieSlice_new3((QObject*)parent);
}

QPieSlice* q_pieslice_new4(const char* label, double value, void* parent) {
    return QPieSlice_new4(qstring(label), value, (QObject*)parent);
}

const QMetaObject* q_pieslice_meta_object(void* self) {
    return QPieSlice_MetaObject((QPieSlice*)self);
}

void* q_pieslice_metacast(void* self, const char* param1) {
    return QPieSlice_Metacast((QPieSlice*)self, param1);
}

int32_t q_pieslice_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPieSlice_Metacall((QPieSlice*)self, param1, param2, param3);
}

void q_pieslice_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPieSlice_OnMetacall((QPieSlice*)self, (intptr_t)slot);
}

int32_t q_pieslice_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPieSlice_QBaseMetacall((QPieSlice*)self, param1, param2, param3);
}

const char* q_pieslice_tr(const char* s) {
    libqt_string _str = QPieSlice_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pieslice_set_label(void* self, const char* label) {
    QPieSlice_SetLabel((QPieSlice*)self, qstring(label));
}

const char* q_pieslice_label(void* self) {
    libqt_string _str = QPieSlice_Label((QPieSlice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pieslice_set_value(void* self, double value) {
    QPieSlice_SetValue((QPieSlice*)self, value);
}

double q_pieslice_value(void* self) {
    return QPieSlice_Value((QPieSlice*)self);
}

void q_pieslice_set_label_visible(void* self) {
    QPieSlice_SetLabelVisible((QPieSlice*)self);
}

bool q_pieslice_is_label_visible(void* self) {
    return QPieSlice_IsLabelVisible((QPieSlice*)self);
}

int64_t q_pieslice_label_position(void* self) {
    return QPieSlice_LabelPosition((QPieSlice*)self);
}

void q_pieslice_set_label_position(void* self, int64_t position) {
    QPieSlice_SetLabelPosition((QPieSlice*)self, position);
}

void q_pieslice_set_exploded(void* self) {
    QPieSlice_SetExploded((QPieSlice*)self);
}

bool q_pieslice_is_exploded(void* self) {
    return QPieSlice_IsExploded((QPieSlice*)self);
}

void q_pieslice_set_pen(void* self, void* pen) {
    QPieSlice_SetPen((QPieSlice*)self, (QPen*)pen);
}

QPen* q_pieslice_pen(void* self) {
    return QPieSlice_Pen((QPieSlice*)self);
}

QColor* q_pieslice_border_color(void* self) {
    return QPieSlice_BorderColor((QPieSlice*)self);
}

void q_pieslice_set_border_color(void* self, void* color) {
    QPieSlice_SetBorderColor((QPieSlice*)self, (QColor*)color);
}

int32_t q_pieslice_border_width(void* self) {
    return QPieSlice_BorderWidth((QPieSlice*)self);
}

void q_pieslice_set_border_width(void* self, int width) {
    QPieSlice_SetBorderWidth((QPieSlice*)self, width);
}

void q_pieslice_set_brush(void* self, void* brush) {
    QPieSlice_SetBrush((QPieSlice*)self, (QBrush*)brush);
}

QBrush* q_pieslice_brush(void* self) {
    return QPieSlice_Brush((QPieSlice*)self);
}

QColor* q_pieslice_color(void* self) {
    return QPieSlice_Color((QPieSlice*)self);
}

void q_pieslice_set_color(void* self, void* color) {
    QPieSlice_SetColor((QPieSlice*)self, (QColor*)color);
}

void q_pieslice_set_label_brush(void* self, void* brush) {
    QPieSlice_SetLabelBrush((QPieSlice*)self, (QBrush*)brush);
}

QBrush* q_pieslice_label_brush(void* self) {
    return QPieSlice_LabelBrush((QPieSlice*)self);
}

QColor* q_pieslice_label_color(void* self) {
    return QPieSlice_LabelColor((QPieSlice*)self);
}

void q_pieslice_set_label_color(void* self, void* color) {
    QPieSlice_SetLabelColor((QPieSlice*)self, (QColor*)color);
}

void q_pieslice_set_label_font(void* self, void* font) {
    QPieSlice_SetLabelFont((QPieSlice*)self, (QFont*)font);
}

QFont* q_pieslice_label_font(void* self) {
    return QPieSlice_LabelFont((QPieSlice*)self);
}

void q_pieslice_set_label_arm_length_factor(void* self, double factor) {
    QPieSlice_SetLabelArmLengthFactor((QPieSlice*)self, factor);
}

double q_pieslice_label_arm_length_factor(void* self) {
    return QPieSlice_LabelArmLengthFactor((QPieSlice*)self);
}

void q_pieslice_set_explode_distance_factor(void* self, double factor) {
    QPieSlice_SetExplodeDistanceFactor((QPieSlice*)self, factor);
}

double q_pieslice_explode_distance_factor(void* self) {
    return QPieSlice_ExplodeDistanceFactor((QPieSlice*)self);
}

double q_pieslice_percentage(void* self) {
    return QPieSlice_Percentage((QPieSlice*)self);
}

double q_pieslice_start_angle(void* self) {
    return QPieSlice_StartAngle((QPieSlice*)self);
}

double q_pieslice_angle_span(void* self) {
    return QPieSlice_AngleSpan((QPieSlice*)self);
}

QPieSeries* q_pieslice_series(void* self) {
    return QPieSlice_Series((QPieSlice*)self);
}

void q_pieslice_clicked(void* self) {
    QPieSlice_Clicked((QPieSlice*)self);
}

void q_pieslice_on_clicked(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_Clicked((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_hovered(void* self, bool state) {
    QPieSlice_Hovered((QPieSlice*)self, state);
}

void q_pieslice_on_hovered(void* self, void (*slot)(void*, bool)) {
    QPieSlice_Connect_Hovered((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_pressed(void* self) {
    QPieSlice_Pressed((QPieSlice*)self);
}

void q_pieslice_on_pressed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_Pressed((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_released(void* self) {
    QPieSlice_Released((QPieSlice*)self);
}

void q_pieslice_on_released(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_Released((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_double_clicked(void* self) {
    QPieSlice_DoubleClicked((QPieSlice*)self);
}

void q_pieslice_on_double_clicked(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_DoubleClicked((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_label_changed(void* self) {
    QPieSlice_LabelChanged((QPieSlice*)self);
}

void q_pieslice_on_label_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_LabelChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_value_changed(void* self) {
    QPieSlice_ValueChanged((QPieSlice*)self);
}

void q_pieslice_on_value_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_ValueChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_label_visible_changed(void* self) {
    QPieSlice_LabelVisibleChanged((QPieSlice*)self);
}

void q_pieslice_on_label_visible_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_LabelVisibleChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_pen_changed(void* self) {
    QPieSlice_PenChanged((QPieSlice*)self);
}

void q_pieslice_on_pen_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_PenChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_brush_changed(void* self) {
    QPieSlice_BrushChanged((QPieSlice*)self);
}

void q_pieslice_on_brush_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_BrushChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_label_brush_changed(void* self) {
    QPieSlice_LabelBrushChanged((QPieSlice*)self);
}

void q_pieslice_on_label_brush_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_LabelBrushChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_label_font_changed(void* self) {
    QPieSlice_LabelFontChanged((QPieSlice*)self);
}

void q_pieslice_on_label_font_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_LabelFontChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_percentage_changed(void* self) {
    QPieSlice_PercentageChanged((QPieSlice*)self);
}

void q_pieslice_on_percentage_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_PercentageChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_start_angle_changed(void* self) {
    QPieSlice_StartAngleChanged((QPieSlice*)self);
}

void q_pieslice_on_start_angle_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_StartAngleChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_angle_span_changed(void* self) {
    QPieSlice_AngleSpanChanged((QPieSlice*)self);
}

void q_pieslice_on_angle_span_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_AngleSpanChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_color_changed(void* self) {
    QPieSlice_ColorChanged((QPieSlice*)self);
}

void q_pieslice_on_color_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_ColorChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_border_color_changed(void* self) {
    QPieSlice_BorderColorChanged((QPieSlice*)self);
}

void q_pieslice_on_border_color_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_BorderColorChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_border_width_changed(void* self) {
    QPieSlice_BorderWidthChanged((QPieSlice*)self);
}

void q_pieslice_on_border_width_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_BorderWidthChanged((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_label_color_changed(void* self) {
    QPieSlice_LabelColorChanged((QPieSlice*)self);
}

void q_pieslice_on_label_color_changed(void* self, void (*slot)(void*)) {
    QPieSlice_Connect_LabelColorChanged((QPieSlice*)self, (intptr_t)slot);
}

const char* q_pieslice_tr2(const char* s, const char* c) {
    libqt_string _str = QPieSlice_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pieslice_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPieSlice_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pieslice_set_label_visible1(void* self, bool visible) {
    QPieSlice_SetLabelVisible1((QPieSlice*)self, visible);
}

void q_pieslice_set_exploded1(void* self, bool exploded) {
    QPieSlice_SetExploded1((QPieSlice*)self, exploded);
}

const char* q_pieslice_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pieslice_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pieslice_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pieslice_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pieslice_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pieslice_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pieslice_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pieslice_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pieslice_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pieslice_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pieslice_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pieslice_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pieslice_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pieslice_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pieslice_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pieslice_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pieslice_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pieslice_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pieslice_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pieslice_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_pieslice_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pieslice_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pieslice_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pieslice_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pieslice_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_pieslice_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pieslice_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pieslice_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pieslice_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_pieslice_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pieslice_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pieslice_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_pieslice_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_pieslice_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pieslice_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_pieslice_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_pieslice_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pieslice_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_pieslice_event(void* self, void* event) {
    return QPieSlice_Event((QPieSlice*)self, (QEvent*)event);
}

bool q_pieslice_qbase_event(void* self, void* event) {
    return QPieSlice_QBaseEvent((QPieSlice*)self, (QEvent*)event);
}

void q_pieslice_on_event(void* self, bool (*slot)(void*, void*)) {
    QPieSlice_OnEvent((QPieSlice*)self, (intptr_t)slot);
}

bool q_pieslice_event_filter(void* self, void* watched, void* event) {
    return QPieSlice_EventFilter((QPieSlice*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pieslice_qbase_event_filter(void* self, void* watched, void* event) {
    return QPieSlice_QBaseEventFilter((QPieSlice*)self, (QObject*)watched, (QEvent*)event);
}

void q_pieslice_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPieSlice_OnEventFilter((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_timer_event(void* self, void* event) {
    QPieSlice_TimerEvent((QPieSlice*)self, (QTimerEvent*)event);
}

void q_pieslice_qbase_timer_event(void* self, void* event) {
    QPieSlice_QBaseTimerEvent((QPieSlice*)self, (QTimerEvent*)event);
}

void q_pieslice_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPieSlice_OnTimerEvent((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_child_event(void* self, void* event) {
    QPieSlice_ChildEvent((QPieSlice*)self, (QChildEvent*)event);
}

void q_pieslice_qbase_child_event(void* self, void* event) {
    QPieSlice_QBaseChildEvent((QPieSlice*)self, (QChildEvent*)event);
}

void q_pieslice_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPieSlice_OnChildEvent((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_custom_event(void* self, void* event) {
    QPieSlice_CustomEvent((QPieSlice*)self, (QEvent*)event);
}

void q_pieslice_qbase_custom_event(void* self, void* event) {
    QPieSlice_QBaseCustomEvent((QPieSlice*)self, (QEvent*)event);
}

void q_pieslice_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPieSlice_OnCustomEvent((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_connect_notify(void* self, void* signal) {
    QPieSlice_ConnectNotify((QPieSlice*)self, (QMetaMethod*)signal);
}

void q_pieslice_qbase_connect_notify(void* self, void* signal) {
    QPieSlice_QBaseConnectNotify((QPieSlice*)self, (QMetaMethod*)signal);
}

void q_pieslice_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPieSlice_OnConnectNotify((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_disconnect_notify(void* self, void* signal) {
    QPieSlice_DisconnectNotify((QPieSlice*)self, (QMetaMethod*)signal);
}

void q_pieslice_qbase_disconnect_notify(void* self, void* signal) {
    QPieSlice_QBaseDisconnectNotify((QPieSlice*)self, (QMetaMethod*)signal);
}

void q_pieslice_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPieSlice_OnDisconnectNotify((QPieSlice*)self, (intptr_t)slot);
}

QObject* q_pieslice_sender(void* self) {
    return QPieSlice_Sender((QPieSlice*)self);
}

QObject* q_pieslice_qbase_sender(void* self) {
    return QPieSlice_QBaseSender((QPieSlice*)self);
}

void q_pieslice_on_sender(void* self, QObject* (*slot)()) {
    QPieSlice_OnSender((QPieSlice*)self, (intptr_t)slot);
}

int32_t q_pieslice_sender_signal_index(void* self) {
    return QPieSlice_SenderSignalIndex((QPieSlice*)self);
}

int32_t q_pieslice_qbase_sender_signal_index(void* self) {
    return QPieSlice_QBaseSenderSignalIndex((QPieSlice*)self);
}

void q_pieslice_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPieSlice_OnSenderSignalIndex((QPieSlice*)self, (intptr_t)slot);
}

int32_t q_pieslice_receivers(void* self, const char* signal) {
    return QPieSlice_Receivers((QPieSlice*)self, signal);
}

int32_t q_pieslice_qbase_receivers(void* self, const char* signal) {
    return QPieSlice_QBaseReceivers((QPieSlice*)self, signal);
}

void q_pieslice_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPieSlice_OnReceivers((QPieSlice*)self, (intptr_t)slot);
}

bool q_pieslice_is_signal_connected(void* self, void* signal) {
    return QPieSlice_IsSignalConnected((QPieSlice*)self, (QMetaMethod*)signal);
}

bool q_pieslice_qbase_is_signal_connected(void* self, void* signal) {
    return QPieSlice_QBaseIsSignalConnected((QPieSlice*)self, (QMetaMethod*)signal);
}

void q_pieslice_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPieSlice_OnIsSignalConnected((QPieSlice*)self, (intptr_t)slot);
}

void q_pieslice_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_pieslice_delete(void* self) {
    QPieSlice_Delete((QPieSlice*)(self));
}
