#include "../extras-kcoreaddons/libkjob.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libuntrustedprogramhandlerinterface.hpp"
#include "libuntrustedprogramhandlerinterface.h"

const QMetaObject* k_io__untrustedprogramhandlerinterface_meta_object(void* self) {
    return KIO__UntrustedProgramHandlerInterface_MetaObject((KIO__UntrustedProgramHandlerInterface*)self);
}

void* k_io__untrustedprogramhandlerinterface_metacast(void* self, const char* param1) {
    return KIO__UntrustedProgramHandlerInterface_Metacast((KIO__UntrustedProgramHandlerInterface*)self, param1);
}

int32_t k_io__untrustedprogramhandlerinterface_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__UntrustedProgramHandlerInterface_Metacall((KIO__UntrustedProgramHandlerInterface*)self, param1, param2, param3);
}

const char* k_io__untrustedprogramhandlerinterface_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__untrustedprogramhandlerinterface_show_untrusted_program_warning(void* self, void* job, const char* programName) {
    KIO__UntrustedProgramHandlerInterface_ShowUntrustedProgramWarning((KIO__UntrustedProgramHandlerInterface*)self, (KJob*)job, qstring(programName));
}

bool k_io__untrustedprogramhandlerinterface_make_service_file_executable(void* self, const char* fileName, const char* errorString) {
    return KIO__UntrustedProgramHandlerInterface_MakeServiceFileExecutable((KIO__UntrustedProgramHandlerInterface*)self, qstring(fileName), qstring(errorString));
}

bool k_io__untrustedprogramhandlerinterface_set_execute_bit(void* self, const char* fileName, const char* errorString) {
    return KIO__UntrustedProgramHandlerInterface_SetExecuteBit((KIO__UntrustedProgramHandlerInterface*)self, qstring(fileName), qstring(errorString));
}

void k_io__untrustedprogramhandlerinterface_result(void* self, bool confirmed) {
    KIO__UntrustedProgramHandlerInterface_Result((KIO__UntrustedProgramHandlerInterface*)self, confirmed);
}

void k_io__untrustedprogramhandlerinterface_on_result(void* self, void (*callback)(void*, bool)) {
    KIO__UntrustedProgramHandlerInterface_Connect_Result((KIO__UntrustedProgramHandlerInterface*)self, (intptr_t)callback);
}

const char* k_io__untrustedprogramhandlerinterface_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__untrustedprogramhandlerinterface_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_io__untrustedprogramhandlerinterface_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_io__untrustedprogramhandlerinterface_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_io__untrustedprogramhandlerinterface_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__untrustedprogramhandlerinterface_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__untrustedprogramhandlerinterface_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__untrustedprogramhandlerinterface_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__untrustedprogramhandlerinterface_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__untrustedprogramhandlerinterface_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__untrustedprogramhandlerinterface_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__untrustedprogramhandlerinterface_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__untrustedprogramhandlerinterface_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__untrustedprogramhandlerinterface_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_io__untrustedprogramhandlerinterface_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__untrustedprogramhandlerinterface_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__untrustedprogramhandlerinterface_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__untrustedprogramhandlerinterface_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__untrustedprogramhandlerinterface_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__untrustedprogramhandlerinterface_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__untrustedprogramhandlerinterface_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__untrustedprogramhandlerinterface_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__untrustedprogramhandlerinterface_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__untrustedprogramhandlerinterface_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_io__untrustedprogramhandlerinterface_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__untrustedprogramhandlerinterface_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__untrustedprogramhandlerinterface_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__untrustedprogramhandlerinterface_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__untrustedprogramhandlerinterface_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__untrustedprogramhandlerinterface_dynamic_property_names");
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

QBindingStorage* k_io__untrustedprogramhandlerinterface_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__untrustedprogramhandlerinterface_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__untrustedprogramhandlerinterface_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__untrustedprogramhandlerinterface_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__untrustedprogramhandlerinterface_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__untrustedprogramhandlerinterface_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__untrustedprogramhandlerinterface_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_io__untrustedprogramhandlerinterface_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_io__untrustedprogramhandlerinterface_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_io__untrustedprogramhandlerinterface_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__untrustedprogramhandlerinterface_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_io__untrustedprogramhandlerinterface_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__untrustedprogramhandlerinterface_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_io__untrustedprogramhandlerinterface_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}
