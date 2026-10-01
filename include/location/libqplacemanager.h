#pragma once
#ifndef LOCATION_LIBQPLACEMANAGER_H
#define LOCATION_LIBQPLACEMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const QPlaceManager*
///
const QMetaObject* q_placemanager_meta_object(const void* self);

/// @param self QPlaceManager*
/// @param param1 const char*
///
void* q_placemanager_metacast(void* self, const char* param1);

/// @param self QPlaceManager*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placemanager_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_placemanager_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#managerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlaceManager*
///
const char* q_placemanager_manager_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#managerVersion)
///
/// @param self const QPlaceManager*
///
int32_t q_placemanager_manager_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceDetails)
///
/// @param self const QPlaceManager*
/// @param placeId const char*
///
QPlaceDetailsReply* q_placemanager_get_place_details(const void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceContent)
///
/// @param self const QPlaceManager*
/// @param request QPlaceContentRequest*
///
QPlaceContentReply* q_placemanager_get_place_content(const void* self, const void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#search)
///
/// @param self const QPlaceManager*
/// @param query QPlaceSearchRequest*
///
QPlaceSearchReply* q_placemanager_search(const void* self, const void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#searchSuggestions)
///
/// @param self const QPlaceManager*
/// @param request QPlaceSearchRequest*
///
QPlaceSearchSuggestionReply* q_placemanager_search_suggestions(const void* self, const void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#savePlace)
///
/// @param self QPlaceManager*
/// @param place QPlace*
///
QPlaceIdReply* q_placemanager_save_place(void* self, const void* place);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#removePlace)
///
/// @param self QPlaceManager*
/// @param placeId const char*
///
QPlaceIdReply* q_placemanager_remove_place(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#saveCategory)
///
/// @param self QPlaceManager*
/// @param category QPlaceCategory*
///
QPlaceIdReply* q_placemanager_save_category(void* self, const void* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#removeCategory)
///
/// @param self QPlaceManager*
/// @param categoryId const char*
///
QPlaceIdReply* q_placemanager_remove_category(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#initializeCategories)
///
/// @param self QPlaceManager*
///
QPlaceReply* q_placemanager_initialize_categories(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#parentCategoryId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlaceManager*
/// @param categoryId const char*
///
const char* q_placemanager_parent_category_id(const void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategoryIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPlaceManager*
///
const char** q_placemanager_child_category_ids(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#category)
///
/// @param self const QPlaceManager*
/// @param categoryId const char*
///
QPlaceCategory* q_placemanager_category(const void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategories)
///
/// @param self const QPlaceManager*
///
/// @return libqt_list of QPlaceCategory*
///
libqt_list q_placemanager_child_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#locales)
///
/// @param self const QPlaceManager*
///
/// @return libqt_list of QLocale*
///
libqt_list q_placemanager_locales(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocale)
///
/// @param self QPlaceManager*
/// @param locale QLocale*
///
void q_placemanager_set_locale(void* self, const void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocales)
///
/// @param self QPlaceManager*
/// @param locale libqt_list of QLocale*
///
void q_placemanager_set_locales(void* self, libqt_list locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#compatiblePlace)
///
/// @param self const QPlaceManager*
/// @param place QPlace*
///
QPlace* q_placemanager_compatible_place(const void* self, const void* place);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#matchingPlaces)
///
/// @param self const QPlaceManager*
/// @param request QPlaceMatchRequest*
///
QPlaceMatchReply* q_placemanager_matching_places(const void* self, const void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#finished)
///
/// @param self QPlaceManager*
/// @param reply QPlaceReply*
///
void q_placemanager_finished(void* self, void* reply);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#finished)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, QPlaceReply* reply)
///
void q_placemanager_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
///
/// @param self QPlaceManager*
/// @param param1 QPlaceReply*
/// @param error enum QPlaceReply__Error
///
void q_placemanager_error_occurred(void* self, void* param1, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, QPlaceReply* param1, enum QPlaceReply__Error error)
///
void q_placemanager_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeAdded)
///
/// @param self QPlaceManager*
/// @param placeId const char*
///
void q_placemanager_place_added(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeAdded)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, const char* placeId)
///
void q_placemanager_on_place_added(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeUpdated)
///
/// @param self QPlaceManager*
/// @param placeId const char*
///
void q_placemanager_place_updated(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeUpdated)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, const char* placeId)
///
void q_placemanager_on_place_updated(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeRemoved)
///
/// @param self QPlaceManager*
/// @param placeId const char*
///
void q_placemanager_place_removed(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#placeRemoved)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, const char* placeId)
///
void q_placemanager_on_place_removed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryAdded)
///
/// @param self QPlaceManager*
/// @param category QPlaceCategory*
/// @param parentId const char*
///
void q_placemanager_category_added(void* self, const void* category, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryAdded)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, QPlaceCategory* category, const char* parentId)
///
void q_placemanager_on_category_added(void* self, void (*callback)(void*, const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
///
/// @param self QPlaceManager*
/// @param category QPlaceCategory*
/// @param parentId const char*
///
void q_placemanager_category_updated(void* self, const void* category, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, QPlaceCategory* category, const char* parentId)
///
void q_placemanager_on_category_updated(void* self, void (*callback)(void*, const void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryRemoved)
///
/// @param self QPlaceManager*
/// @param categoryId const char*
/// @param parentId const char*
///
void q_placemanager_category_removed(void* self, const char* categoryId, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryRemoved)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, const char* categoryId, const char* parentId)
///
void q_placemanager_on_category_removed(void* self, void (*callback)(void*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dataChanged)
///
/// @param self QPlaceManager*
///
void q_placemanager_data_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dataChanged)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self)
///
void q_placemanager_on_data_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_placemanager_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_placemanager_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#saveCategory)
///
/// @param self QPlaceManager*
/// @param category QPlaceCategory*
/// @param parentId const char*
///
QPlaceIdReply* q_placemanager_save_category2(void* self, const void* category, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategoryIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPlaceManager*
/// @param parentId const char*
///
const char** q_placemanager_child_category_ids1(const void* self, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategories)
///
/// @param self const QPlaceManager*
/// @param parentId const char*
///
/// @return libqt_list of QPlaceCategory*
///
libqt_list q_placemanager_child_categories1(const void* self, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
///
/// @param self QPlaceManager*
/// @param param1 QPlaceReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placemanager_error_occurred3(void* self, void* param1, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#errorOccurred)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, QPlaceReply* param1, enum QPlaceReply__Error error, const char* errorString)
///
void q_placemanager_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// @param self QPlaceManager*
/// @param event QEvent*
///
bool q_placemanager_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// @param self QPlaceManager*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placemanager_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlaceManager*
///
const char* q_placemanager_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlaceManager*
/// @param name const char*
///
void q_placemanager_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const QPlaceManager*
///
bool q_placemanager_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const QPlaceManager*
///
bool q_placemanager_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const QPlaceManager*
///
bool q_placemanager_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const QPlaceManager*
///
bool q_placemanager_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlaceManager*
/// @param b bool
///
bool q_placemanager_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const QPlaceManager*
///
QThread* q_placemanager_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceManager*
/// @param thread QThread*
///
bool q_placemanager_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceManager*
/// @param interval int
///
int32_t q_placemanager_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceManager*
/// @param time int64_t of nanoseconds
///
int32_t q_placemanager_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceManager*
/// @param id int
///
void q_placemanager_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceManager*
/// @param id enum Qt__TimerId
///
void q_placemanager_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const QPlaceManager*
///
/// @return libqt_list of QObject*
///
libqt_list q_placemanager_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPlaceManager*
/// @param parent QObject*
///
void q_placemanager_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlaceManager*
/// @param filterObj QObject*
///
void q_placemanager_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlaceManager*
/// @param obj QObject*
///
void q_placemanager_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_placemanager_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_placemanager_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPlaceManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_placemanager_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placemanager_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_placemanager_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceManager*
///
bool q_placemanager_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceManager*
/// @param receiver QObject*
///
bool q_placemanager_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_placemanager_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const QPlaceManager*
///
void q_placemanager_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const QPlaceManager*
///
void q_placemanager_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlaceManager*
/// @param name const char*
/// @param value QVariant*
///
bool q_placemanager_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const QPlaceManager*
/// @param name const char*
///
QVariant* q_placemanager_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPlaceManager*
///
const char** q_placemanager_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceManager*
///
QBindingStorage* q_placemanager_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const QPlaceManager*
///
const QBindingStorage* q_placemanager_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceManager*
///
void q_placemanager_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self)
///
void q_placemanager_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const QPlaceManager*
///
QObject* q_placemanager_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const QPlaceManager*
/// @param classname const char*
///
bool q_placemanager_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlaceManager*
///
void q_placemanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceManager*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_placemanager_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceManager*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_placemanager_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_placemanager_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

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
QMetaObject__Connection* q_placemanager_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const QPlaceManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placemanager_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceManager*
/// @param signal const char*
///
bool q_placemanager_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceManager*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_placemanager_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceManager*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placemanager_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const QPlaceManager*
/// @param receiver QObject*
/// @param member const char*
///
bool q_placemanager_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceManager*
/// @param param1 QObject*
///
void q_placemanager_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, QObject* param1)
///
void q_placemanager_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, const char* objectName)
///
void q_placemanager_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#dtor.QPlaceManager)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceManager*
///
void q_placemanager_delete(void* self);

#endif
