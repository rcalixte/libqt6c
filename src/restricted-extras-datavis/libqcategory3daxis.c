#include "libqabstract3daxis.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqcategory3daxis.hpp"
#include "libqcategory3daxis.h"

QCategory3DAxis* q_category3daxis_new() {
    return QCategory3DAxis_New();
}

QCategory3DAxis* q_category3daxis_new2(void* parent) {
    return QCategory3DAxis_New2((QObject*)parent);
}

const QMetaObject* q_category3daxis_meta_object(const void* self) {
    return QCategory3DAxis_MetaObject((QCategory3DAxis*)self);
}

void q_category3daxis_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QCategory3DAxis_OnMetaObject((QCategory3DAxis*)self, (intptr_t)callback);
}

const QMetaObject* q_category3daxis_super_meta_object(const void* self) {
    return QCategory3DAxis_SuperMetaObject((QCategory3DAxis*)self);
}

void* q_category3daxis_metacast(void* self, const char* param1) {
    return QCategory3DAxis_Metacast((QCategory3DAxis*)self, param1);
}

void q_category3daxis_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QCategory3DAxis_OnMetacast((QCategory3DAxis*)self, (intptr_t)callback);
}

void* q_category3daxis_super_metacast(void* self, const char* param1) {
    return QCategory3DAxis_SuperMetacast((QCategory3DAxis*)self, param1);
}

int32_t q_category3daxis_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCategory3DAxis_Metacall((QCategory3DAxis*)self, param1, param2, param3);
}

void q_category3daxis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QCategory3DAxis_OnMetacall((QCategory3DAxis*)self, (intptr_t)callback);
}

int32_t q_category3daxis_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCategory3DAxis_SuperMetacall((QCategory3DAxis*)self, param1, param2, param3);
}

const char* q_category3daxis_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_category3daxis_set_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_category3daxis_set_labels\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QCategory3DAxis_SetLabels((QCategory3DAxis*)self, labels_list);
    free(labels_qstr);
}

