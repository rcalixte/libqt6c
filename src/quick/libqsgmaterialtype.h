#pragma once
#ifndef QUICK_LIBQSGMATERIALTYPE_H
#define QUICK_LIBQSGMATERIALTYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialtype.html)

/// q_sgmaterialtype_new constructs a new QSGMaterialType object.
///
/// @param other QSGMaterialType*
///
QSGMaterialType* q_sgmaterialtype_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialtype.html)

/// q_sgmaterialtype_new2 constructs a new QSGMaterialType object and invalidates the source QSGMaterialType object.
///
/// @param other QSGMaterialType*
///
QSGMaterialType* q_sgmaterialtype_new2(void* other);

/// q_sgmaterialtype_copy_assign shallow copies `other` into `self`.
///
/// @param self QSGMaterialType*
/// @param other QSGMaterialType*
///
void q_sgmaterialtype_copy_assign(void* self, void* other);

/// q_sgmaterialtype_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QSGMaterialType*
/// @param other QSGMaterialType*
///
void q_sgmaterialtype_move_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qsgmaterialtype.html#dtor.QSGMaterialType)
///
/// Delete this object from C++ memory.
///
/// @param self QSGMaterialType*
///
void q_sgmaterialtype_delete(void* self);

#endif
