#include "libdropjob.hpp"
#include "libjob_base.hpp"
#include "../libqdatetime.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqurl.hpp"
#include "../libqwidget.hpp"
#include "libfileundomanager.hpp"
#include "libfileundomanager.h"

const QMetaObject* k_io__fileundomanager_meta_object(void* self) {
    return KIO__FileUndoManager_MetaObject((KIO__FileUndoManager*)self);
}

void* k_io__fileundomanager_metacast(void* self, const char* param1) {
    return KIO__FileUndoManager_Metacast((KIO__FileUndoManager*)self, param1);
}

int32_t k_io__fileundomanager_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIO__FileUndoManager_Metacall((KIO__FileUndoManager*)self, param1, param2, param3);
}

const char* k_io__fileundomanager_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KIO__FileUndoManager* k_io__fileundomanager_self() {
    return KIO__FileUndoManager_Self();
}

void k_io__fileundomanager_set_ui_interface(void* self, void* ui) {
    KIO__FileUndoManager_SetUiInterface((KIO__FileUndoManager*)self, (KIO__FileUndoManager__UiInterface*)ui);
}

KIO__FileUndoManager__UiInterface* k_io__fileundomanager_ui_interface(void* self) {
    return KIO__FileUndoManager_UiInterface((KIO__FileUndoManager*)self);
}

void k_io__fileundomanager_record_job(void* self, int32_t op, libqt_list /* of QUrl* */ src, void* dst, void* job) {
    KIO__FileUndoManager_RecordJob((KIO__FileUndoManager*)self, op, src, (QUrl*)dst, (KIO__Job*)job);
}

void k_io__fileundomanager_record_copy_job(void* self, void* copyJob) {
    KIO__FileUndoManager_RecordCopyJob((KIO__FileUndoManager*)self, (KIO__CopyJob*)copyJob);
}

bool k_io__fileundomanager_is_undo_available(void* self) {
    return KIO__FileUndoManager_IsUndoAvailable((KIO__FileUndoManager*)self);
}

