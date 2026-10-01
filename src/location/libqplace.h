#pragma once
#ifndef LOCATION_LIBQPLACE_H
#define LOCATION_LIBQPLACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html)

/// q_place_new constructs a new QPlace object.
///
QPlace* q_place_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html)

/// q_place_new2 constructs a new QPlace object.
///
/// @param other QPlace*
///
QPlace* q_place_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#operator-eq)
///
/// @param self QPlace*
/// @param other QPlace*
///
void q_place_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#swap)
///
/// @param self QPlace*
/// @param other QPlace*
///
void q_place_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#categories)
///
/// @param self const QPlace*
///
/// @return libqt_list of QPlaceCategory*
///
libqt_list q_place_categories(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategory)
///
/// @param self QPlace*
/// @param category QPlaceCategory*
///
void q_place_set_category(void* self, const void* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategories)
///
/// @param self QPlace*
/// @param categories libqt_list of QPlaceCategory*
///
void q_place_set_categories(void* self, libqt_list categories);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#location)
///
/// @param self const QPlace*
///
QGeoLocation* q_place_location(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setLocation)
///
/// @param self QPlace*
/// @param location QGeoLocation*
///
void q_place_set_location(void* self, const void* location);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#ratings)
///
/// @param self const QPlace*
///
QPlaceRatings* q_place_ratings(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setRatings)
///
/// @param self QPlace*
/// @param ratings QPlaceRatings*
///
void q_place_set_ratings(void* self, const void* ratings);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#supplier)
///
/// @param self const QPlace*
///
QPlaceSupplier* q_place_supplier(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setSupplier)
///
/// @param self QPlace*
/// @param supplier QPlaceSupplier*
///
void q_place_set_supplier(void* self, const void* supplier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#attribution)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlace*
///
const char* q_place_attribution(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setAttribution)
///
/// @param self QPlace*
/// @param attribution const char*
///
void q_place_set_attribution(void* self, const char* attribution);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#icon)
///
/// @param self const QPlace*
///
QPlaceIcon* q_place_icon(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setIcon)
///
/// @param self QPlace*
/// @param icon QPlaceIcon*
///
void q_place_set_icon(void* self, const void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#content)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map of type:
/// // libqt_map of int to QPlaceContent*
/// for (size_t i = 0; i < map.len; ++i) {
///     free(((QPlaceContent*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self const QPlace*
/// @param type enum QPlaceContent__Type
///
/// @return libqt_map of int to QPlaceContent*
///
libqt_map q_place_content(const void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setContent)
///
/// @param self QPlace*
/// @param type enum QPlaceContent__Type
/// @param content libqt_map of int to QPlaceContent*
///
void q_place_set_content(void* self, int32_t type, libqt_map content);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#insertContent)
///
/// @param self QPlace*
/// @param type enum QPlaceContent__Type
/// @param content libqt_map of int to QPlaceContent*
///
void q_place_insert_content(void* self, int32_t type, libqt_map content);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#totalContentCount)
///
/// @param self const QPlace*
/// @param type enum QPlaceContent__Type
///
int32_t q_place_total_content_count(const void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setTotalContentCount)
///
/// @param self QPlace*
/// @param type enum QPlaceContent__Type
/// @param total int
///
void q_place_set_total_content_count(void* self, int32_t type, int total);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#name)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlace*
///
const char* q_place_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setName)
///
/// @param self QPlace*
/// @param name const char*
///
void q_place_set_name(void* self, const char* name);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#placeId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlace*
///
const char* q_place_place_id(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setPlaceId)
///
/// @param self QPlace*
/// @param identifier const char*
///
void q_place_set_place_id(void* self, const char* identifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryPhone)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlace*
///
const char* q_place_primary_phone(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryFax)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlace*
///
const char* q_place_primary_fax(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryEmail)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPlace*
///
const char* q_place_primary_email(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryWebsite)
///
/// @param self const QPlace*
///
QUrl* q_place_primary_website(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#detailsFetched)
///
/// @param self const QPlace*
///
bool q_place_details_fetched(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setDetailsFetched)
///
/// @param self QPlace*
/// @param fetched bool
///
void q_place_set_details_fetched(void* self, bool fetched);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#extendedAttributeTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPlace*
///
const char** q_place_extended_attribute_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#extendedAttribute)
///
/// @param self const QPlace*
/// @param attributeType const char*
///
QPlaceAttribute* q_place_extended_attribute(const void* self, const char* attributeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setExtendedAttribute)
///
/// @param self QPlace*
/// @param attributeType const char*
/// @param attribute QPlaceAttribute*
///
void q_place_set_extended_attribute(void* self, const char* attributeType, const void* attribute);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#removeExtendedAttribute)
///
/// @param self QPlace*
/// @param attributeType const char*
///
void q_place_remove_extended_attribute(void* self, const char* attributeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#contactTypes)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const QPlace*
///
const char** q_place_contact_types(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#contactDetails)
///
/// @param self const QPlace*
/// @param contactType const char*
///
/// @return libqt_list of QPlaceContactDetail*
///
libqt_list q_place_contact_details(const void* self, const char* contactType);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setContactDetails)
///
/// @param self QPlace*
/// @param contactType const char*
/// @param details libqt_list of QPlaceContactDetail*
///
void q_place_set_contact_details(void* self, const char* contactType, libqt_list details);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#appendContactDetail)
///
/// @param self QPlace*
/// @param contactType const char*
/// @param detail QPlaceContactDetail*
///
void q_place_append_contact_detail(void* self, const char* contactType, const void* detail);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#removeContactDetails)
///
/// @param self QPlace*
/// @param contactType const char*
///
void q_place_remove_contact_details(void* self, const char* contactType);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#visibility)
///
/// @param self const QPlace*
///
/// @return enum QLocation__Visibility
///
int32_t q_place_visibility(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setVisibility)
///
/// @param self QPlace*
/// @param visibility enum QLocation__Visibility
///
void q_place_set_visibility(void* self, int32_t visibility);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#isEmpty)
///
/// @param self const QPlace*
///
bool q_place_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#dtor.QPlace)
///
/// Delete this object from C++ memory.
///
/// @param self QPlace*
///
void q_place_delete(void* self);

#endif
