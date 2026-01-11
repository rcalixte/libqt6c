#include "../libqkeysequence.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libkstandardshortcutwatcher.hpp"
#include "libkstandardshortcutwatcher.h"

const QMetaObject* k_standardshortcut__standardshortcutwatcher_meta_object(void* self) {
    return KStandardShortcut__StandardShortcutWatcher_MetaObject((KStandardShortcut__StandardShortcutWatcher*)self);
}

void* k_standardshortcut__standardshortcutwatcher_metacast(void* self, const char* param1) {
    return KStandardShortcut__StandardShortcutWatcher_Metacast((KStandardShortcut__StandardShortcutWatcher*)self, param1);
}

int32_t k_standardshortcut__standardshortcutwatcher_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KStandardShortcut__StandardShortcutWatcher_Metacall((KStandardShortcut__StandardShortcutWatcher*)self, param1, param2, param3);
}

const char* k_standardshortcut__standardshortcutwatcher_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_standardshortcut__standardshortcutwatcher_shortcut_changed(void* self, int32_t id, libqt_list shortcut) {
    KStandardShortcut__StandardShortcutWatcher_ShortcutChanged((KStandardShortcut__StandardShortcutWatcher*)self, id, shortcut);
}

void k_standardshortcut__standardshortcutwatcher_on_shortcut_changed(void* self, void (*callback)(void*, int32_t, QKeySequence**)) {
    KStandardShortcut__StandardShortcutWatcher_Connect_ShortcutChanged((KStandardShortcut__StandardShortcutWatcher*)self, (intptr_t)callback);
}

const char* k_standardshortcut__standardshortcutwatcher_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_standardshortcut__standardshortcutwatcher_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_standardshortcut__standardshortcutwatcher_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_standardshortcut__standardshortcutwatcher_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_standardshortcut__standardshortcutwatcher_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_standardshortcut__standardshortcutwatcher_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_standardshortcut__standardshortcutwatcher_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_standardshortcut__standardshortcutwatcher_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_standardshortcut__standardshortcutwatcher_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_standardshortcut__standardshortcutwatcher_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_standardshortcut__standardshortcutwatcher_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_standardshortcut__standardshortcutwatcher_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_standardshortcut__standardshortcutwatcher_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_standardshortcut__standardshortcutwatcher_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_standardshortcut__standardshortcutwatcher_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_standardshortcut__standardshortcutwatcher_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_standardshortcut__standardshortcutwatcher_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_standardshortcut__standardshortcutwatcher_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_standardshortcut__standardshortcutwatcher_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_standardshortcut__standardshortcutwatcher_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_standardshortcut__standardshortcutwatcher_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_standardshortcut__standardshortcutwatcher_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_standardshortcut__standardshortcutwatcher_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_standardshortcut__standardshortcutwatcher_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_standardshortcut__standardshortcutwatcher_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_standardshortcut__standardshortcutwatcher_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_standardshortcut__standardshortcutwatcher_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_standardshortcut__standardshortcutwatcher_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_standardshortcut__standardshortcutwatcher_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_standardshortcut__standardshortcutwatcher_dynamic_property_names");
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

QBindingStorage* k_standardshortcut__standardshortcutwatcher_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_standardshortcut__standardshortcutwatcher_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_standardshortcut__standardshortcutwatcher_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_standardshortcut__standardshortcutwatcher_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_standardshortcut__standardshortcutwatcher_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_standardshortcut__standardshortcutwatcher_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_standardshortcut__standardshortcutwatcher_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_standardshortcut__standardshortcutwatcher_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_standardshortcut__standardshortcutwatcher_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_standardshortcut__standardshortcutwatcher_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_standardshortcut__standardshortcutwatcher_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_standardshortcut__standardshortcutwatcher_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_standardshortcut__standardshortcutwatcher_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_standardshortcut__standardshortcutwatcher_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_standardshortcut__standardshortcutwatcher_delete(void* self) {
    KStandardShortcut__StandardShortcutWatcher_Delete((KStandardShortcut__StandardShortcutWatcher*)(self));
}

KStandardShortcut__StandardShortcutWatcher* k_standardshortcut_shortcut_watcher() {
    return KStandardShortcut_ShortcutWatcher();
}
