#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQPLACEICON_H
#define SRC_LOCATION_QT6C_LIBQPLACEICON_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html)

/// q_placeicon_new constructs a new QPlaceIcon object.
///
QPlaceIcon* q_placeicon_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html)

/// q_placeicon_new2 constructs a new QPlaceIcon object.
///
/// @param other QPlaceIcon*
///
QPlaceIcon* q_placeicon_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#operator-eq)
///
/// @param self QPlaceIcon*
/// @param other QPlaceIcon*
///
void q_placeicon_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#swap)
///
/// @param self QPlaceIcon*
/// @param other QPlaceIcon*
///
void q_placeicon_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#url)
///
/// @param self QPlaceIcon*
///
QUrl* q_placeicon_url(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#manager)
///
/// @param self QPlaceIcon*
///
QPlaceManager* q_placeicon_manager(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#setManager)
///
/// @param self QPlaceIcon*
/// @param manager QPlaceManager*
///
void q_placeicon_set_manager(void* self, void* manager);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#parameters)
///
/// @param self QPlaceIcon*
///
libqt_map /* of const char* to QVariant* */ q_placeicon_parameters(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#setParameters)
///
/// @param self QPlaceIcon*
/// @param parameters libqt_map /* of const char* to QVariant* */
///
void q_placeicon_set_parameters(void* self, libqt_map /* of const char* to QVariant* */ parameters);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#isEmpty)
///
/// @param self QPlaceIcon*
///
bool q_placeicon_is_empty(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#url)
///
/// @param self QPlaceIcon*
/// @param size QSize*
///
QUrl* q_placeicon_url1(void* self, void* size);

/// [Upstream resources](https://doc.qt.io/qt-6/qplaceicon.html#dtor.QPlaceIcon)
///
/// Delete this object from C++ memory.
///
/// @param self QPlaceIcon*
///
void q_placeicon_delete(void* self);

#endif
