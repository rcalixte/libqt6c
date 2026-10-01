#include "../extras-kcoreaddons/libkpluginmetadata.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libimageset.hpp"
#include "libimageset.h"

KSvg__ImageSet* k_svg__imageset_new() {
    return KSvg__ImageSet_New();
}

KSvg__ImageSet* k_svg__imageset_new2(const char* imageSetName) {
    return KSvg__ImageSet_New2(qstring(imageSetName));
}

KSvg__ImageSet* k_svg__imageset_new3(void* parent) {
    return KSvg__ImageSet_New3((QObject*)parent);
}

KSvg__ImageSet* k_svg__imageset_new4(const char* imageSetName, const char* basePath) {
    return KSvg__ImageSet_New4(qstring(imageSetName), qstring(basePath));
}

KSvg__ImageSet* k_svg__imageset_new5(const char* imageSetName, const char* basePath, void* parent) {
    return KSvg__ImageSet_New5(qstring(imageSetName), qstring(basePath), (QObject*)parent);
}

const QMetaObject* k_svg__imageset_meta_object(const void* self) {
    return KSvg__ImageSet_MetaObject((KSvg__ImageSet*)self);
}

void k_svg__imageset_on_meta_object(const void* self, const QMetaObject* (*callback)(const void*)) {
    KSvg__ImageSet_OnMetaObject((KSvg__ImageSet*)self, (intptr_t)callback);
}

const QMetaObject* k_svg__imageset_super_meta_object(const void* self) {
    return KSvg__ImageSet_SuperMetaObject((KSvg__ImageSet*)self);
}

void* k_svg__imageset_metacast(void* self, const char* param1) {
    return KSvg__ImageSet_Metacast((KSvg__ImageSet*)self, param1);
}

void k_svg__imageset_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KSvg__ImageSet_OnMetacast((KSvg__ImageSet*)self, (intptr_t)callback);
}

void* k_svg__imageset_super_metacast(void* self, const char* param1) {
    return KSvg__ImageSet_SuperMetacast((KSvg__ImageSet*)self, param1);
}

int32_t k_svg__imageset_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSvg__ImageSet_Metacall((KSvg__ImageSet*)self, param1, param2, param3);
}

void k_svg__imageset_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KSvg__ImageSet_OnMetacall((KSvg__ImageSet*)self, (intptr_t)callback);
}

int32_t k_svg__imageset_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KSvg__ImageSet_SuperMetacall((KSvg__ImageSet*)self, param1, param2, param3);
}

const char* k_svg__imageset_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__imageset_set_base_path(void* self, const char* basePath) {
    KSvg__ImageSet_SetBasePath((KSvg__ImageSet*)self, qstring(basePath));
}

