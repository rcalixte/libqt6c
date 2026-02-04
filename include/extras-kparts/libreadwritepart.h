#pragma once
#ifndef SRC_EXTRAS_KPARTS_QT6C_LIBREADWRITEPART_H
#define SRC_EXTRAS_KPARTS_QT6C_LIBREADWRITEPART_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html)

/// k_parts__readwritepart_new constructs a new KParts::ReadWritePart object.
///
KParts__ReadWritePart* k_parts__readwritepart_new();

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html)

/// k_parts__readwritepart_new2 constructs a new KParts::ReadWritePart object.
///
/// @param parent QObject*
///
KParts__ReadWritePart* k_parts__readwritepart_new2(void* parent);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html)

/// k_parts__readwritepart_new3 constructs a new KParts::ReadWritePart object.
///
/// @param parent QObject*
/// @param data KPluginMetaData*
///
KParts__ReadWritePart* k_parts__readwritepart_new3(void* parent, void* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KParts__ReadWritePart*
///
const QMetaObject* k_parts__readwritepart_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback const QMetaObject* func()
///
void k_parts__readwritepart_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
///
const QMetaObject* k_parts__readwritepart_qbase_meta_object(void* self);

/// @param self KParts__ReadWritePart*
/// @param param1 const char*
///
void* k_parts__readwritepart_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback void* func(KParts__ReadWritePart* self, const char* param1)
///
void k_parts__readwritepart_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
/// @param param1 const char*
///
void* k_parts__readwritepart_qbase_metacast(void* self, const char* param1);

/// @param self KParts__ReadWritePart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__readwritepart_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback int32_t func(KParts__ReadWritePart* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_parts__readwritepart_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_parts__readwritepart_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_parts__readwritepart_tr(const char* s);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isReadWrite)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_is_read_write(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
///
/// @param self KParts__ReadWritePart*
/// @param readwrite bool
///
void k_parts__readwritepart_set_read_write(void* self, bool readwrite);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, bool readwrite)
///
void k_parts__readwritepart_on_set_read_write(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setReadWrite)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
/// @param readwrite bool
///
void k_parts__readwritepart_qbase_set_read_write(void* self, bool readwrite);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#isModified)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_is_modified(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_query_close(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func()
///
void k_parts__readwritepart_on_query_close(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#queryClose)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_qbase_query_close(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_close_url(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func()
///
void k_parts__readwritepart_on_close_url(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_qbase_close_url(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
///
/// @param self KParts__ReadWritePart*
/// @param promptToSave bool
///
bool k_parts__readwritepart_close_url2(void* self, bool promptToSave);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func(KParts__ReadWritePart* self, bool promptToSave)
///
void k_parts__readwritepart_on_close_url2(void* self, bool (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#closeUrl)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
/// @param promptToSave bool
///
bool k_parts__readwritepart_qbase_close_url2(void* self, bool promptToSave);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
///
/// @param self KParts__ReadWritePart*
/// @param url QUrl*
///
bool k_parts__readwritepart_save_as(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func(KParts__ReadWritePart* self, QUrl* url)
///
void k_parts__readwritepart_on_save_as(void* self, bool (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveAs)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
/// @param url QUrl*
///
bool k_parts__readwritepart_qbase_save_as(void* self, void* url);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
///
/// @param self KParts__ReadWritePart*
/// @param modified bool
///
void k_parts__readwritepart_set_modified(void* self, bool modified);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, bool modified)
///
void k_parts__readwritepart_on_set_modified(void* self, void (*callback)(void*, bool));

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
/// @param modified bool
///
void k_parts__readwritepart_qbase_set_modified(void* self, bool modified);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
///
/// @param self KParts__ReadWritePart*
/// @param handled bool*
/// @param abortClosing bool*
///
void k_parts__readwritepart_sig_query_close(void* self, bool* handled, bool* abortClosing);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#sigQueryClose)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, bool* handled, bool* abortClosing)
///
void k_parts__readwritepart_on_sig_query_close(void* self, void (*callback)(void*, bool*, bool*));

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#setModified)
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_set_modified2(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_save(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func()
///
void k_parts__readwritepart_on_save(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#save)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_qbase_save(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#waitSaveComplete)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_wait_save_complete(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveFile)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_save_file(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveFile)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func()
///
void k_parts__readwritepart_on_save_file(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveFile)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_qbase_save_file(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveToUrl)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_save_to_url(void* self);

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveToUrl)
///
/// Allows for overriding the related default method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func()
///
void k_parts__readwritepart_on_save_to_url(void* self, bool (*callback)());

/// [Upstream resources](https://api.kde.org/kparts-readwritepart.html#saveToUrl)
///
/// Base class method implementation
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_qbase_save_to_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_parts__readwritepart_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_parts__readwritepart_tr3(const char* s, const char* c, int n);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setProgressInfoEnabled)
///
/// @param self KParts__ReadWritePart*
/// @param show bool
///
void k_parts__readwritepart_set_progress_info_enabled(void* self, bool show);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#isProgressInfoEnabled)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_is_progress_info_enabled(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#url)
///
/// @param self KParts__ReadWritePart*
///
QUrl* k_parts__readwritepart_url(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#navigationExtension)
///
/// @param self KParts__ReadWritePart*
///
KParts__NavigationExtension* k_parts__readwritepart_navigation_extension(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setArguments)
///
/// @param self KParts__ReadWritePart*
/// @param arguments KParts__OpenUrlArguments*
///
void k_parts__readwritepart_set_arguments(void* self, void* arguments);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#arguments)
///
/// @param self KParts__ReadWritePart*
///
KParts__OpenUrlArguments* k_parts__readwritepart_arguments(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openStream)
///
/// @param self KParts__ReadWritePart*
/// @param mimeType const char*
/// @param url QUrl*
///
bool k_parts__readwritepart_open_stream(void* self, const char* mimeType, void* url);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#writeStream)
///
/// @param self KParts__ReadWritePart*
/// @param data const char*
///
bool k_parts__readwritepart_write_stream(void* self, const char* data);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#closeStream)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_close_stream(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
///
/// @param self KParts__ReadWritePart*
/// @param job KIO__Job*
///
void k_parts__readwritepart_started(void* self, void* job);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#started)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, KIO__Job* job)
///
void k_parts__readwritepart_on_started(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_completed(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completed)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self)
///
void k_parts__readwritepart_on_completed(void* self, void (*callback)(void*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_completed_with_pending_action(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#completedWithPendingAction)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self)
///
void k_parts__readwritepart_on_completed_with_pending_action(void* self, void (*callback)(void*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
///
/// @param self KParts__ReadWritePart*
/// @param errMsg const char*
///
void k_parts__readwritepart_canceled(void* self, const char* errMsg);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#canceled)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* errMsg)
///
void k_parts__readwritepart_on_canceled(void* self, void (*callback)(void*, const char*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
///
/// @param self KParts__ReadWritePart*
/// @param url QUrl*
///
void k_parts__readwritepart_url_changed(void* self, void* url);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#urlChanged)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QUrl* url)
///
void k_parts__readwritepart_on_url_changed(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#manager)
///
/// @param self KParts__ReadWritePart*
///
KParts__PartManager* k_parts__readwritepart_manager(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeleteWidget)
///
/// @param self KParts__ReadWritePart*
/// @param autoDeleteWidget bool
///
void k_parts__readwritepart_set_auto_delete_widget(void* self, bool autoDeleteWidget);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setAutoDeletePart)
///
/// @param self KParts__ReadWritePart*
/// @param autoDeletePart bool
///
void k_parts__readwritepart_set_auto_delete_part(void* self, bool autoDeletePart);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#metaData)
///
/// @param self KParts__ReadWritePart*
///
KPluginMetaData* k_parts__readwritepart_meta_data(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
///
/// @param self KParts__ReadWritePart*
/// @param caption const char*
///
void k_parts__readwritepart_set_window_caption(void* self, const char* caption);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWindowCaption)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* caption)
///
void k_parts__readwritepart_on_set_window_caption(void* self, void (*callback)(void*, const char*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
///
/// @param self KParts__ReadWritePart*
/// @param text const char*
///
void k_parts__readwritepart_set_status_bar_text(void* self, const char* text);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setStatusBarText)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* text)
///
void k_parts__readwritepart_on_set_status_bar_text(void* self, void (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KParts__ReadWritePart*
/// @param name char*
///
void k_parts__readwritepart_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KParts__ReadWritePart*
/// @param b bool
///
bool k_parts__readwritepart_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KParts__ReadWritePart*
///
QThread* k_parts__readwritepart_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KParts__ReadWritePart*
/// @param thread QThread*
///
bool k_parts__readwritepart_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ReadWritePart*
/// @param interval int
///
int32_t k_parts__readwritepart_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ReadWritePart*
/// @param time int64_t of nanoseconds
///
int32_t k_parts__readwritepart_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__ReadWritePart*
/// @param id int
///
void k_parts__readwritepart_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KParts__ReadWritePart*
/// @param id enum Qt__TimerId
///
void k_parts__readwritepart_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KParts__ReadWritePart*
///
/// @return libqt_list of QObject*
///
libqt_list k_parts__readwritepart_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KParts__ReadWritePart*
/// @param parent QObject*
///
void k_parts__readwritepart_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KParts__ReadWritePart*
/// @param filterObj QObject*
///
void k_parts__readwritepart_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KParts__ReadWritePart*
/// @param obj QObject*
///
void k_parts__readwritepart_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_parts__readwritepart_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_parts__readwritepart_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__ReadWritePart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_parts__readwritepart_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_parts__readwritepart_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_parts__readwritepart_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__ReadWritePart*
/// @param receiver QObject*
///
bool k_parts__readwritepart_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_parts__readwritepart_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KParts__ReadWritePart*
/// @param name const char*
/// @param value QVariant*
///
bool k_parts__readwritepart_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KParts__ReadWritePart*
/// @param name const char*
///
QVariant* k_parts__readwritepart_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KParts__ReadWritePart*
///
const char** k_parts__readwritepart_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__ReadWritePart*
///
QBindingStorage* k_parts__readwritepart_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KParts__ReadWritePart*
///
const QBindingStorage* k_parts__readwritepart_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self)
///
void k_parts__readwritepart_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KParts__ReadWritePart*
///
QObject* k_parts__readwritepart_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KParts__ReadWritePart*
/// @param classname const char*
///
bool k_parts__readwritepart_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ReadWritePart*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__readwritepart_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KParts__ReadWritePart*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_parts__readwritepart_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_parts__readwritepart_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_parts__readwritepart_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KParts__ReadWritePart*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_parts__readwritepart_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__ReadWritePart*
/// @param signal const char*
///
bool k_parts__readwritepart_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__ReadWritePart*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_parts__readwritepart_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__ReadWritePart*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_parts__readwritepart_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KParts__ReadWritePart*
/// @param receiver QObject*
/// @param member const char*
///
bool k_parts__readwritepart_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ReadWritePart*
/// @param param1 QObject*
///
void k_parts__readwritepart_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QObject* param1)
///
void k_parts__readwritepart_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#setPartObject)
///
/// @param self KParts__ReadWritePart*
/// @param object QObject*
///
void k_parts__readwritepart_set_part_object(void* self, void* object);

/// Inherited from KParts::PartBase
///
/// [Upstream resources](https://api.kde.org/kparts-partbase.html#partObject)
///
/// @param self KParts__ReadWritePart*
///
QObject* k_parts__readwritepart_part_object(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// @param self KParts__ReadWritePart*
/// @param name const char*
///
QAction* k_parts__readwritepart_action(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLGUIBuildDocument)
///
/// @param self KParts__ReadWritePart*
/// @param doc QDomDocument*
///
void k_parts__readwritepart_set_x_m_l_g_u_i_build_document(void* self, void* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlguiBuildDocument)
///
/// @param self KParts__ReadWritePart*
///
QDomDocument* k_parts__readwritepart_xmlgui_build_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setFactory)
///
/// @param self KParts__ReadWritePart*
/// @param factory KXMLGUIFactory*
///
void k_parts__readwritepart_set_factory(void* self, void* factory);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#factory)
///
/// @param self KParts__ReadWritePart*
///
KXMLGUIFactory* k_parts__readwritepart_factory(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#parentClient)
///
/// @param self KParts__ReadWritePart*
///
KXMLGUIClient* k_parts__readwritepart_parent_client(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#insertChildClient)
///
/// @param self KParts__ReadWritePart*
/// @param child KXMLGUIClient*
///
void k_parts__readwritepart_insert_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#removeChildClient)
///
/// @param self KParts__ReadWritePart*
/// @param child KXMLGUIClient*
///
void k_parts__readwritepart_remove_child_client(void* self, void* child);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#childClients)
///
/// @param self KParts__ReadWritePart*
///
/// @return libqt_list of KXMLGUIClient*
///
libqt_list k_parts__readwritepart_child_clients(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setClientBuilder)
///
/// @param self KParts__ReadWritePart*
/// @param builder KXMLGUIBuilder*
///
void k_parts__readwritepart_set_client_builder(void* self, void* builder);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#clientBuilder)
///
/// @param self KParts__ReadWritePart*
///
KXMLGUIBuilder* k_parts__readwritepart_client_builder(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#reloadXML)
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_reload_x_m_l(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#plugActionList)
///
/// @param self KParts__ReadWritePart*
/// @param name const char*
/// @param actionList libqt_list of QAction*
///
void k_parts__readwritepart_plug_action_list(void* self, const char* name, libqt_list actionList);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#unplugActionList)
///
/// @param self KParts__ReadWritePart*
/// @param name const char*
///
void k_parts__readwritepart_unplug_action_list(void* self, const char* name);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findMostRecentXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param files const char**
/// @param doc const char*
///
const char* k_parts__readwritepart_find_most_recent_x_m_l_file(const char* files[static 1], const char* doc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionEnabled)
///
/// @param self KParts__ReadWritePart*
/// @param state const char*
/// @param action const char*
///
void k_parts__readwritepart_add_state_action_enabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#addStateActionDisabled)
///
/// @param self KParts__ReadWritePart*
/// @param state const char*
/// @param action const char*
///
void k_parts__readwritepart_add_state_action_disabled(void* self, const char* state, const char* action);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#getActionsToChangeForState)
///
/// @param self KParts__ReadWritePart*
/// @param state const char*
///
KXMLGUIClient__StateChange* k_parts__readwritepart_get_actions_to_change_for_state(void* self, const char* state);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#beginXMLPlug)
///
/// @param self KParts__ReadWritePart*
/// @param param1 QWidget*
///
void k_parts__readwritepart_begin_x_m_l_plug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#endXMLPlug)
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_end_x_m_l_plug(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#prepareXMLUnplug)
///
/// @param self KParts__ReadWritePart*
/// @param param1 QWidget*
///
void k_parts__readwritepart_prepare_x_m_l_unplug(void* self, void* param1);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KParts__ReadWritePart*
/// @param xmlfile const char*
/// @param localxmlfile const char*
///
void k_parts__readwritepart_replace_x_m_l_file(void* self, const char* xmlfile, const char* localxmlfile);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#findVersionNumber)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param xml const char*
///
const char* k_parts__readwritepart_find_version_number(const char* xml);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#replaceXMLFile)
///
/// @param self KParts__ReadWritePart*
/// @param xmlfile const char*
/// @param localxmlfile const char*
/// @param merge bool
///
void k_parts__readwritepart_replace_x_m_l_file3(void* self, const char* xmlfile, const char* localxmlfile, bool merge);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param url QUrl*
///
bool k_parts__readwritepart_open_url(void* self, void* url);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param url QUrl*
///
bool k_parts__readwritepart_qbase_open_url(void* self, void* url);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openUrl)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func(KParts__ReadWritePart* self, QUrl* url)
///
void k_parts__readwritepart_on_open_url(void* self, bool (*callback)(void*, void*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_open_file(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
bool k_parts__readwritepart_qbase_open_file(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#openFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func()
///
void k_parts__readwritepart_on_open_file(void* self, bool (*callback)());

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event KParts__GUIActivateEvent*
///
void k_parts__readwritepart_gui_activate_event(void* self, void* event);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event KParts__GUIActivateEvent*
///
void k_parts__readwritepart_qbase_gui_activate_event(void* self, void* event);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#guiActivateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, KParts__GUIActivateEvent* event)
///
void k_parts__readwritepart_on_gui_activate_event(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
QWidget* k_parts__readwritepart_widget(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
QWidget* k_parts__readwritepart_qbase_widget(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#widget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback QWidget* func()
///
void k_parts__readwritepart_on_widget(void* self, QWidget* (*callback)());

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param manager KParts__PartManager*
///
void k_parts__readwritepart_set_manager(void* self, void* manager);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param manager KParts__PartManager*
///
void k_parts__readwritepart_qbase_set_manager(void* self, void* manager);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setManager)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, KParts__PartManager* manager)
///
void k_parts__readwritepart_on_set_manager(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param widget QWidget*
/// @param globalPos QPoint*
///
KParts__Part* k_parts__readwritepart_hit_test(void* self, void* widget, void* globalPos);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param widget QWidget*
/// @param globalPos QPoint*
///
KParts__Part* k_parts__readwritepart_qbase_hit_test(void* self, void* widget, void* globalPos);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hitTest)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback KParts__Part* func(KParts__ReadWritePart* self, QWidget* widget, QPoint* globalPos)
///
void k_parts__readwritepart_on_hit_test(void* self, KParts__Part* (*callback)(void*, void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param widget QWidget*
///
void k_parts__readwritepart_set_widget(void* self, void* widget);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param widget QWidget*
///
void k_parts__readwritepart_qbase_set_widget(void* self, void* widget);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#setWidget)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QWidget* widget)
///
void k_parts__readwritepart_on_set_widget(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event QEvent*
///
void k_parts__readwritepart_custom_event(void* self, void* event);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event QEvent*
///
void k_parts__readwritepart_qbase_custom_event(void* self, void* event);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QEvent* event)
///
void k_parts__readwritepart_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event KParts__PartActivateEvent*
///
void k_parts__readwritepart_part_activate_event(void* self, void* event);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event KParts__PartActivateEvent*
///
void k_parts__readwritepart_qbase_part_activate_event(void* self, void* event);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#partActivateEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, KParts__PartActivateEvent* event)
///
void k_parts__readwritepart_on_part_activate_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event QEvent*
///
bool k_parts__readwritepart_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event QEvent*
///
bool k_parts__readwritepart_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func(KParts__ReadWritePart* self, QEvent* event)
///
void k_parts__readwritepart_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__readwritepart_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_parts__readwritepart_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func(KParts__ReadWritePart* self, QObject* watched, QEvent* event)
///
void k_parts__readwritepart_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event QTimerEvent*
///
void k_parts__readwritepart_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event QTimerEvent*
///
void k_parts__readwritepart_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QTimerEvent* event)
///
void k_parts__readwritepart_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event QChildEvent*
///
void k_parts__readwritepart_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param event QChildEvent*
///
void k_parts__readwritepart_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QChildEvent* event)
///
void k_parts__readwritepart_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param signal QMetaMethod*
///
void k_parts__readwritepart_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param signal QMetaMethod*
///
void k_parts__readwritepart_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QMetaMethod* signal)
///
void k_parts__readwritepart_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param signal QMetaMethod*
///
void k_parts__readwritepart_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param signal QMetaMethod*
///
void k_parts__readwritepart_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QMetaMethod* signal)
///
void k_parts__readwritepart_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param element QDomElement*
///
QAction* k_parts__readwritepart_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param element QDomElement*
///
QAction* k_parts__readwritepart_qbase_action2(void* self, void* element);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#action)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback QAction* func(KParts__ReadWritePart* self, QDomElement* element)
///
void k_parts__readwritepart_on_action2(void* self, QAction* (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
KActionCollection* k_parts__readwritepart_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
KActionCollection* k_parts__readwritepart_qbase_action_collection(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#actionCollection)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback KActionCollection* func()
///
void k_parts__readwritepart_on_action_collection(void* self, KActionCollection* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_qbase_component_name(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#componentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback const char* func()
///
void k_parts__readwritepart_on_component_name(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
QDomDocument* k_parts__readwritepart_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
QDomDocument* k_parts__readwritepart_qbase_dom_document(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#domDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback QDomDocument* func()
///
void k_parts__readwritepart_on_dom_document(void* self, QDomDocument* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_qbase_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#xmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback const char* func()
///
void k_parts__readwritepart_on_xml_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_qbase_local_x_m_l_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#localXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback const char* func()
///
void k_parts__readwritepart_on_local_x_m_l_file(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_parts__readwritepart_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param componentName const char*
/// @param componentDisplayName const char*
///
void k_parts__readwritepart_qbase_set_component_name(void* self, const char* componentName, const char* componentDisplayName);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setComponentName)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* componentName, const char* componentDisplayName)
///
void k_parts__readwritepart_on_set_component_name(void* self, void (*callback)(void*, const char*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_parts__readwritepart_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param file const char*
/// @param merge bool
/// @param setXMLDoc bool
///
void k_parts__readwritepart_qbase_set_x_m_l_file(void* self, const char* file, bool merge, bool setXMLDoc);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* file, bool merge, bool setXMLDoc)
///
void k_parts__readwritepart_on_set_x_m_l_file(void* self, void (*callback)(void*, const char*, bool, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param file const char*
///
void k_parts__readwritepart_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param file const char*
///
void k_parts__readwritepart_qbase_set_local_x_m_l_file(void* self, const char* file);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setLocalXMLFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* file)
///
void k_parts__readwritepart_on_set_local_x_m_l_file(void* self, void (*callback)(void*, const char*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param document const char*
/// @param merge bool
///
void k_parts__readwritepart_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param document const char*
/// @param merge bool
///
void k_parts__readwritepart_qbase_set_x_m_l(void* self, const char* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setXML)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* document, bool merge)
///
void k_parts__readwritepart_on_set_x_m_l(void* self, void (*callback)(void*, const char*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param document QDomDocument*
/// @param merge bool
///
void k_parts__readwritepart_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param document QDomDocument*
/// @param merge bool
///
void k_parts__readwritepart_qbase_set_d_o_m_document(void* self, void* document, bool merge);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#setDOMDocument)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QDomDocument* document, bool merge)
///
void k_parts__readwritepart_on_set_d_o_m_document(void* self, void (*callback)(void*, void*, bool));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_parts__readwritepart_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param newstate const char*
/// @param reverse enum KXMLGUIClient__ReverseStateChange
///
void k_parts__readwritepart_qbase_state_changed(void* self, const char* newstate, int32_t reverse);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#stateChanged)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* newstate, enum KXMLGUIClient__ReverseStateChange reverse)
///
void k_parts__readwritepart_on_state_changed(void* self, void (*callback)(void*, const char*, int32_t));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_abort_load(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_qbase_abort_load(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#abortLoad)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func()
///
void k_parts__readwritepart_on_abort_load(void* self, void (*callback)());

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param url QUrl*
///
void k_parts__readwritepart_set_url(void* self, void* url);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param url QUrl*
///
void k_parts__readwritepart_qbase_set_url(void* self, void* url);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setUrl)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, QUrl* url)
///
void k_parts__readwritepart_on_set_url(void* self, void (*callback)(void*, void*));

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_local_file_path(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_qbase_local_file_path(void* self);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#localFilePath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback const char* func()
///
void k_parts__readwritepart_on_local_file_path(void* self, const char* (*callback)());

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param localFilePath const char*
///
void k_parts__readwritepart_set_local_file_path(void* self, const char* localFilePath);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param localFilePath const char*
///
void k_parts__readwritepart_qbase_set_local_file_path(void* self, const char* localFilePath);

/// Inherited from KParts::ReadOnlyPart
///
/// [Upstream resources](https://api.kde.org/kparts-readonlypart.html#setLocalFilePath)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* localFilePath)
///
void k_parts__readwritepart_on_set_local_file_path(void* self, void (*callback)(void*, const char*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param containerName const char*
///
QWidget* k_parts__readwritepart_host_container(void* self, const char* containerName);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param containerName const char*
///
QWidget* k_parts__readwritepart_qbase_host_container(void* self, const char* containerName);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#hostContainer)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback QWidget* func(KParts__ReadWritePart* self, const char* containerName)
///
void k_parts__readwritepart_on_host_container(void* self, QWidget* (*callback)(void*, const char*));

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_slot_widget_destroyed(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_qbase_slot_widget_destroyed(void* self);

/// Inherited from KParts::Part
///
/// [Upstream resources](https://api.kde.org/kparts-part.html#slotWidgetDestroyed)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func()
///
void k_parts__readwritepart_on_slot_widget_destroyed(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
QObject* k_parts__readwritepart_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
QObject* k_parts__readwritepart_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback QObject* func()
///
void k_parts__readwritepart_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
int32_t k_parts__readwritepart_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
int32_t k_parts__readwritepart_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback int32_t func()
///
void k_parts__readwritepart_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param signal const char*
///
int32_t k_parts__readwritepart_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param signal const char*
///
int32_t k_parts__readwritepart_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback int32_t func(KParts__ReadWritePart* self, const char* signal)
///
void k_parts__readwritepart_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param signal QMetaMethod*
///
bool k_parts__readwritepart_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param signal QMetaMethod*
///
bool k_parts__readwritepart_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback bool func(KParts__ReadWritePart* self, QMetaMethod* signal)
///
void k_parts__readwritepart_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
const char* k_parts__readwritepart_qbase_standards_xml_file_location(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#standardsXmlFileLocation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback const char* func()
///
void k_parts__readwritepart_on_standards_xml_file_location(void* self, const char* (*callback)());

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_qbase_load_standards_xml_file(void* self);

/// Inherited from KXMLGUIClient
///
/// [Upstream resources](https://api.kde.org/kxmlguiclient.html#loadStandardsXmlFile)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KParts__ReadWritePart*
/// @param callback void func()
///
void k_parts__readwritepart_on_load_standards_xml_file(void* self, void (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KParts__ReadWritePart*
/// @param callback void func(KParts__ReadWritePart* self, const char* objectName)
///
void k_parts__readwritepart_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KParts__ReadWritePart*
///
void k_parts__readwritepart_delete(void* self);

#endif