const char* k_io__fileundomanager_undo_text(void* self) {
    libqt_string _str = KIO__FileUndoManager_UndoText((KIO__FileUndoManager*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uint64_t k_io__fileundomanager_new_command_serial_number(void* self) {
    return KIO__FileUndoManager_NewCommandSerialNumber((KIO__FileUndoManager*)self);
}

uint64_t k_io__fileundomanager_current_command_serial_number(void* self) {
    return KIO__FileUndoManager_CurrentCommandSerialNumber((KIO__FileUndoManager*)self);
}

void k_io__fileundomanager_undo(void* self) {
    KIO__FileUndoManager_Undo((KIO__FileUndoManager*)self);
}

void k_io__fileundomanager_undo_available(void* self, bool avail) {
    KIO__FileUndoManager_UndoAvailable((KIO__FileUndoManager*)self, avail);
}

void k_io__fileundomanager_on_undo_available(void* self, void (*callback)(void*, bool)) {
    KIO__FileUndoManager_Connect_UndoAvailable((KIO__FileUndoManager*)self, (intptr_t)callback);
}

void k_io__fileundomanager_undo_text_changed(void* self, const char* text) {
    KIO__FileUndoManager_UndoTextChanged((KIO__FileUndoManager*)self, qstring(text));
}

void k_io__fileundomanager_on_undo_text_changed(void* self, void (*callback)(void*, const char*)) {
    KIO__FileUndoManager_Connect_UndoTextChanged((KIO__FileUndoManager*)self, (intptr_t)callback);
}

void k_io__fileundomanager_undo_job_finished(void* self) {
    KIO__FileUndoManager_UndoJobFinished((KIO__FileUndoManager*)self);
}

void k_io__fileundomanager_on_undo_job_finished(void* self, void (*callback)(void*)) {
    KIO__FileUndoManager_Connect_UndoJobFinished((KIO__FileUndoManager*)self, (intptr_t)callback);
}

void k_io__fileundomanager_job_recording_started(void* self, int32_t op) {
    KIO__FileUndoManager_JobRecordingStarted((KIO__FileUndoManager*)self, op);
}

void k_io__fileundomanager_on_job_recording_started(void* self, void (*callback)(void*, int32_t)) {
    KIO__FileUndoManager_Connect_JobRecordingStarted((KIO__FileUndoManager*)self, (intptr_t)callback);
}

void k_io__fileundomanager_job_recording_finished(void* self, int32_t op) {
    KIO__FileUndoManager_JobRecordingFinished((KIO__FileUndoManager*)self, op);
}

void k_io__fileundomanager_on_job_recording_finished(void* self, void (*callback)(void*, int32_t)) {
    KIO__FileUndoManager_Connect_JobRecordingFinished((KIO__FileUndoManager*)self, (intptr_t)callback);
}

const char* k_io__fileundomanager_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_io__fileundomanager_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_io__fileundomanager_event(void* self, void* event) {
    return QObject_Event((QObject*)self, (QEvent*)event);
}

bool k_io__fileundomanager_event_filter(void* self, void* watched, void* event) {
    return QObject_EventFilter((QObject*)self, (QObject*)watched, (QEvent*)event);
}

const char* k_io__fileundomanager_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_io__fileundomanager_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_io__fileundomanager_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_io__fileundomanager_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_io__fileundomanager_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_io__fileundomanager_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_io__fileundomanager_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_io__fileundomanager_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_io__fileundomanager_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_io__fileundomanager_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_io__fileundomanager_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_io__fileundomanager_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_io__fileundomanager_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_io__fileundomanager_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_io__fileundomanager_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void k_io__fileundomanager_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_io__fileundomanager_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_io__fileundomanager_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_io__fileundomanager_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_io__fileundomanager_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_io__fileundomanager_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_io__fileundomanager_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_io__fileundomanager_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_io__fileundomanager_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_io__fileundomanager_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_io__fileundomanager_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_io__fileundomanager_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_io__fileundomanager_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_io__fileundomanager_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_io__fileundomanager_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_io__fileundomanager_dynamic_property_names\n");
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

QBindingStorage* k_io__fileundomanager_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_io__fileundomanager_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_io__fileundomanager_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_io__fileundomanager_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_io__fileundomanager_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_io__fileundomanager_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_io__fileundomanager_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_io__fileundomanager_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_io__fileundomanager_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_io__fileundomanager_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_io__fileundomanager_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_io__fileundomanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_io__fileundomanager_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_io__fileundomanager_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_io__fileundomanager_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_io__fileundomanager_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_io__fileundomanager_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_io__fileundomanager_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

void k_io__fileundomanager_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

KIO__FileUndoManager__UiInterface* k_io__fileundomanager__uiinterface_new() {
    return KIO__FileUndoManager__UiInterface_new();
}

void k_io__fileundomanager__uiinterface_set_show_progress_info(void* self, bool b) {
    KIO__FileUndoManager__UiInterface_SetShowProgressInfo((KIO__FileUndoManager__UiInterface*)self, b);
}

bool k_io__fileundomanager__uiinterface_show_progress_info(void* self) {
    return KIO__FileUndoManager__UiInterface_ShowProgressInfo((KIO__FileUndoManager__UiInterface*)self);
}

void k_io__fileundomanager__uiinterface_set_parent_widget(void* self, void* parentWidget) {
    KIO__FileUndoManager__UiInterface_SetParentWidget((KIO__FileUndoManager__UiInterface*)self, (QWidget*)parentWidget);
}

QWidget* k_io__fileundomanager__uiinterface_parent_widget(void* self) {
    return KIO__FileUndoManager__UiInterface_ParentWidget((KIO__FileUndoManager__UiInterface*)self);
}

void k_io__fileundomanager__uiinterface_job_error(void* self, void* job) {
    KIO__FileUndoManager__UiInterface_JobError((KIO__FileUndoManager__UiInterface*)self, (KIO__Job*)job);
}

void k_io__fileundomanager__uiinterface_on_job_error(void* self, void (*callback)(void*, void*)) {
    KIO__FileUndoManager__UiInterface_OnJobError((KIO__FileUndoManager__UiInterface*)self, (intptr_t)callback);
}

void k_io__fileundomanager__uiinterface_qbase_job_error(void* self, void* job) {
    KIO__FileUndoManager__UiInterface_QBaseJobError((KIO__FileUndoManager__UiInterface*)self, (KIO__Job*)job);
}

bool k_io__fileundomanager__uiinterface_copied_file_was_modified(void* self, void* src, void* dest, void* srcTime, void* destTime) {
    return KIO__FileUndoManager__UiInterface_CopiedFileWasModified((KIO__FileUndoManager__UiInterface*)self, (QUrl*)src, (QUrl*)dest, (QDateTime*)srcTime, (QDateTime*)destTime);
}

void k_io__fileundomanager__uiinterface_on_copied_file_was_modified(void* self, bool (*callback)(void*, void*, void*, void*, void*)) {
    KIO__FileUndoManager__UiInterface_OnCopiedFileWasModified((KIO__FileUndoManager__UiInterface*)self, (intptr_t)callback);
}

bool k_io__fileundomanager__uiinterface_qbase_copied_file_was_modified(void* self, void* src, void* dest, void* srcTime, void* destTime) {
    return KIO__FileUndoManager__UiInterface_QBaseCopiedFileWasModified((KIO__FileUndoManager__UiInterface*)self, (QUrl*)src, (QUrl*)dest, (QDateTime*)srcTime, (QDateTime*)destTime);
}

void k_io__fileundomanager__uiinterface_virtual_hook(void* self, int id, void* data) {
    KIO__FileUndoManager__UiInterface_VirtualHook((KIO__FileUndoManager__UiInterface*)self, id, data);
}

void k_io__fileundomanager__uiinterface_on_virtual_hook(void* self, void (*callback)(void*, int, void*)) {
    KIO__FileUndoManager__UiInterface_OnVirtualHook((KIO__FileUndoManager__UiInterface*)self, (intptr_t)callback);
}

void k_io__fileundomanager__uiinterface_qbase_virtual_hook(void* self, int id, void* data) {
    KIO__FileUndoManager__UiInterface_QBaseVirtualHook((KIO__FileUndoManager__UiInterface*)self, id, data);
}

void k_io__fileundomanager__uiinterface_delete(void* self) {
    KIO__FileUndoManager__UiInterface_Delete((KIO__FileUndoManager__UiInterface*)(self));
}
