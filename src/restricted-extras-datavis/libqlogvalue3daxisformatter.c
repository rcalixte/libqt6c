#include "../libqcoreevent.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqvalue3daxis.hpp"
#include "libqvalue3daxisformatter.hpp"
#include "libqlogvalue3daxisformatter.hpp"
#include "libqlogvalue3daxisformatter.h"

QLogValue3DAxisFormatter* q_logvalue3daxisformatter_new() {
    return QLogValue3DAxisFormatter_New();
}

QLogValue3DAxisFormatter* q_logvalue3daxisformatter_new2(void* parent) {
    return QLogValue3DAxisFormatter_New2((QObject*)parent);
}

const QMetaObject* q_logvalue3daxisformatter_meta_object(const void* self) {
    return QLogValue3DAxisFormatter_MetaObject((QLogValue3DAxisFormatter*)self);
}

void q_logvalue3daxisformatter_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QLogValue3DAxisFormatter_OnMetaObject((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

const QMetaObject* q_logvalue3daxisformatter_super_meta_object(const void* self) {
    return QLogValue3DAxisFormatter_SuperMetaObject((QLogValue3DAxisFormatter*)self);
}

void* q_logvalue3daxisformatter_metacast(void* self, const char* param1) {
    return QLogValue3DAxisFormatter_Metacast((QLogValue3DAxisFormatter*)self, param1);
}

void q_logvalue3daxisformatter_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QLogValue3DAxisFormatter_OnMetacast((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void* q_logvalue3daxisformatter_super_metacast(void* self, const char* param1) {
    return QLogValue3DAxisFormatter_SuperMetacast((QLogValue3DAxisFormatter*)self, param1);
}

int32_t q_logvalue3daxisformatter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QLogValue3DAxisFormatter_Metacall((QLogValue3DAxisFormatter*)self, param1, param2, param3);
}

void q_logvalue3daxisformatter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QLogValue3DAxisFormatter_OnMetacall((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

int32_t q_logvalue3daxisformatter_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QLogValue3DAxisFormatter_SuperMetacall((QLogValue3DAxisFormatter*)self, param1, param2, param3);
}

const char* q_logvalue3daxisformatter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_logvalue3daxisformatter_set_base(void* self, double base) {
    QLogValue3DAxisFormatter_SetBase((QLogValue3DAxisFormatter*)self, base);
}

double q_logvalue3daxisformatter_base(const void* self) {
    return QLogValue3DAxisFormatter_Base((QLogValue3DAxisFormatter*)self);
}

void q_logvalue3daxisformatter_set_auto_sub_grid(void* self, bool enabled) {
    QLogValue3DAxisFormatter_SetAutoSubGrid((QLogValue3DAxisFormatter*)self, enabled);
}

bool q_logvalue3daxisformatter_auto_sub_grid(const void* self) {
    return QLogValue3DAxisFormatter_AutoSubGrid((QLogValue3DAxisFormatter*)self);
}

void q_logvalue3daxisformatter_set_show_edge_labels(void* self, bool enabled) {
    QLogValue3DAxisFormatter_SetShowEdgeLabels((QLogValue3DAxisFormatter*)self, enabled);
}

bool q_logvalue3daxisformatter_show_edge_labels(const void* self) {
    return QLogValue3DAxisFormatter_ShowEdgeLabels((QLogValue3DAxisFormatter*)self);
}

void q_logvalue3daxisformatter_base_changed(void* self, double base) {
    QLogValue3DAxisFormatter_BaseChanged((QLogValue3DAxisFormatter*)self, base);
}

void q_logvalue3daxisformatter_on_base_changed(void* self, void (*callback)(void*, double)) {
    QLogValue3DAxisFormatter_Connect_BaseChanged((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_auto_sub_grid_changed(void* self, bool enabled) {
    QLogValue3DAxisFormatter_AutoSubGridChanged((QLogValue3DAxisFormatter*)self, enabled);
}

void q_logvalue3daxisformatter_on_auto_sub_grid_changed(void* self, void (*callback)(void*, bool)) {
    QLogValue3DAxisFormatter_Connect_AutoSubGridChanged((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_show_edge_labels_changed(void* self, bool enabled) {
    QLogValue3DAxisFormatter_ShowEdgeLabelsChanged((QLogValue3DAxisFormatter*)self, enabled);
}

void q_logvalue3daxisformatter_on_show_edge_labels_changed(void* self, void (*callback)(void*, bool)) {
    QLogValue3DAxisFormatter_Connect_ShowEdgeLabelsChanged((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

QValue3DAxisFormatter* q_logvalue3daxisformatter_create_new_instance(const void* self) {
    return QLogValue3DAxisFormatter_CreateNewInstance((QLogValue3DAxisFormatter*)self);
}

void q_logvalue3daxisformatter_on_create_new_instance(void* self, QValue3DAxisFormatter* (*callback)(const void*)) {
    QLogValue3DAxisFormatter_OnCreateNewInstance((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

QValue3DAxisFormatter* q_logvalue3daxisformatter_super_create_new_instance(const void* self) {
    return QLogValue3DAxisFormatter_SuperCreateNewInstance((QLogValue3DAxisFormatter*)self);
}

void q_logvalue3daxisformatter_recalculate(void* self) {
    QLogValue3DAxisFormatter_Recalculate((QLogValue3DAxisFormatter*)self);
}

void q_logvalue3daxisformatter_on_recalculate(void* self, void (*callback)(void*)) {
    QLogValue3DAxisFormatter_OnRecalculate((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_super_recalculate(void* self) {
    QLogValue3DAxisFormatter_SuperRecalculate((QLogValue3DAxisFormatter*)self);
}

float q_logvalue3daxisformatter_position_at(const void* self, float value) {
    return QLogValue3DAxisFormatter_PositionAt((QLogValue3DAxisFormatter*)self, value);
}

void q_logvalue3daxisformatter_on_position_at(void* self, float (*callback)(const void*, float)) {
    QLogValue3DAxisFormatter_OnPositionAt((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

float q_logvalue3daxisformatter_super_position_at(const void* self, float value) {
    return QLogValue3DAxisFormatter_SuperPositionAt((QLogValue3DAxisFormatter*)self, value);
}

float q_logvalue3daxisformatter_value_at(const void* self, float position) {
    return QLogValue3DAxisFormatter_ValueAt((QLogValue3DAxisFormatter*)self, position);
}

void q_logvalue3daxisformatter_on_value_at(void* self, float (*callback)(const void*, float)) {
    QLogValue3DAxisFormatter_OnValueAt((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

float q_logvalue3daxisformatter_super_value_at(const void* self, float position) {
    return QLogValue3DAxisFormatter_SuperValueAt((QLogValue3DAxisFormatter*)self, position);
}

void q_logvalue3daxisformatter_populate_copy(const void* self, void* copy) {
    QLogValue3DAxisFormatter_PopulateCopy((QLogValue3DAxisFormatter*)self, (QValue3DAxisFormatter*)copy);
}

void q_logvalue3daxisformatter_on_populate_copy(void* self, void (*callback)(const void*, void*)) {
    QLogValue3DAxisFormatter_OnPopulateCopy((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_super_populate_copy(const void* self, void* copy) {
    QLogValue3DAxisFormatter_SuperPopulateCopy((QLogValue3DAxisFormatter*)self, (QValue3DAxisFormatter*)copy);
}

const char* q_logvalue3daxisformatter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_logvalue3daxisformatter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_logvalue3daxisformatter_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_logvalue3daxisformatter_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_logvalue3daxisformatter_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_logvalue3daxisformatter_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_logvalue3daxisformatter_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_logvalue3daxisformatter_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_logvalue3daxisformatter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_logvalue3daxisformatter_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_logvalue3daxisformatter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_logvalue3daxisformatter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_logvalue3daxisformatter_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_logvalue3daxisformatter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_logvalue3daxisformatter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_logvalue3daxisformatter_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_logvalue3daxisformatter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_logvalue3daxisformatter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_logvalue3daxisformatter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_logvalue3daxisformatter_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_logvalue3daxisformatter_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_logvalue3daxisformatter_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_logvalue3daxisformatter_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_logvalue3daxisformatter_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_logvalue3daxisformatter_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_logvalue3daxisformatter_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_logvalue3daxisformatter_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_logvalue3daxisformatter_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_logvalue3daxisformatter_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_logvalue3daxisformatter_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_logvalue3daxisformatter_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_logvalue3daxisformatter_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_logvalue3daxisformatter_dynamic_property_names\n");
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

QBindingStorage* q_logvalue3daxisformatter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_logvalue3daxisformatter_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_logvalue3daxisformatter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_logvalue3daxisformatter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_logvalue3daxisformatter_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_logvalue3daxisformatter_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_logvalue3daxisformatter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_logvalue3daxisformatter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_logvalue3daxisformatter_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_logvalue3daxisformatter_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_logvalue3daxisformatter_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_logvalue3daxisformatter_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_logvalue3daxisformatter_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_logvalue3daxisformatter_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_logvalue3daxisformatter_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_logvalue3daxisformatter_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_logvalue3daxisformatter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_logvalue3daxisformatter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

const char* q_logvalue3daxisformatter_string_for_value(const void* self, double value, const char* format) {
    libqt_string _str = QLogValue3DAxisFormatter_StringForValue((QLogValue3DAxisFormatter*)self, value, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_logvalue3daxisformatter_super_string_for_value(const void* self, double value, const char* format) {
    libqt_string _str = QLogValue3DAxisFormatter_SuperStringForValue((QLogValue3DAxisFormatter*)self, value, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_logvalue3daxisformatter_on_string_for_value(void* self, const char* (*callback)(const void*, double, const char*)) {
    QLogValue3DAxisFormatter_OnStringForValue((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

bool q_logvalue3daxisformatter_event(void* self, void* event) {
    return QLogValue3DAxisFormatter_Event((QLogValue3DAxisFormatter*)self, (QEvent*)event);
}

bool q_logvalue3daxisformatter_super_event(void* self, void* event) {
    return QLogValue3DAxisFormatter_SuperEvent((QLogValue3DAxisFormatter*)self, (QEvent*)event);
}

void q_logvalue3daxisformatter_on_event(void* self, bool (*callback)(void*, void*)) {
    QLogValue3DAxisFormatter_OnEvent((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

bool q_logvalue3daxisformatter_event_filter(void* self, void* watched, void* event) {
    return QLogValue3DAxisFormatter_EventFilter((QLogValue3DAxisFormatter*)self, (QObject*)watched, (QEvent*)event);
}

bool q_logvalue3daxisformatter_super_event_filter(void* self, void* watched, void* event) {
    return QLogValue3DAxisFormatter_SuperEventFilter((QLogValue3DAxisFormatter*)self, (QObject*)watched, (QEvent*)event);
}

void q_logvalue3daxisformatter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QLogValue3DAxisFormatter_OnEventFilter((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_timer_event(void* self, void* event) {
    QLogValue3DAxisFormatter_TimerEvent((QLogValue3DAxisFormatter*)self, (QTimerEvent*)event);
}

void q_logvalue3daxisformatter_super_timer_event(void* self, void* event) {
    QLogValue3DAxisFormatter_SuperTimerEvent((QLogValue3DAxisFormatter*)self, (QTimerEvent*)event);
}

void q_logvalue3daxisformatter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QLogValue3DAxisFormatter_OnTimerEvent((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_child_event(void* self, void* event) {
    QLogValue3DAxisFormatter_ChildEvent((QLogValue3DAxisFormatter*)self, (QChildEvent*)event);
}

void q_logvalue3daxisformatter_super_child_event(void* self, void* event) {
    QLogValue3DAxisFormatter_SuperChildEvent((QLogValue3DAxisFormatter*)self, (QChildEvent*)event);
}

void q_logvalue3daxisformatter_on_child_event(void* self, void (*callback)(void*, void*)) {
    QLogValue3DAxisFormatter_OnChildEvent((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_custom_event(void* self, void* event) {
    QLogValue3DAxisFormatter_CustomEvent((QLogValue3DAxisFormatter*)self, (QEvent*)event);
}

void q_logvalue3daxisformatter_super_custom_event(void* self, void* event) {
    QLogValue3DAxisFormatter_SuperCustomEvent((QLogValue3DAxisFormatter*)self, (QEvent*)event);
}

void q_logvalue3daxisformatter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QLogValue3DAxisFormatter_OnCustomEvent((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_connect_notify(void* self, const void* signal) {
    QLogValue3DAxisFormatter_ConnectNotify((QLogValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_logvalue3daxisformatter_super_connect_notify(void* self, const void* signal) {
    QLogValue3DAxisFormatter_SuperConnectNotify((QLogValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_logvalue3daxisformatter_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QLogValue3DAxisFormatter_OnConnectNotify((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_disconnect_notify(void* self, const void* signal) {
    QLogValue3DAxisFormatter_DisconnectNotify((QLogValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_logvalue3daxisformatter_super_disconnect_notify(void* self, const void* signal) {
    QLogValue3DAxisFormatter_SuperDisconnectNotify((QLogValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_logvalue3daxisformatter_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QLogValue3DAxisFormatter_OnDisconnectNotify((QLogValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_set_allow_negatives(void* self, bool allow) {
    QLogValue3DAxisFormatter_SetAllowNegatives((QLogValue3DAxisFormatter*)self, allow);
}

bool q_logvalue3daxisformatter_allow_negatives(const void* self) {
    return QLogValue3DAxisFormatter_AllowNegatives((QLogValue3DAxisFormatter*)self);
}

void q_logvalue3daxisformatter_set_allow_zero(void* self, bool allow) {
    QLogValue3DAxisFormatter_SetAllowZero((QLogValue3DAxisFormatter*)self, allow);
}

bool q_logvalue3daxisformatter_allow_zero(const void* self) {
    return QLogValue3DAxisFormatter_AllowZero((QLogValue3DAxisFormatter*)self);
}

void q_logvalue3daxisformatter_mark_dirty(void* self) {
    QLogValue3DAxisFormatter_MarkDirty((QLogValue3DAxisFormatter*)self);
}

QValue3DAxis* q_logvalue3daxisformatter_axis(const void* self) {
    return QLogValue3DAxisFormatter_Axis((QLogValue3DAxisFormatter*)self);
}

libqt_list /* of float */ q_logvalue3daxisformatter_grid_positions(const void* self) {
    libqt_list _arr = QLogValue3DAxisFormatter_GridPositions((QLogValue3DAxisFormatter*)self);
    return _arr;
}

libqt_list /* of float */ q_logvalue3daxisformatter_sub_grid_positions(const void* self) {
    libqt_list _arr = QLogValue3DAxisFormatter_SubGridPositions((QLogValue3DAxisFormatter*)self);
    return _arr;
}

libqt_list /* of float */ q_logvalue3daxisformatter_label_positions(const void* self) {
    libqt_list _arr = QLogValue3DAxisFormatter_LabelPositions((QLogValue3DAxisFormatter*)self);
    return _arr;
}

const char** q_logvalue3daxisformatter_label_strings(const void* self) {
    libqt_list _arr = QLogValue3DAxisFormatter_LabelStrings((QLogValue3DAxisFormatter*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_logvalue3daxisformatter_label_strings\n");
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

void q_logvalue3daxisformatter_set_locale(void* self, const void* locale) {
    QLogValue3DAxisFormatter_SetLocale((QLogValue3DAxisFormatter*)self, (QLocale*)locale);
}

QLocale* q_logvalue3daxisformatter_locale(const void* self) {
    return QLogValue3DAxisFormatter_Locale((QLogValue3DAxisFormatter*)self);
}

QObject* q_logvalue3daxisformatter_sender(const void* self) {
    return QLogValue3DAxisFormatter_Sender((QLogValue3DAxisFormatter*)self);
}

int32_t q_logvalue3daxisformatter_sender_signal_index(const void* self) {
    return QLogValue3DAxisFormatter_SenderSignalIndex((QLogValue3DAxisFormatter*)self);
}

int32_t q_logvalue3daxisformatter_receivers(const void* self, const char* signal) {
    return QLogValue3DAxisFormatter_Receivers((QLogValue3DAxisFormatter*)self, signal);
}

bool q_logvalue3daxisformatter_is_signal_connected(const void* self, const void* signal) {
    return QLogValue3DAxisFormatter_IsSignalConnected((QLogValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_logvalue3daxisformatter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_logvalue3daxisformatter_delete(void* self) {
    QLogValue3DAxisFormatter_Delete((QLogValue3DAxisFormatter*)(self));
}
