#include "libkglobalshortcutinfo.hpp"
#include "../libqaction.hpp"
#include "../libqkeysequence.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqwidget.hpp"
#include "libkglobalaccel.hpp"
#include "libkglobalaccel.h"

const QMetaObject* k_globalaccel_meta_object(const void* self) {
    return KGlobalAccel_MetaObject((KGlobalAccel*)self);
}

void* k_globalaccel_metacast(void* self, const char* param1) {
    return KGlobalAccel_Metacast((KGlobalAccel*)self, param1);
}

int32_t k_globalaccel_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KGlobalAccel_Metacall((KGlobalAccel*)self, param1, param2, param3);
}

const char* k_globalaccel_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KGlobalAccel* k_globalaccel_self() {
    return KGlobalAccel_Self();
}

void k_globalaccel_steal_shortcut_systemwide(const void* seq) {
    KGlobalAccel_StealShortcutSystemwide((QKeySequence*)seq);
}

bool k_globalaccel_clean_component(const char* componentUnique) {
    return KGlobalAccel_CleanComponent(qstring(componentUnique));
}

bool k_globalaccel_is_component_active(const char* componentName) {
    return KGlobalAccel_IsComponentActive(qstring(componentName));
}

libqt_list /* of KGlobalShortcutInfo* */ k_globalaccel_global_shortcuts_by_key(const void* seq) {
    libqt_list _arr = KGlobalAccel_GlobalShortcutsByKey((QKeySequence*)seq);
    return _arr;
}

bool k_globalaccel_is_global_shortcut_available(const void* seq) {
    return KGlobalAccel_IsGlobalShortcutAvailable((QKeySequence*)seq);
}

bool k_globalaccel_prompt_steal_shortcut_systemwide(void* parent, libqt_list /* of KGlobalShortcutInfo* */ shortcuts, const void* seq) {
    return KGlobalAccel_PromptStealShortcutSystemwide((QWidget*)parent, shortcuts, (QKeySequence*)seq);
}

bool k_globalaccel_set_default_shortcut(void* self, void* action, libqt_list /* of QKeySequence* */ shortcut) {
    return KGlobalAccel_SetDefaultShortcut((KGlobalAccel*)self, (QAction*)action, shortcut);
}

bool k_globalaccel_set_shortcut(void* self, void* action, libqt_list /* of QKeySequence* */ shortcut) {
    return KGlobalAccel_SetShortcut((KGlobalAccel*)self, (QAction*)action, shortcut);
}

bool k_globalaccel_set_global_shortcut(void* action, libqt_list /* of QKeySequence* */ shortcut) {
    return KGlobalAccel_SetGlobalShortcut((QAction*)action, shortcut);
}

bool k_globalaccel_set_global_shortcut2(void* action, const void* shortcut) {
    return KGlobalAccel_SetGlobalShortcut2((QAction*)action, (QKeySequence*)shortcut);
}

libqt_list /* of QKeySequence* */ k_globalaccel_default_shortcut(const void* self, const void* action) {
    libqt_list _arr = KGlobalAccel_DefaultShortcut((KGlobalAccel*)self, (QAction*)action);
    return _arr;
}

libqt_list /* of QKeySequence* */ k_globalaccel_shortcut(const void* self, const void* action) {
    libqt_list _arr = KGlobalAccel_Shortcut((KGlobalAccel*)self, (QAction*)action);
    return _arr;
}

libqt_list /* of QKeySequence* */ k_globalaccel_global_shortcut(const void* self, const char* componentName, const char* actionId) {
    libqt_list _arr = KGlobalAccel_GlobalShortcut((KGlobalAccel*)self, qstring(componentName), qstring(actionId));
    return _arr;
}

void k_globalaccel_remove_all_shortcuts(void* self, void* action) {
    KGlobalAccel_RemoveAllShortcuts((KGlobalAccel*)self, (QAction*)action);
}

bool k_globalaccel_has_shortcut(const void* self, const void* action) {
    return KGlobalAccel_HasShortcut((KGlobalAccel*)self, (QAction*)action);
}

void k_globalaccel_global_shortcut_changed(void* self, void* action, const void* seq) {
    KGlobalAccel_GlobalShortcutChanged((KGlobalAccel*)self, (QAction*)action, (QKeySequence*)seq);
}

void k_globalaccel_on_global_shortcut_changed(void* self, void (*callback)(void*, void*, const void*)) {
    KGlobalAccel_Connect_GlobalShortcutChanged((KGlobalAccel*)self, (intptr_t)callback);
}

void k_globalaccel_global_shortcut_active_changed(void* self, void* action, bool active) {
    KGlobalAccel_GlobalShortcutActiveChanged((KGlobalAccel*)self, (QAction*)action, active);
}

void k_globalaccel_on_global_shortcut_active_changed(void* self, void (*callback)(void*, void*, bool)) {
    KGlobalAccel_Connect_GlobalShortcutActiveChanged((KGlobalAccel*)self, (intptr_t)callback);
}

const char* k_globalaccel_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_globalaccel_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of KGlobalShortcutInfo* */ k_globalaccel_global_shortcuts_by_key2(const void* seq, int32_t type) {
    libqt_list _arr = KGlobalAccel_GlobalShortcutsByKey2((QKeySequence*)seq, type);
    return _arr;
}

bool k_globalaccel_is_global_shortcut_available2(const void* seq, const char* component) {
    return KGlobalAccel_IsGlobalShortcutAvailable2((QKeySequence*)seq, qstring(component));
}

bool k_globalaccel_set_default_shortcut3(void* self, void* action, libqt_list /* of QKeySequence* */ shortcut, int32_t loadFlag) {
    return KGlobalAccel_SetDefaultShortcut3((KGlobalAccel*)self, (QAction*)action, shortcut, loadFlag);
}

bool k_globalaccel_set_shortcut3(void* self, void* action, libqt_list /* of QKeySequence* */ shortcut, int32_t loadFlag) {
    return KGlobalAccel_SetShortcut3((KGlobalAccel*)self, (QAction*)action, shortcut, loadFlag);
}

bool k_globalaccel_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_globalaccel_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_globalaccel_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_globalaccel_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_globalaccel_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_globalaccel_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_globalaccel_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_globalaccel_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_globalaccel_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_globalaccel_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_globalaccel_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_globalaccel_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_globalaccel_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_globalaccel_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_globalaccel_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_globalaccel_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_globalaccel_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_globalaccel_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_globalaccel_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_globalaccel_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_globalaccel_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_globalaccel_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_globalaccel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_globalaccel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_globalaccel_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_globalaccel_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_globalaccel_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_globalaccel_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_globalaccel_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_globalaccel_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_globalaccel_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_globalaccel_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_globalaccel_dynamic_property_names\n");
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

QBindingStorage* k_globalaccel_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_globalaccel_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_globalaccel_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_globalaccel_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_globalaccel_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_globalaccel_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_globalaccel_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_globalaccel_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_globalaccel_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_globalaccel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_globalaccel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_globalaccel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_globalaccel_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_globalaccel_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_globalaccel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_globalaccel_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_globalaccel_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_globalaccel_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_globalaccel_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}
