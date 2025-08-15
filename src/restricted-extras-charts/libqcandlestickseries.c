#include "libqabstractseries.hpp"
#include "../libqbrush.hpp"
#include "libqcandlestickset.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include "libqcandlestickseries.hpp"
#include "libqcandlestickseries.h"

QCandlestickSeries* q_candlestickseries_new() {
    return QCandlestickSeries_new();
}

QCandlestickSeries* q_candlestickseries_new2(void* parent) {
    return QCandlestickSeries_new2((QObject*)parent);
}

const QMetaObject* q_candlestickseries_meta_object(void* self) {
    return QCandlestickSeries_MetaObject((QCandlestickSeries*)self);
}

void* q_candlestickseries_metacast(void* self, const char* param1) {
    return QCandlestickSeries_Metacast((QCandlestickSeries*)self, param1);
}

int32_t q_candlestickseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickSeries_Metacall((QCandlestickSeries*)self, param1, param2, param3);
}

void q_candlestickseries_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*)) {
    QCandlestickSeries_OnMetacall((QCandlestickSeries*)self, (intptr_t)callback);
}

int32_t q_candlestickseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickSeries_QBaseMetacall((QCandlestickSeries*)self, param1, param2, param3);
}

const char* q_candlestickseries_tr(const char* s) {
    libqt_string _str = QCandlestickSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_candlestickseries_append(void* self, void* set) {
    return QCandlestickSeries_Append((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

bool q_candlestickseries_remove(void* self, void* set) {
    return QCandlestickSeries_Remove((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

bool q_candlestickseries_append2(void* self, libqt_list sets) {
    return QCandlestickSeries_Append2((QCandlestickSeries*)self, sets);
}

bool q_candlestickseries_remove2(void* self, libqt_list sets) {
    return QCandlestickSeries_Remove2((QCandlestickSeries*)self, sets);
}

bool q_candlestickseries_insert(void* self, int index, void* set) {
    return QCandlestickSeries_Insert((QCandlestickSeries*)self, index, (QCandlestickSet*)set);
}

bool q_candlestickseries_take(void* self, void* set) {
    return QCandlestickSeries_Take((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

void q_candlestickseries_clear(void* self) {
    QCandlestickSeries_Clear((QCandlestickSeries*)self);
}

libqt_list /* of QCandlestickSet* */ q_candlestickseries_sets(void* self) {
    libqt_list _arr = QCandlestickSeries_Sets((QCandlestickSeries*)self);
    return _arr;
}

int32_t q_candlestickseries_count(void* self) {
    return QCandlestickSeries_Count((QCandlestickSeries*)self);
}

int64_t q_candlestickseries_type(void* self) {
    return QCandlestickSeries_Type((QCandlestickSeries*)self);
}

void q_candlestickseries_on_type(void* self, int64_t (*callback)()) {
    QCandlestickSeries_OnType((QCandlestickSeries*)self, (intptr_t)callback);
}

int64_t q_candlestickseries_qbase_type(void* self) {
    return QCandlestickSeries_QBaseType((QCandlestickSeries*)self);
}

void q_candlestickseries_set_maximum_column_width(void* self, double maximumColumnWidth) {
    QCandlestickSeries_SetMaximumColumnWidth((QCandlestickSeries*)self, maximumColumnWidth);
}

double q_candlestickseries_maximum_column_width(void* self) {
    return QCandlestickSeries_MaximumColumnWidth((QCandlestickSeries*)self);
}

void q_candlestickseries_set_minimum_column_width(void* self, double minimumColumnWidth) {
    QCandlestickSeries_SetMinimumColumnWidth((QCandlestickSeries*)self, minimumColumnWidth);
}

double q_candlestickseries_minimum_column_width(void* self) {
    return QCandlestickSeries_MinimumColumnWidth((QCandlestickSeries*)self);
}

void q_candlestickseries_set_body_width(void* self, double bodyWidth) {
    QCandlestickSeries_SetBodyWidth((QCandlestickSeries*)self, bodyWidth);
}

double q_candlestickseries_body_width(void* self) {
    return QCandlestickSeries_BodyWidth((QCandlestickSeries*)self);
}

void q_candlestickseries_set_body_outline_visible(void* self, bool bodyOutlineVisible) {
    QCandlestickSeries_SetBodyOutlineVisible((QCandlestickSeries*)self, bodyOutlineVisible);
}

bool q_candlestickseries_body_outline_visible(void* self) {
    return QCandlestickSeries_BodyOutlineVisible((QCandlestickSeries*)self);
}

void q_candlestickseries_set_caps_width(void* self, double capsWidth) {
    QCandlestickSeries_SetCapsWidth((QCandlestickSeries*)self, capsWidth);
}

double q_candlestickseries_caps_width(void* self) {
    return QCandlestickSeries_CapsWidth((QCandlestickSeries*)self);
}

void q_candlestickseries_set_caps_visible(void* self, bool capsVisible) {
    QCandlestickSeries_SetCapsVisible((QCandlestickSeries*)self, capsVisible);
}

bool q_candlestickseries_caps_visible(void* self) {
    return QCandlestickSeries_CapsVisible((QCandlestickSeries*)self);
}

void q_candlestickseries_set_increasing_color(void* self, void* increasingColor) {
    QCandlestickSeries_SetIncreasingColor((QCandlestickSeries*)self, (QColor*)increasingColor);
}

QColor* q_candlestickseries_increasing_color(void* self) {
    return QCandlestickSeries_IncreasingColor((QCandlestickSeries*)self);
}

void q_candlestickseries_set_decreasing_color(void* self, void* decreasingColor) {
    QCandlestickSeries_SetDecreasingColor((QCandlestickSeries*)self, (QColor*)decreasingColor);
}

QColor* q_candlestickseries_decreasing_color(void* self) {
    return QCandlestickSeries_DecreasingColor((QCandlestickSeries*)self);
}

void q_candlestickseries_set_brush(void* self, void* brush) {
    QCandlestickSeries_SetBrush((QCandlestickSeries*)self, (QBrush*)brush);
}

QBrush* q_candlestickseries_brush(void* self) {
    return QCandlestickSeries_Brush((QCandlestickSeries*)self);
}

void q_candlestickseries_set_pen(void* self, void* pen) {
    QCandlestickSeries_SetPen((QCandlestickSeries*)self, (QPen*)pen);
}

QPen* q_candlestickseries_pen(void* self) {
    return QCandlestickSeries_Pen((QCandlestickSeries*)self);
}

void q_candlestickseries_clicked(void* self, void* set) {
    QCandlestickSeries_Clicked((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

void q_candlestickseries_on_clicked(void* self, void (*callback)(void*, void*)) {
    QCandlestickSeries_Connect_Clicked((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_hovered(void* self, bool status, void* set) {
    QCandlestickSeries_Hovered((QCandlestickSeries*)self, status, (QCandlestickSet*)set);
}

void q_candlestickseries_on_hovered(void* self, void (*callback)(void*, bool, void*)) {
    QCandlestickSeries_Connect_Hovered((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_pressed(void* self, void* set) {
    QCandlestickSeries_Pressed((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

void q_candlestickseries_on_pressed(void* self, void (*callback)(void*, void*)) {
    QCandlestickSeries_Connect_Pressed((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_released(void* self, void* set) {
    QCandlestickSeries_Released((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

void q_candlestickseries_on_released(void* self, void (*callback)(void*, void*)) {
    QCandlestickSeries_Connect_Released((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_double_clicked(void* self, void* set) {
    QCandlestickSeries_DoubleClicked((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

void q_candlestickseries_on_double_clicked(void* self, void (*callback)(void*, void*)) {
    QCandlestickSeries_Connect_DoubleClicked((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_candlestick_sets_added(void* self, libqt_list sets) {
    QCandlestickSeries_CandlestickSetsAdded((QCandlestickSeries*)self, sets);
}

void q_candlestickseries_on_candlestick_sets_added(void* self, void (*callback)(void*, libqt_list)) {
    QCandlestickSeries_Connect_CandlestickSetsAdded((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_candlestick_sets_removed(void* self, libqt_list sets) {
    QCandlestickSeries_CandlestickSetsRemoved((QCandlestickSeries*)self, sets);
}

void q_candlestickseries_on_candlestick_sets_removed(void* self, void (*callback)(void*, libqt_list)) {
    QCandlestickSeries_Connect_CandlestickSetsRemoved((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_count_changed(void* self) {
    QCandlestickSeries_CountChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_count_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_CountChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_maximum_column_width_changed(void* self) {
    QCandlestickSeries_MaximumColumnWidthChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_maximum_column_width_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_MaximumColumnWidthChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_minimum_column_width_changed(void* self) {
    QCandlestickSeries_MinimumColumnWidthChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_minimum_column_width_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_MinimumColumnWidthChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_body_width_changed(void* self) {
    QCandlestickSeries_BodyWidthChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_body_width_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_BodyWidthChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_body_outline_visibility_changed(void* self) {
    QCandlestickSeries_BodyOutlineVisibilityChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_body_outline_visibility_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_BodyOutlineVisibilityChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_caps_width_changed(void* self) {
    QCandlestickSeries_CapsWidthChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_caps_width_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_CapsWidthChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_caps_visibility_changed(void* self) {
    QCandlestickSeries_CapsVisibilityChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_caps_visibility_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_CapsVisibilityChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_increasing_color_changed(void* self) {
    QCandlestickSeries_IncreasingColorChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_increasing_color_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_IncreasingColorChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_decreasing_color_changed(void* self) {
    QCandlestickSeries_DecreasingColorChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_decreasing_color_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_DecreasingColorChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_brush_changed(void* self) {
    QCandlestickSeries_BrushChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_brush_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_BrushChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_pen_changed(void* self) {
    QCandlestickSeries_PenChanged((QCandlestickSeries*)self);
}

void q_candlestickseries_on_pen_changed(void* self, void (*callback)(void*)) {
    QCandlestickSeries_Connect_PenChanged((QCandlestickSeries*)self, (intptr_t)callback);
}

const char* q_candlestickseries_tr2(const char* s, const char* c) {
    libqt_string _str = QCandlestickSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_candlestickseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCandlestickSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_candlestickseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

const char* q_candlestickseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_candlestickseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

bool q_candlestickseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

double q_candlestickseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

void q_candlestickseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

void q_candlestickseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

bool q_candlestickseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

QChart* q_candlestickseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

bool q_candlestickseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

bool q_candlestickseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

libqt_list /* of QAbstractAxis* */ q_candlestickseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

void q_candlestickseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

void q_candlestickseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

void q_candlestickseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

void q_candlestickseries_on_name_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

void q_candlestickseries_on_visible_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

void q_candlestickseries_on_opacity_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

void q_candlestickseries_on_use_open_g_l_changed(void* self, void (*callback)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

void q_candlestickseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

const char* q_candlestickseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_candlestickseries_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_candlestickseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_candlestickseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_candlestickseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_candlestickseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_candlestickseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_candlestickseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_candlestickseries_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_candlestickseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_candlestickseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_candlestickseries_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_candlestickseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_candlestickseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_candlestickseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_candlestickseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_candlestickseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_candlestickseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_candlestickseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_candlestickseries_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_candlestickseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_candlestickseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_candlestickseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_candlestickseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_candlestickseries_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_candlestickseries_dynamic_property_names");
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

QBindingStorage* q_candlestickseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_candlestickseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_candlestickseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_candlestickseries_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_candlestickseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_candlestickseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_candlestickseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_candlestickseries_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_candlestickseries_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_candlestickseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_candlestickseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_candlestickseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_candlestickseries_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_candlestickseries_event(void* self, void* event) {
    return QCandlestickSeries_Event((QCandlestickSeries*)self, (QEvent*)event);
}

bool q_candlestickseries_qbase_event(void* self, void* event) {
    return QCandlestickSeries_QBaseEvent((QCandlestickSeries*)self, (QEvent*)event);
}

void q_candlestickseries_on_event(void* self, bool (*callback)(void*, void*)) {
    QCandlestickSeries_OnEvent((QCandlestickSeries*)self, (intptr_t)callback);
}

bool q_candlestickseries_event_filter(void* self, void* watched, void* event) {
    return QCandlestickSeries_EventFilter((QCandlestickSeries*)self, (QObject*)watched, (QEvent*)event);
}

bool q_candlestickseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QCandlestickSeries_QBaseEventFilter((QCandlestickSeries*)self, (QObject*)watched, (QEvent*)event);
}

void q_candlestickseries_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCandlestickSeries_OnEventFilter((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_timer_event(void* self, void* event) {
    QCandlestickSeries_TimerEvent((QCandlestickSeries*)self, (QTimerEvent*)event);
}

void q_candlestickseries_qbase_timer_event(void* self, void* event) {
    QCandlestickSeries_QBaseTimerEvent((QCandlestickSeries*)self, (QTimerEvent*)event);
}

void q_candlestickseries_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCandlestickSeries_OnTimerEvent((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_child_event(void* self, void* event) {
    QCandlestickSeries_ChildEvent((QCandlestickSeries*)self, (QChildEvent*)event);
}

void q_candlestickseries_qbase_child_event(void* self, void* event) {
    QCandlestickSeries_QBaseChildEvent((QCandlestickSeries*)self, (QChildEvent*)event);
}

void q_candlestickseries_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCandlestickSeries_OnChildEvent((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_custom_event(void* self, void* event) {
    QCandlestickSeries_CustomEvent((QCandlestickSeries*)self, (QEvent*)event);
}

void q_candlestickseries_qbase_custom_event(void* self, void* event) {
    QCandlestickSeries_QBaseCustomEvent((QCandlestickSeries*)self, (QEvent*)event);
}

void q_candlestickseries_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCandlestickSeries_OnCustomEvent((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_connect_notify(void* self, void* signal) {
    QCandlestickSeries_ConnectNotify((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

void q_candlestickseries_qbase_connect_notify(void* self, void* signal) {
    QCandlestickSeries_QBaseConnectNotify((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

void q_candlestickseries_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QCandlestickSeries_OnConnectNotify((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_disconnect_notify(void* self, void* signal) {
    QCandlestickSeries_DisconnectNotify((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

void q_candlestickseries_qbase_disconnect_notify(void* self, void* signal) {
    QCandlestickSeries_QBaseDisconnectNotify((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

void q_candlestickseries_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QCandlestickSeries_OnDisconnectNotify((QCandlestickSeries*)self, (intptr_t)callback);
}

QObject* q_candlestickseries_sender(void* self) {
    return QCandlestickSeries_Sender((QCandlestickSeries*)self);
}

QObject* q_candlestickseries_qbase_sender(void* self) {
    return QCandlestickSeries_QBaseSender((QCandlestickSeries*)self);
}

void q_candlestickseries_on_sender(void* self, QObject* (*callback)()) {
    QCandlestickSeries_OnSender((QCandlestickSeries*)self, (intptr_t)callback);
}

int32_t q_candlestickseries_sender_signal_index(void* self) {
    return QCandlestickSeries_SenderSignalIndex((QCandlestickSeries*)self);
}

int32_t q_candlestickseries_qbase_sender_signal_index(void* self) {
    return QCandlestickSeries_QBaseSenderSignalIndex((QCandlestickSeries*)self);
}

void q_candlestickseries_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QCandlestickSeries_OnSenderSignalIndex((QCandlestickSeries*)self, (intptr_t)callback);
}

int32_t q_candlestickseries_receivers(void* self, const char* signal) {
    return QCandlestickSeries_Receivers((QCandlestickSeries*)self, signal);
}

int32_t q_candlestickseries_qbase_receivers(void* self, const char* signal) {
    return QCandlestickSeries_QBaseReceivers((QCandlestickSeries*)self, signal);
}

void q_candlestickseries_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QCandlestickSeries_OnReceivers((QCandlestickSeries*)self, (intptr_t)callback);
}

bool q_candlestickseries_is_signal_connected(void* self, void* signal) {
    return QCandlestickSeries_IsSignalConnected((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

bool q_candlestickseries_qbase_is_signal_connected(void* self, void* signal) {
    return QCandlestickSeries_QBaseIsSignalConnected((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

void q_candlestickseries_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QCandlestickSeries_OnIsSignalConnected((QCandlestickSeries*)self, (intptr_t)callback);
}

void q_candlestickseries_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_candlestickseries_delete(void* self) {
    QCandlestickSeries_Delete((QCandlestickSeries*)(self));
}