const char* k_svg__imageset_base_path(const void* self) {
    libqt_string _str = KSvg__ImageSet_BasePath((KSvg__ImageSet*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__imageset_set_selectors(void* self, const char* selectors[static 1]) {
    size_t selectors_len = libqt_strv_length(selectors);
    libqt_string* selectors_qstr = (libqt_string*)malloc(selectors_len * sizeof(libqt_string));
    if (selectors_qstr == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_svg__imageset_set_selectors\n");
        abort();
    }
    for (size_t i = 0; i < selectors_len; ++i)
        selectors_qstr[i] = qstring(selectors[i]);
    libqt_list selectors_list = qlist(selectors_qstr, selectors_len);
    KSvg__ImageSet_SetSelectors((KSvg__ImageSet*)self, selectors_list);
    free(selectors_qstr);
}

const char** k_svg__imageset_selectors(const void* self) {
    libqt_list _arr = KSvg__ImageSet_Selectors((KSvg__ImageSet*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_svg__imageset_selectors\n");
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

void k_svg__imageset_set_image_set_name(void* self, const char* imageSetName) {
    KSvg__ImageSet_SetImageSetName((KSvg__ImageSet*)self, qstring(imageSetName));
}

const char* k_svg__imageset_image_set_name(const void* self) {
    libqt_string _str = KSvg__ImageSet_ImageSetName((KSvg__ImageSet*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_svg__imageset_image_path(const void* self, const char* name) {
    libqt_string _str = KSvg__ImageSet_ImagePath((KSvg__ImageSet*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_svg__imageset_file_path(const void* self, const char* name) {
    libqt_string _str = KSvg__ImageSet_FilePath((KSvg__ImageSet*)self, qstring(name));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_svg__imageset_current_image_set_has_image(const void* self, const char* name) {
    return KSvg__ImageSet_CurrentImageSetHasImage((KSvg__ImageSet*)self, qstring(name));
}

void k_svg__imageset_set_use_global_settings(void* self, bool useGlobal) {
    KSvg__ImageSet_SetUseGlobalSettings((KSvg__ImageSet*)self, useGlobal);
}

bool k_svg__imageset_use_global_settings(const void* self) {
    return KSvg__ImageSet_UseGlobalSettings((KSvg__ImageSet*)self);
}

void k_svg__imageset_set_cache_limit(void* self, int kbytes) {
    KSvg__ImageSet_SetCacheLimit((KSvg__ImageSet*)self, kbytes);
}

KPluginMetaData* k_svg__imageset_metadata(const void* self) {
    return KSvg__ImageSet_Metadata((KSvg__ImageSet*)self);
}

void k_svg__imageset_image_set_changed(void* self, const char* basePath) {
    KSvg__ImageSet_ImageSetChanged((KSvg__ImageSet*)self, qstring(basePath));
}

void k_svg__imageset_on_image_set_changed(void* self, void (*callback)(void*, const char*)) {
    KSvg__ImageSet_Connect_ImageSetChanged((KSvg__ImageSet*)self, (intptr_t)callback);
}

void k_svg__imageset_base_path_changed(void* self, const char* basePath) {
    KSvg__ImageSet_BasePathChanged((KSvg__ImageSet*)self, qstring(basePath));
}

void k_svg__imageset_on_base_path_changed(void* self, void (*callback)(void*, const char*)) {
    KSvg__ImageSet_Connect_BasePathChanged((KSvg__ImageSet*)self, (intptr_t)callback);
}

const char* k_svg__imageset_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_svg__imageset_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_svg__imageset_object_name(const void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_svg__imageset_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_svg__imageset_is_widget_type(const void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_svg__imageset_is_window_type(const void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_svg__imageset_is_quick_item_type(const void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_svg__imageset_signals_blocked(const void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_svg__imageset_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_svg__imageset_thread(const void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_svg__imageset_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_svg__imageset_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_svg__imageset_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_svg__imageset_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_svg__imageset_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_svg__imageset_children(const void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_svg__imageset_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_svg__imageset_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_svg__imageset_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_svg__imageset_connect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_svg__imageset_connect2(const void* sender, const void* signal, const void* receiver, const void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_svg__imageset_connect3(const void* self, const void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_svg__imageset_disconnect(const void* sender, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_svg__imageset_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_svg__imageset_disconnect3(const void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_svg__imageset_disconnect4(const void* self, const void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_svg__imageset_disconnect5(const void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_svg__imageset_dump_object_tree(const void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_svg__imageset_dump_object_info(const void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_svg__imageset_set_property(void* self, const char* name, const void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_svg__imageset_property(const void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_svg__imageset_dynamic_property_names(const void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_svg__imageset_dynamic_property_names\n");
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

QBindingStorage* k_svg__imageset_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_svg__imageset_binding_storage2(const void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_svg__imageset_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_svg__imageset_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_svg__imageset_parent(const void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_svg__imageset_inherits(const void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_svg__imageset_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_svg__imageset_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_svg__imageset_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_svg__imageset_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_svg__imageset_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_svg__imageset_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_svg__imageset_disconnect1(const void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_svg__imageset_disconnect22(const void* self, const char* signal, const void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_svg__imageset_disconnect32(const void* self, const char* signal, const void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_svg__imageset_disconnect23(const void* self, const void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_svg__imageset_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_svg__imageset_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_svg__imageset_event(void* self, void* event) {
    return KSvg__ImageSet_Event((KSvg__ImageSet*)self, (QEvent*)event);
}

bool k_svg__imageset_super_event(void* self, void* event) {
    return KSvg__ImageSet_SuperEvent((KSvg__ImageSet*)self, (QEvent*)event);
}

void k_svg__imageset_on_event(void* self, bool (*callback)(void*, void*)) {
    KSvg__ImageSet_OnEvent((KSvg__ImageSet*)self, (intptr_t)callback);
}

bool k_svg__imageset_event_filter(void* self, void* watched, void* event) {
    return KSvg__ImageSet_EventFilter((KSvg__ImageSet*)self, (QObject*)watched, (QEvent*)event);
}

bool k_svg__imageset_super_event_filter(void* self, void* watched, void* event) {
    return KSvg__ImageSet_SuperEventFilter((KSvg__ImageSet*)self, (QObject*)watched, (QEvent*)event);
}

void k_svg__imageset_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KSvg__ImageSet_OnEventFilter((KSvg__ImageSet*)self, (intptr_t)callback);
}

void k_svg__imageset_timer_event(void* self, void* event) {
    KSvg__ImageSet_TimerEvent((KSvg__ImageSet*)self, (QTimerEvent*)event);
}

void k_svg__imageset_super_timer_event(void* self, void* event) {
    KSvg__ImageSet_SuperTimerEvent((KSvg__ImageSet*)self, (QTimerEvent*)event);
}

void k_svg__imageset_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KSvg__ImageSet_OnTimerEvent((KSvg__ImageSet*)self, (intptr_t)callback);
}

void k_svg__imageset_child_event(void* self, void* event) {
    KSvg__ImageSet_ChildEvent((KSvg__ImageSet*)self, (QChildEvent*)event);
}

void k_svg__imageset_super_child_event(void* self, void* event) {
    KSvg__ImageSet_SuperChildEvent((KSvg__ImageSet*)self, (QChildEvent*)event);
}

void k_svg__imageset_on_child_event(void* self, void (*callback)(void*, void*)) {
    KSvg__ImageSet_OnChildEvent((KSvg__ImageSet*)self, (intptr_t)callback);
}

void k_svg__imageset_custom_event(void* self, void* event) {
    KSvg__ImageSet_CustomEvent((KSvg__ImageSet*)self, (QEvent*)event);
}

void k_svg__imageset_super_custom_event(void* self, void* event) {
    KSvg__ImageSet_SuperCustomEvent((KSvg__ImageSet*)self, (QEvent*)event);
}

void k_svg__imageset_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KSvg__ImageSet_OnCustomEvent((KSvg__ImageSet*)self, (intptr_t)callback);
}

void k_svg__imageset_connect_notify(void* self, const void* signal) {
    KSvg__ImageSet_ConnectNotify((KSvg__ImageSet*)self, (QMetaMethod*)signal);
}

void k_svg__imageset_super_connect_notify(void* self, const void* signal) {
    KSvg__ImageSet_SuperConnectNotify((KSvg__ImageSet*)self, (QMetaMethod*)signal);
}

void k_svg__imageset_on_connect_notify(void* self, void (*callback)(void*, const void*)) {
    KSvg__ImageSet_OnConnectNotify((KSvg__ImageSet*)self, (intptr_t)callback);
}

void k_svg__imageset_disconnect_notify(void* self, const void* signal) {
    KSvg__ImageSet_DisconnectNotify((KSvg__ImageSet*)self, (QMetaMethod*)signal);
}

void k_svg__imageset_super_disconnect_notify(void* self, const void* signal) {
    KSvg__ImageSet_SuperDisconnectNotify((KSvg__ImageSet*)self, (QMetaMethod*)signal);
}

void k_svg__imageset_on_disconnect_notify(void* self, void (*callback)(void*, const void*)) {
    KSvg__ImageSet_OnDisconnectNotify((KSvg__ImageSet*)self, (intptr_t)callback);
}

QObject* k_svg__imageset_sender(const void* self) {
    return KSvg__ImageSet_Sender((KSvg__ImageSet*)self);
}

int32_t k_svg__imageset_sender_signal_index(const void* self) {
    return KSvg__ImageSet_SenderSignalIndex((KSvg__ImageSet*)self);
}

int32_t k_svg__imageset_receivers(const void* self, const char* signal) {
    return KSvg__ImageSet_Receivers((KSvg__ImageSet*)self, signal);
}

bool k_svg__imageset_is_signal_connected(const void* self, const void* signal) {
    return KSvg__ImageSet_IsSignalConnected((KSvg__ImageSet*)self, (QMetaMethod*)signal);
}

void k_svg__imageset_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_svg__imageset_delete(void* self) {
    KSvg__ImageSet_Delete((KSvg__ImageSet*)(self));
}
