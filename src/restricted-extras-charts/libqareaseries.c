#include "libqabstractseries.hpp"
#include "../libqbrush.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "libqlineseries.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include "../libqpoint.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqareaseries.hpp"
#include "libqareaseries.h"

QAreaSeries* q_areaseries_new() {
    return QAreaSeries_new();
}

QAreaSeries* q_areaseries_new2(void* upperSeries) {
    return QAreaSeries_new2((QLineSeries*)upperSeries);
}

QAreaSeries* q_areaseries_new3(void* parent) {
    return QAreaSeries_new3((QObject*)parent);
}

QAreaSeries* q_areaseries_new4(void* upperSeries, void* lowerSeries) {
    return QAreaSeries_new4((QLineSeries*)upperSeries, (QLineSeries*)lowerSeries);
}

const QMetaObject* q_areaseries_meta_object(void* self) {
    return QAreaSeries_MetaObject((QAreaSeries*)self);
}

void* q_areaseries_metacast(void* self, const char* param1) {
    return QAreaSeries_Metacast((QAreaSeries*)self, param1);
}

int32_t q_areaseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAreaSeries_Metacall((QAreaSeries*)self, param1, param2, param3);
}

void q_areaseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAreaSeries_OnMetacall((QAreaSeries*)self, (intptr_t)slot);
}

int32_t q_areaseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAreaSeries_QBaseMetacall((QAreaSeries*)self, param1, param2, param3);
}

