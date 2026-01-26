#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACEMANAGERENGINE_H
#define SRC_LOCATION_QT6C_LIBQPLACEMANAGERENGINE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html)

/// q_placemanagerengine_new constructs a new QPlaceManagerEngine object.
///
/// @param parameters libqt_map of const char* to QVariant*
///
QPlaceManagerEngine* q_placemanagerengine_new(libqt_map parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html)

/// q_placemanagerengine_new2 constructs a new QPlaceManagerEngine object.
///
/// @param parameters libqt_map of const char* to QVariant*
/// @param parent QObject*
///
QPlaceManagerEngine* q_placemanagerengine_new2(libqt_map parameters, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPlaceManagerEngine*
///
const QMetaObject* q_placemanagerengine_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback const QMetaObject* func()
///
void q_placemanagerengine_on_meta_object(void* self, const QMetaObject* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
///
const QMetaObject* q_placemanagerengine_qbase_meta_object(void* self);

/// @param self QPlaceManagerEngine*
/// @param param1 const char*
///
void* q_placemanagerengine_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback void* func(QPlaceManagerEngine* self, const char* param1)
///
void q_placemanagerengine_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param param1 const char*
///
void* q_placemanagerengine_qbase_metacast(void* self, const char* param1);

/// @param self QPlaceManagerEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placemanagerengine_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback int32_t func(QPlaceManagerEngine* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_placemanagerengine_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_placemanagerengine_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_placemanagerengine_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#managerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceManagerEngine*
///
const char* q_placemanagerengine_manager_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#managerVersion)
///
/// @param self QPlaceManagerEngine*
///
int32_t q_placemanagerengine_manager_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceDetails)
///
/// @param self QPlaceManagerEngine*
/// @param placeId const char*
///
QPlaceDetailsReply* q_placemanagerengine_get_place_details(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceDetails)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceDetailsReply* func(QPlaceManagerEngine* self, const char* placeId)
///
void q_placemanagerengine_on_get_place_details(void* self, QPlaceDetailsReply* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceDetails)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param placeId const char*
///
QPlaceDetailsReply* q_placemanagerengine_qbase_get_place_details(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceContent)
///
/// @param self QPlaceManagerEngine*
/// @param request QPlaceContentRequest*
///
QPlaceContentReply* q_placemanagerengine_get_place_content(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceContent)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceContentReply* func(QPlaceManagerEngine* self, QPlaceContentRequest* request)
///
void q_placemanagerengine_on_get_place_content(void* self, QPlaceContentReply* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#getPlaceContent)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param request QPlaceContentRequest*
///
QPlaceContentReply* q_placemanagerengine_qbase_get_place_content(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#search)
///
/// @param self QPlaceManagerEngine*
/// @param request QPlaceSearchRequest*
///
QPlaceSearchReply* q_placemanagerengine_search(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#search)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceSearchReply* func(QPlaceManagerEngine* self, QPlaceSearchRequest* request)
///
void q_placemanagerengine_on_search(void* self, QPlaceSearchReply* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#search)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param request QPlaceSearchRequest*
///
QPlaceSearchReply* q_placemanagerengine_qbase_search(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#searchSuggestions)
///
/// @param self QPlaceManagerEngine*
/// @param request QPlaceSearchRequest*
///
QPlaceSearchSuggestionReply* q_placemanagerengine_search_suggestions(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#searchSuggestions)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceSearchSuggestionReply* func(QPlaceManagerEngine* self, QPlaceSearchRequest* request)
///
void q_placemanagerengine_on_search_suggestions(void* self, QPlaceSearchSuggestionReply* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#searchSuggestions)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param request QPlaceSearchRequest*
///
QPlaceSearchSuggestionReply* q_placemanagerengine_qbase_search_suggestions(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#savePlace)
///
/// @param self QPlaceManagerEngine*
/// @param place QPlace*
///
QPlaceIdReply* q_placemanagerengine_save_place(void* self, void* place);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#savePlace)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceIdReply* func(QPlaceManagerEngine* self, QPlace* place)
///
void q_placemanagerengine_on_save_place(void* self, QPlaceIdReply* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#savePlace)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param place QPlace*
///
QPlaceIdReply* q_placemanagerengine_qbase_save_place(void* self, void* place);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removePlace)
///
/// @param self QPlaceManagerEngine*
/// @param placeId const char*
///
QPlaceIdReply* q_placemanagerengine_remove_place(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removePlace)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceIdReply* func(QPlaceManagerEngine* self, const char* placeId)
///
void q_placemanagerengine_on_remove_place(void* self, QPlaceIdReply* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removePlace)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param placeId const char*
///
QPlaceIdReply* q_placemanagerengine_qbase_remove_place(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
///
/// @param self QPlaceManagerEngine*
/// @param category QPlaceCategory*
/// @param parentId const char*
///
QPlaceIdReply* q_placemanagerengine_save_category(void* self, void* category, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceIdReply* func(QPlaceManagerEngine* self, QPlaceCategory* category, const char* parentId)
///
void q_placemanagerengine_on_save_category(void* self, QPlaceIdReply* (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#saveCategory)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param category QPlaceCategory*
/// @param parentId const char*
///
QPlaceIdReply* q_placemanagerengine_qbase_save_category(void* self, void* category, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removeCategory)
///
/// @param self QPlaceManagerEngine*
/// @param categoryId const char*
///
QPlaceIdReply* q_placemanagerengine_remove_category(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removeCategory)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceIdReply* func(QPlaceManagerEngine* self, const char* categoryId)
///
void q_placemanagerengine_on_remove_category(void* self, QPlaceIdReply* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#removeCategory)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param categoryId const char*
///
QPlaceIdReply* q_placemanagerengine_qbase_remove_category(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
///
/// @param self QPlaceManagerEngine*
///
QPlaceReply* q_placemanagerengine_initialize_categories(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceReply* func()
///
void q_placemanagerengine_on_initialize_categories(void* self, QPlaceReply* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#initializeCategories)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
///
QPlaceReply* q_placemanagerengine_qbase_initialize_categories(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#parentCategoryId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceManagerEngine*
/// @param categoryId const char*
///
const char* q_placemanagerengine_parent_category_id(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#parentCategoryId)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback const char* func(QPlaceManagerEngine* self, const char* categoryId)
///
void q_placemanagerengine_on_parent_category_id(void* self, const char* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#parentCategoryId)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param categoryId const char*
///
const char* q_placemanagerengine_qbase_parent_category_id(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategoryIds)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceManagerEngine*
/// @param categoryId const char*
///
const char** q_placemanagerengine_child_category_ids(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategoryIds)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback const char** func(QPlaceManagerEngine* self, const char* categoryId)
///
void q_placemanagerengine_on_child_category_ids(void* self, const char** (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategoryIds)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param categoryId const char*
///
const char** q_placemanagerengine_qbase_child_category_ids(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#category)
///
/// @param self QPlaceManagerEngine*
/// @param categoryId const char*
///
QPlaceCategory* q_placemanagerengine_category(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#category)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceCategory* func(QPlaceManagerEngine* self, const char* categoryId)
///
void q_placemanagerengine_on_category(void* self, QPlaceCategory* (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#category)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param categoryId const char*
///
QPlaceCategory* q_placemanagerengine_qbase_category(void* self, const char* categoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategories)
///
/// @param self QPlaceManagerEngine*
/// @param parentId const char*
///
/// @return libqt_list of QPlaceCategory*
///
libqt_list q_placemanagerengine_child_categories(void* self, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategories)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceCategory** func(QPlaceManagerEngine* self, const char* parentId)
///
void q_placemanagerengine_on_child_categories(void* self, QPlaceCategory** (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#childCategories)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param parentId const char*
///
/// @return libqt_list of QPlaceCategory*
///
libqt_list q_placemanagerengine_qbase_child_categories(void* self, const char* parentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#locales)
///
/// @param self QPlaceManagerEngine*
///
/// @return libqt_list of QLocale*
///
libqt_list q_placemanagerengine_locales(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#locales)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QLocale** func()
///
void q_placemanagerengine_on_locales(void* self, QLocale** (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#locales)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
///
/// @return libqt_list of QLocale*
///
libqt_list q_placemanagerengine_qbase_locales(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
///
/// @param self QPlaceManagerEngine*
/// @param locales libqt_list of QLocale*
///
void q_placemanagerengine_set_locales(void* self, libqt_list /* of QLocale* */ locales);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QLocale** locales)
///
void q_placemanagerengine_on_set_locales(void* self, void (*callback)(void*, QLocale**));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#setLocales)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param locales libqt_list of QLocale*
///
void q_placemanagerengine_qbase_set_locales(void* self, libqt_list /* of QLocale* */ locales);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#constructIconUrl)
///
/// @param self QPlaceManagerEngine*
/// @param icon QPlaceIcon*
/// @param size QSize*
///
QUrl* q_placemanagerengine_construct_icon_url(void* self, void* icon, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#constructIconUrl)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QUrl* func(QPlaceManagerEngine* self, QPlaceIcon* icon, QSize* size)
///
void q_placemanagerengine_on_construct_icon_url(void* self, QUrl* (*callback)(void*, void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#constructIconUrl)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param icon QPlaceIcon*
/// @param size QSize*
///
QUrl* q_placemanagerengine_qbase_construct_icon_url(void* self, void* icon, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#compatiblePlace)
///
/// @param self QPlaceManagerEngine*
/// @param original QPlace*
///
QPlace* q_placemanagerengine_compatible_place(void* self, void* original);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#compatiblePlace)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlace* func(QPlaceManagerEngine* self, QPlace* original)
///
void q_placemanagerengine_on_compatible_place(void* self, QPlace* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#compatiblePlace)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param original QPlace*
///
QPlace* q_placemanagerengine_qbase_compatible_place(void* self, void* original);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#matchingPlaces)
///
/// @param self QPlaceManagerEngine*
/// @param request QPlaceMatchRequest*
///
QPlaceMatchReply* q_placemanagerengine_matching_places(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#matchingPlaces)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceMatchReply* func(QPlaceManagerEngine* self, QPlaceMatchRequest* request)
///
void q_placemanagerengine_on_matching_places(void* self, QPlaceMatchReply* (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#matchingPlaces)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
/// @param request QPlaceMatchRequest*
///
QPlaceMatchReply* q_placemanagerengine_qbase_matching_places(void* self, void* request);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#finished)
///
/// @param self QPlaceManagerEngine*
/// @param reply QPlaceReply*
///
void q_placemanagerengine_finished(void* self, void* reply);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#finished)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QPlaceReply* reply)
///
void q_placemanagerengine_on_finished(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
///
/// @param self QPlaceManagerEngine*
/// @param param1 QPlaceReply*
/// @param error enum QPlaceReply__Error
///
void q_placemanagerengine_error_occurred(void* self, void* param1, int32_t error);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QPlaceReply* param1, enum QPlaceReply__Error error)
///
void q_placemanagerengine_on_error_occurred(void* self, void (*callback)(void*, void*, int32_t));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeAdded)
///
/// @param self QPlaceManagerEngine*
/// @param placeId const char*
///
void q_placemanagerengine_place_added(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeAdded)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, const char* placeId)
///
void q_placemanagerengine_on_place_added(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeUpdated)
///
/// @param self QPlaceManagerEngine*
/// @param placeId const char*
///
void q_placemanagerengine_place_updated(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeUpdated)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, const char* placeId)
///
void q_placemanagerengine_on_place_updated(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeRemoved)
///
/// @param self QPlaceManagerEngine*
/// @param placeId const char*
///
void q_placemanagerengine_place_removed(void* self, const char* placeId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#placeRemoved)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, const char* placeId)
///
void q_placemanagerengine_on_place_removed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryAdded)
///
/// @param self QPlaceManagerEngine*
/// @param category QPlaceCategory*
/// @param parentCategoryId const char*
///
void q_placemanagerengine_category_added(void* self, void* category, const char* parentCategoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryAdded)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QPlaceCategory* category, const char* parentCategoryId)
///
void q_placemanagerengine_on_category_added(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryUpdated)
///
/// @param self QPlaceManagerEngine*
/// @param category QPlaceCategory*
/// @param parentCategoryId const char*
///
void q_placemanagerengine_category_updated(void* self, void* category, const char* parentCategoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryUpdated)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QPlaceCategory* category, const char* parentCategoryId)
///
void q_placemanagerengine_on_category_updated(void* self, void (*callback)(void*, void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryRemoved)
///
/// @param self QPlaceManagerEngine*
/// @param categoryId const char*
/// @param parentCategoryId const char*
///
void q_placemanagerengine_category_removed(void* self, const char* categoryId, const char* parentCategoryId);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#categoryRemoved)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, const char* categoryId, const char* parentCategoryId)
///
void q_placemanagerengine_on_category_removed(void* self, void (*callback)(void*, const char*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dataChanged)
///
/// @param self QPlaceManagerEngine*
///
void q_placemanagerengine_data_changed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dataChanged)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self)
///
void q_placemanagerengine_on_data_changed(void* self, void (*callback)(void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
///
/// @param self QPlaceManagerEngine*
///
QPlaceManager* q_placemanagerengine_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
///
/// Allows for overriding the related default method
///
/// @param self QPlaceManagerEngine*
/// @param callback QPlaceManager* func()
///
void q_placemanagerengine_on_manager(void* self, QPlaceManager* (*callback)());

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#manager)
///
/// Base class method implementation
///
/// @param self QPlaceManagerEngine*
///
QPlaceManager* q_placemanagerengine_qbase_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_placemanagerengine_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_placemanagerengine_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
///
/// @param self QPlaceManagerEngine*
/// @param param1 QPlaceReply*
/// @param error enum QPlaceReply__Error
/// @param errorString const char*
///
void q_placemanagerengine_error_occurred3(void* self, void* param1, int32_t error, const char* errorString);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#errorOccurred)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QPlaceReply* param1, enum QPlaceReply__Error error, const char* errorString)
///
void q_placemanagerengine_on_error_occurred3(void* self, void (*callback)(void*, void*, int32_t, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceManagerEngine*
///
const char* q_placemanagerengine_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPlaceManagerEngine*
/// @param name char*
///
void q_placemanagerengine_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPlaceManagerEngine*
///
bool q_placemanagerengine_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPlaceManagerEngine*
///
bool q_placemanagerengine_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPlaceManagerEngine*
///
bool q_placemanagerengine_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPlaceManagerEngine*
///
bool q_placemanagerengine_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPlaceManagerEngine*
/// @param b bool
///
bool q_placemanagerengine_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPlaceManagerEngine*
///
QThread* q_placemanagerengine_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceManagerEngine*
/// @param thread QThread*
///
bool q_placemanagerengine_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceManagerEngine*
/// @param interval int
///
int32_t q_placemanagerengine_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceManagerEngine*
/// @param time int64_t of nanoseconds
///
int32_t q_placemanagerengine_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceManagerEngine*
/// @param id int
///
void q_placemanagerengine_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPlaceManagerEngine*
/// @param id enum Qt__TimerId
///
void q_placemanagerengine_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPlaceManagerEngine*
///
/// @return libqt_list of QObject*
///
libqt_list q_placemanagerengine_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPlaceManagerEngine*
/// @param parent QObject*
///
void q_placemanagerengine_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPlaceManagerEngine*
/// @param filterObj QObject*
///
void q_placemanagerengine_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPlaceManagerEngine*
/// @param obj QObject*
///
void q_placemanagerengine_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_placemanagerengine_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceManagerEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_placemanagerengine_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_placemanagerengine_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_placemanagerengine_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPlaceManagerEngine*
///
void q_placemanagerengine_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPlaceManagerEngine*
///
void q_placemanagerengine_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPlaceManagerEngine*
/// @param name const char*
/// @param value QVariant*
///
bool q_placemanagerengine_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPlaceManagerEngine*
/// @param name const char*
///
QVariant* q_placemanagerengine_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPlaceManagerEngine*
///
const char** q_placemanagerengine_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceManagerEngine*
///
QBindingStorage* q_placemanagerengine_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPlaceManagerEngine*
///
const QBindingStorage* q_placemanagerengine_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceManagerEngine*
///
void q_placemanagerengine_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self)
///
void q_placemanagerengine_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPlaceManagerEngine*
///
QObject* q_placemanagerengine_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPlaceManagerEngine*
/// @param classname const char*
///
bool q_placemanagerengine_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPlaceManagerEngine*
///
void q_placemanagerengine_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPlaceManagerEngine*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
///
bool q_placemanagerengine_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceManagerEngine*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_placemanagerengine_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPlaceManagerEngine*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_placemanagerengine_start_timer23(void* self, int64_t time, int32_t timerType);

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
QMetaObject__Connection* q_placemanagerengine_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPlaceManagerEngine*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_placemanagerengine_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceManagerEngine*
/// @param param1 QObject*
///
void q_placemanagerengine_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QObject* param1)
///
void q_placemanagerengine_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param event QEvent*
///
bool q_placemanagerengine_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param event QEvent*
///
bool q_placemanagerengine_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback bool func(QPlaceManagerEngine* self, QEvent* event)
///
void q_placemanagerengine_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placemanagerengine_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_placemanagerengine_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback bool func(QPlaceManagerEngine* self, QObject* watched, QEvent* event)
///
void q_placemanagerengine_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param event QTimerEvent*
///
void q_placemanagerengine_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param event QTimerEvent*
///
void q_placemanagerengine_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QTimerEvent* event)
///
void q_placemanagerengine_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param event QChildEvent*
///
void q_placemanagerengine_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param event QChildEvent*
///
void q_placemanagerengine_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QChildEvent* event)
///
void q_placemanagerengine_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param event QEvent*
///
void q_placemanagerengine_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param event QEvent*
///
void q_placemanagerengine_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QEvent* event)
///
void q_placemanagerengine_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param signal QMetaMethod*
///
void q_placemanagerengine_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param signal QMetaMethod*
///
void q_placemanagerengine_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QMetaMethod* signal)
///
void q_placemanagerengine_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param signal QMetaMethod*
///
void q_placemanagerengine_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param signal QMetaMethod*
///
void q_placemanagerengine_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, QMetaMethod* signal)
///
void q_placemanagerengine_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
///
QObject* q_placemanagerengine_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
///
QObject* q_placemanagerengine_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback QObject* func()
///
void q_placemanagerengine_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
///
int32_t q_placemanagerengine_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
///
int32_t q_placemanagerengine_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback int32_t func()
///
void q_placemanagerengine_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param signal const char*
///
int32_t q_placemanagerengine_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param signal const char*
///
int32_t q_placemanagerengine_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback int32_t func(QPlaceManagerEngine* self, const char* signal)
///
void q_placemanagerengine_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param signal QMetaMethod*
///
bool q_placemanagerengine_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param signal QMetaMethod*
///
bool q_placemanagerengine_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPlaceManagerEngine*
/// @param callback bool func(QPlaceManagerEngine* self, QMetaMethod* signal)
///
void q_placemanagerengine_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPlaceManagerEngine*
/// @param callback void func(QPlaceManagerEngine* self, const char* objectName)
///
void q_placemanagerengine_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qplacemanagerengine.html#dtor.QPlaceManagerEngine)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceManagerEngine*
///
void q_placemanagerengine_delete(void* self);

#endif
