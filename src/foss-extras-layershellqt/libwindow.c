#include "../libqmargins.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwindow.hpp"
#include "libwindow.hpp"
#include "libwindow.h"

const QMetaObject* k_layershellqt__window_meta_object(void* self) {
    return LayerShellQt__Window_MetaObject((LayerShellQt__Window*)self);
}

void* k_layershellqt__window_metacast(void* self, const char* param1) {
    return LayerShellQt__Window_Metacast((LayerShellQt__Window*)self, param1);
}

int32_t k_layershellqt__window_metacall(void* self, int32_t param1, int param2, void* param3) {
    return LayerShellQt__Window_Metacall((LayerShellQt__Window*)self, param1, param2, param3);
}

const char* k_layershellqt__window_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_layershellqt__window_set_anchors(void* self, int32_t anchor) {
    LayerShellQt__Window_SetAnchors((LayerShellQt__Window*)self, anchor);
}

int32_t k_layershellqt__window_anchors(void* self) {
    return LayerShellQt__Window_Anchors((LayerShellQt__Window*)self);
}

void k_layershellqt__window_set_exclusive_zone(void* self, int32_t zone) {
    LayerShellQt__Window_SetExclusiveZone((LayerShellQt__Window*)self, zone);
}

int32_t k_layershellqt__window_exclusion_zone(void* self) {
    return LayerShellQt__Window_ExclusionZone((LayerShellQt__Window*)self);
}

void k_layershellqt__window_set_exclusive_edge(void* self, int32_t edge) {
    LayerShellQt__Window_SetExclusiveEdge((LayerShellQt__Window*)self, edge);
}

int32_t k_layershellqt__window_exclusive_edge(void* self) {
    return LayerShellQt__Window_ExclusiveEdge((LayerShellQt__Window*)self);
}

void k_layershellqt__window_set_margins(void* self, void* margins) {
    LayerShellQt__Window_SetMargins((LayerShellQt__Window*)self, (QMargins*)margins);
}

QMargins* k_layershellqt__window_margins(void* self) {
    return LayerShellQt__Window_Margins((LayerShellQt__Window*)self);
}

void k_layershellqt__window_set_keyboard_interactivity(void* self, int32_t interactivity) {
    LayerShellQt__Window_SetKeyboardInteractivity((LayerShellQt__Window*)self, interactivity);
}

int32_t k_layershellqt__window_keyboard_interactivity(void* self) {
    return LayerShellQt__Window_KeyboardInteractivity((LayerShellQt__Window*)self);
}

void k_layershellqt__window_set_layer(void* self, int32_t layer) {
    LayerShellQt__Window_SetLayer((LayerShellQt__Window*)self, layer);
}

int32_t k_layershellqt__window_layer(void* self) {
    return LayerShellQt__Window_Layer((LayerShellQt__Window*)self);
}

void k_layershellqt__window_set_screen_configuration(void* self, int32_t screenConfiguration) {
    LayerShellQt__Window_SetScreenConfiguration((LayerShellQt__Window*)self, screenConfiguration);
}

int32_t k_layershellqt__window_screen_configuration(void* self) {
    return LayerShellQt__Window_ScreenConfiguration((LayerShellQt__Window*)self);
}

void k_layershellqt__window_set_scope(void* self, const char* scope) {
    LayerShellQt__Window_SetScope((LayerShellQt__Window*)self, qstring(scope));
}

