#pragma once
#ifndef SRC_EXTRAS_SONNETQT6C_LIBSETTINGS_H
#define SRC_EXTRAS_SONNETQT6C_LIBSETTINGS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/sonnet-settings.html

/// k_sonnet__settings_new constructs a new Sonnet::Settings object.
///
Sonnet__Settings* k_sonnet__settings_new();

/// k_sonnet__settings_new2 constructs a new Sonnet::Settings object.
///
/// @param parent QObject*
Sonnet__Settings* k_sonnet__settings_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self Sonnet__Settings*
const QMetaObject* k_sonnet__settings_meta_object(void* self);

/// @param self Sonnet__Settings*
/// @param param1 const char*
void* k_sonnet__settings_metacast(void* self, const char* param1);

/// @param self Sonnet__Settings*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_sonnet__settings_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self Sonnet__Settings*
/// @param callback int32_t func(Sonnet__Settings* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_sonnet__settings_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self Sonnet__Settings*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_sonnet__settings_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_sonnet__settings_tr(const char* s);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#setDefaultLanguage)
///
/// @param self Sonnet__Settings*
/// @param lang const char*
void k_sonnet__settings_set_default_language(void* self, const char* lang);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultLanguage)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Settings*
const char* k_sonnet__settings_default_language(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#setPreferredLanguages)
///
/// @param self Sonnet__Settings*
/// @param lang const char**
void k_sonnet__settings_set_preferred_languages(void* self, const char* lang[]);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#preferredLanguages)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Settings*
const char** k_sonnet__settings_preferred_languages(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#setDefaultClient)
///
/// @param self Sonnet__Settings*
/// @param client const char*
void k_sonnet__settings_set_default_client(void* self, const char* client);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultClient)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Settings*
const char* k_sonnet__settings_default_client(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#setSkipUppercase)
///
/// @param self Sonnet__Settings*
/// @param skipUppercase bool
void k_sonnet__settings_set_skip_uppercase(void* self, bool skipUppercase);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipUppercase)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_skip_uppercase(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#setAutodetectLanguage)
///
/// @param self Sonnet__Settings*
/// @param autodetectLanguage bool
void k_sonnet__settings_set_autodetect_language(void* self, bool autodetectLanguage);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#autodetectLanguage)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_autodetect_language(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#setSkipRunTogether)
///
/// @param self Sonnet__Settings*
/// @param skipRunTogether bool
void k_sonnet__settings_set_skip_run_together(void* self, bool skipRunTogether);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipRunTogether)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_skip_run_together(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#setBackgroundCheckerEnabled)
///
/// @param self Sonnet__Settings*
/// @param backgroundCheckerEnabled bool
void k_sonnet__settings_set_background_checker_enabled(void* self, bool backgroundCheckerEnabled);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabled)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_background_checker_enabled(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#setCheckerEnabledByDefault)
///
/// @param self Sonnet__Settings*
/// @param checkerEnabledByDefault bool
void k_sonnet__settings_set_checker_enabled_by_default(void* self, bool checkerEnabledByDefault);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefault)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_checker_enabled_by_default(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#setCurrentIgnoreList)
///
/// @param self Sonnet__Settings*
/// @param ignores const char**
void k_sonnet__settings_set_current_ignore_list(void* self, const char* ignores[]);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#currentIgnoreList)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Settings*
const char** k_sonnet__settings_current_ignore_list(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#clients)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Settings*
const char** k_sonnet__settings_clients(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#modified)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_modified(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#dictionaryModel)
///
/// @param self Sonnet__Settings*
QAbstractListModel* k_sonnet__settings_dictionary_model(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#save)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_save(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultIgnoreList)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_sonnet__settings_default_ignore_list();

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultSkipUppercase)
///
bool k_sonnet__settings_default_skip_uppercase();

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultAutodetectLanguage)
///
bool k_sonnet__settings_default_autodetect_language();

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultBackgroundCheckerEnabled)
///
bool k_sonnet__settings_default_background_checker_enabled();

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultCheckerEnabledByDefault)
///
bool k_sonnet__settings_default_checker_enabled_by_default();

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defauktSkipRunTogether)
///
bool k_sonnet__settings_defaukt_skip_run_together();

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultDefaultLanguage)
///
/// Caller is responsible for freeing the returned memory
///
const char* k_sonnet__settings_default_default_language();

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultPreferredLanguages)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_sonnet__settings_default_preferred_languages();

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipUppercaseChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_skip_uppercase_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipUppercaseChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_skip_uppercase_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#autodetectLanguageChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_autodetect_language_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#autodetectLanguageChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_autodetect_language_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabledChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_background_checker_enabled_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#backgroundCheckerEnabledChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_background_checker_enabled_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultClientChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_default_client_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultClientChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_default_client_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultLanguageChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_default_language_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#defaultLanguageChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_default_language_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#preferredLanguagesChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_preferred_languages_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#preferredLanguagesChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_preferred_languages_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipRunTogetherChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_skip_run_together_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#skipRunTogetherChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_skip_run_together_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefaultChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_checker_enabled_by_default_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#checkerEnabledByDefaultChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_checker_enabled_by_default_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#currentIgnoreListChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_current_ignore_list_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#currentIgnoreListChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_current_ignore_list_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#modifiedChanged)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_modified_changed(void* self);

