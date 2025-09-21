#pragma once
#ifndef SRC_EXTRAS_KNEWSTUFFQT6C_LIBENGINEBASE_H
#define SRC_EXTRAS_KNEWSTUFFQT6C_LIBENGINEBASE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api.kde.org/knscore-enginebase.html

/// k_nscore__enginebase_new constructs a new KNSCore::EngineBase object.
///
KNSCore__EngineBase* k_nscore__enginebase_new();

/// k_nscore__enginebase_new2 constructs a new KNSCore::EngineBase object.
///
/// @param parent QObject*
KNSCore__EngineBase* k_nscore__enginebase_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self KNSCore__EngineBase*
const QMetaObject* k_nscore__enginebase_meta_object(void* self);

/// @param self KNSCore__EngineBase*
/// @param param1 const char*
void* k_nscore__enginebase_metacast(void* self, const char* param1);

/// @param self KNSCore__EngineBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_nscore__enginebase_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KNSCore__EngineBase*
/// @param callback int32_t func(KNSCore__EngineBase* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_nscore__enginebase_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KNSCore__EngineBase*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_nscore__enginebase_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_nscore__enginebase_tr(const char* s);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#availableConfigFiles)
///
/// Caller is responsible for freeing the returned memory
///
const char** k_nscore__enginebase_available_config_files();

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#init)
///
/// @param self KNSCore__EngineBase*
/// @param configfile const char*
bool k_nscore__enginebase_init(void* self, const char* configfile);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#init)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__EngineBase*
/// @param callback bool func(KNSCore__EngineBase* self, const char* configfile)
void k_nscore__enginebase_on_init(void* self, bool (*callback)(void*, const char*));

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#init)
///
/// Base class method implementation
///
/// @param self KNSCore__EngineBase*
/// @param configfile const char*
bool k_nscore__enginebase_qbase_init(void* self, const char* configfile);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#name)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__EngineBase*
const char* k_nscore__enginebase_name(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#useLabel)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__EngineBase*
const char* k_nscore__enginebase_use_label(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#useLabelChanged)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_use_label_changed(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#uploadEnabled)
///
/// @param self KNSCore__EngineBase*
bool k_nscore__enginebase_upload_enabled(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#uploadEnabledChanged)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_upload_enabled_changed(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#categories)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__EngineBase*
const char** k_nscore__enginebase_categories(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#categoriesMetadata)
///
/// @param self KNSCore__EngineBase*
libqt_list /* of KNSCore__Provider__CategoryMetadata* */ k_nscore__enginebase_categories_metadata(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#categoriesMetadata2)
///
/// @param self KNSCore__EngineBase*
libqt_list /* of KNSCore__CategoryMetadata* */ k_nscore__enginebase_categories_metadata2(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#searchPresets)
///
/// @param self KNSCore__EngineBase*
libqt_list /* of KNSCore__Provider__SearchPreset* */ k_nscore__enginebase_search_presets(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#searchPresets2)
///
/// @param self KNSCore__EngineBase*
libqt_list /* of KNSCore__SearchPreset* */ k_nscore__enginebase_search_presets2(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#atticaProviders)
///
/// @param self KNSCore__EngineBase*
libqt_list /* of Attica__Provider* */ k_nscore__enginebase_attica_providers(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#setTagFilter)
///
/// @param self KNSCore__EngineBase*
/// @param filter const char**
void k_nscore__enginebase_set_tag_filter(void* self, const char* filter[]);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#tagFilter)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__EngineBase*
const char** k_nscore__enginebase_tag_filter(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#addTagFilter)
///
/// @param self KNSCore__EngineBase*
/// @param filter const char*
void k_nscore__enginebase_add_tag_filter(void* self, const char* filter);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#setDownloadTagFilter)
///
/// @param self KNSCore__EngineBase*
/// @param filter const char**
void k_nscore__enginebase_set_download_tag_filter(void* self, const char* filter[]);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#downloadTagFilter)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__EngineBase*
const char** k_nscore__enginebase_download_tag_filter(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#addDownloadTagFilter)
///
/// @param self KNSCore__EngineBase*
/// @param filter const char*
void k_nscore__enginebase_add_download_tag_filter(void* self, const char* filter);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#userCanVote)
///
/// @param self KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
bool k_nscore__enginebase_user_can_vote(void* self, void* entry);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#vote)
///
/// @param self KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
/// @param rating uint32_t
void k_nscore__enginebase_vote(void* self, void* entry, uint32_t rating);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#userCanBecomeFan)
///
/// @param self KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
bool k_nscore__enginebase_user_can_become_fan(void* self, void* entry);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#becomeFan)
///
/// @param self KNSCore__EngineBase*
/// @param entry KNSCore__Entry*
void k_nscore__enginebase_become_fan(void* self, void* entry);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#providerIDs)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__EngineBase*
const char** k_nscore__enginebase_provider_i_ds(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#hasAdoptionCommand)
///
/// @param self KNSCore__EngineBase*
bool k_nscore__enginebase_has_adoption_command(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#search)
///
/// @param self KNSCore__EngineBase*
/// @param request KNSCore__Provider__SearchRequest*
KNSCore__ResultsStream* k_nscore__enginebase_search(void* self, void* request);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#search)
///
/// @param self KNSCore__EngineBase*
/// @param request KNSCore__SearchRequest*
KNSCore__ResultsStream* k_nscore__enginebase_search2(void* self, void* request);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#contentWarningType)
///
/// @param self KNSCore__EngineBase*
///
/// @return enum KNSCore__EngineBase__ContentWarningType
int32_t k_nscore__enginebase_content_warning_type(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#contentWarningTypeChanged)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_content_warning_type_changed(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalMessage)
///
/// @param self KNSCore__EngineBase*
/// @param message const char*
void k_nscore__enginebase_signal_message(void* self, const char* message);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalProvidersLoaded)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_signal_providers_loaded(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalErrorCode)
///
/// @param self KNSCore__EngineBase*
/// @param errorCode enum KNSCore__ErrorCode__ErrorCode
/// @param message const char*
/// @param metadata QVariant*
void k_nscore__enginebase_signal_error_code(void* self, int32_t errorCode, const char* message, void* metadata);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalCategoriesMetadataLoded)
///
/// @param self KNSCore__EngineBase*
/// @param categories libqt_list /* of KNSCore__Provider__CategoryMetadata* */
void k_nscore__enginebase_signal_categories_metadata_loded(void* self, libqt_list categories);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalCategoriesMetadataLoaded)
///
/// @param self KNSCore__EngineBase*
/// @param categories libqt_list /* of KNSCore__CategoryMetadata* */
void k_nscore__enginebase_signal_categories_metadata_loaded(void* self, libqt_list categories);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalSearchPresetsLoaded)
///
/// @param self KNSCore__EngineBase*
/// @param presets libqt_list /* of KNSCore__Provider__SearchPreset* */
void k_nscore__enginebase_signal_search_presets_loaded(void* self, libqt_list presets);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#signalSearchPresetsLoaded)
///
/// @param self KNSCore__EngineBase*
/// @param presets libqt_list /* of KNSCore__SearchPreset* */
void k_nscore__enginebase_signal_search_presets_loaded2(void* self, libqt_list presets);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#providersChanged)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_providers_changed(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#loadingProvider)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_loading_provider(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#providerAdded)
///
/// @param self KNSCore__EngineBase*
/// @param provider KNSCore__ProviderCore*
void k_nscore__enginebase_provider_added(void* self, void* provider);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#updateStatus)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_update_status(void* self);

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#updateStatus)
///
/// Allows for overriding the related default method
///
/// @param self KNSCore__EngineBase*
/// @param callback void func()
void k_nscore__enginebase_on_update_status(void* self, void (*callback)());

/// [Qt documentation](https://api.kde.org/knscore-enginebase.html#updateStatus)
///
/// Base class method implementation
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_qbase_update_status(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_nscore__enginebase_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_nscore__enginebase_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__EngineBase*
const char* k_nscore__enginebase_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KNSCore__EngineBase*
/// @param name char*
void k_nscore__enginebase_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KNSCore__EngineBase*
bool k_nscore__enginebase_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KNSCore__EngineBase*
bool k_nscore__enginebase_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KNSCore__EngineBase*
bool k_nscore__enginebase_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KNSCore__EngineBase*
bool k_nscore__enginebase_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KNSCore__EngineBase*
/// @param b bool
bool k_nscore__enginebase_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KNSCore__EngineBase*
QThread* k_nscore__enginebase_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__EngineBase*
/// @param thread QThread*
bool k_nscore__enginebase_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__EngineBase*
/// @param interval int
int32_t k_nscore__enginebase_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__EngineBase*
/// @param id int
void k_nscore__enginebase_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KNSCore__EngineBase*
/// @param id enum Qt__TimerId
void k_nscore__enginebase_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KNSCore__EngineBase*
libqt_list /* of QObject* */ k_nscore__enginebase_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self KNSCore__EngineBase*
/// @param parent QObject*
void k_nscore__enginebase_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KNSCore__EngineBase*
/// @param filterObj QObject*
void k_nscore__enginebase_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KNSCore__EngineBase*
/// @param obj QObject*
void k_nscore__enginebase_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_nscore__enginebase_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__EngineBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_nscore__enginebase_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_nscore__enginebase_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_nscore__enginebase_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KNSCore__EngineBase*
/// @param name const char*
/// @param value QVariant*
bool k_nscore__enginebase_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KNSCore__EngineBase*
/// @param name const char*
QVariant* k_nscore__enginebase_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KNSCore__EngineBase*
const char** k_nscore__enginebase_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__EngineBase*
QBindingStorage* k_nscore__enginebase_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KNSCore__EngineBase*
const QBindingStorage* k_nscore__enginebase_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__EngineBase*
/// @param callback void func(KNSCore__EngineBase* self)
void k_nscore__enginebase_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KNSCore__EngineBase*
QObject* k_nscore__enginebase_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KNSCore__EngineBase*
/// @param classname const char*
bool k_nscore__enginebase_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KNSCore__EngineBase*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_nscore__enginebase_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KNSCore__EngineBase*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_nscore__enginebase_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_nscore__enginebase_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KNSCore__EngineBase*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
QMetaObject__Connection* k_nscore__enginebase_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__EngineBase*
/// @param param1 QObject*
void k_nscore__enginebase_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KNSCore__EngineBase*
/// @param callback void func(KNSCore__EngineBase* self, QObject* param1)
void k_nscore__enginebase_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param event QEvent*
bool k_nscore__enginebase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param event QEvent*
bool k_nscore__enginebase_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback bool func(KNSCore__EngineBase* self, QEvent* event)
void k_nscore__enginebase_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param watched QObject*
/// @param event QEvent*
bool k_nscore__enginebase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param watched QObject*
/// @param event QEvent*
bool k_nscore__enginebase_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback bool func(KNSCore__EngineBase* self, QObject* watched, QEvent* event)
void k_nscore__enginebase_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param event QTimerEvent*
void k_nscore__enginebase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param event QTimerEvent*
void k_nscore__enginebase_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback void func(KNSCore__EngineBase* self, QTimerEvent* event)
void k_nscore__enginebase_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param event QChildEvent*
void k_nscore__enginebase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param event QChildEvent*
void k_nscore__enginebase_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback void func(KNSCore__EngineBase* self, QChildEvent* event)
void k_nscore__enginebase_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param event QEvent*
void k_nscore__enginebase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param event QEvent*
void k_nscore__enginebase_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback void func(KNSCore__EngineBase* self, QEvent* event)
void k_nscore__enginebase_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param signal QMetaMethod*
void k_nscore__enginebase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param signal QMetaMethod*
void k_nscore__enginebase_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback void func(KNSCore__EngineBase* self, QMetaMethod* signal)
void k_nscore__enginebase_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param signal QMetaMethod*
void k_nscore__enginebase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param signal QMetaMethod*
void k_nscore__enginebase_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback void func(KNSCore__EngineBase* self, QMetaMethod* signal)
void k_nscore__enginebase_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
QObject* k_nscore__enginebase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
QObject* k_nscore__enginebase_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback QObject* func()
void k_nscore__enginebase_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
int32_t k_nscore__enginebase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
int32_t k_nscore__enginebase_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback int32_t func()
void k_nscore__enginebase_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param signal const char*
int32_t k_nscore__enginebase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param signal const char*
int32_t k_nscore__enginebase_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback int32_t func(KNSCore__EngineBase* self, const char* signal)
void k_nscore__enginebase_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param signal QMetaMethod*
bool k_nscore__enginebase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param signal QMetaMethod*
bool k_nscore__enginebase_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KNSCore__EngineBase*
/// @param callback bool func(KNSCore__EngineBase* self, QMetaMethod* signal)
void k_nscore__enginebase_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KNSCore__EngineBase*
/// @param callback void func(KNSCore__EngineBase* self, const char* objectName)
void k_nscore__enginebase_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// Delete this object from C++ memory.
///
/// @param self KNSCore__EngineBase*
void k_nscore__enginebase_delete(void* self);

/// https://api.kde.org/knscore-enginebase.html#types

typedef enum {
    KNSCORE_ENGINEBASE_CONTENTWARNINGTYPE_STATIC = 0,
    KNSCORE_ENGINEBASE_CONTENTWARNINGTYPE_EXECUTABLES = 1
} KNSCore__EngineBase__ContentWarningType;

#endif
