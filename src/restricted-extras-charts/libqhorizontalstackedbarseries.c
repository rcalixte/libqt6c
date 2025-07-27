#include "libqabstractbarseries.hpp"
#include "libqabstractseries.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqhorizontalstackedbarseries.hpp"
#include "libqhorizontalstackedbarseries.h"

QHorizontalStackedBarSeries* q_horizontalstackedbarseries_new() {
    return QHorizontalStackedBarSeries_new();
}

QHorizontalStackedBarSeries* q_horizontalstackedbarseries_new2(void* parent) {
    return QHorizontalStackedBarSeries_new2((QObject*)parent);
}

const QMetaObject* q_horizontalstackedbarseries_meta_object(void* self) {
    return QHorizontalStackedBarSeries_MetaObject((QHorizontalStackedBarSeries*)self);
}

void* q_horizontalstackedbarseries_metacast(void* self, const char* param1) {
    return QHorizontalStackedBarSeries_Metacast((QHorizontalStackedBarSeries*)self, param1);
}

int32_t q_horizontalstackedbarseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHorizontalStackedBarSeries_Metacall((QHorizontalStackedBarSeries*)self, param1, param2, param3);
}

void q_horizontalstackedbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHorizontalStackedBarSeries_OnMetacall((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

int32_t q_horizontalstackedbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHorizontalStackedBarSeries_QBaseMetacall((QHorizontalStackedBarSeries*)self, param1, param2, param3);
}

const char* q_horizontalstackedbarseries_tr(const char* s) {
    libqt_string _str = QHorizontalStackedBarSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_horizontalstackedbarseries_type(void* self) {
    return QHorizontalStackedBarSeries_Type((QHorizontalStackedBarSeries*)self);
}

void q_horizontalstackedbarseries_on_type(void* self, int64_t (*slot)()) {
    QHorizontalStackedBarSeries_OnType((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

int64_t q_horizontalstackedbarseries_qbase_type(void* self) {
    return QHorizontalStackedBarSeries_QBaseType((QHorizontalStackedBarSeries*)self);
}

const char* q_horizontalstackedbarseries_tr2(const char* s, const char* c) {
    libqt_string _str = QHorizontalStackedBarSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_horizontalstackedbarseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHorizontalStackedBarSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_horizontalstackedbarseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

double q_horizontalstackedbarseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

bool q_horizontalstackedbarseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_horizontalstackedbarseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_horizontalstackedbarseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_horizontalstackedbarseries_append2(void* self, libqt_list sets) {
    return QAbstractBarSeries_Append2((QAbstractBarSeries*)self, sets);
}

bool q_horizontalstackedbarseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

int32_t q_horizontalstackedbarseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

libqt_list /* of QBarSet* */ q_horizontalstackedbarseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

void q_horizontalstackedbarseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

void q_horizontalstackedbarseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

bool q_horizontalstackedbarseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

void q_horizontalstackedbarseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

const char* q_horizontalstackedbarseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_horizontalstackedbarseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

double q_horizontalstackedbarseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

void q_horizontalstackedbarseries_set_labels_position(void* self, int64_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

int64_t q_horizontalstackedbarseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

void q_horizontalstackedbarseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

int32_t q_horizontalstackedbarseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

void q_horizontalstackedbarseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_horizontalstackedbarseries_on_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

void q_horizontalstackedbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_horizontalstackedbarseries_on_pressed(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_horizontalstackedbarseries_on_released(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_horizontalstackedbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

void q_horizontalstackedbarseries_on_count_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

void q_horizontalstackedbarseries_on_labels_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

void q_horizontalstackedbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_labels_position_changed(void* self, int64_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

void q_horizontalstackedbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

void q_horizontalstackedbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

void q_horizontalstackedbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_barsets_added(void* self, libqt_list sets) {
    QAbstractBarSeries_BarsetsAdded((QAbstractBarSeries*)self, sets);
}

void q_horizontalstackedbarseries_on_barsets_added(void* self, void (*slot)(void*, libqt_list)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_barsets_removed(void* self, libqt_list sets) {
    QAbstractBarSeries_BarsetsRemoved((QAbstractBarSeries*)self, sets);
}

void q_horizontalstackedbarseries_on_barsets_removed(void* self, void (*slot)(void*, libqt_list)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

void q_horizontalstackedbarseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_horizontalstackedbarseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_horizontalstackedbarseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_horizontalstackedbarseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_horizontalstackedbarseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_horizontalstackedbarseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_horizontalstackedbarseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_horizontalstackedbarseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_horizontalstackedbarseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_horizontalstackedbarseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_horizontalstackedbarseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_horizontalstackedbarseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_horizontalstackedbarseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_horizontalstackedbarseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_horizontalstackedbarseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_horizontalstackedbarseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_horizontalstackedbarseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_horizontalstackedbarseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_horizontalstackedbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_horizontalstackedbarseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_horizontalstackedbarseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_horizontalstackedbarseries_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_horizontalstackedbarseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_horizontalstackedbarseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_horizontalstackedbarseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_horizontalstackedbarseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_horizontalstackedbarseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_horizontalstackedbarseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_horizontalstackedbarseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_horizontalstackedbarseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_horizontalstackedbarseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_horizontalstackedbarseries_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_horizontalstackedbarseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_horizontalstackedbarseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_horizontalstackedbarseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_horizontalstackedbarseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_horizontalstackedbarseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_horizontalstackedbarseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_horizontalstackedbarseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_horizontalstackedbarseries_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_horizontalstackedbarseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_horizontalstackedbarseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_horizontalstackedbarseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_horizontalstackedbarseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_horizontalstackedbarseries_dynamic_property_names(void* self) {
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

QBindingStorage* q_horizontalstackedbarseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_horizontalstackedbarseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_horizontalstackedbarseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_horizontalstackedbarseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_horizontalstackedbarseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_horizontalstackedbarseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_horizontalstackedbarseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_horizontalstackedbarseries_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_horizontalstackedbarseries_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_horizontalstackedbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_horizontalstackedbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_horizontalstackedbarseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_horizontalstackedbarseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_horizontalstackedbarseries_event(void* self, void* event) {
    return QHorizontalStackedBarSeries_Event((QHorizontalStackedBarSeries*)self, (QEvent*)event);
}

bool q_horizontalstackedbarseries_qbase_event(void* self, void* event) {
    return QHorizontalStackedBarSeries_QBaseEvent((QHorizontalStackedBarSeries*)self, (QEvent*)event);
}

void q_horizontalstackedbarseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnEvent((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

bool q_horizontalstackedbarseries_event_filter(void* self, void* watched, void* event) {
    return QHorizontalStackedBarSeries_EventFilter((QHorizontalStackedBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_horizontalstackedbarseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QHorizontalStackedBarSeries_QBaseEventFilter((QHorizontalStackedBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_horizontalstackedbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHorizontalStackedBarSeries_OnEventFilter((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_timer_event(void* self, void* event) {
    QHorizontalStackedBarSeries_TimerEvent((QHorizontalStackedBarSeries*)self, (QTimerEvent*)event);
}

void q_horizontalstackedbarseries_qbase_timer_event(void* self, void* event) {
    QHorizontalStackedBarSeries_QBaseTimerEvent((QHorizontalStackedBarSeries*)self, (QTimerEvent*)event);
}

void q_horizontalstackedbarseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnTimerEvent((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_child_event(void* self, void* event) {
    QHorizontalStackedBarSeries_ChildEvent((QHorizontalStackedBarSeries*)self, (QChildEvent*)event);
}

void q_horizontalstackedbarseries_qbase_child_event(void* self, void* event) {
    QHorizontalStackedBarSeries_QBaseChildEvent((QHorizontalStackedBarSeries*)self, (QChildEvent*)event);
}

void q_horizontalstackedbarseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnChildEvent((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_custom_event(void* self, void* event) {
    QHorizontalStackedBarSeries_CustomEvent((QHorizontalStackedBarSeries*)self, (QEvent*)event);
}

void q_horizontalstackedbarseries_qbase_custom_event(void* self, void* event) {
    QHorizontalStackedBarSeries_QBaseCustomEvent((QHorizontalStackedBarSeries*)self, (QEvent*)event);
}

void q_horizontalstackedbarseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnCustomEvent((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_connect_notify(void* self, void* signal) {
    QHorizontalStackedBarSeries_ConnectNotify((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalstackedbarseries_qbase_connect_notify(void* self, void* signal) {
    QHorizontalStackedBarSeries_QBaseConnectNotify((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalstackedbarseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnConnectNotify((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_disconnect_notify(void* self, void* signal) {
    QHorizontalStackedBarSeries_DisconnectNotify((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalstackedbarseries_qbase_disconnect_notify(void* self, void* signal) {
    QHorizontalStackedBarSeries_QBaseDisconnectNotify((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalstackedbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnDisconnectNotify((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

QObject* q_horizontalstackedbarseries_sender(void* self) {
    return QHorizontalStackedBarSeries_Sender((QHorizontalStackedBarSeries*)self);
}

QObject* q_horizontalstackedbarseries_qbase_sender(void* self) {
    return QHorizontalStackedBarSeries_QBaseSender((QHorizontalStackedBarSeries*)self);
}

void q_horizontalstackedbarseries_on_sender(void* self, QObject* (*slot)()) {
    QHorizontalStackedBarSeries_OnSender((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

int32_t q_horizontalstackedbarseries_sender_signal_index(void* self) {
    return QHorizontalStackedBarSeries_SenderSignalIndex((QHorizontalStackedBarSeries*)self);
}

int32_t q_horizontalstackedbarseries_qbase_sender_signal_index(void* self) {
    return QHorizontalStackedBarSeries_QBaseSenderSignalIndex((QHorizontalStackedBarSeries*)self);
}

void q_horizontalstackedbarseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHorizontalStackedBarSeries_OnSenderSignalIndex((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

int32_t q_horizontalstackedbarseries_receivers(void* self, const char* signal) {
    return QHorizontalStackedBarSeries_Receivers((QHorizontalStackedBarSeries*)self, signal);
}

int32_t q_horizontalstackedbarseries_qbase_receivers(void* self, const char* signal) {
    return QHorizontalStackedBarSeries_QBaseReceivers((QHorizontalStackedBarSeries*)self, signal);
}

void q_horizontalstackedbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHorizontalStackedBarSeries_OnReceivers((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

bool q_horizontalstackedbarseries_is_signal_connected(void* self, void* signal) {
    return QHorizontalStackedBarSeries_IsSignalConnected((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

bool q_horizontalstackedbarseries_qbase_is_signal_connected(void* self, void* signal) {
    return QHorizontalStackedBarSeries_QBaseIsSignalConnected((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalstackedbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnIsSignalConnected((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_horizontalstackedbarseries_delete(void* self) {
    QHorizontalStackedBarSeries_Delete((QHorizontalStackedBarSeries*)(self));
}
