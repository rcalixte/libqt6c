#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACECONTENTREQUEST_H
#define SRC_LOCATION_QT6C_LIBQPLACECONTENTREQUEST_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html)

/// q_placecontentrequest_new constructs a new QPlaceContentRequest object.
///
QPlaceContentRequest* q_placecontentrequest_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html)

/// q_placecontentrequest_new2 constructs a new QPlaceContentRequest object.
///
/// @param other QPlaceContentRequest*
///
QPlaceContentRequest* q_placecontentrequest_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#operator-eq)
///
/// @param self QPlaceContentRequest*
/// @param other QPlaceContentRequest*
///
void q_placecontentrequest_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#swap)
///
/// @param self QPlaceContentRequest*
/// @param other QPlaceContentRequest*
///
void q_placecontentrequest_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#contentType)
///
/// @param self QPlaceContentRequest*
///
/// @return enum QPlaceContent__Type
///
int32_t q_placecontentrequest_content_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setContentType)
///
/// @param self QPlaceContentRequest*
/// @param type enum QPlaceContent__Type
///
void q_placecontentrequest_set_content_type(void* self, int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#placeId)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceContentRequest*
///
const char* q_placecontentrequest_place_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setPlaceId)
///
/// @param self QPlaceContentRequest*
/// @param identifier const char*
///
void q_placecontentrequest_set_place_id(void* self, const char* identifier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#contentContext)
///
/// @param self QPlaceContentRequest*
///
QVariant* q_placecontentrequest_content_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setContentContext)
///
/// @param self QPlaceContentRequest*
/// @param context QVariant*
///
void q_placecontentrequest_set_content_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#limit)
///
/// @param self QPlaceContentRequest*
///
int32_t q_placecontentrequest_limit(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#setLimit)
///
/// @param self QPlaceContentRequest*
/// @param limit int
///
void q_placecontentrequest_set_limit(void* self, int limit);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#clear)
///
/// @param self QPlaceContentRequest*
///
void q_placecontentrequest_clear(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontentrequest.html#dtor.QPlaceContentRequest)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceContentRequest*
///
void q_placecontentrequest_delete(void* self);

#endif