const char* q_areaseries_tr(const char* s) {
    libqt_string _str = QAreaSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_areaseries_type(void* self) {
    return QAreaSeries_Type((QAreaSeries*)self);
}

void q_areaseries_on_type(void* self, int64_t (*slot)()) {
    QAreaSeries_OnType((QAreaSeries*)self, (intptr_t)slot);
}

int64_t q_areaseries_qbase_type(void* self) {
    return QAreaSeries_QBaseType((QAreaSeries*)self);
}

void q_areaseries_set_upper_series(void* self, void* series) {
    QAreaSeries_SetUpperSeries((QAreaSeries*)self, (QLineSeries*)series);
}

QLineSeries* q_areaseries_upper_series(void* self) {
    return QAreaSeries_UpperSeries((QAreaSeries*)self);
}

void q_areaseries_set_lower_series(void* self, void* series) {
    QAreaSeries_SetLowerSeries((QAreaSeries*)self, (QLineSeries*)series);
}

QLineSeries* q_areaseries_lower_series(void* self) {
    return QAreaSeries_LowerSeries((QAreaSeries*)self);
}

void q_areaseries_set_pen(void* self, void* pen) {
    QAreaSeries_SetPen((QAreaSeries*)self, (QPen*)pen);
}

QPen* q_areaseries_pen(void* self) {
    return QAreaSeries_Pen((QAreaSeries*)self);
}

void q_areaseries_set_brush(void* self, void* brush) {
    QAreaSeries_SetBrush((QAreaSeries*)self, (QBrush*)brush);
}

QBrush* q_areaseries_brush(void* self) {
    return QAreaSeries_Brush((QAreaSeries*)self);
}

void q_areaseries_set_color(void* self, void* color) {
    QAreaSeries_SetColor((QAreaSeries*)self, (QColor*)color);
}

QColor* q_areaseries_color(void* self) {
    return QAreaSeries_Color((QAreaSeries*)self);
}

void q_areaseries_set_border_color(void* self, void* color) {
    QAreaSeries_SetBorderColor((QAreaSeries*)self, (QColor*)color);
}

QColor* q_areaseries_border_color(void* self) {
    return QAreaSeries_BorderColor((QAreaSeries*)self);
}

void q_areaseries_set_points_visible(void* self) {
    QAreaSeries_SetPointsVisible((QAreaSeries*)self);
}

bool q_areaseries_points_visible(void* self) {
    return QAreaSeries_PointsVisible((QAreaSeries*)self);
}

void q_areaseries_set_point_labels_format(void* self, const char* format) {
    QAreaSeries_SetPointLabelsFormat((QAreaSeries*)self, qstring(format));
}

const char* q_areaseries_point_labels_format(void* self) {
    libqt_string _str = QAreaSeries_PointLabelsFormat((QAreaSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_areaseries_set_point_labels_visible(void* self) {
    QAreaSeries_SetPointLabelsVisible((QAreaSeries*)self);
}

bool q_areaseries_point_labels_visible(void* self) {
    return QAreaSeries_PointLabelsVisible((QAreaSeries*)self);
}

void q_areaseries_set_point_labels_font(void* self, void* font) {
    QAreaSeries_SetPointLabelsFont((QAreaSeries*)self, (QFont*)font);
}

QFont* q_areaseries_point_labels_font(void* self) {
    return QAreaSeries_PointLabelsFont((QAreaSeries*)self);
}

void q_areaseries_set_point_labels_color(void* self, void* color) {
    QAreaSeries_SetPointLabelsColor((QAreaSeries*)self, (QColor*)color);
}

QColor* q_areaseries_point_labels_color(void* self) {
    return QAreaSeries_PointLabelsColor((QAreaSeries*)self);
}

void q_areaseries_set_point_labels_clipping(void* self) {
    QAreaSeries_SetPointLabelsClipping((QAreaSeries*)self);
}

bool q_areaseries_point_labels_clipping(void* self) {
    return QAreaSeries_PointLabelsClipping((QAreaSeries*)self);
}

void q_areaseries_clicked(void* self, void* point) {
    QAreaSeries_Clicked((QAreaSeries*)self, (QPointF*)point);
}

void q_areaseries_on_clicked(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_Clicked((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_hovered(void* self, void* point, bool state) {
    QAreaSeries_Hovered((QAreaSeries*)self, (QPointF*)point, state);
}

void q_areaseries_on_hovered(void* self, void (*slot)(void*, void*, bool)) {
    QAreaSeries_Connect_Hovered((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_pressed(void* self, void* point) {
    QAreaSeries_Pressed((QAreaSeries*)self, (QPointF*)point);
}

void q_areaseries_on_pressed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_Pressed((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_released(void* self, void* point) {
    QAreaSeries_Released((QAreaSeries*)self, (QPointF*)point);
}

void q_areaseries_on_released(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_Released((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_double_clicked(void* self, void* point) {
    QAreaSeries_DoubleClicked((QAreaSeries*)self, (QPointF*)point);
}

void q_areaseries_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_DoubleClicked((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_selected(void* self) {
    QAreaSeries_Selected((QAreaSeries*)self);
}

void q_areaseries_on_selected(void* self, void (*slot)(void*)) {
    QAreaSeries_Connect_Selected((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_color_changed(void* self, void* color) {
    QAreaSeries_ColorChanged((QAreaSeries*)self, (QColor*)color);
}

void q_areaseries_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_ColorChanged((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_border_color_changed(void* self, void* color) {
    QAreaSeries_BorderColorChanged((QAreaSeries*)self, (QColor*)color);
}

void q_areaseries_on_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_BorderColorChanged((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_point_labels_format_changed(void* self, const char* format) {
    QAreaSeries_PointLabelsFormatChanged((QAreaSeries*)self, qstring(format));
}

void q_areaseries_on_point_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QAreaSeries_Connect_PointLabelsFormatChanged((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_point_labels_visibility_changed(void* self, bool visible) {
    QAreaSeries_PointLabelsVisibilityChanged((QAreaSeries*)self, visible);
}

void q_areaseries_on_point_labels_visibility_changed(void* self, void (*slot)(void*, bool)) {
    QAreaSeries_Connect_PointLabelsVisibilityChanged((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_point_labels_font_changed(void* self, void* font) {
    QAreaSeries_PointLabelsFontChanged((QAreaSeries*)self, (QFont*)font);
}

void q_areaseries_on_point_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_PointLabelsFontChanged((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_point_labels_color_changed(void* self, void* color) {
    QAreaSeries_PointLabelsColorChanged((QAreaSeries*)self, (QColor*)color);
}

void q_areaseries_on_point_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_Connect_PointLabelsColorChanged((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_point_labels_clipping_changed(void* self, bool clipping) {
    QAreaSeries_PointLabelsClippingChanged((QAreaSeries*)self, clipping);
}

void q_areaseries_on_point_labels_clipping_changed(void* self, void (*slot)(void*, bool)) {
    QAreaSeries_Connect_PointLabelsClippingChanged((QAreaSeries*)self, (intptr_t)slot);
}

const char* q_areaseries_tr2(const char* s, const char* c) {
    libqt_string _str = QAreaSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_areaseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAreaSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_areaseries_set_points_visible1(void* self, bool visible) {
    QAreaSeries_SetPointsVisible1((QAreaSeries*)self, visible);
}

void q_areaseries_set_point_labels_visible1(void* self, bool visible) {
    QAreaSeries_SetPointLabelsVisible1((QAreaSeries*)self, visible);
}

void q_areaseries_set_point_labels_clipping1(void* self, bool enabled) {
    QAreaSeries_SetPointLabelsClipping1((QAreaSeries*)self, enabled);
}

void q_areaseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_areaseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_areaseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_areaseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_areaseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_areaseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_areaseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_areaseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_areaseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_areaseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_areaseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_areaseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_areaseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_areaseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_areaseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_areaseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_areaseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_areaseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_areaseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_areaseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_areaseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_areaseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_areaseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_areaseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_areaseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_areaseries_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_areaseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_areaseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_areaseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_areaseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_areaseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_areaseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_areaseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_areaseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_areaseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_areaseries_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_areaseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_areaseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_areaseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_areaseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_areaseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_areaseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_areaseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_areaseries_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_areaseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_areaseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_areaseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_areaseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_areaseries_dynamic_property_names(void* self) {
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

QBindingStorage* q_areaseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_areaseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_areaseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_areaseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_areaseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_areaseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_areaseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_areaseries_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_areaseries_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_areaseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_areaseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_areaseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_areaseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_areaseries_event(void* self, void* event) {
    return QAreaSeries_Event((QAreaSeries*)self, (QEvent*)event);
}

bool q_areaseries_qbase_event(void* self, void* event) {
    return QAreaSeries_QBaseEvent((QAreaSeries*)self, (QEvent*)event);
}

void q_areaseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QAreaSeries_OnEvent((QAreaSeries*)self, (intptr_t)slot);
}

bool q_areaseries_event_filter(void* self, void* watched, void* event) {
    return QAreaSeries_EventFilter((QAreaSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_areaseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QAreaSeries_QBaseEventFilter((QAreaSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_areaseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAreaSeries_OnEventFilter((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_timer_event(void* self, void* event) {
    QAreaSeries_TimerEvent((QAreaSeries*)self, (QTimerEvent*)event);
}

void q_areaseries_qbase_timer_event(void* self, void* event) {
    QAreaSeries_QBaseTimerEvent((QAreaSeries*)self, (QTimerEvent*)event);
}

void q_areaseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnTimerEvent((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_child_event(void* self, void* event) {
    QAreaSeries_ChildEvent((QAreaSeries*)self, (QChildEvent*)event);
}

void q_areaseries_qbase_child_event(void* self, void* event) {
    QAreaSeries_QBaseChildEvent((QAreaSeries*)self, (QChildEvent*)event);
}

void q_areaseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnChildEvent((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_custom_event(void* self, void* event) {
    QAreaSeries_CustomEvent((QAreaSeries*)self, (QEvent*)event);
}

void q_areaseries_qbase_custom_event(void* self, void* event) {
    QAreaSeries_QBaseCustomEvent((QAreaSeries*)self, (QEvent*)event);
}

void q_areaseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnCustomEvent((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_connect_notify(void* self, void* signal) {
    QAreaSeries_ConnectNotify((QAreaSeries*)self, (QMetaMethod*)signal);
}

void q_areaseries_qbase_connect_notify(void* self, void* signal) {
    QAreaSeries_QBaseConnectNotify((QAreaSeries*)self, (QMetaMethod*)signal);
}

void q_areaseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnConnectNotify((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_disconnect_notify(void* self, void* signal) {
    QAreaSeries_DisconnectNotify((QAreaSeries*)self, (QMetaMethod*)signal);
}

void q_areaseries_qbase_disconnect_notify(void* self, void* signal) {
    QAreaSeries_QBaseDisconnectNotify((QAreaSeries*)self, (QMetaMethod*)signal);
}

void q_areaseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAreaSeries_OnDisconnectNotify((QAreaSeries*)self, (intptr_t)slot);
}

QObject* q_areaseries_sender(void* self) {
    return QAreaSeries_Sender((QAreaSeries*)self);
}

QObject* q_areaseries_qbase_sender(void* self) {
    return QAreaSeries_QBaseSender((QAreaSeries*)self);
}

void q_areaseries_on_sender(void* self, QObject* (*slot)()) {
    QAreaSeries_OnSender((QAreaSeries*)self, (intptr_t)slot);
}

int32_t q_areaseries_sender_signal_index(void* self) {
    return QAreaSeries_SenderSignalIndex((QAreaSeries*)self);
}

int32_t q_areaseries_qbase_sender_signal_index(void* self) {
    return QAreaSeries_QBaseSenderSignalIndex((QAreaSeries*)self);
}

void q_areaseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAreaSeries_OnSenderSignalIndex((QAreaSeries*)self, (intptr_t)slot);
}

int32_t q_areaseries_receivers(void* self, const char* signal) {
    return QAreaSeries_Receivers((QAreaSeries*)self, signal);
}

int32_t q_areaseries_qbase_receivers(void* self, const char* signal) {
    return QAreaSeries_QBaseReceivers((QAreaSeries*)self, signal);
}

void q_areaseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAreaSeries_OnReceivers((QAreaSeries*)self, (intptr_t)slot);
}

bool q_areaseries_is_signal_connected(void* self, void* signal) {
    return QAreaSeries_IsSignalConnected((QAreaSeries*)self, (QMetaMethod*)signal);
}

bool q_areaseries_qbase_is_signal_connected(void* self, void* signal) {
    return QAreaSeries_QBaseIsSignalConnected((QAreaSeries*)self, (QMetaMethod*)signal);
}

void q_areaseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAreaSeries_OnIsSignalConnected((QAreaSeries*)self, (intptr_t)slot);
}

void q_areaseries_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_areaseries_delete(void* self) {
    QAreaSeries_Delete((QAreaSeries*)(self));
}