const char** q_category3daxis_labels(const void* self) {
    libqt_list _arr = QCategory3DAxis_Labels((QCategory3DAxis*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_category3daxis_labels\n");
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

void q_category3daxis_labels_changed(void* self) {
    QCategory3DAxis_LabelsChanged((QCategory3DAxis*)self);
}

void q_category3daxis_on_labels_changed(void* self, void (*callback)(void*)) {
    QCategory3DAxis_Connect_LabelsChanged((QCategory3DAxis*)self, (intptr_t)callback);
}

const char* q_category3daxis_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_category3daxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_category3daxis_set_title(void* self, const char* title) {
    QAbstract3DAxis_SetTitle((QAbstract3DAxis*)self, qstring(title));
}

const char* q_category3daxis_title(const void* self) {
    libqt_string _str = QAbstract3DAxis_Title((QAbstract3DAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_category3daxis_orientation(const void* self) {
    return QAbstract3DAxis_Orientation((QAbstract3DAxis*)self);
}

int32_t q_category3daxis_type(const void* self) {
    return QAbstract3DAxis_Type((QAbstract3DAxis*)self);
}

void q_category3daxis_set_min(void* self, float min) {
    QAbstract3DAxis_SetMin((QAbstract3DAxis*)self, min);
}

float q_category3daxis_min(const void* self) {
    return QAbstract3DAxis_Min((QAbstract3DAxis*)self);
}

void q_category3daxis_set_max(void* self, float max) {
    QAbstract3DAxis_SetMax((QAbstract3DAxis*)self, max);
}

float q_category3daxis_max(const void* self) {
    return QAbstract3DAxis_Max((QAbstract3DAxis*)self);
}

void q_category3daxis_set_auto_adjust_range(void* self, bool autoAdjust) {
    QAbstract3DAxis_SetAutoAdjustRange((QAbstract3DAxis*)self, autoAdjust);
}

bool q_category3daxis_is_auto_adjust_range(const void* self) {
    return QAbstract3DAxis_IsAutoAdjustRange((QAbstract3DAxis*)self);
}

void q_category3daxis_set_range(void* self, float min, float max) {
    QAbstract3DAxis_SetRange((QAbstract3DAxis*)self, min, max);
}

void q_category3daxis_set_label_auto_rotation(void* self, float angle) {
    QAbstract3DAxis_SetLabelAutoRotation((QAbstract3DAxis*)self, angle);
}

float q_category3daxis_label_auto_rotation(const void* self) {
    return QAbstract3DAxis_LabelAutoRotation((QAbstract3DAxis*)self);
}

void q_category3daxis_set_title_visible(void* self, bool visible) {
    QAbstract3DAxis_SetTitleVisible((QAbstract3DAxis*)self, visible);
}

bool q_category3daxis_is_title_visible(const void* self) {
    return QAbstract3DAxis_IsTitleVisible((QAbstract3DAxis*)self);
}

void q_category3daxis_set_title_fixed(void* self, bool fixed) {
    QAbstract3DAxis_SetTitleFixed((QAbstract3DAxis*)self, fixed);
}

bool q_category3daxis_is_title_fixed(const void* self) {
    return QAbstract3DAxis_IsTitleFixed((QAbstract3DAxis*)self);
}

void q_category3daxis_title_changed(void* self, const char* newTitle) {
    QAbstract3DAxis_TitleChanged((QAbstract3DAxis*)self, qstring(newTitle));
}

void q_category3daxis_on_title_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstract3DAxis_Connect_TitleChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_orientation_changed(void* self, int32_t orientation) {
    QAbstract3DAxis_OrientationChanged((QAbstract3DAxis*)self, orientation);
}

void q_category3daxis_on_orientation_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DAxis_Connect_OrientationChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_min_changed(void* self, float value) {
    QAbstract3DAxis_MinChanged((QAbstract3DAxis*)self, value);
}

void q_category3daxis_on_min_changed(void* self, void (*callback)(void*, float)) {
    QAbstract3DAxis_Connect_MinChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_max_changed(void* self, float value) {
    QAbstract3DAxis_MaxChanged((QAbstract3DAxis*)self, value);
}

void q_category3daxis_on_max_changed(void* self, void (*callback)(void*, float)) {
    QAbstract3DAxis_Connect_MaxChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_range_changed(void* self, float min, float max) {
    QAbstract3DAxis_RangeChanged((QAbstract3DAxis*)self, min, max);
}

void q_category3daxis_on_range_changed(void* self, void (*callback)(void*, float, float)) {
    QAbstract3DAxis_Connect_RangeChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_auto_adjust_range_changed(void* self, bool autoAdjust) {
    QAbstract3DAxis_AutoAdjustRangeChanged((QAbstract3DAxis*)self, autoAdjust);
}

void q_category3daxis_on_auto_adjust_range_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DAxis_Connect_AutoAdjustRangeChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_label_auto_rotation_changed(void* self, float angle) {
    QAbstract3DAxis_LabelAutoRotationChanged((QAbstract3DAxis*)self, angle);
}

void q_category3daxis_on_label_auto_rotation_changed(void* self, void (*callback)(void*, float)) {
    QAbstract3DAxis_Connect_LabelAutoRotationChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_title_visibility_changed(void* self, bool visible) {
    QAbstract3DAxis_TitleVisibilityChanged((QAbstract3DAxis*)self, visible);
}

void q_category3daxis_on_title_visibility_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DAxis_Connect_TitleVisibilityChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_title_fixed_changed(void* self, bool fixed) {
    QAbstract3DAxis_TitleFixedChanged((QAbstract3DAxis*)self, fixed);
}

void q_category3daxis_on_title_fixed_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DAxis_Connect_TitleFixedChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

const char* q_category3daxis_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_category3daxis_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_category3daxis_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_category3daxis_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_category3daxis_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_category3daxis_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_category3daxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_category3daxis_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_category3daxis_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_category3daxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_category3daxis_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_category3daxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_category3daxis_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_category3daxis_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_category3daxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_category3daxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_category3daxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_category3daxis_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_category3daxis_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_category3daxis_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_category3daxis_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_category3daxis_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_category3daxis_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_category3daxis_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_category3daxis_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_category3daxis_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_category3daxis_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_category3daxis_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_category3daxis_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_category3daxis_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_category3daxis_dynamic_property_names\n");
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

QBindingStorage* q_category3daxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_category3daxis_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_category3daxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_category3daxis_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_category3daxis_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_category3daxis_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_category3daxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_category3daxis_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_category3daxis_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_category3daxis_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_category3daxis_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_category3daxis_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_category3daxis_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_category3daxis_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_category3daxis_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_category3daxis_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_category3daxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_category3daxis_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_category3daxis_event(void* self, void* event) {
    return QCategory3DAxis_Event((QCategory3DAxis*)self, (QEvent*)event);
}

bool q_category3daxis_super_event(void* self, void* event) {
    return QCategory3DAxis_SuperEvent((QCategory3DAxis*)self, (QEvent*)event);
}

void q_category3daxis_on_event(void* self, bool (*callback)(void*, void*)) {
    QCategory3DAxis_OnEvent((QCategory3DAxis*)self, (intptr_t)callback);
}

bool q_category3daxis_event_filter(void* self, void* watched, void* event) {
    return QCategory3DAxis_EventFilter((QCategory3DAxis*)self, (QObject*)watched, (QEvent*)event);
}

bool q_category3daxis_super_event_filter(void* self, void* watched, void* event) {
    return QCategory3DAxis_SuperEventFilter((QCategory3DAxis*)self, (QObject*)watched, (QEvent*)event);
}

void q_category3daxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCategory3DAxis_OnEventFilter((QCategory3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_timer_event(void* self, void* event) {
    QCategory3DAxis_TimerEvent((QCategory3DAxis*)self, (QTimerEvent*)event);
}

void q_category3daxis_super_timer_event(void* self, void* event) {
    QCategory3DAxis_SuperTimerEvent((QCategory3DAxis*)self, (QTimerEvent*)event);
}

void q_category3daxis_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCategory3DAxis_OnTimerEvent((QCategory3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_child_event(void* self, void* event) {
    QCategory3DAxis_ChildEvent((QCategory3DAxis*)self, (QChildEvent*)event);
}

void q_category3daxis_super_child_event(void* self, void* event) {
    QCategory3DAxis_SuperChildEvent((QCategory3DAxis*)self, (QChildEvent*)event);
}

void q_category3daxis_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCategory3DAxis_OnChildEvent((QCategory3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_custom_event(void* self, void* event) {
    QCategory3DAxis_CustomEvent((QCategory3DAxis*)self, (QEvent*)event);
}

void q_category3daxis_super_custom_event(void* self, void* event) {
    QCategory3DAxis_SuperCustomEvent((QCategory3DAxis*)self, (QEvent*)event);
}

void q_category3daxis_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCategory3DAxis_OnCustomEvent((QCategory3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_connect_notify(void* self, const void* signal) {
    QCategory3DAxis_ConnectNotify((QCategory3DAxis*)self, (QMetaMethod*)signal);
}

void q_category3daxis_super_connect_notify(void* self, const void* signal) {
    QCategory3DAxis_SuperConnectNotify((QCategory3DAxis*)self, (QMetaMethod*)signal);
}

void q_category3daxis_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QCategory3DAxis_OnConnectNotify((QCategory3DAxis*)self, (intptr_t)callback);
}

void q_category3daxis_disconnect_notify(void* self, const void* signal) {
    QCategory3DAxis_DisconnectNotify((QCategory3DAxis*)self, (QMetaMethod*)signal);
}

void q_category3daxis_super_disconnect_notify(void* self, const void* signal) {
    QCategory3DAxis_SuperDisconnectNotify((QCategory3DAxis*)self, (QMetaMethod*)signal);
}

void q_category3daxis_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QCategory3DAxis_OnDisconnectNotify((QCategory3DAxis*)self, (intptr_t)callback);
}

QObject* q_category3daxis_sender(const void* self) {
    return QCategory3DAxis_Sender((QCategory3DAxis*)self);
}

int32_t q_category3daxis_sender_signal_index(const void* self) {
    return QCategory3DAxis_SenderSignalIndex((QCategory3DAxis*)self);
}

int32_t q_category3daxis_receivers(const void* self, const char* signal) {
    return QCategory3DAxis_Receivers((QCategory3DAxis*)self, signal);
}

bool q_category3daxis_is_signal_connected(const void* self, const void* signal) {
    return QCategory3DAxis_IsSignalConnected((QCategory3DAxis*)self, (QMetaMethod*)signal);
}

void q_category3daxis_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_category3daxis_delete(void* self) {
    QCategory3DAxis_Delete((QCategory3DAxis*)(self));
}