/// [Qt documentation](https://api.kde.org/sonnet-settings.html#modifiedChanged)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_modified_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_sonnet__settings_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_sonnet__settings_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Settings*
const char* k_sonnet__settings_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self Sonnet__Settings*
/// @param name char*
void k_sonnet__settings_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self Sonnet__Settings*
bool k_sonnet__settings_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self Sonnet__Settings*
/// @param b bool
bool k_sonnet__settings_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self Sonnet__Settings*
QThread* k_sonnet__settings_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Sonnet__Settings*
/// @param thread QThread*
bool k_sonnet__settings_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__Settings*
/// @param interval int
int32_t k_sonnet__settings_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__Settings*
/// @param id int
void k_sonnet__settings_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self Sonnet__Settings*
/// @param id enum Qt__TimerId
void k_sonnet__settings_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self Sonnet__Settings*
libqt_list /* of QObject* */ k_sonnet__settings_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self Sonnet__Settings*
/// @param parent QObject*
void k_sonnet__settings_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self Sonnet__Settings*
/// @param filterObj QObject*
void k_sonnet__settings_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self Sonnet__Settings*
/// @param obj QObject*
void k_sonnet__settings_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_sonnet__settings_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Sonnet__Settings*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_sonnet__settings_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_sonnet__settings_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_sonnet__settings_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self Sonnet__Settings*
/// @param name const char*
/// @param value QVariant*
bool k_sonnet__settings_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self Sonnet__Settings*
/// @param name const char*
QVariant* k_sonnet__settings_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self Sonnet__Settings*
const char** k_sonnet__settings_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Sonnet__Settings*
QBindingStorage* k_sonnet__settings_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self Sonnet__Settings*
const QBindingStorage* k_sonnet__settings_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self)
void k_sonnet__settings_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self Sonnet__Settings*
QObject* k_sonnet__settings_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self Sonnet__Settings*
/// @param classname const char*
bool k_sonnet__settings_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self Sonnet__Settings*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_sonnet__settings_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self Sonnet__Settings*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_sonnet__settings_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_sonnet__settings_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self Sonnet__Settings*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_sonnet__settings_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Settings*
/// @param param1 QObject*
void k_sonnet__settings_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self, QObject* param1)
void k_sonnet__settings_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param event QEvent*
bool k_sonnet__settings_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param event QEvent*
bool k_sonnet__settings_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback bool func(Sonnet__Settings* self, QEvent* event)
void k_sonnet__settings_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param watched QObject*
/// @param event QEvent*
bool k_sonnet__settings_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param watched QObject*
/// @param event QEvent*
bool k_sonnet__settings_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback bool func(Sonnet__Settings* self, QObject* watched, QEvent* event)
void k_sonnet__settings_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param event QTimerEvent*
void k_sonnet__settings_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param event QTimerEvent*
void k_sonnet__settings_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self, QTimerEvent* event)
void k_sonnet__settings_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param event QChildEvent*
void k_sonnet__settings_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param event QChildEvent*
void k_sonnet__settings_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self, QChildEvent* event)
void k_sonnet__settings_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param event QEvent*
void k_sonnet__settings_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param event QEvent*
void k_sonnet__settings_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self, QEvent* event)
void k_sonnet__settings_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param signal QMetaMethod*
void k_sonnet__settings_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param signal QMetaMethod*
void k_sonnet__settings_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self, QMetaMethod* signal)
void k_sonnet__settings_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param signal QMetaMethod*
void k_sonnet__settings_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param signal QMetaMethod*
void k_sonnet__settings_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self, QMetaMethod* signal)
void k_sonnet__settings_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
QObject* k_sonnet__settings_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
QObject* k_sonnet__settings_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback QObject* func()
void k_sonnet__settings_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
int32_t k_sonnet__settings_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
int32_t k_sonnet__settings_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback int32_t func()
void k_sonnet__settings_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param signal const char*
int32_t k_sonnet__settings_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param signal const char*
int32_t k_sonnet__settings_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback int32_t func(Sonnet__Settings* self, const char* signal)
void k_sonnet__settings_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param signal QMetaMethod*
bool k_sonnet__settings_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param signal QMetaMethod*
bool k_sonnet__settings_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self Sonnet__Settings*
/// @param callback bool func(Sonnet__Settings* self, QMetaMethod* signal)
void k_sonnet__settings_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self Sonnet__Settings*
/// @param callback void func(Sonnet__Settings* self, const char* objectName)
void k_sonnet__settings_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self Sonnet__Settings*
void k_sonnet__settings_delete(void* self);

/// https://api.kde.org/sonnet-settings.html#types

typedef enum {
    SONNET_SETTINGS_DICTIONARYROLES_LANGUAGECODEROLE = 257,
    SONNET_SETTINGS_DICTIONARYROLES_PREFERREDROLE = 258,
    SONNET_SETTINGS_DICTIONARYROLES_DEFAULTROLE = 259
} Sonnet__Settings__DictionaryRoles;

#endif