const char* k_layershellqt__window_scope(void* self) {
    libqt_string _str = LayerShellQt__Window_Scope((LayerShellQt__Window*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_layershellqt__window_set_close_on_dismissed(void* self, bool close) {
    LayerShellQt__Window_SetCloseOnDismissed((LayerShellQt__Window*)self, close);
}

bool k_layershellqt__window_close_on_dismissed(void* self) {
    return LayerShellQt__Window_CloseOnDismissed((LayerShellQt__Window*)self);
}

LayerShellQt__Window* k_layershellqt__window_get(void* window) {
    return LayerShellQt__Window_Get((QWindow*)window);
}

LayerShellQt__Window* k_layershellqt__window_qml_attached_properties(void* object) {
    return LayerShellQt__Window_QmlAttachedProperties((QObject*)object);
}

void k_layershellqt__window_anchors_changed(void* self) {
    LayerShellQt__Window_AnchorsChanged((LayerShellQt__Window*)self);
}

void k_layershellqt__window_on_anchors_changed(void* self, void (*callback)(void*)) {
    LayerShellQt__Window_Connect_AnchorsChanged((LayerShellQt__Window*)self, (intptr_t)callback);
}

void k_layershellqt__window_exclusion_zone_changed(void* self) {
    LayerShellQt__Window_ExclusionZoneChanged((LayerShellQt__Window*)self);
}

void k_layershellqt__window_on_exclusion_zone_changed(void* self, void (*callback)(void*)) {
    LayerShellQt__Window_Connect_ExclusionZoneChanged((LayerShellQt__Window*)self, (intptr_t)callback);
}

void k_layershellqt__window_exclusive_edge_changed(void* self) {
    LayerShellQt__Window_ExclusiveEdgeChanged((LayerShellQt__Window*)self);
}

void k_layershellqt__window_on_exclusive_edge_changed(void* self, void (*callback)(void*)) {
    LayerShellQt__Window_Connect_ExclusiveEdgeChanged((LayerShellQt__Window*)self, (intptr_t)callback);
}

void k_layershellqt__window_margins_changed(void* self) {
    LayerShellQt__Window_MarginsChanged((LayerShellQt__Window*)self);
}

void k_layershellqt__window_on_margins_changed(void* self, void (*callback)(void*)) {
    LayerShellQt__Window_Connect_MarginsChanged((LayerShellQt__Window*)self, (intptr_t)callback);
}

void k_layershellqt__window_keyboard_interactivity_changed(void* self) {
    LayerShellQt__Window_KeyboardInteractivityChanged((LayerShellQt__Window*)self);
}

void k_layershellqt__window_on_keyboard_interactivity_changed(void* self, void (*callback)(void*)) {
    LayerShellQt__Window_Connect_KeyboardInteractivityChanged((LayerShellQt__Window*)self, (intptr_t)callback);
}

void k_layershellqt__window_layer_changed(void* self) {
    LayerShellQt__Window_LayerChanged((LayerShellQt__Window*)self);
}

void k_layershellqt__window_on_layer_changed(void* self, void (*callback)(void*)) {
    LayerShellQt__Window_Connect_LayerChanged((LayerShellQt__Window*)self, (intptr_t)callback);
}

const char* k_layershellqt__window_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_layershellqt__window_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_layershellqt__window_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_layershellqt__window_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_layershellqt__window_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_layershellqt__window_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_layershellqt__window_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_layershellqt__window_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_layershellqt__window_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_layershellqt__window_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_layershellqt__window_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_layershellqt__window_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_layershellqt__window_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_layershellqt__window_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_layershellqt__window_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_layershellqt__window_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_layershellqt__window_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_layershellqt__window_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_layershellqt__window_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_layershellqt__window_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_layershellqt__window_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_layershellqt__window_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_layershellqt__window_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_layershellqt__window_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_layershellqt__window_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_layershellqt__window_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_layershellqt__window_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_layershellqt__window_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_layershellqt__window_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_layershellqt__window_dynamic_property_names");
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

QBindingStorage* k_layershellqt__window_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_layershellqt__window_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_layershellqt__window_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_layershellqt__window_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_layershellqt__window_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_layershellqt__window_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_layershellqt__window_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_layershellqt__window_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_layershellqt__window_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_layershellqt__window_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_layershellqt__window_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_layershellqt__window_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_layershellqt__window_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_layershellqt__window_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_layershellqt__window_delete(void* self) {
    LayerShellQt__Window_Delete((LayerShellQt__Window*)(self));
}
