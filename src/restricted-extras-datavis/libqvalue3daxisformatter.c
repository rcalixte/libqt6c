#include "../libqcoreevent.hpp"
#include "../libqlocale.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqvalue3daxis.hpp"
#include "libqvalue3daxisformatter.hpp"
#include "libqvalue3daxisformatter.h"

QValue3DAxisFormatter* q_value3daxisformatter_new() {
    return QValue3DAxisFormatter_New();
}

QValue3DAxisFormatter* q_value3daxisformatter_new2(void* parent) {
    return QValue3DAxisFormatter_New2((QObject*)parent);
}

const QMetaObject* q_value3daxisformatter_meta_object(const void* self) {
    return QValue3DAxisFormatter_MetaObject((QValue3DAxisFormatter*)self);
}

void q_value3daxisformatter_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QValue3DAxisFormatter_OnMetaObject((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

const QMetaObject* q_value3daxisformatter_super_meta_object(const void* self) {
    return QValue3DAxisFormatter_SuperMetaObject((QValue3DAxisFormatter*)self);
}

void* q_value3daxisformatter_metacast(void* self, const char* param1) {
    return QValue3DAxisFormatter_Metacast((QValue3DAxisFormatter*)self, param1);
}

void q_value3daxisformatter_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QValue3DAxisFormatter_OnMetacast((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

void* q_value3daxisformatter_super_metacast(void* self, const char* param1) {
    return QValue3DAxisFormatter_SuperMetacast((QValue3DAxisFormatter*)self, param1);
}

int32_t q_value3daxisformatter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QValue3DAxisFormatter_Metacall((QValue3DAxisFormatter*)self, param1, param2, param3);
}

void q_value3daxisformatter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QValue3DAxisFormatter_OnMetacall((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

int32_t q_value3daxisformatter_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QValue3DAxisFormatter_SuperMetacall((QValue3DAxisFormatter*)self, param1, param2, param3);
}

const char* q_value3daxisformatter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_value3daxisformatter_set_allow_negatives(void* self, bool allow) {
    QValue3DAxisFormatter_SetAllowNegatives((QValue3DAxisFormatter*)self, allow);
}

bool q_value3daxisformatter_allow_negatives(const void* self) {
    return QValue3DAxisFormatter_AllowNegatives((QValue3DAxisFormatter*)self);
}

void q_value3daxisformatter_set_allow_zero(void* self, bool allow) {
    QValue3DAxisFormatter_SetAllowZero((QValue3DAxisFormatter*)self, allow);
}

bool q_value3daxisformatter_allow_zero(const void* self) {
    return QValue3DAxisFormatter_AllowZero((QValue3DAxisFormatter*)self);
}

QValue3DAxisFormatter* q_value3daxisformatter_create_new_instance(const void* self) {
    return QValue3DAxisFormatter_CreateNewInstance((QValue3DAxisFormatter*)self);
}

void q_value3daxisformatter_on_create_new_instance(void* self, QValue3DAxisFormatter* (*callback)(const void*)) {
    QValue3DAxisFormatter_OnCreateNewInstance((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

QValue3DAxisFormatter* q_value3daxisformatter_super_create_new_instance(const void* self) {
    return QValue3DAxisFormatter_SuperCreateNewInstance((QValue3DAxisFormatter*)self);
}

void q_value3daxisformatter_recalculate(void* self) {
    QValue3DAxisFormatter_Recalculate((QValue3DAxisFormatter*)self);
}

void q_value3daxisformatter_on_recalculate(void* self, void (*callback)(void*)) {
    QValue3DAxisFormatter_OnRecalculate((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_value3daxisformatter_super_recalculate(void* self) {
    QValue3DAxisFormatter_SuperRecalculate((QValue3DAxisFormatter*)self);
}

const char* q_value3daxisformatter_string_for_value(const void* self, double value, const char* format) {
    libqt_string _str = QValue3DAxisFormatter_StringForValue((QValue3DAxisFormatter*)self, value, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_value3daxisformatter_on_string_for_value(void* self, const char* (*callback)(const void*, double, const char*)) {
    QValue3DAxisFormatter_OnStringForValue((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

const char* q_value3daxisformatter_super_string_for_value(const void* self, double value, const char* format) {
    libqt_string _str = QValue3DAxisFormatter_SuperStringForValue((QValue3DAxisFormatter*)self, value, qstring(format));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

float q_value3daxisformatter_position_at(const void* self, float value) {
    return QValue3DAxisFormatter_PositionAt((QValue3DAxisFormatter*)self, value);
}

void q_value3daxisformatter_on_position_at(void* self, float (*callback)(const void*, float)) {
    QValue3DAxisFormatter_OnPositionAt((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

float q_value3daxisformatter_super_position_at(const void* self, float value) {
    return QValue3DAxisFormatter_SuperPositionAt((QValue3DAxisFormatter*)self, value);
}

float q_value3daxisformatter_value_at(const void* self, float position) {
    return QValue3DAxisFormatter_ValueAt((QValue3DAxisFormatter*)self, position);
}

void q_value3daxisformatter_on_value_at(void* self, float (*callback)(const void*, float)) {
    QValue3DAxisFormatter_OnValueAt((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

float q_value3daxisformatter_super_value_at(const void* self, float position) {
    return QValue3DAxisFormatter_SuperValueAt((QValue3DAxisFormatter*)self, position);
}

void q_value3daxisformatter_populate_copy(const void* self, void* copy) {
    QValue3DAxisFormatter_PopulateCopy((QValue3DAxisFormatter*)self, (QValue3DAxisFormatter*)copy);
}

void q_value3daxisformatter_on_populate_copy(void* self, void (*callback)(const void*, void*)) {
    QValue3DAxisFormatter_OnPopulateCopy((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_value3daxisformatter_super_populate_copy(const void* self, void* copy) {
    QValue3DAxisFormatter_SuperPopulateCopy((QValue3DAxisFormatter*)self, (QValue3DAxisFormatter*)copy);
}

void q_value3daxisformatter_mark_dirty(void* self) {
    QValue3DAxisFormatter_MarkDirty((QValue3DAxisFormatter*)self);
}

QValue3DAxis* q_value3daxisformatter_axis(const void* self) {
    return QValue3DAxisFormatter_Axis((QValue3DAxisFormatter*)self);
}

libqt_list /* of float */ q_value3daxisformatter_grid_positions(const void* self) {
    libqt_list _arr = QValue3DAxisFormatter_GridPositions((QValue3DAxisFormatter*)self);
    return _arr;
}

libqt_list /* of float */ q_value3daxisformatter_sub_grid_positions(const void* self) {
    libqt_list _arr = QValue3DAxisFormatter_SubGridPositions((QValue3DAxisFormatter*)self);
    return _arr;
}

libqt_list /* of float */ q_value3daxisformatter_label_positions(const void* self) {
    libqt_list _arr = QValue3DAxisFormatter_LabelPositions((QValue3DAxisFormatter*)self);
    return _arr;
}

const char** q_value3daxisformatter_label_strings(const void* self) {
    libqt_list _arr = QValue3DAxisFormatter_LabelStrings((QValue3DAxisFormatter*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_value3daxisformatter_label_strings\n");
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

void q_value3daxisformatter_set_locale(void* self, const void* locale) {
    QValue3DAxisFormatter_SetLocale((QValue3DAxisFormatter*)self, (QLocale*)locale);
}

QLocale* q_value3daxisformatter_locale(const void* self) {
    return QValue3DAxisFormatter_Locale((QValue3DAxisFormatter*)self);
}

const char* q_value3daxisformatter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_value3daxisformatter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_value3daxisformatter_mark_dirty1(void* self, bool labelsChange) {
    QValue3DAxisFormatter_MarkDirty1((QValue3DAxisFormatter*)self, labelsChange);
}

const char* q_value3daxisformatter_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_value3daxisformatter_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_value3daxisformatter_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_value3daxisformatter_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_value3daxisformatter_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_value3daxisformatter_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_value3daxisformatter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_value3daxisformatter_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_value3daxisformatter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_value3daxisformatter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_value3daxisformatter_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_value3daxisformatter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_value3daxisformatter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_value3daxisformatter_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_value3daxisformatter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_value3daxisformatter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_value3daxisformatter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_value3daxisformatter_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_value3daxisformatter_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_value3daxisformatter_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_value3daxisformatter_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_value3daxisformatter_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_value3daxisformatter_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_value3daxisformatter_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_value3daxisformatter_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_value3daxisformatter_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_value3daxisformatter_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_value3daxisformatter_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_value3daxisformatter_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_value3daxisformatter_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_value3daxisformatter_dynamic_property_names\n");
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

QBindingStorage* q_value3daxisformatter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_value3daxisformatter_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_value3daxisformatter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_value3daxisformatter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_value3daxisformatter_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_value3daxisformatter_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_value3daxisformatter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_value3daxisformatter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_value3daxisformatter_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_value3daxisformatter_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_value3daxisformatter_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_value3daxisformatter_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_value3daxisformatter_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_value3daxisformatter_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_value3daxisformatter_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_value3daxisformatter_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_value3daxisformatter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_value3daxisformatter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_value3daxisformatter_event(void* self, void* event) {
    return QValue3DAxisFormatter_Event((QValue3DAxisFormatter*)self, (QEvent*)event);
}

bool q_value3daxisformatter_super_event(void* self, void* event) {
    return QValue3DAxisFormatter_SuperEvent((QValue3DAxisFormatter*)self, (QEvent*)event);
}

void q_value3daxisformatter_on_event(void* self, bool (*callback)(void*, void*)) {
    QValue3DAxisFormatter_OnEvent((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

bool q_value3daxisformatter_event_filter(void* self, void* watched, void* event) {
    return QValue3DAxisFormatter_EventFilter((QValue3DAxisFormatter*)self, (QObject*)watched, (QEvent*)event);
}

bool q_value3daxisformatter_super_event_filter(void* self, void* watched, void* event) {
    return QValue3DAxisFormatter_SuperEventFilter((QValue3DAxisFormatter*)self, (QObject*)watched, (QEvent*)event);
}

void q_value3daxisformatter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QValue3DAxisFormatter_OnEventFilter((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_value3daxisformatter_timer_event(void* self, void* event) {
    QValue3DAxisFormatter_TimerEvent((QValue3DAxisFormatter*)self, (QTimerEvent*)event);
}

void q_value3daxisformatter_super_timer_event(void* self, void* event) {
    QValue3DAxisFormatter_SuperTimerEvent((QValue3DAxisFormatter*)self, (QTimerEvent*)event);
}

void q_value3daxisformatter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QValue3DAxisFormatter_OnTimerEvent((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_value3daxisformatter_child_event(void* self, void* event) {
    QValue3DAxisFormatter_ChildEvent((QValue3DAxisFormatter*)self, (QChildEvent*)event);
}

void q_value3daxisformatter_super_child_event(void* self, void* event) {
    QValue3DAxisFormatter_SuperChildEvent((QValue3DAxisFormatter*)self, (QChildEvent*)event);
}

void q_value3daxisformatter_on_child_event(void* self, void (*callback)(void*, void*)) {
    QValue3DAxisFormatter_OnChildEvent((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_value3daxisformatter_custom_event(void* self, void* event) {
    QValue3DAxisFormatter_CustomEvent((QValue3DAxisFormatter*)self, (QEvent*)event);
}

void q_value3daxisformatter_super_custom_event(void* self, void* event) {
    QValue3DAxisFormatter_SuperCustomEvent((QValue3DAxisFormatter*)self, (QEvent*)event);
}

void q_value3daxisformatter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QValue3DAxisFormatter_OnCustomEvent((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_value3daxisformatter_connect_notify(void* self, const void* signal) {
    QValue3DAxisFormatter_ConnectNotify((QValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_value3daxisformatter_super_connect_notify(void* self, const void* signal) {
    QValue3DAxisFormatter_SuperConnectNotify((QValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_value3daxisformatter_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QValue3DAxisFormatter_OnConnectNotify((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

void q_value3daxisformatter_disconnect_notify(void* self, const void* signal) {
    QValue3DAxisFormatter_DisconnectNotify((QValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_value3daxisformatter_super_disconnect_notify(void* self, const void* signal) {
    QValue3DAxisFormatter_SuperDisconnectNotify((QValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_value3daxisformatter_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QValue3DAxisFormatter_OnDisconnectNotify((QValue3DAxisFormatter*)self, (intptr_t)callback);
}

QObject* q_value3daxisformatter_sender(const void* self) {
    return QValue3DAxisFormatter_Sender((QValue3DAxisFormatter*)self);
}

int32_t q_value3daxisformatter_sender_signal_index(const void* self) {
    return QValue3DAxisFormatter_SenderSignalIndex((QValue3DAxisFormatter*)self);
}

int32_t q_value3daxisformatter_receivers(const void* self, const char* signal) {
    return QValue3DAxisFormatter_Receivers((QValue3DAxisFormatter*)self, signal);
}

bool q_value3daxisformatter_is_signal_connected(const void* self, const void* signal) {
    return QValue3DAxisFormatter_IsSignalConnected((QValue3DAxisFormatter*)self, (QMetaMethod*)signal);
}

void q_value3daxisformatter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_value3daxisformatter_delete(void* self) {
    QValue3DAxisFormatter_Delete((QValue3DAxisFormatter*)(self));
}
