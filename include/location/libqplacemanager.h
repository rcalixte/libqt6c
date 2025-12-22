#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACEMANAGER_H
#define SRC_LOCATION_QT6C_LIBQPLACEMANAGER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPlaceManager*
///
const QMetaObject* q_placemanager_meta_object(void* self);

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
/// @param self QPlaceManager*
///
const char* q_placemanager_manager_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#managerVersion)
///
/// @param self QPlaceManager*
///
int32_t q_placemanager_manager_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceDetails)
///
/// @param self QPlaceManager*
/// @param placeId const char*
///
QPlaceDetailsReply* q_placemanager_get_place_details(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#getPlaceContent)
///
/// @param self QPlaceManager*
/// @param request QPlaceContentRequest*
///
QPlaceContentReply* q_placemanager_get_place_content(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#search)
///
/// @param self QPlaceManager*
/// @param query QPlaceSearchRequest*
///
QPlaceSearchReply* q_placemanager_search(void* self, void* query);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#searchSuggestions)
///
/// @param self QPlaceManager*
/// @param request QPlaceSearchRequest*
///
QPlaceSearchSuggestionReply* q_placemanager_search_suggestions(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#savePlace)
///
/// @param self QPlaceManager*
/// @param place QPlace*
///
QPlaceIdReply* q_placemanager_save_place(void* self, void* place);

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
QPlaceIdReply* q_placemanager_save_category(void* self, void* category);

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
/// @param self QPlaceManager*
/// @param categoryId const char*
///
const char* q_placemanager_parent_category_id(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategoryIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceManager*
///
const char** q_placemanager_child_category_ids(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#category)
///
/// @param self QPlaceManager*
/// @param categoryId const char*
///
QPlaceCategory* q_placemanager_category(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategories)
///
/// @param self QPlaceManager*
///
libqt_list /* of QPlaceCategory* */ q_placemanager_child_categories(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#locales)
///
/// @param self QPlaceManager*
///
libqt_list /* of QLocale* */ q_placemanager_locales(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocale)
///
/// @param self QPlaceManager*
/// @param locale QLocale*
///
void q_placemanager_set_locale(void* self, void* locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#setLocales)
///
/// @param self QPlaceManager*
/// @param locale libqt_list /* of QLocale* */
///
void q_placemanager_set_locales(void* self, libqt_list locale);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#compatiblePlace)
///
/// @param self QPlaceManager*
/// @param place QPlace*
///
QPlace* q_placemanager_compatible_place(void* self, void* place);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#matchingPlaces)
///
/// @param self QPlaceManager*
/// @param request QPlaceMatchRequest*
///
QPlaceMatchReply* q_placemanager_matching_places(void* self, void* request);

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
void q_placemanager_category_added(void* self, void* category, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryAdded)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, QPlaceCategory* category, const char* parentId)
///
void q_placemanager_on_category_added(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
///
/// @param self QPlaceManager*
/// @param category QPlaceCategory*
/// @param parentId const char*
///
void q_placemanager_category_updated(void* self, void* category, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#categoryUpdated)
///
/// @param self QPlaceManager*
/// @param callback void func(QPlaceManager* self, QPlaceCategory* category, const char* parentId)
///
void q_placemanager_on_category_updated(void* self, void (*callback)(void*, void*, const char*));

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
QPlaceIdReply* q_placemanager_save_category2(void* self, void* category, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategoryIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceManager*
/// @param parentId const char*
///
const char** q_placemanager_child_category_ids1(void* self, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanager.html#childCategories)
///
/// @param self QPlaceManager*
/// @param parentId const char*
///
libqt_list /* of QPlaceCategory* */ q_placemanager_child_categories1(void* self, const char* parentId);

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
/// @param self QPlaceManager*
///
const char* q_placemanager_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlaceManager*
/// @param name char*
///
void q_placemanager_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPlaceManager*
///
bool q_placemanager_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPlaceManager*
///
bool q_placemanager_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPlaceManager*
///
bool q_placemanager_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPlaceManager*
///
bool q_placemanager_signals_blocked(void* self);

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
/// @param self QPlaceManager*
///
QThread* q_placemanager_thread(void* self);

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
/// @param self QPlaceManager*
///
libqt_list /* of QObject* */ q_placemanager_children(void* self);

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
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_placemanager_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_placemanager_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_placemanager_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_placemanager_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPlaceManager*
///
void q_placemanager_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPlaceManager*
///
void q_placemanager_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlaceManager*
/// @param name const char*
/// @param value QVariant*
///
bool q_placemanager_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPlaceManager*
/// @param name const char*
///
QVariant* q_placemanager_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceManager*
///
const char** q_placemanager_dynamic_property_names(void* self);

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
/// @param self QPlaceManager*
///
const QBindingStorage* q_placemanager_binding_storage2(void* self);

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
/// @param self QPlaceManager*
///
QObject* q_placemanager_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPlaceManager*
/// @param classname const char*
///
bool q_placemanager_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlaceManager*
///
void q_placemanager_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceManager*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_placemanager_move_to_thread2(void* self, void* thread, void* param2);

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
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placemanager_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceManager*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placemanager_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

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
