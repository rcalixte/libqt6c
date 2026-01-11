#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACECONTENT_H
#define SRC_LOCATION_QT6C_LIBQPLACECONTENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html)

/// q_placecontent_new constructs a new QPlaceContent object.
///
QPlaceContent* q_placecontent_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html)

/// q_placecontent_new2 constructs a new QPlaceContent object.
///
/// @param other QPlaceContent*
///
QPlaceContent* q_placecontent_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html)

/// q_placecontent_new3 constructs a new QPlaceContent object.
///
/// @param type enum QPlaceContent__Type
///
QPlaceContent* q_placecontent_new3(int32_t type);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-eq)
///
/// @param self QPlaceContent*
/// @param other QPlaceContent*
///
void q_placecontent_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#swap)
///
/// @param self QPlaceContent*
/// @param other QPlaceContent*
///
void q_placecontent_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#detach)
///
/// @param self QPlaceContent*
///
void q_placecontent_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-eq-eq)
///
/// @param self QPlaceContent*
/// @param other QPlaceContent*
///
bool q_placecontent_operator_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#operator-not-eq)
///
/// @param self QPlaceContent*
/// @param other QPlaceContent*
///
bool q_placecontent_operator_not_equal(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#type)
///
/// @param self QPlaceContent*
///
/// @return enum QPlaceContent__Type
///
int32_t q_placecontent_type(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#dataTags)
///
/// @param self QPlaceContent*
///
/// @return libqt_list of enum QPlaceContent__DataTag
///
libqt_list /* of enum QPlaceContent__DataTag */ q_placecontent_data_tags(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#value)
///
/// @param self QPlaceContent*
/// @param tag enum QPlaceContent__DataTag
///
QVariant* q_placecontent_value(void* self, int32_t tag);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setValue)
///
/// @param self QPlaceContent*
/// @param tag enum QPlaceContent__DataTag
/// @param param2 QVariant*
///
void q_placecontent_set_value(void* self, int32_t tag, void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#supplier)
///
/// @param self QPlaceContent*
///
QPlaceSupplier* q_placecontent_supplier(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setSupplier)
///
/// @param self QPlaceContent*
/// @param supplier QPlaceSupplier*
///
void q_placecontent_set_supplier(void* self, void* supplier);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#user)
///
/// @param self QPlaceContent*
///
QPlaceUser* q_placecontent_user(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setUser)
///
/// @param self QPlaceContent*
/// @param user QPlaceUser*
///
void q_placecontent_set_user(void* self, void* user);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#attribution)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPlaceContent*
///
const char* q_placecontent_attribution(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#setAttribution)
///
/// @param self QPlaceContent*
/// @param attribution const char*
///
void q_placecontent_set_attribution(void* self, const char* attribution);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#dtor.QPlaceContent)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceContent*
///
void q_placecontent_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#public-types)

typedef enum {
    QPLACECONTENT_TYPE_NOTYPE = 0,
    QPLACECONTENT_TYPE_IMAGETYPE = 1,
    QPLACECONTENT_TYPE_REVIEWTYPE = 2,
    QPLACECONTENT_TYPE_EDITORIALTYPE = 3,
    QPLACECONTENT_TYPE_CUSTOMTYPE = 256
} QPlaceContent__Type;

/// [Upstream resources](https://doc.qt.io/qt-6/qplacecontent.html#public-types)

typedef enum {
    QPLACECONTENT_DATATAG_CONTENTSUPPLIER = 0,
    QPLACECONTENT_DATATAG_CONTENTUSER = 1,
    QPLACECONTENT_DATATAG_CONTENTATTRIBUTION = 2,
    QPLACECONTENT_DATATAG_IMAGEID = 3,
    QPLACECONTENT_DATATAG_IMAGEURL = 4,
    QPLACECONTENT_DATATAG_IMAGEMIMETYPE = 5,
    QPLACECONTENT_DATATAG_EDITORIALTITLE = 6,
    QPLACECONTENT_DATATAG_EDITORIALTEXT = 7,
    QPLACECONTENT_DATATAG_EDITORIALLANGUAGE = 8,
    QPLACECONTENT_DATATAG_REVIEWID = 9,
    QPLACECONTENT_DATATAG_REVIEWDATETIME = 10,
    QPLACECONTENT_DATATAG_REVIEWTITLE = 11,
    QPLACECONTENT_DATATAG_REVIEWTEXT = 12,
    QPLACECONTENT_DATATAG_REVIEWLANGUAGE = 13,
    QPLACECONTENT_DATATAG_REVIEWRATING = 14,
    QPLACECONTENT_DATATAG_CUSTOMDATATAG = 1000
} QPlaceContent__DataTag;

#endif
