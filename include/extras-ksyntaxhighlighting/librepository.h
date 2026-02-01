#pragma once
#ifndef SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBREPOSITORY_H
#define SRC_EXTRAS_KSYNTAXHIGHLIGHTING_QT6C_LIBREPOSITORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html)

/// k_syntaxhighlighting__repository_new constructs a new KSyntaxHighlighting::Repository object.
///
KSyntaxHighlighting__Repository* k_syntaxhighlighting__repository_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KSyntaxHighlighting__Repository*
///
const QMetaObject* k_syntaxhighlighting__repository_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback const QMetaObject* func()
///
void k_syntaxhighlighting__repository_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self KSyntaxHighlighting__Repository*
///
const QMetaObject* k_syntaxhighlighting__repository_qbase_meta_object(void* self);

/// @param self KSyntaxHighlighting__Repository*
/// @param param1 const char*
///
void* k_syntaxhighlighting__repository_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void* func(KSyntaxHighlighting__Repository* self, const char* param1)
///
void k_syntaxhighlighting__repository_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KSyntaxHighlighting__Repository*
/// @param param1 const char*
///
void* k_syntaxhighlighting__repository_qbase_metacast(void* self, const char* param1);

/// @param self KSyntaxHighlighting__Repository*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_syntaxhighlighting__repository_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback int32_t func(KSyntaxHighlighting__Repository* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_syntaxhighlighting__repository_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSyntaxHighlighting__Repository*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_syntaxhighlighting__repository_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_syntaxhighlighting__repository_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionForName)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param defName const char*
///
KSyntaxHighlighting__Definition* k_syntaxhighlighting__repository_definition_for_name(void* self, const char* defName);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionForFileName)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param fileName const char*
///
KSyntaxHighlighting__Definition* k_syntaxhighlighting__repository_definition_for_file_name(void* self, const char* fileName);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionsForFileName)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param fileName const char*
///
/// @return libqt_list of KSyntaxHighlighting__Definition*
///
libqt_list k_syntaxhighlighting__repository_definitions_for_file_name(void* self, const char* fileName);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionForMimeType)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param mimeType const char*
///
KSyntaxHighlighting__Definition* k_syntaxhighlighting__repository_definition_for_mime_type(void* self, const char* mimeType);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitionsForMimeType)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param mimeType const char*
///
/// @return libqt_list of KSyntaxHighlighting__Definition*
///
libqt_list k_syntaxhighlighting__repository_definitions_for_mime_type(void* self, const char* mimeType);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#definitions)
///
/// @param self KSyntaxHighlighting__Repository*
///
/// @return libqt_list of KSyntaxHighlighting__Definition*
///
libqt_list k_syntaxhighlighting__repository_definitions(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#themes)
///
/// @param self KSyntaxHighlighting__Repository*
///
/// @return libqt_list of KSyntaxHighlighting__Theme*
///
libqt_list k_syntaxhighlighting__repository_themes(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#theme)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param themeName const char*
///
KSyntaxHighlighting__Theme* k_syntaxhighlighting__repository_theme(void* self, const char* themeName);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#defaultTheme)
///
/// @param self KSyntaxHighlighting__Repository*
///
KSyntaxHighlighting__Theme* k_syntaxhighlighting__repository_default_theme(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#themeForPalette)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param palette QPalette*
///
KSyntaxHighlighting__Theme* k_syntaxhighlighting__repository_theme_for_palette(void* self, void* palette);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#reload)
///
/// @param self KSyntaxHighlighting__Repository*
///
void k_syntaxhighlighting__repository_reload(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#addCustomSearchPath)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param path const char*
///
void k_syntaxhighlighting__repository_add_custom_search_path(void* self, const char* path);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#customSearchPaths)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSyntaxHighlighting__Repository*
///
const char** k_syntaxhighlighting__repository_custom_search_paths(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#aboutToReload)
///
/// @param self KSyntaxHighlighting__Repository*
///
void k_syntaxhighlighting__repository_about_to_reload(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#aboutToReload)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self)
///
void k_syntaxhighlighting__repository_on_about_to_reload(void* self, void (*callback)(void*));

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#reloaded)
///
/// @param self KSyntaxHighlighting__Repository*
///
void k_syntaxhighlighting__repository_reloaded(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#reloaded)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self)
///
void k_syntaxhighlighting__repository_on_reloaded(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_syntaxhighlighting__repository_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_syntaxhighlighting__repository_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#defaultTheme)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param t enum KSyntaxHighlighting__Repository__DefaultTheme
///
KSyntaxHighlighting__Theme* k_syntaxhighlighting__repository_default_theme1(void* self, int32_t t);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self KSyntaxHighlighting__Repository*
///
const char* k_syntaxhighlighting__repository_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param name char*
///
void k_syntaxhighlighting__repository_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KSyntaxHighlighting__Repository*
///
bool k_syntaxhighlighting__repository_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KSyntaxHighlighting__Repository*
///
bool k_syntaxhighlighting__repository_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KSyntaxHighlighting__Repository*
///
bool k_syntaxhighlighting__repository_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KSyntaxHighlighting__Repository*
///
bool k_syntaxhighlighting__repository_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param b bool
///
bool k_syntaxhighlighting__repository_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KSyntaxHighlighting__Repository*
///
QThread* k_syntaxhighlighting__repository_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param thread QThread*
///
bool k_syntaxhighlighting__repository_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param interval int
///
int32_t k_syntaxhighlighting__repository_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param time int64_t of nanoseconds
///
int32_t k_syntaxhighlighting__repository_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param id int
///
void k_syntaxhighlighting__repository_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param id enum Qt__TimerId
///
void k_syntaxhighlighting__repository_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KSyntaxHighlighting__Repository*
///
/// @return libqt_list of QObject*
///
libqt_list k_syntaxhighlighting__repository_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param parent QObject*
///
void k_syntaxhighlighting__repository_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param filterObj QObject*
///
void k_syntaxhighlighting__repository_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param obj QObject*
///
void k_syntaxhighlighting__repository_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_syntaxhighlighting__repository_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_syntaxhighlighting__repository_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_syntaxhighlighting__repository_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_syntaxhighlighting__repository_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_syntaxhighlighting__repository_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSyntaxHighlighting__Repository*
///
bool k_syntaxhighlighting__repository_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param receiver QObject*
///
bool k_syntaxhighlighting__repository_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_syntaxhighlighting__repository_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KSyntaxHighlighting__Repository*
///
void k_syntaxhighlighting__repository_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KSyntaxHighlighting__Repository*
///
void k_syntaxhighlighting__repository_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param name const char*
/// @param value QVariant*
///
bool k_syntaxhighlighting__repository_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param name const char*
///
QVariant* k_syntaxhighlighting__repository_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self KSyntaxHighlighting__Repository*
///
const char** k_syntaxhighlighting__repository_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSyntaxHighlighting__Repository*
///
QBindingStorage* k_syntaxhighlighting__repository_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSyntaxHighlighting__Repository*
///
const QBindingStorage* k_syntaxhighlighting__repository_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__Repository*
///
void k_syntaxhighlighting__repository_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self)
///
void k_syntaxhighlighting__repository_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KSyntaxHighlighting__Repository*
///
QObject* k_syntaxhighlighting__repository_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param classname const char*
///
bool k_syntaxhighlighting__repository_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSyntaxHighlighting__Repository*
///
void k_syntaxhighlighting__repository_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_syntaxhighlighting__repository_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_syntaxhighlighting__repository_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* k_syntaxhighlighting__repository_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* k_syntaxhighlighting__repository_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_syntaxhighlighting__repository_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal const char*
///
bool k_syntaxhighlighting__repository_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_syntaxhighlighting__repository_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_syntaxhighlighting__repository_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param receiver QObject*
/// @param member const char*
///
bool k_syntaxhighlighting__repository_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param param1 QObject*
///
void k_syntaxhighlighting__repository_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self, QObject* param1)
///
void k_syntaxhighlighting__repository_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param event QEvent*
///
bool k_syntaxhighlighting__repository_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param event QEvent*
///
bool k_syntaxhighlighting__repository_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback bool func(KSyntaxHighlighting__Repository* self, QEvent* event)
///
void k_syntaxhighlighting__repository_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_syntaxhighlighting__repository_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_syntaxhighlighting__repository_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback bool func(KSyntaxHighlighting__Repository* self, QObject* watched, QEvent* event)
///
void k_syntaxhighlighting__repository_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param event QTimerEvent*
///
void k_syntaxhighlighting__repository_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param event QTimerEvent*
///
void k_syntaxhighlighting__repository_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self, QTimerEvent* event)
///
void k_syntaxhighlighting__repository_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param event QChildEvent*
///
void k_syntaxhighlighting__repository_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param event QChildEvent*
///
void k_syntaxhighlighting__repository_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self, QChildEvent* event)
///
void k_syntaxhighlighting__repository_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param event QEvent*
///
void k_syntaxhighlighting__repository_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param event QEvent*
///
void k_syntaxhighlighting__repository_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self, QEvent* event)
///
void k_syntaxhighlighting__repository_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal QMetaMethod*
///
void k_syntaxhighlighting__repository_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal QMetaMethod*
///
void k_syntaxhighlighting__repository_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self, QMetaMethod* signal)
///
void k_syntaxhighlighting__repository_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal QMetaMethod*
///
void k_syntaxhighlighting__repository_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal QMetaMethod*
///
void k_syntaxhighlighting__repository_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self, QMetaMethod* signal)
///
void k_syntaxhighlighting__repository_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
///
QObject* k_syntaxhighlighting__repository_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
///
QObject* k_syntaxhighlighting__repository_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback QObject* func()
///
void k_syntaxhighlighting__repository_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
///
int32_t k_syntaxhighlighting__repository_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
///
int32_t k_syntaxhighlighting__repository_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback int32_t func()
///
void k_syntaxhighlighting__repository_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal const char*
///
int32_t k_syntaxhighlighting__repository_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal const char*
///
int32_t k_syntaxhighlighting__repository_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback int32_t func(KSyntaxHighlighting__Repository* self, const char* signal)
///
void k_syntaxhighlighting__repository_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal QMetaMethod*
///
bool k_syntaxhighlighting__repository_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param signal QMetaMethod*
///
bool k_syntaxhighlighting__repository_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback bool func(KSyntaxHighlighting__Repository* self, QMetaMethod* signal)
///
void k_syntaxhighlighting__repository_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSyntaxHighlighting__Repository*
/// @param callback void func(KSyntaxHighlighting__Repository* self, const char* objectName)
///
void k_syntaxhighlighting__repository_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KSyntaxHighlighting__Repository*
///
void k_syntaxhighlighting__repository_delete(void* self);

/// [Upstream resources](https://api.kde.org/ksyntaxhighlighting-repository.html#public-types)

typedef enum {
    KSYNTAXHIGHLIGHTING_REPOSITORY_DEFAULTTHEME_LIGHTTHEME = 0,
    KSYNTAXHIGHLIGHTING_REPOSITORY_DEFAULTTHEME_DARKTHEME = 1
} KSyntaxHighlighting__Repository__DefaultTheme;

#endif
