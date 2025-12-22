#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACE_H
#define SRC_LOCATION_QT6C_LIBQPLACE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
QPlace* q_place_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#operator-eq)
///
/// @param self QPlace*
/// @param other QPlace*
///
void q_place_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#swap)
///
/// @param self QPlace*
/// @param other QPlace*
///
void q_place_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#categories)
///
/// @param self QPlace*
///
libqt_list /* of QPlaceCategory* */ q_place_categories(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategory)
///
/// @param self QPlace*
/// @param category QPlaceCategory*
///
void q_place_set_category(void* self, void* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setCategories)
///
/// @param self QPlace*
/// @param categories libqt_list /* of QPlaceCategory* */
///
void q_place_set_categories(void* self, libqt_list categories);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#location)
///
/// @param self QPlace*
///
QGeoLocation* q_place_location(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setLocation)
///
/// @param self QPlace*
/// @param location QGeoLocation*
///
void q_place_set_location(void* self, void* location);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#ratings)
///
/// @param self QPlace*
///
QPlaceRatings* q_place_ratings(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setRatings)
///
/// @param self QPlace*
/// @param ratings QPlaceRatings*
///
void q_place_set_ratings(void* self, void* ratings);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#supplier)
///
/// @param self QPlace*
///
QPlaceSupplier* q_place_supplier(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setSupplier)
///
/// @param self QPlace*
/// @param supplier QPlaceSupplier*
///
void q_place_set_supplier(void* self, void* supplier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#attribution)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlace*
///
const char* q_place_attribution(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setAttribution)
///
/// @param self QPlace*
/// @param attribution const char*
///
void q_place_set_attribution(void* self, const char* attribution);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#icon)
///
/// @param self QPlace*
///
QPlaceIcon* q_place_icon(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setIcon)
///
/// @param self QPlace*
/// @param icon QPlaceIcon*
///
void q_place_set_icon(void* self, void* icon);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#content)
///
/// @param self QPlace*
/// @param type enum QPlaceContent__Type
///
libqt_map /* of int to QPlaceContent* */ q_place_content(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setContent)
///
/// @param self QPlace*
/// @param type enum QPlaceContent__Type
/// @param content libqt_map /* of int to QPlaceContent* */
///
void q_place_set_content(void* self, int32_t type, libqt_map /* of int to QPlaceContent* */ content);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#insertContent)
///
/// @param self QPlace*
/// @param type enum QPlaceContent__Type
/// @param content libqt_map /* of int to QPlaceContent* */
///
void q_place_insert_content(void* self, int32_t type, libqt_map /* of int to QPlaceContent* */ content);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#totalContentCount)
///
/// @param self QPlace*
/// @param type enum QPlaceContent__Type
///
int32_t q_place_total_content_count(void* self, int32_t type);

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
/// @param self QPlace*
///
const char* q_place_name(void* self);

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
/// @param self QPlace*
///
const char* q_place_place_id(void* self);

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
/// @param self QPlace*
///
const char* q_place_primary_phone(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryFax)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlace*
///
const char* q_place_primary_fax(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryEmail)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlace*
///
const char* q_place_primary_email(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#primaryWebsite)
///
/// @param self QPlace*
///
QUrl* q_place_primary_website(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#detailsFetched)
///
/// @param self QPlace*
///
bool q_place_details_fetched(void* self);

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
/// @param self QPlace*
///
const char** q_place_extended_attribute_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#extendedAttribute)
///
/// @param self QPlace*
/// @param attributeType const char*
///
QPlaceAttribute* q_place_extended_attribute(void* self, const char* attributeType);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setExtendedAttribute)
///
/// @param self QPlace*
/// @param attributeType const char*
/// @param attribute QPlaceAttribute*
///
void q_place_set_extended_attribute(void* self, const char* attributeType, void* attribute);

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
/// @param self QPlace*
///
const char** q_place_contact_types(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#contactDetails)
///
/// @param self QPlace*
/// @param contactType const char*
///
libqt_list /* of QPlaceContactDetail* */ q_place_contact_details(void* self, const char* contactType);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setContactDetails)
///
/// @param self QPlace*
/// @param contactType const char*
/// @param details libqt_list /* of QPlaceContactDetail* */
///
void q_place_set_contact_details(void* self, const char* contactType, libqt_list details);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#appendContactDetail)
///
/// @param self QPlace*
/// @param contactType const char*
/// @param detail QPlaceContactDetail*
///
void q_place_append_contact_detail(void* self, const char* contactType, void* detail);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#removeContactDetails)
///
/// @param self QPlace*
/// @param contactType const char*
///
void q_place_remove_contact_details(void* self, const char* contactType);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#visibility)
///
/// @param self QPlace*
///
/// @return enum QLocation__Visibility
///
int32_t q_place_visibility(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#setVisibility)
///
/// @param self QPlace*
/// @param visibility enum QLocation__Visibility
///
void q_place_set_visibility(void* self, int32_t visibility);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#isEmpty)
///
/// @param self QPlace*
///
bool q_place_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplace.html#dtor.QPlace)
///
/// Delete this object from C++ memory.
///
/// @param self QPlace*
///
void q_place_delete(void* self);

#endif
