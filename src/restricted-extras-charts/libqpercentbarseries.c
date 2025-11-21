#include "libqabstractbarseries.hpp"
#include "libqabstractseries.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqpercentbarseries.hpp"
#include "libqpercentbarseries.h"

QPercentBarSeries* q_percentbarseries_new() {
    return QPercentBarSeries_new();
}

QPercentBarSeries* q_percentbarseries_new2(void* parent) {
    return QPercentBarSeries_new2((QObject*)parent);
}

const QMetaObject* q_percentbarseries_meta_object(void* self) {
    return QPercentBarSeries_MetaObject((QPercentBarSeries*)self);
}

void* q_percentbarseries_metacast(void* self, const char* param1) {
    return QPercentBarSeries_Metacast((QPercentBarSeries*)self, param1);
}

int32_t q_percentbarseries_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPercentBarSeries_Metacall((QPercentBarSeries*)self, param1, param2, param3);
}

void q_percentbarseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPercentBarSeries_OnMetacall((QPercentBarSeries*)self, (intptr_t)callback);
}

int32_t q_percentbarseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPercentBarSeries_QBaseMetacall((QPercentBarSeries*)self, param1, param2, param3);
}

const char* q_percentbarseries_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_percentbarseries_type(void* self) {
    return QPercentBarSeries_Type((QPercentBarSeries*)self);
}

void q_percentbarseries_on_type(void* self, int32_t (*callback)()) {
    QPercentBarSeries_OnType((QPercentBarSeries*)self, (intptr_t)callback);
}

int32_t q_percentbarseries_qbase_type(void* self) {
    return QPercentBarSeries_QBaseType((QPercentBarSeries*)self);
}

const char* q_percentbarseries_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_percentbarseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_percentbarseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

double q_percentbarseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

bool q_percentbarseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_percentbarseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_percentbarseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_percentbarseries_append2(void* self, libqt_list sets) {
    return QAbstractBarSeries_Append2((QAbstractBarSeries*)self, sets);
}

bool q_percentbarseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

int32_t q_percentbarseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

libqt_list /* of QBarSet* */ q_percentbarseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

void q_percentbarseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

void q_percentbarseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

bool q_percentbarseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

void q_percentbarseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

const char* q_percentbarseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_percentbarseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

double q_percentbarseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

