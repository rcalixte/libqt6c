#pragma once
#ifndef SRC_EXTRAS_KIOQT6C_LIBFILEUNDOMANAGER_H
#define SRC_EXTRAS_KIOQT6C_LIBFILEUNDOMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/kio-fileundomanager.html

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIO__FileUndoManager*
const QMetaObject* k_io__fileundomanager_meta_object(void* self);

/// @param self KIO__FileUndoManager*
/// @param param1 const char*
void* k_io__fileundomanager_metacast(void* self, const char* param1);

/// @param self KIO__FileUndoManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_io__fileundomanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_io__fileundomanager_tr(const char* s);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#self)
///
KIO__FileUndoManager* k_io__fileundomanager_self();

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#setUiInterface)
///
/// @param self KIO__FileUndoManager*
/// @param ui KIO__FileUndoManager__UiInterface*
void k_io__fileundomanager_set_ui_interface(void* self, void* ui);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#uiInterface)
///
/// @param self KIO__FileUndoManager*
KIO__FileUndoManager__UiInterface* k_io__fileundomanager_ui_interface(void* self);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#recordJob)
///
/// @param self KIO__FileUndoManager*
/// @param op enum KIO__FileUndoManager__CommandType
/// @param src libqt_list /* of QUrl* */
/// @param dst QUrl*
/// @param job KIO__Job*
void k_io__fileundomanager_record_job(void* self, int32_t op, libqt_list src, void* dst, void* job);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#recordCopyJob)
///
/// @param self KIO__FileUndoManager*
/// @param copyJob KIO__CopyJob*
void k_io__fileundomanager_record_copy_job(void* self, void* copyJob);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#isUndoAvailable)
///
/// @param self KIO__FileUndoManager*
bool k_io__fileundomanager_is_undo_available(void* self);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#undoText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileUndoManager*
const char* k_io__fileundomanager_undo_text(void* self);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#newCommandSerialNumber)
///
/// @param self KIO__FileUndoManager*
uint64_t k_io__fileundomanager_new_command_serial_number(void* self);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#currentCommandSerialNumber)
///
/// @param self KIO__FileUndoManager*
uint64_t k_io__fileundomanager_current_command_serial_number(void* self);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#undo)
///
/// @param self KIO__FileUndoManager*
void k_io__fileundomanager_undo(void* self);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#undoAvailable)
///
/// @param self KIO__FileUndoManager*
/// @param avail bool
void k_io__fileundomanager_undo_available(void* self, bool avail);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#undoAvailable)
///
/// @param self KIO__FileUndoManager*
/// @param callback void func(KIO__FileUndoManager* self, bool avail)
void k_io__fileundomanager_on_undo_available(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#undoTextChanged)
///
/// @param self KIO__FileUndoManager*
/// @param text const char*
void k_io__fileundomanager_undo_text_changed(void* self, const char* text);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#undoTextChanged)
///
/// @param self KIO__FileUndoManager*
/// @param callback void func(KIO__FileUndoManager* self, const char* text)
void k_io__fileundomanager_on_undo_text_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#undoJobFinished)
///
/// @param self KIO__FileUndoManager*
void k_io__fileundomanager_undo_job_finished(void* self);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#undoJobFinished)
///
/// @param self KIO__FileUndoManager*
/// @param callback void func(KIO__FileUndoManager* self)
void k_io__fileundomanager_on_undo_job_finished(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#jobRecordingStarted)
///
/// @param self KIO__FileUndoManager*
/// @param op enum KIO__FileUndoManager__CommandType
void k_io__fileundomanager_job_recording_started(void* self, int32_t op);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#jobRecordingStarted)
///
/// @param self KIO__FileUndoManager*
/// @param callback void func(KIO__FileUndoManager* self, enum KIO__FileUndoManager__CommandType op)
void k_io__fileundomanager_on_job_recording_started(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#jobRecordingFinished)
///
/// @param self KIO__FileUndoManager*
/// @param op enum KIO__FileUndoManager__CommandType
void k_io__fileundomanager_job_recording_finished(void* self, int32_t op);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager.html#jobRecordingFinished)
///
/// @param self KIO__FileUndoManager*
/// @param callback void func(KIO__FileUndoManager* self, enum KIO__FileUndoManager__CommandType op)
void k_io__fileundomanager_on_job_recording_finished(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_io__fileundomanager_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_io__fileundomanager_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self KIO__FileUndoManager*
/// @param event QEvent*
bool k_io__fileundomanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self KIO__FileUndoManager*
/// @param watched QObject*
/// @param event QEvent*
bool k_io__fileundomanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileUndoManager*
const char* k_io__fileundomanager_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIO__FileUndoManager*
/// @param name char*
void k_io__fileundomanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIO__FileUndoManager*
bool k_io__fileundomanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIO__FileUndoManager*
bool k_io__fileundomanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIO__FileUndoManager*
bool k_io__fileundomanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIO__FileUndoManager*
bool k_io__fileundomanager_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIO__FileUndoManager*
/// @param b bool
bool k_io__fileundomanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIO__FileUndoManager*
QThread* k_io__fileundomanager_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__FileUndoManager*
/// @param thread QThread*
bool k_io__fileundomanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__FileUndoManager*
/// @param interval int
int32_t k_io__fileundomanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__FileUndoManager*
/// @param id int
void k_io__fileundomanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIO__FileUndoManager*
/// @param id enum Qt__TimerId
void k_io__fileundomanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIO__FileUndoManager*
libqt_list /* of QObject* */ k_io__fileundomanager_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIO__FileUndoManager*
/// @param parent QObject*
void k_io__fileundomanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIO__FileUndoManager*
/// @param filterObj QObject*
void k_io__fileundomanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIO__FileUndoManager*
/// @param obj QObject*
void k_io__fileundomanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_io__fileundomanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__FileUndoManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_io__fileundomanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_io__fileundomanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_io__fileundomanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIO__FileUndoManager*
void k_io__fileundomanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIO__FileUndoManager*
void k_io__fileundomanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIO__FileUndoManager*
/// @param name const char*
/// @param value QVariant*
bool k_io__fileundomanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIO__FileUndoManager*
/// @param name const char*
QVariant* k_io__fileundomanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIO__FileUndoManager*
const char** k_io__fileundomanager_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__FileUndoManager*
QBindingStorage* k_io__fileundomanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIO__FileUndoManager*
const QBindingStorage* k_io__fileundomanager_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FileUndoManager*
void k_io__fileundomanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FileUndoManager*
/// @param callback void func(KIO__FileUndoManager* self)
void k_io__fileundomanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIO__FileUndoManager*
QObject* k_io__fileundomanager_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIO__FileUndoManager*
/// @param classname const char*
bool k_io__fileundomanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIO__FileUndoManager*
void k_io__fileundomanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIO__FileUndoManager*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_io__fileundomanager_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIO__FileUndoManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_io__fileundomanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__fileundomanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIO__FileUndoManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_io__fileundomanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FileUndoManager*
/// @param param1 QObject*
void k_io__fileundomanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIO__FileUndoManager*
/// @param callback void func(KIO__FileUndoManager* self, QObject* param1)
void k_io__fileundomanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIO__FileUndoManager*
/// @param callback void func(KIO__FileUndoManager* self, const char* objectName)
void k_io__fileundomanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// https://api.kde.org/kio-fileundomanager-uiinterface.html

/// k_io__fileundomanager__uiinterface_new constructs a new KIO::FileUndoManager::UiInterface object.
///
KIO__FileUndoManager__UiInterface* k_io__fileundomanager__uiinterface_new();

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#setShowProgressInfo)
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param b bool
void k_io__fileundomanager__uiinterface_set_show_progress_info(void* self, bool b);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#showProgressInfo)
///
/// @param self KIO__FileUndoManager__UiInterface*
bool k_io__fileundomanager__uiinterface_show_progress_info(void* self);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#setParentWidget)
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param parentWidget QWidget*
void k_io__fileundomanager__uiinterface_set_parent_widget(void* self, void* parentWidget);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#parentWidget)
///
/// @param self KIO__FileUndoManager__UiInterface*
QWidget* k_io__fileundomanager__uiinterface_parent_widget(void* self);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param job KIO__Job*
void k_io__fileundomanager__uiinterface_job_error(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
///
/// Allows for overriding the related default method
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param callback void func(KIO__FileUndoManager__UiInterface* self, KIO__Job* job)
void k_io__fileundomanager__uiinterface_on_job_error(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#jobError)
///
/// Base class method implementation
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param job KIO__Job*
void k_io__fileundomanager__uiinterface_qbase_job_error(void* self, void* job);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#copiedFileWasModified)
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param src QUrl*
/// @param dest QUrl*
/// @param srcTime QDateTime*
/// @param destTime QDateTime*
bool k_io__fileundomanager__uiinterface_copied_file_was_modified(void* self, void* src, void* dest, void* srcTime, void* destTime);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#copiedFileWasModified)
///
/// Allows for overriding the related default method
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param callback bool func(KIO__FileUndoManager__UiInterface* self, QUrl* src, QUrl* dest, QDateTime* srcTime, QDateTime* destTime)
void k_io__fileundomanager__uiinterface_on_copied_file_was_modified(void* self, bool (*callback)(void*, void*, void*, void*, void*));

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#copiedFileWasModified)
///
/// Base class method implementation
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param src QUrl*
/// @param dest QUrl*
/// @param srcTime QDateTime*
/// @param destTime QDateTime*
bool k_io__fileundomanager__uiinterface_qbase_copied_file_was_modified(void* self, void* src, void* dest, void* srcTime, void* destTime);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#virtual_hook)
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param id int
/// @param data void*
void k_io__fileundomanager__uiinterface_virtual_hook(void* self, int id, void* data);

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#virtual_hook)
///
/// Allows for overriding the related default method
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param callback void func(KIO__FileUndoManager__UiInterface* self, int id, void* data)
void k_io__fileundomanager__uiinterface_on_virtual_hook(void* self, void (*callback)(void*, int, void*));

/// [Qt documentation](https://api.kde.org/kio-fileundomanager-uiinterface.html#virtual_hook)
///
/// Base class method implementation
///
/// @param self KIO__FileUndoManager__UiInterface*
/// @param id int
/// @param data void*
void k_io__fileundomanager__uiinterface_qbase_virtual_hook(void* self, int id, void* data);

/// Delete this object from C++ memory.
///
/// @param self KIO__FileUndoManager__UiInterface*
void k_io__fileundomanager__uiinterface_delete(void* self);

/// https://api.kde.org/kio-fileundomanager.html#types

typedef enum {
    KIO_FILEUNDOMANAGER_COMMANDTYPE_COPY = 0,
    KIO_FILEUNDOMANAGER_COMMANDTYPE_MOVE = 1,
    KIO_FILEUNDOMANAGER_COMMANDTYPE_RENAME = 2,
    KIO_FILEUNDOMANAGER_COMMANDTYPE_LINK = 3,
    KIO_FILEUNDOMANAGER_COMMANDTYPE_MKDIR = 4,
    KIO_FILEUNDOMANAGER_COMMANDTYPE_TRASH = 5,
    KIO_FILEUNDOMANAGER_COMMANDTYPE_PUT = 6,
    KIO_FILEUNDOMANAGER_COMMANDTYPE_MKPATH = 7,
    KIO_FILEUNDOMANAGER_COMMANDTYPE_BATCHRENAME = 8
} KIO__FileUndoManager__CommandType;

typedef enum {
    KIO_FILEUNDOMANAGER_UIINTERFACE__HOOKGETASKUSERACTIONINTERFACE = 1
} KIO__FileUndoManager__UiInterface__;

#endif
