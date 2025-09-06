#pragma once
#ifndef SRC_EXTRAS_KICONTHEMESQT6C_LIBKICONLOADER_H
#define SRC_EXTRAS_KICONTHEMESQT6C_LIBKICONLOADER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kiconloader.html

/// k_iconloader_new constructs a new KIconLoader object.
///
KIconLoader* k_iconloader_new();

/// k_iconloader_new2 constructs a new KIconLoader object.
///
/// @param appname const char*
KIconLoader* k_iconloader_new2(const char* appname);

/// k_iconloader_new3 constructs a new KIconLoader object.
///
/// @param appname const char*
/// @param extraSearchPaths const char**
KIconLoader* k_iconloader_new3(const char* appname, const char* extraSearchPaths[]);

/// k_iconloader_new4 constructs a new KIconLoader object.
///
/// @param appname const char*
/// @param extraSearchPaths const char**
/// @param parent QObject*
KIconLoader* k_iconloader_new4(const char* appname, const char* extraSearchPaths[], void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KIconLoader*
const QMetaObject* k_iconloader_meta_object(void* self);

/// @param self KIconLoader*
/// @param param1 const char*
void* k_iconloader_metacast(void* self, const char* param1);

/// @param self KIconLoader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_iconloader_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KIconLoader*
/// @param callback int32_t func(KIconLoader* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_iconloader_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KIconLoader*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_iconloader_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_iconloader_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#global)
///
KIconLoader* k_iconloader_global();

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#addAppDir)
///
/// @param self KIconLoader*
/// @param appname const char*
void k_iconloader_add_app_dir(void* self, const char* appname);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadIcon)
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
QPixmap* k_iconloader_load_icon(void* self, const char* name, int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadMimeTypeIcon)
///
/// @param self KIconLoader*
/// @param iconName const char*
/// @param group enum KIconLoader__Group
QPixmap* k_iconloader_load_mime_type_icon(void* self, const char* iconName, int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#iconPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group_or_size int
const char* k_iconloader_icon_path(void* self, const char* name, int group_or_size);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#iconPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group_or_size int
/// @param canReturnNull bool
/// @param scale double
const char* k_iconloader_icon_path2(void* self, const char* name, int group_or_size, bool canReturnNull, double scale);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadMovie)
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
QMovie* k_iconloader_load_movie(void* self, const char* name, int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#moviePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
const char* k_iconloader_movie_path(void* self, const char* name, int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadAnimated)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
const char** k_iconloader_load_animated(void* self, const char* name, int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#queryIcons)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
const char** k_iconloader_query_icons(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#queryIcons)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param group_or_size int
const char** k_iconloader_query_icons2(void* self, int group_or_size);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#queryIconsByContext)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param group_or_size int
const char** k_iconloader_query_icons_by_context(void* self, int group_or_size);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#hasContext)
///
/// @param self KIconLoader*
/// @param context enum KIconLoader__Context
bool k_iconloader_has_context(void* self, int32_t context);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#queryIconsByDir)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param iconsDir const char*
const char** k_iconloader_query_icons_by_dir(void* self, const char* iconsDir);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#searchPaths)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
const char** k_iconloader_search_paths(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#currentSize)
///
/// @param self KIconLoader*
/// @param group enum KIconLoader__Group
int32_t k_iconloader_current_size(void* self, int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#theme)
///
/// @param self KIconLoader*
KIconTheme* k_iconloader_theme(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#iconEffect)
///
/// @param self KIconLoader*
KIconEffect* k_iconloader_icon_effect(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#reconfigure)
///
/// @param self KIconLoader*
/// @param appname const char*
void k_iconloader_reconfigure(void* self, const char* appname);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#unknown)
///
QPixmap* k_iconloader_unknown();

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#drawOverlays)
///
/// @param self KIconLoader*
/// @param overlays const char**
/// @param pixmap QPixmap*
/// @param group enum KIconLoader__Group
void k_iconloader_draw_overlays(void* self, const char* overlays[], void* pixmap, int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#hasIcon)
///
/// @param self KIconLoader*
/// @param iconName const char*
bool k_iconloader_has_icon(void* self, const char* iconName);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#setCustomPalette)
///
/// @param self KIconLoader*
/// @param palette QPalette*
void k_iconloader_set_custom_palette(void* self, void* palette);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#customPalette)
///
/// @param self KIconLoader*
QPalette* k_iconloader_custom_palette(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#resetPalette)
///
/// @param self KIconLoader*
void k_iconloader_reset_palette(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#hasCustomPalette)
///
/// @param self KIconLoader*
bool k_iconloader_has_custom_palette(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#newIconLoader)
///
/// @param self KIconLoader*
void k_iconloader_new_icon_loader(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#emitChange)
///
/// @param group enum KIconLoader__Group
void k_iconloader_emit_change(int32_t group);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#iconLoaderSettingsChanged)
///
/// @param self KIconLoader*
void k_iconloader_icon_loader_settings_changed(void* self);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#iconLoaderSettingsChanged)
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self)
void k_iconloader_on_icon_loader_settings_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#iconChanged)
///
/// @param self KIconLoader*
/// @param group int
void k_iconloader_icon_changed(void* self, int group);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#iconChanged)
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self, int group)
void k_iconloader_on_icon_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_iconloader_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_iconloader_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#addAppDir)
///
/// @param self KIconLoader*
/// @param appname const char*
/// @param themeBaseDir const char*
void k_iconloader_add_app_dir2(void* self, const char* appname, const char* themeBaseDir);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadIcon)
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
/// @param size int
QPixmap* k_iconloader_load_icon3(void* self, const char* name, int32_t group, int size);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadIcon)
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
/// @param size int
/// @param state int
QPixmap* k_iconloader_load_icon4(void* self, const char* name, int32_t group, int size, int state);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadIcon)
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
/// @param size int
/// @param state int
/// @param overlays const char**
QPixmap* k_iconloader_load_icon5(void* self, const char* name, int32_t group, int size, int state, const char* overlays[]);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadMimeTypeIcon)
///
/// @param self KIconLoader*
/// @param iconName const char*
/// @param group enum KIconLoader__Group
/// @param size int
QPixmap* k_iconloader_load_mime_type_icon3(void* self, const char* iconName, int32_t group, int size);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadMimeTypeIcon)
///
/// @param self KIconLoader*
/// @param iconName const char*
/// @param group enum KIconLoader__Group
/// @param size int
/// @param state int
QPixmap* k_iconloader_load_mime_type_icon4(void* self, const char* iconName, int32_t group, int size, int state);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadMimeTypeIcon)
///
/// @param self KIconLoader*
/// @param iconName const char*
/// @param group enum KIconLoader__Group
/// @param size int
/// @param state int
/// @param overlays const char**
QPixmap* k_iconloader_load_mime_type_icon5(void* self, const char* iconName, int32_t group, int size, int state, const char* overlays[]);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#iconPath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group_or_size int
/// @param canReturnNull bool
const char* k_iconloader_icon_path3(void* self, const char* name, int group_or_size, bool canReturnNull);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadMovie)
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
/// @param size int
QMovie* k_iconloader_load_movie3(void* self, const char* name, int32_t group, int size);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadMovie)
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
/// @param size int
/// @param parent QObject*
QMovie* k_iconloader_load_movie4(void* self, const char* name, int32_t group, int size, void* parent);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#moviePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
/// @param size int
const char* k_iconloader_movie_path3(void* self, const char* name, int32_t group, int size);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#loadAnimated)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param name const char*
/// @param group enum KIconLoader__Group
/// @param size int
const char** k_iconloader_load_animated3(void* self, const char* name, int32_t group, int size);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#queryIcons)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param group_or_size int
/// @param context enum KIconLoader__Context
const char** k_iconloader_query_icons22(void* self, int group_or_size, int32_t context);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#queryIconsByContext)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
/// @param group_or_size int
/// @param context enum KIconLoader__Context
const char** k_iconloader_query_icons_by_context2(void* self, int group_or_size, int32_t context);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#reconfigure)
///
/// @param self KIconLoader*
/// @param appname const char*
/// @param extraSearchPaths const char**
void k_iconloader_reconfigure2(void* self, const char* appname, const char* extraSearchPaths[]);

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#drawOverlays)
///
/// @param self KIconLoader*
/// @param overlays const char**
/// @param pixmap QPixmap*
/// @param group enum KIconLoader__Group
/// @param state int
void k_iconloader_draw_overlays4(void* self, const char* overlays[], void* pixmap, int32_t group, int state);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
const char* k_iconloader_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KIconLoader*
/// @param name char*
void k_iconloader_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KIconLoader*
bool k_iconloader_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KIconLoader*
bool k_iconloader_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KIconLoader*
bool k_iconloader_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KIconLoader*
bool k_iconloader_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KIconLoader*
/// @param b bool
bool k_iconloader_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KIconLoader*
QThread* k_iconloader_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIconLoader*
/// @param thread QThread*
bool k_iconloader_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIconLoader*
/// @param interval int
int32_t k_iconloader_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIconLoader*
/// @param id int
void k_iconloader_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KIconLoader*
/// @param id enum Qt__TimerId
void k_iconloader_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KIconLoader*
libqt_list /* of QObject* */ k_iconloader_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KIconLoader*
/// @param parent QObject*
void k_iconloader_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KIconLoader*
/// @param filterObj QObject*
void k_iconloader_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KIconLoader*
/// @param obj QObject*
void k_iconloader_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_iconloader_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIconLoader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_iconloader_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_iconloader_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_iconloader_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KIconLoader*
void k_iconloader_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KIconLoader*
void k_iconloader_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KIconLoader*
/// @param name const char*
/// @param value QVariant*
bool k_iconloader_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KIconLoader*
/// @param name const char*
QVariant* k_iconloader_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KIconLoader*
const char** k_iconloader_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIconLoader*
QBindingStorage* k_iconloader_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KIconLoader*
const QBindingStorage* k_iconloader_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIconLoader*
void k_iconloader_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self)
void k_iconloader_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KIconLoader*
QObject* k_iconloader_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KIconLoader*
/// @param classname const char*
bool k_iconloader_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KIconLoader*
void k_iconloader_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KIconLoader*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_iconloader_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KIconLoader*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_iconloader_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_iconloader_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KIconLoader*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_iconloader_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIconLoader*
/// @param param1 QObject*
void k_iconloader_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self, QObject* param1)
void k_iconloader_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
/// @param event QEvent*
bool k_iconloader_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
/// @param event QEvent*
bool k_iconloader_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback bool func(KIconLoader* self, QEvent* event)
void k_iconloader_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
/// @param watched QObject*
/// @param event QEvent*
bool k_iconloader_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
/// @param watched QObject*
/// @param event QEvent*
bool k_iconloader_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback bool func(KIconLoader* self, QObject* watched, QEvent* event)
void k_iconloader_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
/// @param event QTimerEvent*
void k_iconloader_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
/// @param event QTimerEvent*
void k_iconloader_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self, QTimerEvent* event)
void k_iconloader_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
/// @param event QChildEvent*
void k_iconloader_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
/// @param event QChildEvent*
void k_iconloader_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self, QChildEvent* event)
void k_iconloader_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
/// @param event QEvent*
void k_iconloader_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
/// @param event QEvent*
void k_iconloader_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self, QEvent* event)
void k_iconloader_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
/// @param signal QMetaMethod*
void k_iconloader_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
/// @param signal QMetaMethod*
void k_iconloader_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self, QMetaMethod* signal)
void k_iconloader_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
/// @param signal QMetaMethod*
void k_iconloader_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
/// @param signal QMetaMethod*
void k_iconloader_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self, QMetaMethod* signal)
void k_iconloader_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
QObject* k_iconloader_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
QObject* k_iconloader_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback QObject* func()
void k_iconloader_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
int32_t k_iconloader_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
int32_t k_iconloader_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback int32_t func()
void k_iconloader_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
/// @param signal const char*
int32_t k_iconloader_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
/// @param signal const char*
int32_t k_iconloader_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback int32_t func(KIconLoader* self, const char* signal)
void k_iconloader_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KIconLoader*
/// @param signal QMetaMethod*
bool k_iconloader_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KIconLoader*
/// @param signal QMetaMethod*
bool k_iconloader_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KIconLoader*
/// @param callback bool func(KIconLoader* self, QMetaMethod* signal)
void k_iconloader_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KIconLoader*
/// @param callback void func(KIconLoader* self, const char* objectName)
void k_iconloader_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kiconloader.html#dtor.KIconLoader)
///
/// Delete this object from C++ memory.
///
/// @param self KIconLoader*
void k_iconloader_delete(void* self);