void q_percentbarseries_set_labels_position(void* self, int32_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

int32_t q_percentbarseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

void q_percentbarseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

int32_t q_percentbarseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

void q_percentbarseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_percentbarseries_on_clicked(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

void q_percentbarseries_on_hovered(void* self, void (*callback)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_percentbarseries_on_pressed(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_percentbarseries_on_released(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_percentbarseries_on_double_clicked(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

void q_percentbarseries_on_count_changed(void* self, void (*callback)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

void q_percentbarseries_on_labels_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

void q_percentbarseries_on_labels_format_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_labels_position_changed(void* self, int32_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

void q_percentbarseries_on_labels_position_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

void q_percentbarseries_on_labels_angle_changed(void* self, void (*callback)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

void q_percentbarseries_on_labels_precision_changed(void* self, void (*callback)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_barsets_added(void* self, libqt_list sets) {
    QAbstractBarSeries_BarsetsAdded((QAbstractBarSeries*)self, sets);
}

void q_percentbarseries_on_barsets_added(void* self, void (*callback)(void*, QBarSet**)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_barsets_removed(void* self, libqt_list sets) {
    QAbstractBarSeries_BarsetsRemoved((QAbstractBarSeries*)self, sets);
}

void q_percentbarseries_on_barsets_removed(void* self, void (*callback)(void*, QBarSet**)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

void q_percentbarseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_percentbarseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_percentbarseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_percentbarseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_percentbarseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_percentbarseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_percentbarseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_percentbarseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_percentbarseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_percentbarseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_percentbarseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_percentbarseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_percentbarseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_percentbarseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_percentbarseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_percentbarseries_on_name_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_percentbarseries_on_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_percentbarseries_on_opacity_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_percentbarseries_on_use_open_g_l_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_percentbarseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_percentbarseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_percentbarseries_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_percentbarseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_percentbarseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_percentbarseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_percentbarseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_percentbarseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_percentbarseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_percentbarseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_percentbarseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_percentbarseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_percentbarseries_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_percentbarseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_percentbarseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_percentbarseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_percentbarseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_percentbarseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_percentbarseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_percentbarseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_percentbarseries_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_percentbarseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_percentbarseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_percentbarseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_percentbarseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_percentbarseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_percentbarseries_dynamic_property_names");
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

QBindingStorage* q_percentbarseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_percentbarseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_percentbarseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_percentbarseries_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_percentbarseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_percentbarseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_percentbarseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_percentbarseries_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_percentbarseries_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_percentbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_percentbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_percentbarseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_percentbarseries_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_percentbarseries_event(void* self, void* event) {
    return QPercentBarSeries_Event((QPercentBarSeries*)self, (QEvent*)event);
}

bool q_percentbarseries_qbase_event(void* self, void* event) {
    return QPercentBarSeries_QBaseEvent((QPercentBarSeries*)self, (QEvent*)event);
}

void q_percentbarseries_on_event(void* self, bool (*callback)(void*, void*)) {
    QPercentBarSeries_OnEvent((QPercentBarSeries*)self, (intptr_t)callback);
}

bool q_percentbarseries_event_filter(void* self, void* watched, void* event) {
    return QPercentBarSeries_EventFilter((QPercentBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_percentbarseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QPercentBarSeries_QBaseEventFilter((QPercentBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_percentbarseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPercentBarSeries_OnEventFilter((QPercentBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_timer_event(void* self, void* event) {
    QPercentBarSeries_TimerEvent((QPercentBarSeries*)self, (QTimerEvent*)event);
}

void q_percentbarseries_qbase_timer_event(void* self, void* event) {
    QPercentBarSeries_QBaseTimerEvent((QPercentBarSeries*)self, (QTimerEvent*)event);
}

void q_percentbarseries_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPercentBarSeries_OnTimerEvent((QPercentBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_child_event(void* self, void* event) {
    QPercentBarSeries_ChildEvent((QPercentBarSeries*)self, (QChildEvent*)event);
}

void q_percentbarseries_qbase_child_event(void* self, void* event) {
    QPercentBarSeries_QBaseChildEvent((QPercentBarSeries*)self, (QChildEvent*)event);
}

void q_percentbarseries_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPercentBarSeries_OnChildEvent((QPercentBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_custom_event(void* self, void* event) {
    QPercentBarSeries_CustomEvent((QPercentBarSeries*)self, (QEvent*)event);
}

void q_percentbarseries_qbase_custom_event(void* self, void* event) {
    QPercentBarSeries_QBaseCustomEvent((QPercentBarSeries*)self, (QEvent*)event);
}

void q_percentbarseries_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPercentBarSeries_OnCustomEvent((QPercentBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_connect_notify(void* self, void* signal) {
    QPercentBarSeries_ConnectNotify((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_percentbarseries_qbase_connect_notify(void* self, void* signal) {
    QPercentBarSeries_QBaseConnectNotify((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_percentbarseries_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPercentBarSeries_OnConnectNotify((QPercentBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_disconnect_notify(void* self, void* signal) {
    QPercentBarSeries_DisconnectNotify((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_percentbarseries_qbase_disconnect_notify(void* self, void* signal) {
    QPercentBarSeries_QBaseDisconnectNotify((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_percentbarseries_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPercentBarSeries_OnDisconnectNotify((QPercentBarSeries*)self, (intptr_t)callback);
}

QObject* q_percentbarseries_sender(void* self) {
    return QPercentBarSeries_Sender((QPercentBarSeries*)self);
}

QObject* q_percentbarseries_qbase_sender(void* self) {
    return QPercentBarSeries_QBaseSender((QPercentBarSeries*)self);
}

void q_percentbarseries_on_sender(void* self, QObject* (*callback)()) {
    QPercentBarSeries_OnSender((QPercentBarSeries*)self, (intptr_t)callback);
}

int32_t q_percentbarseries_sender_signal_index(void* self) {
    return QPercentBarSeries_SenderSignalIndex((QPercentBarSeries*)self);
}

int32_t q_percentbarseries_qbase_sender_signal_index(void* self) {
    return QPercentBarSeries_QBaseSenderSignalIndex((QPercentBarSeries*)self);
}

void q_percentbarseries_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPercentBarSeries_OnSenderSignalIndex((QPercentBarSeries*)self, (intptr_t)callback);
}

int32_t q_percentbarseries_receivers(void* self, const char* signal) {
    return QPercentBarSeries_Receivers((QPercentBarSeries*)self, signal);
}

int32_t q_percentbarseries_qbase_receivers(void* self, const char* signal) {
    return QPercentBarSeries_QBaseReceivers((QPercentBarSeries*)self, signal);
}

void q_percentbarseries_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPercentBarSeries_OnReceivers((QPercentBarSeries*)self, (intptr_t)callback);
}

bool q_percentbarseries_is_signal_connected(void* self, void* signal) {
    return QPercentBarSeries_IsSignalConnected((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

bool q_percentbarseries_qbase_is_signal_connected(void* self, void* signal) {
    return QPercentBarSeries_QBaseIsSignalConnected((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_percentbarseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPercentBarSeries_OnIsSignalConnected((QPercentBarSeries*)self, (intptr_t)callback);
}

void q_percentbarseries_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_percentbarseries_delete(void* self) {
    QPercentBarSeries_Delete((QPercentBarSeries*)(self));
}
