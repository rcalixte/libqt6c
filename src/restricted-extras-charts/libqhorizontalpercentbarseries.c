#include "libqabstractbarseries.hpp"
#include "libqabstractseries.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqhorizontalpercentbarseries.hpp"
#include "libqhorizontalpercentbarseries.h"

QHorizontalPercentBarSeries* q_horizontalpercentbarseries_new() {
    return QHorizontalPercentBarSeries_new();
}

QHorizontalPercentBarSeries* q_horizontalpercentbarseries_new2(void* parent) {
    return QHorizontalPercentBarSeries_new2((QObject*)parent);
}

const QMetaObject* q_horizontalpercentbarseries_meta_object(void* self) {
    return QHorizontalPercentBarSeries_MetaObject((QHorizontalPercentBarSeries*)self);
}

void q_horizontalpercentbarseries_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QHorizontalPercentBarSeries_OnMetaObject((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

const QMetaObject* q_horizontalpercentbarseries_qbase_meta_object(void* self) {
    return QHorizontalPercentBarSeries_QBaseMetaObject((QHorizontalPercentBarSeries*)self);
}

void* q_horizontalpercentbarseries_metacast(void* self, const char* param1) {
    return QHorizontalPercentBarSeries_Metacast((QHorizontalPercentBarSeries*)self, param1);
}

void q_horizontalpercentbarseries_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QHorizontalPercentBarSeries_OnMetacast((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

void* q_horizontalpercentbarseries_qbase_metacast(void* self, const char* param1) {
    return QHorizontalPercentBarSeries_QBaseMetacast((QHorizontalPercentBarSeries*)self, param1);
}

int32_t q_horizontalpercentbarseries_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHorizontalPercentBarSeries_Metacall((QHorizontalPercentBarSeries*)self, param1, param2, param3);
}

void q_horizontalpercentbarseries_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QHorizontalPercentBarSeries_OnMetacall((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

int32_t q_horizontalpercentbarseries_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QHorizontalPercentBarSeries_QBaseMetacall((QHorizontalPercentBarSeries*)self, param1, param2, param3);
}

const char* q_horizontalpercentbarseries_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_horizontalpercentbarseries_type(void* self) {
    return QHorizontalPercentBarSeries_Type((QHorizontalPercentBarSeries*)self);
}

void q_horizontalpercentbarseries_on_type(void* self, int32_t (*callback)()) {
    QHorizontalPercentBarSeries_OnType((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

int32_t q_horizontalpercentbarseries_qbase_type(void* self) {
    return QHorizontalPercentBarSeries_QBaseType((QHorizontalPercentBarSeries*)self);
}

const char* q_horizontalpercentbarseries_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_horizontalpercentbarseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_horizontalpercentbarseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

double q_horizontalpercentbarseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

bool q_horizontalpercentbarseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_horizontalpercentbarseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_horizontalpercentbarseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

bool q_horizontalpercentbarseries_append2(void* self, libqt_list /* of QBarSet* */ sets) {
    return QAbstractBarSeries_Append2((QAbstractBarSeries*)self, sets);
}

bool q_horizontalpercentbarseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

int32_t q_horizontalpercentbarseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

libqt_list /* of QBarSet* */ q_horizontalpercentbarseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

void q_horizontalpercentbarseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

void q_horizontalpercentbarseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

bool q_horizontalpercentbarseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

void q_horizontalpercentbarseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

const char* q_horizontalpercentbarseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_horizontalpercentbarseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

double q_horizontalpercentbarseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

void q_horizontalpercentbarseries_set_labels_position(void* self, int32_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

int32_t q_horizontalpercentbarseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

void q_horizontalpercentbarseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

int32_t q_horizontalpercentbarseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

void q_horizontalpercentbarseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_horizontalpercentbarseries_on_clicked(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

void q_horizontalpercentbarseries_on_hovered(void* self, void (*callback)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_horizontalpercentbarseries_on_pressed(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_horizontalpercentbarseries_on_released(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

void q_horizontalpercentbarseries_on_double_clicked(void* self, void (*callback)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

void q_horizontalpercentbarseries_on_count_changed(void* self, void (*callback)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

void q_horizontalpercentbarseries_on_labels_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

void q_horizontalpercentbarseries_on_labels_format_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_labels_position_changed(void* self, int32_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

void q_horizontalpercentbarseries_on_labels_position_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

void q_horizontalpercentbarseries_on_labels_angle_changed(void* self, void (*callback)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

void q_horizontalpercentbarseries_on_labels_precision_changed(void* self, void (*callback)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_barsets_added(void* self, libqt_list /* of QBarSet* */ sets) {
    QAbstractBarSeries_BarsetsAdded((QAbstractBarSeries*)self, sets);
}

void q_horizontalpercentbarseries_on_barsets_added(void* self, void (*callback)(void*, libqt_list /* of QBarSet* */)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_barsets_removed(void* self, libqt_list /* of QBarSet* */ sets) {
    QAbstractBarSeries_BarsetsRemoved((QAbstractBarSeries*)self, sets);
}

void q_horizontalpercentbarseries_on_barsets_removed(void* self, void (*callback)(void*, libqt_list /* of QBarSet* */)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

void q_horizontalpercentbarseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_horizontalpercentbarseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_horizontalpercentbarseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_horizontalpercentbarseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_horizontalpercentbarseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_horizontalpercentbarseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_horizontalpercentbarseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_horizontalpercentbarseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_horizontalpercentbarseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_horizontalpercentbarseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_horizontalpercentbarseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_horizontalpercentbarseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_horizontalpercentbarseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_horizontalpercentbarseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_horizontalpercentbarseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_horizontalpercentbarseries_on_name_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_horizontalpercentbarseries_on_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_horizontalpercentbarseries_on_opacity_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_horizontalpercentbarseries_on_use_open_g_l_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_horizontalpercentbarseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_horizontalpercentbarseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_horizontalpercentbarseries_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_horizontalpercentbarseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_horizontalpercentbarseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_horizontalpercentbarseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_horizontalpercentbarseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_horizontalpercentbarseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_horizontalpercentbarseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_horizontalpercentbarseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_horizontalpercentbarseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_horizontalpercentbarseries_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_horizontalpercentbarseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_horizontalpercentbarseries_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_horizontalpercentbarseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_horizontalpercentbarseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_horizontalpercentbarseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_horizontalpercentbarseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_horizontalpercentbarseries_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_horizontalpercentbarseries_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_horizontalpercentbarseries_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_horizontalpercentbarseries_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_horizontalpercentbarseries_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_horizontalpercentbarseries_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_horizontalpercentbarseries_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_horizontalpercentbarseries_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_horizontalpercentbarseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_horizontalpercentbarseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_horizontalpercentbarseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_horizontalpercentbarseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_horizontalpercentbarseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_horizontalpercentbarseries_dynamic_property_names\n");
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

QBindingStorage* q_horizontalpercentbarseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_horizontalpercentbarseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_horizontalpercentbarseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_horizontalpercentbarseries_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_horizontalpercentbarseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_horizontalpercentbarseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_horizontalpercentbarseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_horizontalpercentbarseries_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_horizontalpercentbarseries_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_horizontalpercentbarseries_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_horizontalpercentbarseries_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_horizontalpercentbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_horizontalpercentbarseries_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_horizontalpercentbarseries_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_horizontalpercentbarseries_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_horizontalpercentbarseries_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_horizontalpercentbarseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_horizontalpercentbarseries_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_horizontalpercentbarseries_event(void* self, void* event) {
    return QHorizontalPercentBarSeries_Event((QHorizontalPercentBarSeries*)self, (QEvent*)event);
}

bool q_horizontalpercentbarseries_qbase_event(void* self, void* event) {
    return QHorizontalPercentBarSeries_QBaseEvent((QHorizontalPercentBarSeries*)self, (QEvent*)event);
}

void q_horizontalpercentbarseries_on_event(void* self, bool (*callback)(void*, void*)) {
    QHorizontalPercentBarSeries_OnEvent((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

bool q_horizontalpercentbarseries_event_filter(void* self, void* watched, void* event) {
    return QHorizontalPercentBarSeries_EventFilter((QHorizontalPercentBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_horizontalpercentbarseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QHorizontalPercentBarSeries_QBaseEventFilter((QHorizontalPercentBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_horizontalpercentbarseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QHorizontalPercentBarSeries_OnEventFilter((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_timer_event(void* self, void* event) {
    QHorizontalPercentBarSeries_TimerEvent((QHorizontalPercentBarSeries*)self, (QTimerEvent*)event);
}

void q_horizontalpercentbarseries_qbase_timer_event(void* self, void* event) {
    QHorizontalPercentBarSeries_QBaseTimerEvent((QHorizontalPercentBarSeries*)self, (QTimerEvent*)event);
}

void q_horizontalpercentbarseries_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QHorizontalPercentBarSeries_OnTimerEvent((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_child_event(void* self, void* event) {
    QHorizontalPercentBarSeries_ChildEvent((QHorizontalPercentBarSeries*)self, (QChildEvent*)event);
}

void q_horizontalpercentbarseries_qbase_child_event(void* self, void* event) {
    QHorizontalPercentBarSeries_QBaseChildEvent((QHorizontalPercentBarSeries*)self, (QChildEvent*)event);
}

void q_horizontalpercentbarseries_on_child_event(void* self, void (*callback)(void*, void*)) {
    QHorizontalPercentBarSeries_OnChildEvent((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_custom_event(void* self, void* event) {
    QHorizontalPercentBarSeries_CustomEvent((QHorizontalPercentBarSeries*)self, (QEvent*)event);
}

void q_horizontalpercentbarseries_qbase_custom_event(void* self, void* event) {
    QHorizontalPercentBarSeries_QBaseCustomEvent((QHorizontalPercentBarSeries*)self, (QEvent*)event);
}

void q_horizontalpercentbarseries_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QHorizontalPercentBarSeries_OnCustomEvent((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_connect_notify(void* self, void* signal) {
    QHorizontalPercentBarSeries_ConnectNotify((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalpercentbarseries_qbase_connect_notify(void* self, void* signal) {
    QHorizontalPercentBarSeries_QBaseConnectNotify((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalpercentbarseries_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QHorizontalPercentBarSeries_OnConnectNotify((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_disconnect_notify(void* self, void* signal) {
    QHorizontalPercentBarSeries_DisconnectNotify((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalpercentbarseries_qbase_disconnect_notify(void* self, void* signal) {
    QHorizontalPercentBarSeries_QBaseDisconnectNotify((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalpercentbarseries_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QHorizontalPercentBarSeries_OnDisconnectNotify((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

QObject* q_horizontalpercentbarseries_sender(void* self) {
    return QHorizontalPercentBarSeries_Sender((QHorizontalPercentBarSeries*)self);
}

QObject* q_horizontalpercentbarseries_qbase_sender(void* self) {
    return QHorizontalPercentBarSeries_QBaseSender((QHorizontalPercentBarSeries*)self);
}

void q_horizontalpercentbarseries_on_sender(void* self, QObject* (*callback)()) {
    QHorizontalPercentBarSeries_OnSender((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

int32_t q_horizontalpercentbarseries_sender_signal_index(void* self) {
    return QHorizontalPercentBarSeries_SenderSignalIndex((QHorizontalPercentBarSeries*)self);
}

int32_t q_horizontalpercentbarseries_qbase_sender_signal_index(void* self) {
    return QHorizontalPercentBarSeries_QBaseSenderSignalIndex((QHorizontalPercentBarSeries*)self);
}

void q_horizontalpercentbarseries_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QHorizontalPercentBarSeries_OnSenderSignalIndex((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

int32_t q_horizontalpercentbarseries_receivers(void* self, const char* signal) {
    return QHorizontalPercentBarSeries_Receivers((QHorizontalPercentBarSeries*)self, signal);
}

int32_t q_horizontalpercentbarseries_qbase_receivers(void* self, const char* signal) {
    return QHorizontalPercentBarSeries_QBaseReceivers((QHorizontalPercentBarSeries*)self, signal);
}

void q_horizontalpercentbarseries_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QHorizontalPercentBarSeries_OnReceivers((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

bool q_horizontalpercentbarseries_is_signal_connected(void* self, void* signal) {
    return QHorizontalPercentBarSeries_IsSignalConnected((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

bool q_horizontalpercentbarseries_qbase_is_signal_connected(void* self, void* signal) {
    return QHorizontalPercentBarSeries_QBaseIsSignalConnected((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

void q_horizontalpercentbarseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QHorizontalPercentBarSeries_OnIsSignalConnected((QHorizontalPercentBarSeries*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_horizontalpercentbarseries_delete(void* self) {
    QHorizontalPercentBarSeries_Delete((QHorizontalPercentBarSeries*)(self));
}