/// https://api-staging.kde.org/kde.html

/// [Qt documentation](https://api-staging.kde.org/kde.html#icon)
///
/// @param param1 const char*
/// @param param2 KIconLoader*
QIcon* k_de_icon(const char* param1, void* param2);

/// [Qt documentation](https://api-staging.kde.org/kde.html#icon)
///
/// @param param1 const char*
/// @param param2 KIconColors*
/// @param param3 KIconLoader*
QIcon* k_de_icon2(const char* param1, void* param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/kde.html#icon)
///
/// @param param1 const char*
/// @param param2 const char**
/// @param param3 KIconLoader*
QIcon* k_de_icon3(const char* param1, const char* param2[], void* param3);

/// https://api-staging.kde.org/kiconloader.html#types

typedef enum {
    KICONLOADER_CONTEXT_ANY = 0,
    KICONLOADER_CONTEXT_ACTION = 1,
    KICONLOADER_CONTEXT_APPLICATION = 2,
    KICONLOADER_CONTEXT_DEVICE = 3,
    KICONLOADER_CONTEXT_MIMETYPE = 4,
    KICONLOADER_CONTEXT_ANIMATION = 5,
    KICONLOADER_CONTEXT_CATEGORY = 6,
    KICONLOADER_CONTEXT_EMBLEM = 7,
    KICONLOADER_CONTEXT_EMOTE = 8,
    KICONLOADER_CONTEXT_INTERNATIONAL = 9,
    KICONLOADER_CONTEXT_PLACE = 10,
    KICONLOADER_CONTEXT_STATUSICON = 11
} KIconLoader__Context;

typedef enum {
    KICONLOADER_TYPE_FIXED = 0,
    KICONLOADER_TYPE_SCALABLE = 1,
    KICONLOADER_TYPE_THRESHOLD = 2
} KIconLoader__Type;

typedef enum {
    KICONLOADER_MATCHTYPE_MATCHEXACT = 0,
    KICONLOADER_MATCHTYPE_MATCHBEST = 1,
    KICONLOADER_MATCHTYPE_MATCHBESTORGREATERSIZE = 2
} KIconLoader__MatchType;

typedef enum {
    KICONLOADER_GROUP_NOGROUP = -1,
    KICONLOADER_GROUP_DESKTOP = 0,
    KICONLOADER_GROUP_FIRSTGROUP = 0,
    KICONLOADER_GROUP_TOOLBAR = 1,
    KICONLOADER_GROUP_MAINTOOLBAR = 2,
    KICONLOADER_GROUP_SMALL = 3,
    KICONLOADER_GROUP_PANEL = 4,
    KICONLOADER_GROUP_DIALOG = 5,
    KICONLOADER_GROUP_LASTGROUP = 6,
    KICONLOADER_GROUP_USER = 7
} KIconLoader__Group;

typedef enum {
    KICONLOADER_STDSIZES_SIZESMALL = 16,
    KICONLOADER_STDSIZES_SIZESMALLMEDIUM = 22,
    KICONLOADER_STDSIZES_SIZEMEDIUM = 32,
    KICONLOADER_STDSIZES_SIZELARGE = 48,
    KICONLOADER_STDSIZES_SIZEHUGE = 64,
    KICONLOADER_STDSIZES_SIZEENORMOUS = 128
} KIconLoader__StdSizes;

typedef enum {
    KICONLOADER_STATES_DEFAULTSTATE = 0,
    KICONLOADER_STATES_ACTIVESTATE = 1,
    KICONLOADER_STATES_DISABLEDSTATE = 2,
    KICONLOADER_STATES_SELECTEDSTATE = 3,
    KICONLOADER_STATES_LASTSTATE = 4
} KIconLoader__States;

#endif
