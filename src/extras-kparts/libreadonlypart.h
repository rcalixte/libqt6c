#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBREADONLYPART_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBREADONLYPART_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html)

/// k_parts__readonlypart_new constructs a new KParts::ReadOnlyPart object.
///
KParts__ReadOnlyPart* k_parts__readonlypart_new();

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html)

/// k_parts__readonlypart_new2 constructs a new KParts::ReadOnlyPart object.
///
/// @param parent QObject*
///
KParts__ReadOnlyPart* k_parts__readonlypart_new2(void* parent);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html)

/// k_parts__readonlypart_new3 constructs a new KParts::ReadOnlyPart object.
///
/// @param parent QObject*
/// @param data KPluginMetaData*
///
KParts__ReadOnlyPart* k_parts__readonlypart_new3(void* parent, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KParts__ReadOnlyPart*
///
const QMetaObject* k_parts__readonlypart_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback const QMetaObject* func()
///
void k_parts__readonlypart_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
///
const QMetaObject* k_parts__readonlypart_qbase_meta_object(void* self);

/// @param self KParts__ReadOnlyPart*
/// @param param1 const char*
///
void* k_parts__readonlypart_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void* func(KParts__ReadOnlyPart* self, const char* param1)
///
void k_parts__readonlypart_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
/// @param param1 const char*
///
void* k_parts__readonlypart_qbase_metacast(void* self, const char* param1);

/// @param self KParts__ReadOnlyPart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__readonlypart_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback int32_t func(KParts__ReadOnlyPart* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_parts__readonlypart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__readonlypart_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_parts__readonlypart_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setProgressInfoEnabled)
///
/// @param self KParts__ReadOnlyPart*
/// @param show bool
///
void k_parts__readonlypart_set_progress_info_enabled(void* self, bool show);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_is_progress_info_enabled(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
///
/// @param self KParts__ReadOnlyPart*
/// @param url QUrl*
///
bool k_parts__readonlypart_open_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback bool func(KParts__ReadOnlyPart* self, QUrl* url)
///
void k_parts__readonlypart_on_open_url(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
///
/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
/// @param url QUrl*
///
bool k_parts__readonlypart_qbase_open_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#url)
///
/// @param self KParts__ReadOnlyPart*
///
QUrl* k_parts__readonlypart_url(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_close_url(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback bool func()
///
void k_parts__readonlypart_on_close_url(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeUrl)
///
/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_qbase_close_url(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
///
/// @param self KParts__ReadOnlyPart*
///
KParts__NavigationExtension* k_parts__readonlypart_navigation_extension(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setArguments)
///
/// @param self KParts__ReadOnlyPart*
/// @param arguments KParts__OpenUrlArguments*
///
void k_parts__readonlypart_set_arguments(void* self, void* arguments);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#arguments)
///
/// @param self KParts__ReadOnlyPart*
///
KParts__OpenUrlArguments* k_parts__readonlypart_arguments(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openStream)
///
/// @param self KParts__ReadOnlyPart*
/// @param mimeType const char*
/// @param url QUrl*
///
bool k_parts__readonlypart_open_stream(void* self, const char* mimeType, void* url);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#writeStream)
///
/// @param self KParts__ReadOnlyPart*
/// @param data const char*
///
bool k_parts__readonlypart_write_stream(void* self, const char* data);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeStream)
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_close_stream(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
///
/// @param self KParts__ReadOnlyPart*
/// @param job KIO__Job*
///
void k_parts__readonlypart_started(void* self, void* job);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, KIO__Job* job)
///
void k_parts__readonlypart_on_started(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_completed(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self)
///
void k_parts__readonlypart_on_completed(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_completed_with_pending_action(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self)
///
void k_parts__readonlypart_on_completed_with_pending_action(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
///
/// @param self KParts__ReadOnlyPart*
/// @param errMsg const char*
///
void k_parts__readonlypart_canceled(void* self, const char* errMsg);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* errMsg)
///
void k_parts__readonlypart_on_canceled(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
///
/// @param self KParts__ReadOnlyPart*
/// @param url QUrl*
///
void k_parts__readonlypart_url_changed(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QUrl* url)
///
void k_parts__readonlypart_on_url_changed(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_open_file(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback bool func()
///
void k_parts__readonlypart_on_open_file(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
///
/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_qbase_open_file(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_abort_load(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func()
///
void k_parts__readonlypart_on_abort_load(void* self, void (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
///
/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_qbase_abort_load(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
///
/// @param self KParts__ReadOnlyPart*
/// @param event KParts__GUIActivateEvent*
///
void k_parts__readonlypart_gui_activate_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, KParts__GUIActivateEvent* event)
///
void k_parts__readonlypart_on_gui_activate_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
///
/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
/// @param event KParts__GUIActivateEvent*
///
void k_parts__readonlypart_qbase_gui_activate_event(void* self, void* event);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
///
/// @param self KParts__ReadOnlyPart*
/// @param url QUrl*
///
void k_parts__readonlypart_set_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QUrl* url)
///
void k_parts__readonlypart_on_set_url(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
///
/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
/// @param url QUrl*
///
void k_parts__readonlypart_qbase_set_url(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_local_file_path(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback const char* func()
///
void k_parts__readonlypart_on_local_file_path(void* self, const char* (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
///
/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_qbase_local_file_path(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
///
/// @param self KParts__ReadOnlyPart*
/// @param localFilePath const char*
///
void k_parts__readonlypart_set_local_file_path(void* self, const char* localFilePath);

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* localFilePath)
///
void k_parts__readonlypart_on_set_local_file_path(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
///
/// Base class method implementation
///
/// @param self KParts__ReadOnlyPart*
/// @param localFilePath const char*
///
void k_parts__readonlypart_qbase_set_local_file_path(void* self, const char* localFilePath);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_parts__readonlypart_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_parts__readonlypart_tr3(const char* s, const char* c, int n);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#manager)
///
/// @param self KParts__ReadOnlyPart*
///
KParts__PartManager* k_parts__readonlypart_manager(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
///
/// @param self KParts__ReadOnlyPart*
/// @param autoDeleteWidget bool
///
void k_parts__readonlypart_set_auto_delete_widget(void* self, bool autoDeleteWidget);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeletePart)
///
/// @param self KParts__ReadOnlyPart*
/// @param autoDeletePart bool
///
void k_parts__readonlypart_set_auto_delete_part(void* self, bool autoDeletePart);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
///
/// @param self KParts__ReadOnlyPart*
///
KPluginMetaData* k_parts__readonlypart_meta_data(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
///
/// @param self KParts__ReadOnlyPart*
/// @param caption const char*
///
void k_parts__readonlypart_set_window_caption(void* self, const char* caption);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* caption)
///
void k_parts__readonlypart_on_set_window_caption(void* self, void (*callback)(void*, const char*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
///
/// @param self KParts__ReadOnlyPart*
/// @param text const char*
///
void k_parts__readonlypart_set_status_bar_text(void* self, const char* text);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* text)
///
void k_parts__readonlypart_on_set_status_bar_text(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KParts__ReadOnlyPart*
/// @param name char*
///
void k_parts__readonlypart_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KParts__ReadOnlyPart*
///
bool k_parts__readonlypart_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KParts__ReadOnlyPart*
/// @param b bool
///
bool k_parts__readonlypart_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KParts__ReadOnlyPart*
///
QThread* k_parts__readonlypart_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__ReadOnlyPart*
/// @param thread QThread*
///
bool k_parts__readonlypart_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ReadOnlyPart*
/// @param interval int
///
int32_t k_parts__readonlypart_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ReadOnlyPart*
/// @param time int64_t of nanoseconds
///
int32_t k_parts__readonlypart_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__ReadOnlyPart*
/// @param id int
///
void k_parts__readonlypart_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__ReadOnlyPart*
/// @param id enum Qt__TimerId
///
void k_parts__readonlypart_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KParts__ReadOnlyPart*
///
/// @return libqt_list of QObject*
///
libqt_list k_parts__readonlypart_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KParts__ReadOnlyPart*
/// @param parent QObject*
///
void k_parts__readonlypart_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KParts__ReadOnlyPart*
/// @param filterObj QObject*
///
void k_parts__readonlypart_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KParts__ReadOnlyPart*
/// @param obj QObject*
///
void k_parts__readonlypart_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_parts__readonlypart_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__ReadOnlyPart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_parts__readonlypart_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_parts__readonlypart_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_parts__readonlypart_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KParts__ReadOnlyPart*
/// @param name const char*
/// @param value QVariant*
///
bool k_parts__readonlypart_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KParts__ReadOnlyPart*
/// @param name const char*
///
QVariant* k_parts__readonlypart_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KParts__ReadOnlyPart*
///
const char** k_parts__readonlypart_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__ReadOnlyPart*
///
QBindingStorage* k_parts__readonlypart_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__ReadOnlyPart*
///
const QBindingStorage* k_parts__readonlypart_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self)
///
void k_parts__readonlypart_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KParts__ReadOnlyPart*
///
QObject* k_parts__readonlypart_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KParts__ReadOnlyPart*
/// @param classname const char*
///
bool k_parts__readonlypart_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__ReadOnlyPart*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool k_parts__readonlypart_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ReadOnlyPart*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__readonlypart_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ReadOnlyPart*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__readonlypart_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_parts__readonlypart_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__ReadOnlyPart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_parts__readonlypart_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ReadOnlyPart*
/// @param param1 QObject*
///
void k_parts__readonlypart_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QObject* param1)
///
void k_parts__readonlypart_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
///
/// @param self KParts__ReadOnlyPart*
/// @param object QObject*
///
void k_parts__readonlypart_set_part_object(void* self, void* object);

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
///
/// @param self KParts__ReadOnlyPart*
///
QObject* k_parts__readonlypart_part_object(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KParts__ReadOnlyPart*
/// @param name const char*
///
QAction* k_parts__readonlypart_action(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
///
/// @param self KParts__ReadOnlyPart*
/// @param doc QDomDocument*
///
void k_parts__readonlypart_set_x_m_l_g_u_i_build_document(void* self, void* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
///
/// @param self KParts__ReadOnlyPart*
///
QDomDocument* k_parts__readonlypart_xmlgui_build_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
///
/// @param self KParts__ReadOnlyPart*
/// @param factory KXMLGUIFactory*
///
void k_parts__readonlypart_set_factory(void* self, void* factory);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
///
/// @param self KParts__ReadOnlyPart*
///
KXMLGUIFactory* k_parts__readonlypart_factory(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
///
/// @param self KParts__ReadOnlyPart*
///
KXMLGUIClient* k_parts__readonlypart_parent_client(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
///
/// @param self KParts__ReadOnlyPart*
/// @param child KXMLGUIClient*
///
void k_parts__readonlypart_insert_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
///
/// @param self KParts__ReadOnlyPart*
/// @param child KXMLGUIClient*
///
void k_parts__readonlypart_remove_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
///
/// @param self KParts__ReadOnlyPart*
///
/// @return libqt_list of KXMLGUIClient*
///
libqt_list k_parts__readonlypart_child_clients(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
///
/// @param self KParts__ReadOnlyPart*
/// @param builder KXMLGUIBuilder*
///
void k_parts__readonlypart_set_client_builder(void* self, void* builder);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
///
/// @param self KParts__ReadOnlyPart*
///
KXMLGUIBuilder* k_parts__readonlypart_client_builder(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_reload_x_m_l(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
///
/// @param self KParts__ReadOnlyPart*
/// @param name const char*
/// @param actionList libqt_list of QAction*
///
void k_parts__readonlypart_plug_action_list(void* self, const char* name, libqt_list /* of QAction* */ actionList);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
///
/// @param self KParts__ReadOnlyPart*
/// @param name const char*
///
void k_parts__readonlypart_unplug_action_list(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param files const char**
/// @param doc const char*
///
const char* k_parts__readonlypart_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
///
/// @param self KParts__ReadOnlyPart*
/// @param state const char*
/// @param action const char*
///
void k_parts__readonlypart_add_state_action_enabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
///
/// @param self KParts__ReadOnlyPart*
/// @param state const char*
/// @param action const char*
///
void k_parts__readonlypart_add_state_action_disabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
///
/// @param self KParts__ReadOnlyPart*
/// @param state const char*
///
KXMLGUIClient__StateChange* k_parts__readonlypart_get_actions_to_change_for_state(void* self, const char* state);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
///
/// @param self KParts__ReadOnlyPart*
/// @param param1 QWidget*
///
void k_parts__readonlypart_begin_x_m_l_plug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_end_x_m_l_plug(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
///
/// @param self KParts__ReadOnlyPart*
/// @param param1 QWidget*
///
void k_parts__readonlypart_prepare_x_m_l_unplug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KParts__ReadOnlyPart*
/// @param xmlfile const char*
/// @param localxmlfile const char*
///
void k_parts__readonlypart_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param xml const char*
///
const char* k_parts__readonlypart_find_version_number(const char* xml);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KParts__ReadOnlyPart*
/// @param xmlfile const char*
/// @param localxmlfile const char*
/// @param merge bool
///
void k_parts__readonlypart_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
QWidget* k_parts__readonlypart_widget(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
QWidget* k_parts__readonlypart_qbase_widget(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback QWidget* func()
///
void k_parts__readonlypart_on_widget(void* self, QWidget* (*callback)());

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param manager KParts__PartManager*
///
void k_parts__readonlypart_set_manager(void* self, void* manager);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param manager KParts__PartManager*
///
void k_parts__readonlypart_qbase_set_manager(void* self, void* manager);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, KParts__PartManager* manager)
///
void k_parts__readonlypart_on_set_manager(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param widget QWidget*
/// @param globalPos QPoint*
///
KParts__Part* k_parts__readonlypart_hit_test(void* self, void* widget, void* globalPos);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param widget QWidget*
/// @param globalPos QPoint*
///
KParts__Part* k_parts__readonlypart_qbase_hit_test(void* self, void* widget, void* globalPos);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback KParts__Part* func(KParts__ReadOnlyPart* self, QWidget* widget, QPoint* globalPos)
///
void k_parts__readonlypart_on_hit_test(void* self, KParts__Part* (*callback)(void*, void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param widget QWidget*
///
void k_parts__readonlypart_set_widget(void* self, void* widget);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param widget QWidget*
///
void k_parts__readonlypart_qbase_set_widget(void* self, void* widget);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QWidget* widget)
///
void k_parts__readonlypart_on_set_widget(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event QEvent*
///
void k_parts__readonlypart_custom_event(void* self, void* event);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event QEvent*
///
void k_parts__readonlypart_qbase_custom_event(void* self, void* event);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QEvent* event)
///
void k_parts__readonlypart_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event KParts__PartActivateEvent*
///
void k_parts__readonlypart_part_activate_event(void* self, void* event);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event KParts__PartActivateEvent*
///
void k_parts__readonlypart_qbase_part_activate_event(void* self, void* event);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, KParts__PartActivateEvent* event)
///
void k_parts__readonlypart_on_part_activate_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event QEvent*
///
bool k_parts__readonlypart_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event QEvent*
///
bool k_parts__readonlypart_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback bool func(KParts__ReadOnlyPart* self, QEvent* event)
///
void k_parts__readonlypart_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__readonlypart_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__readonlypart_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback bool func(KParts__ReadOnlyPart* self, QObject* watched, QEvent* event)
///
void k_parts__readonlypart_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event QTimerEvent*
///
void k_parts__readonlypart_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event QTimerEvent*
///
void k_parts__readonlypart_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QTimerEvent* event)
///
void k_parts__readonlypart_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event QChildEvent*
///
void k_parts__readonlypart_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param event QChildEvent*
///
void k_parts__readonlypart_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QChildEvent* event)
///
void k_parts__readonlypart_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param signal QMetaMethod*
///
void k_parts__readonlypart_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param signal QMetaMethod*
///
void k_parts__readonlypart_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QMetaMethod* signal)
///
void k_parts__readonlypart_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param signal QMetaMethod*
///
void k_parts__readonlypart_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param signal QMetaMethod*
///
void k_parts__readonlypart_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QMetaMethod* signal)
///
void k_parts__readonlypart_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param element QDomElement*
///
QAction* k_parts__readonlypart_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param element QDomElement*
///
QAction* k_parts__readonlypart_qbase_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback QAction* func(KParts__ReadOnlyPart* self, QDomElement* element)
///
void k_parts__readonlypart_on_action2(void* self, QAction* (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
KActionCollection* k_parts__readonlypart_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
KActionCollection* k_parts__readonlypart_qbase_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback KActionCollection* func()
///
void k_parts__readonlypart_on_action_collection(void* self, KActionCollection* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_qbase_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback const char* func()
///
void k_parts__readonlypart_on_component_name(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
QDomDocument* k_parts__readonlypart_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
QDomDocument* k_parts__readonlypart_qbase_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback QDomDocument* func()
///
void k_parts__readonlypart_on_dom_document(void* self, QDomDocument* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_qbase_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback const char* func()
///
void k_parts__readonlypart_on_xml_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_qbase_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback const char* func()
///
void k_parts__readonlypart_on_local_x_m_l_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_parts__readonlypart_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_parts__readonlypart_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* componentName, const char* componentDisplayName)
///
void k_parts__readonlypart_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_parts__readonlypart_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_parts__readonlypart_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* file, bool merge, bool setXMLDoc)
///
void k_parts__readonlypart_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param file const char*
///
void k_parts__readonlypart_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param file const char*
///
void k_parts__readonlypart_qbase_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* file)
///
void k_parts__readonlypart_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param document const char*
/// @param merge bool
///
void k_parts__readonlypart_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param document const char*
/// @param merge bool
///
void k_parts__readonlypart_qbase_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* document, bool merge)
///
void k_parts__readonlypart_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param document QDomDocument*
/// @param merge bool
///
void k_parts__readonlypart_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param document QDomDocument*
/// @param merge bool
///
void k_parts__readonlypart_qbase_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, QDomDocument* document, bool merge)
///
void k_parts__readonlypart_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_parts__readonlypart_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_parts__readonlypart_qbase_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* newstate, enum KXMLGUIClient__ReverseStateChange reverse)
///
void k_parts__readonlypart_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param containerName const char*
///
QWidget* k_parts__readonlypart_host_container(void* self, const char* containerName);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param containerName const char*
///
QWidget* k_parts__readonlypart_qbase_host_container(void* self, const char* containerName);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback QWidget* func(KParts__ReadOnlyPart* self, const char* containerName)
///
void k_parts__readonlypart_on_host_container(void* self, QWidget* (*callback)(void*, const char*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_slot_widget_destroyed(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_qbase_slot_widget_destroyed(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func()
///
void k_parts__readonlypart_on_slot_widget_destroyed(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
QObject* k_parts__readonlypart_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
QObject* k_parts__readonlypart_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback QObject* func()
///
void k_parts__readonlypart_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
int32_t k_parts__readonlypart_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
int32_t k_parts__readonlypart_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback int32_t func()
///
void k_parts__readonlypart_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param signal const char*
///
int32_t k_parts__readonlypart_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param signal const char*
///
int32_t k_parts__readonlypart_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback int32_t func(KParts__ReadOnlyPart* self, const char* signal)
///
void k_parts__readonlypart_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param signal QMetaMethod*
///
bool k_parts__readonlypart_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param signal QMetaMethod*
///
bool k_parts__readonlypart_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback bool func(KParts__ReadOnlyPart* self, QMetaMethod* signal)
///
void k_parts__readonlypart_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
const char* k_parts__readonlypart_qbase_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback const char* func()
///
void k_parts__readonlypart_on_standards_xml_file_location(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_qbase_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func()
///
void k_parts__readonlypart_on_load_standards_xml_file(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KParts__ReadOnlyPart*
/// @param callback void func(KParts__ReadOnlyPart* self, const char* objectName)
///
void k_parts__readonlypart_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KParts__ReadOnlyPart*
///
void k_parts__readonlypart_delete(void* self);

#endif
