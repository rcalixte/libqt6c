#include "libqabstractbarseries.hpp"
#include "libqabstractseries.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqstackedbarseries.hpp"
#include "libqstackedbarseries.h"

QStackedBarSeries* q_stackedbarseries_new() {
    return QStackedBarSeries_new();
}

QStackedBarSeries* q_stackedbarseries_new2(void* parent) {
    return QStackedBarSeries_new2((QObject*)parent);
}

const QMetaObject* q_stackedbarseries_meta_object(void* self) {
    return QStackedBarSeries_MetaObject((QStackedBarSeries*)self);
}

void* q_stackedbarseries_metacast(void* self, const char* param1) {
    return QStackedBarSeries_Metacast((QStackedBarSeries*)self, param1);
}

int32_t q_stackedbarseries_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStackedBarSeries_Metacall((QStackedBarSeries*)self, param1, param2, param3);
}

void q_stackedbarseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QStackedBarSeries_OnMetacall((QStackedBarSeries*)self, (intptr_t)callback);
}

int32_t q_stackedbarseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStackedBarSeries_QBaseMetacall((QStackedBarSeries*)self, param1, param2, param3);
}

const char* q_stackedbarseries_tr(const char* s) {
    libqt_string _str = QStackedBarSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_stackedbarseries_type(void* self) {
    return QStackedBarSeries_Type((QStackedBarSeries*)self);
}

void q_stackedbarseries_on_type(void* self, int32_t (*callback)()) {
    QStackedBarSeries_OnType((QStackedBarSeries*)self, (intptr_t)callback);
}

int32_t q_stackedbarseries_qbase_type(void* self) {
    return QStackedBarSeries_QBaseType((QStackedBarSeries*)self);
}

const char* q_stackedbarseries_tr2(const char* s, const char* c) {
    libqt_string _str = QStackedBarSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_stackedbarseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStackedBarSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedbarseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

double q_stackedbarseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

bool q_stackedbarseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_stackedbarseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_stackedbarseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_stackedbarseries_append2(void* self, libqt_list sets) {
    return QAbstractBarSeries_Append2((QAbstractBarSeries*)self, sets);
}

bool q_stackedbarseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

int32_t q_stackedbarseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

libqt_list /* of QBarSet* */ q_stackedbarseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

void q_stackedbarseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

void q_stackedbarseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

bool q_stackedbarseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

void q_stackedbarseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

const char* q_stackedbarseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedbarseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

double q_stackedbarseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

void q_stackedbarseries_set_labels_position(void* self, int32_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

int32_t q_stackedbarseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

void q_stackedbarseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

int32_t q_stackedbarseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

void q_stackedbarseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_stackedbarseries_on_clicked(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

void q_stackedbarseries_on_hovered(void* self, void (*callback)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_stackedbarseries_on_pressed(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_stackedbarseries_on_released(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_stackedbarseries_on_double_clicked(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

void q_stackedbarseries_on_count_changed(void* self, void (*callback)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

void q_stackedbarseries_on_labels_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

void q_stackedbarseries_on_labels_format_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_labels_position_changed(void* self, int32_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

void q_stackedbarseries_on_labels_position_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

void q_stackedbarseries_on_labels_angle_changed(void* self, void (*callback)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

void q_stackedbarseries_on_labels_precision_changed(void* self, void (*callback)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_barsets_added(void* self, libqt_list sets) {
    QAbstractBarSeries_BarsetsAdded((QAbstractBarSeries*)self, sets);
}

void q_stackedbarseries_on_barsets_added(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_barsets_removed(void* self, libqt_list sets) {
    QAbstractBarSeries_BarsetsRemoved((QAbstractBarSeries*)self, sets);
}

void q_stackedbarseries_on_barsets_removed(void* self, void (*callback)(void*, libqt_list)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

void q_stackedbarseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_stackedbarseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedbarseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_stackedbarseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_stackedbarseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_stackedbarseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_stackedbarseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_stackedbarseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_stackedbarseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_stackedbarseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_stackedbarseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_stackedbarseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_stackedbarseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_stackedbarseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_stackedbarseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_stackedbarseries_on_name_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_stackedbarseries_on_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_stackedbarseries_on_opacity_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_stackedbarseries_on_use_open_g_l_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_stackedbarseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_stackedbarseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_stackedbarseries_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_stackedbarseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_stackedbarseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_stackedbarseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_stackedbarseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_stackedbarseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_stackedbarseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_stackedbarseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_stackedbarseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_stackedbarseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_stackedbarseries_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_stackedbarseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_stackedbarseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_stackedbarseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_stackedbarseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_stackedbarseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_stackedbarseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_stackedbarseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_stackedbarseries_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_stackedbarseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_stackedbarseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_stackedbarseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_stackedbarseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_stackedbarseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_stackedbarseries_dynamic_property_names");
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

QBindingStorage* q_stackedbarseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_stackedbarseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_stackedbarseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_stackedbarseries_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_stackedbarseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_stackedbarseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_stackedbarseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_stackedbarseries_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_stackedbarseries_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_stackedbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_stackedbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_stackedbarseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_stackedbarseries_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_stackedbarseries_event(void* self, void* event) {
    return QStackedBarSeries_Event((QStackedBarSeries*)self, (QEvent*)event);
}

bool q_stackedbarseries_qbase_event(void* self, void* event) {
    return QStackedBarSeries_QBaseEvent((QStackedBarSeries*)self, (QEvent*)event);
}

void q_stackedbarseries_on_event(void* self, bool (*callback)(void*, void*)) {
    QStackedBarSeries_OnEvent((QStackedBarSeries*)self, (intptr_t)callback);
}

bool q_stackedbarseries_event_filter(void* self, void* watched, void* event) {
    return QStackedBarSeries_EventFilter((QStackedBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_stackedbarseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QStackedBarSeries_QBaseEventFilter((QStackedBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_stackedbarseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QStackedBarSeries_OnEventFilter((QStackedBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_timer_event(void* self, void* event) {
    QStackedBarSeries_TimerEvent((QStackedBarSeries*)self, (QTimerEvent*)event);
}

void q_stackedbarseries_qbase_timer_event(void* self, void* event) {
    QStackedBarSeries_QBaseTimerEvent((QStackedBarSeries*)self, (QTimerEvent*)event);
}

void q_stackedbarseries_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QStackedBarSeries_OnTimerEvent((QStackedBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_child_event(void* self, void* event) {
    QStackedBarSeries_ChildEvent((QStackedBarSeries*)self, (QChildEvent*)event);
}

void q_stackedbarseries_qbase_child_event(void* self, void* event) {
    QStackedBarSeries_QBaseChildEvent((QStackedBarSeries*)self, (QChildEvent*)event);
}

void q_stackedbarseries_on_child_event(void* self, void (*callback)(void*, void*)) {
    QStackedBarSeries_OnChildEvent((QStackedBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_custom_event(void* self, void* event) {
    QStackedBarSeries_CustomEvent((QStackedBarSeries*)self, (QEvent*)event);
}

void q_stackedbarseries_qbase_custom_event(void* self, void* event) {
    QStackedBarSeries_QBaseCustomEvent((QStackedBarSeries*)self, (QEvent*)event);
}

void q_stackedbarseries_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QStackedBarSeries_OnCustomEvent((QStackedBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_connect_notify(void* self, void* signal) {
    QStackedBarSeries_ConnectNotify((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_stackedbarseries_qbase_connect_notify(void* self, void* signal) {
    QStackedBarSeries_QBaseConnectNotify((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_stackedbarseries_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QStackedBarSeries_OnConnectNotify((QStackedBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_disconnect_notify(void* self, void* signal) {
    QStackedBarSeries_DisconnectNotify((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_stackedbarseries_qbase_disconnect_notify(void* self, void* signal) {
    QStackedBarSeries_QBaseDisconnectNotify((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_stackedbarseries_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QStackedBarSeries_OnDisconnectNotify((QStackedBarSeries*)self, (intptr_t)callback);
}

QObject* q_stackedbarseries_sender(void* self) {
    return QStackedBarSeries_Sender((QStackedBarSeries*)self);
}

QObject* q_stackedbarseries_qbase_sender(void* self) {
    return QStackedBarSeries_QBaseSender((QStackedBarSeries*)self);
}

void q_stackedbarseries_on_sender(void* self, QObject* (*callback)()) {
    QStackedBarSeries_OnSender((QStackedBarSeries*)self, (intptr_t)callback);
}

int32_t q_stackedbarseries_sender_signal_index(void* self) {
    return QStackedBarSeries_SenderSignalIndex((QStackedBarSeries*)self);
}

int32_t q_stackedbarseries_qbase_sender_signal_index(void* self) {
    return QStackedBarSeries_QBaseSenderSignalIndex((QStackedBarSeries*)self);
}

void q_stackedbarseries_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QStackedBarSeries_OnSenderSignalIndex((QStackedBarSeries*)self, (intptr_t)callback);
}

int32_t q_stackedbarseries_receivers(void* self, const char* signal) {
    return QStackedBarSeries_Receivers((QStackedBarSeries*)self, signal);
}

int32_t q_stackedbarseries_qbase_receivers(void* self, const char* signal) {
    return QStackedBarSeries_QBaseReceivers((QStackedBarSeries*)self, signal);
}

void q_stackedbarseries_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QStackedBarSeries_OnReceivers((QStackedBarSeries*)self, (intptr_t)callback);
}

bool q_stackedbarseries_is_signal_connected(void* self, void* signal) {
    return QStackedBarSeries_IsSignalConnected((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

bool q_stackedbarseries_qbase_is_signal_connected(void* self, void* signal) {
    return QStackedBarSeries_QBaseIsSignalConnected((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_stackedbarseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QStackedBarSeries_OnIsSignalConnected((QStackedBarSeries*)self, (intptr_t)callback);
}

void q_stackedbarseries_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_stackedbarseries_delete(void* self) {
    QStackedBarSeries_Delete((QStackedBarSeries*)(self));
}
