#include "libqabstract3daxis.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqvalue3daxisformatter.hpp"
#include "libqvalue3daxis.hpp"
#include "libqvalue3daxis.h"

QValue3DAxis* q_value3daxis_new() {
    return QValue3DAxis_New();
}

QValue3DAxis* q_value3daxis_new2(void* parent) {
    return QValue3DAxis_New2((QObject*)parent);
}

const QMetaObject* q_value3daxis_meta_object(const void* self) {
    return QValue3DAxis_MetaObject((QValue3DAxis*)self);
}

void q_value3daxis_on_meta_object(void* self, const QMetaObject* (*callback)(const void*)) {
    QValue3DAxis_OnMetaObject((QValue3DAxis*)self, (intptr_t)callback);
}

const QMetaObject* q_value3daxis_super_meta_object(const void* self) {
    return QValue3DAxis_SuperMetaObject((QValue3DAxis*)self);
}

void* q_value3daxis_metacast(void* self, const char* param1) {
    return QValue3DAxis_Metacast((QValue3DAxis*)self, param1);
}

void q_value3daxis_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QValue3DAxis_OnMetacast((QValue3DAxis*)self, (intptr_t)callback);
}

void* q_value3daxis_super_metacast(void* self, const char* param1) {
    return QValue3DAxis_SuperMetacast((QValue3DAxis*)self, param1);
}

int32_t q_value3daxis_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QValue3DAxis_Metacall((QValue3DAxis*)self, param1, param2, param3);
}

void q_value3daxis_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QValue3DAxis_OnMetacall((QValue3DAxis*)self, (intptr_t)callback);
}

int32_t q_value3daxis_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QValue3DAxis_SuperMetacall((QValue3DAxis*)self, param1, param2, param3);
}

const char* q_value3daxis_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_value3daxis_set_segment_count(void* self, int count) {
    QValue3DAxis_SetSegmentCount((QValue3DAxis*)self, count);
}

int32_t q_value3daxis_segment_count(const void* self) {
    return QValue3DAxis_SegmentCount((QValue3DAxis*)self);
}

void q_value3daxis_set_sub_segment_count(void* self, int count) {
    QValue3DAxis_SetSubSegmentCount((QValue3DAxis*)self, count);
}

int32_t q_value3daxis_sub_segment_count(const void* self) {
    return QValue3DAxis_SubSegmentCount((QValue3DAxis*)self);
}

void q_value3daxis_set_label_format(void* self, const char* format) {
    QValue3DAxis_SetLabelFormat((QValue3DAxis*)self, qstring(format));
}

const char* q_value3daxis_label_format(const void* self) {
    libqt_string _str = QValue3DAxis_LabelFormat((QValue3DAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_value3daxis_set_formatter(void* self, void* formatter) {
    QValue3DAxis_SetFormatter((QValue3DAxis*)self, (QValue3DAxisFormatter*)formatter);
}

QValue3DAxisFormatter* q_value3daxis_formatter(const void* self) {
    return QValue3DAxis_Formatter((QValue3DAxis*)self);
}

void q_value3daxis_set_reversed(void* self, bool enable) {
    QValue3DAxis_SetReversed((QValue3DAxis*)self, enable);
}

bool q_value3daxis_reversed(const void* self) {
    return QValue3DAxis_Reversed((QValue3DAxis*)self);
}

void q_value3daxis_segment_count_changed(void* self, int count) {
    QValue3DAxis_SegmentCountChanged((QValue3DAxis*)self, count);
}

void q_value3daxis_on_segment_count_changed(void* self, void (*callback)(void*, int)) {
    QValue3DAxis_Connect_SegmentCountChanged((QValue3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_sub_segment_count_changed(void* self, int count) {
    QValue3DAxis_SubSegmentCountChanged((QValue3DAxis*)self, count);
}

void q_value3daxis_on_sub_segment_count_changed(void* self, void (*callback)(void*, int)) {
    QValue3DAxis_Connect_SubSegmentCountChanged((QValue3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_label_format_changed(void* self, const char* format) {
    QValue3DAxis_LabelFormatChanged((QValue3DAxis*)self, qstring(format));
}

void q_value3daxis_on_label_format_changed(void* self, void (*callback)(void*, const char*)) {
    QValue3DAxis_Connect_LabelFormatChanged((QValue3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_formatter_changed(void* self, void* formatter) {
    QValue3DAxis_FormatterChanged((QValue3DAxis*)self, (QValue3DAxisFormatter*)formatter);
}

void q_value3daxis_on_formatter_changed(void* self, void (*callback)(void*, void*)) {
    QValue3DAxis_Connect_FormatterChanged((QValue3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_reversed_changed(void* self, bool enable) {
    QValue3DAxis_ReversedChanged((QValue3DAxis*)self, enable);
}

void q_value3daxis_on_reversed_changed(void* self, void (*callback)(void*, bool)) {
    QValue3DAxis_Connect_ReversedChanged((QValue3DAxis*)self, (intptr_t)callback);
}

const char* q_value3daxis_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_value3daxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_value3daxis_set_title(void* self, const char* title) {
    QAbstract3DAxis_SetTitle((QAbstract3DAxis*)self, qstring(title));
}

const char* q_value3daxis_title(const void* self) {
    libqt_string _str = QAbstract3DAxis_Title((QAbstract3DAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_value3daxis_set_labels(void* self, const char* labels[static 1]) {
    size_t labels_len = libqt_strv_length(labels);
    libqt_string* labels_qstr = (libqt_string*)malloc(labels_len * sizeof(libqt_string));
    if (labels_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_value3daxis_set_labels\n");
        abort();
    }
    for (size_t i = 0; i < labels_len; ++i)
        labels_qstr[i] = qstring(labels[i]);
    libqt_list labels_list = qlist(labels_qstr, labels_len);
    QAbstract3DAxis_SetLabels((QAbstract3DAxis*)self, labels_list);
    free(labels_qstr);
}

const char** q_value3daxis_labels(const void* self) {
    libqt_list _arr = QAbstract3DAxis_Labels((QAbstract3DAxis*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_value3daxis_labels\n");
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

int32_t q_value3daxis_orientation(const void* self) {
    return QAbstract3DAxis_Orientation((QAbstract3DAxis*)self);
}

int32_t q_value3daxis_type(const void* self) {
    return QAbstract3DAxis_Type((QAbstract3DAxis*)self);
}

void q_value3daxis_set_min(void* self, float min) {
    QAbstract3DAxis_SetMin((QAbstract3DAxis*)self, min);
}

float q_value3daxis_min(const void* self) {
    return QAbstract3DAxis_Min((QAbstract3DAxis*)self);
}

void q_value3daxis_set_max(void* self, float max) {
    QAbstract3DAxis_SetMax((QAbstract3DAxis*)self, max);
}

float q_value3daxis_max(const void* self) {
    return QAbstract3DAxis_Max((QAbstract3DAxis*)self);
}

void q_value3daxis_set_auto_adjust_range(void* self, bool autoAdjust) {
    QAbstract3DAxis_SetAutoAdjustRange((QAbstract3DAxis*)self, autoAdjust);
}

bool q_value3daxis_is_auto_adjust_range(const void* self) {
    return QAbstract3DAxis_IsAutoAdjustRange((QAbstract3DAxis*)self);
}

void q_value3daxis_set_range(void* self, float min, float max) {
    QAbstract3DAxis_SetRange((QAbstract3DAxis*)self, min, max);
}

void q_value3daxis_set_label_auto_rotation(void* self, float angle) {
    QAbstract3DAxis_SetLabelAutoRotation((QAbstract3DAxis*)self, angle);
}

float q_value3daxis_label_auto_rotation(const void* self) {
    return QAbstract3DAxis_LabelAutoRotation((QAbstract3DAxis*)self);
}

void q_value3daxis_set_title_visible(void* self, bool visible) {
    QAbstract3DAxis_SetTitleVisible((QAbstract3DAxis*)self, visible);
}

bool q_value3daxis_is_title_visible(const void* self) {
    return QAbstract3DAxis_IsTitleVisible((QAbstract3DAxis*)self);
}

void q_value3daxis_set_title_fixed(void* self, bool fixed) {
    QAbstract3DAxis_SetTitleFixed((QAbstract3DAxis*)self, fixed);
}

bool q_value3daxis_is_title_fixed(const void* self) {
    return QAbstract3DAxis_IsTitleFixed((QAbstract3DAxis*)self);
}

void q_value3daxis_title_changed(void* self, const char* newTitle) {
    QAbstract3DAxis_TitleChanged((QAbstract3DAxis*)self, qstring(newTitle));
}

void q_value3daxis_on_title_changed(void* self, void (*callback)(void*, const char*)) {
    QAbstract3DAxis_Connect_TitleChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_labels_changed(void* self) {
    QAbstract3DAxis_LabelsChanged((QAbstract3DAxis*)self);
}

void q_value3daxis_on_labels_changed(void* self, void (*callback)(void*)) {
    QAbstract3DAxis_Connect_LabelsChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_orientation_changed(void* self, int32_t orientation) {
    QAbstract3DAxis_OrientationChanged((QAbstract3DAxis*)self, orientation);
}

void q_value3daxis_on_orientation_changed(void* self, void (*callback)(void*, int32_t)) {
    QAbstract3DAxis_Connect_OrientationChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_min_changed(void* self, float value) {
    QAbstract3DAxis_MinChanged((QAbstract3DAxis*)self, value);
}

void q_value3daxis_on_min_changed(void* self, void (*callback)(void*, float)) {
    QAbstract3DAxis_Connect_MinChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_max_changed(void* self, float value) {
    QAbstract3DAxis_MaxChanged((QAbstract3DAxis*)self, value);
}

void q_value3daxis_on_max_changed(void* self, void (*callback)(void*, float)) {
    QAbstract3DAxis_Connect_MaxChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_range_changed(void* self, float min, float max) {
    QAbstract3DAxis_RangeChanged((QAbstract3DAxis*)self, min, max);
}

void q_value3daxis_on_range_changed(void* self, void (*callback)(void*, float, float)) {
    QAbstract3DAxis_Connect_RangeChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_auto_adjust_range_changed(void* self, bool autoAdjust) {
    QAbstract3DAxis_AutoAdjustRangeChanged((QAbstract3DAxis*)self, autoAdjust);
}

void q_value3daxis_on_auto_adjust_range_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DAxis_Connect_AutoAdjustRangeChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_label_auto_rotation_changed(void* self, float angle) {
    QAbstract3DAxis_LabelAutoRotationChanged((QAbstract3DAxis*)self, angle);
}

void q_value3daxis_on_label_auto_rotation_changed(void* self, void (*callback)(void*, float)) {
    QAbstract3DAxis_Connect_LabelAutoRotationChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_title_visibility_changed(void* self, bool visible) {
    QAbstract3DAxis_TitleVisibilityChanged((QAbstract3DAxis*)self, visible);
}

void q_value3daxis_on_title_visibility_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DAxis_Connect_TitleVisibilityChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_title_fixed_changed(void* self, bool fixed) {
    QAbstract3DAxis_TitleFixedChanged((QAbstract3DAxis*)self, fixed);
}

void q_value3daxis_on_title_fixed_changed(void* self, void (*callback)(void*, bool)) {
    QAbstract3DAxis_Connect_TitleFixedChanged((QAbstract3DAxis*)self, (intptr_t)callback);
}

const char* q_value3daxis_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_value3daxis_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_value3daxis_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_value3daxis_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_value3daxis_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_value3daxis_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_value3daxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_value3daxis_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_value3daxis_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_value3daxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_value3daxis_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_value3daxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_value3daxis_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_value3daxis_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_value3daxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_value3daxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_value3daxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_value3daxis_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_value3daxis_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_value3daxis_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_value3daxis_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_value3daxis_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_value3daxis_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_value3daxis_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_value3daxis_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_value3daxis_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_value3daxis_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_value3daxis_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_value3daxis_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_value3daxis_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_value3daxis_dynamic_property_names\n");
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

QBindingStorage* q_value3daxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_value3daxis_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_value3daxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_value3daxis_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_value3daxis_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_value3daxis_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_value3daxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_value3daxis_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_value3daxis_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_value3daxis_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_value3daxis_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_value3daxis_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_value3daxis_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_value3daxis_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_value3daxis_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_value3daxis_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_value3daxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_value3daxis_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_value3daxis_event(void* self, void* event) {
    return QValue3DAxis_Event((QValue3DAxis*)self, (QEvent*)event);
}

bool q_value3daxis_super_event(void* self, void* event) {
    return QValue3DAxis_SuperEvent((QValue3DAxis*)self, (QEvent*)event);
}

void q_value3daxis_on_event(void* self, bool (*callback)(void*, void*)) {
    QValue3DAxis_OnEvent((QValue3DAxis*)self, (intptr_t)callback);
}

bool q_value3daxis_event_filter(void* self, void* watched, void* event) {
    return QValue3DAxis_EventFilter((QValue3DAxis*)self, (QObject*)watched, (QEvent*)event);
}

bool q_value3daxis_super_event_filter(void* self, void* watched, void* event) {
    return QValue3DAxis_SuperEventFilter((QValue3DAxis*)self, (QObject*)watched, (QEvent*)event);
}

void q_value3daxis_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QValue3DAxis_OnEventFilter((QValue3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_timer_event(void* self, void* event) {
    QValue3DAxis_TimerEvent((QValue3DAxis*)self, (QTimerEvent*)event);
}

void q_value3daxis_super_timer_event(void* self, void* event) {
    QValue3DAxis_SuperTimerEvent((QValue3DAxis*)self, (QTimerEvent*)event);
}

void q_value3daxis_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QValue3DAxis_OnTimerEvent((QValue3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_child_event(void* self, void* event) {
    QValue3DAxis_ChildEvent((QValue3DAxis*)self, (QChildEvent*)event);
}

void q_value3daxis_super_child_event(void* self, void* event) {
    QValue3DAxis_SuperChildEvent((QValue3DAxis*)self, (QChildEvent*)event);
}

void q_value3daxis_on_child_event(void* self, void (*callback)(void*, void*)) {
    QValue3DAxis_OnChildEvent((QValue3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_custom_event(void* self, void* event) {
    QValue3DAxis_CustomEvent((QValue3DAxis*)self, (QEvent*)event);
}

void q_value3daxis_super_custom_event(void* self, void* event) {
    QValue3DAxis_SuperCustomEvent((QValue3DAxis*)self, (QEvent*)event);
}

void q_value3daxis_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QValue3DAxis_OnCustomEvent((QValue3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_connect_notify(void* self, const void* signal) {
    QValue3DAxis_ConnectNotify((QValue3DAxis*)self, (QMetaMethod*)signal);
}

void q_value3daxis_super_connect_notify(void* self, const void* signal) {
    QValue3DAxis_SuperConnectNotify((QValue3DAxis*)self, (QMetaMethod*)signal);
}

void q_value3daxis_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    QValue3DAxis_OnConnectNotify((QValue3DAxis*)self, (intptr_t)callback);
}

void q_value3daxis_disconnect_notify(void* self, const void* signal) {
    QValue3DAxis_DisconnectNotify((QValue3DAxis*)self, (QMetaMethod*)signal);
}

void q_value3daxis_super_disconnect_notify(void* self, const void* signal) {
    QValue3DAxis_SuperDisconnectNotify((QValue3DAxis*)self, (QMetaMethod*)signal);
}

void q_value3daxis_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    QValue3DAxis_OnDisconnectNotify((QValue3DAxis*)self, (intptr_t)callback);
}

QObject* q_value3daxis_sender(const void* self) {
    return QValue3DAxis_Sender((QValue3DAxis*)self);
}

int32_t q_value3daxis_sender_signal_index(const void* self) {
    return QValue3DAxis_SenderSignalIndex((QValue3DAxis*)self);
}

int32_t q_value3daxis_receivers(const void* self, const char* signal) {
    return QValue3DAxis_Receivers((QValue3DAxis*)self, signal);
}

bool q_value3daxis_is_signal_connected(const void* self, const void* signal) {
    return QValue3DAxis_IsSignalConnected((QValue3DAxis*)self, (QMetaMethod*)signal);
}

void q_value3daxis_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_value3daxis_delete(void* self) {
    QValue3DAxis_Delete((QValue3DAxis*)(self));
}
