#pragma once
#ifndef LIBQCOLORSPACE_H
#define LIBQCOLORSPACE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new constructs a new QColorSpace object.
///
QColorSpace* q_colorspace_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new2 constructs a new QColorSpace object.
///
/// @param namedColorSpace enum QColorSpace__NamedColorSpace
///
QColorSpace* q_colorspace_new2(int32_t namedColorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new3 constructs a new QColorSpace object.
///
/// @param whitePoint QPointF*
/// @param transferFunction enum QColorSpace__TransferFunction
///
QColorSpace* q_colorspace_new3(void* whitePoint, int32_t transferFunction);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new4 constructs a new QColorSpace object.
///
/// @param whitePoint QPointF*
/// @param transferFunctionTable libqt_list of uint16_t
///
QColorSpace* q_colorspace_new4(void* whitePoint, libqt_list transferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new5 constructs a new QColorSpace object.
///
/// @param primaries enum QColorSpace__Primaries
/// @param transferFunction enum QColorSpace__TransferFunction
///
QColorSpace* q_colorspace_new5(int32_t primaries, int32_t transferFunction);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new6 constructs a new QColorSpace object.
///
/// @param primaries enum QColorSpace__Primaries
/// @param gamma float
///
QColorSpace* q_colorspace_new6(int32_t primaries, float gamma);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new7 constructs a new QColorSpace object.
///
/// @param primaries enum QColorSpace__Primaries
/// @param transferFunctionTable libqt_list of uint16_t
///
QColorSpace* q_colorspace_new7(int32_t primaries, libqt_list transferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new8 constructs a new QColorSpace object.
///
/// @param whitePoint QPointF*
/// @param redPoint QPointF*
/// @param greenPoint QPointF*
/// @param bluePoint QPointF*
/// @param transferFunction enum QColorSpace__TransferFunction
///
QColorSpace* q_colorspace_new8(const void* whitePoint, const void* redPoint, const void* greenPoint, const void* bluePoint, int32_t transferFunction);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new9 constructs a new QColorSpace object.
///
/// @param whitePoint QPointF*
/// @param redPoint QPointF*
/// @param greenPoint QPointF*
/// @param bluePoint QPointF*
/// @param transferFunctionTable libqt_list of uint16_t
///
QColorSpace* q_colorspace_new9(const void* whitePoint, const void* redPoint, const void* greenPoint, const void* bluePoint, libqt_list transferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new10 constructs a new QColorSpace object.
///
/// @param whitePoint QPointF*
/// @param redPoint QPointF*
/// @param greenPoint QPointF*
/// @param bluePoint QPointF*
/// @param redTransferFunctionTable libqt_list of uint16_t
/// @param greenTransferFunctionTable libqt_list of uint16_t
/// @param blueTransferFunctionTable libqt_list of uint16_t
///
QColorSpace* q_colorspace_new10(const void* whitePoint, const void* redPoint, const void* greenPoint, const void* bluePoint, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new11 constructs a new QColorSpace object.
///
/// @param colorSpace QColorSpace*
///
QColorSpace* q_colorspace_new11(const void* colorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new12 constructs a new QColorSpace object.
///
/// @param whitePoint QPointF*
/// @param transferFunction enum QColorSpace__TransferFunction
/// @param gamma float
///
QColorSpace* q_colorspace_new12(void* whitePoint, int32_t transferFunction, float gamma);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new13 constructs a new QColorSpace object.
///
/// @param primaries enum QColorSpace__Primaries
/// @param transferFunction enum QColorSpace__TransferFunction
/// @param gamma float
///
QColorSpace* q_colorspace_new13(int32_t primaries, int32_t transferFunction, float gamma);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new14 constructs a new QColorSpace object.
///
/// @param whitePoint QPointF*
/// @param redPoint QPointF*
/// @param greenPoint QPointF*
/// @param bluePoint QPointF*
/// @param transferFunction enum QColorSpace__TransferFunction
/// @param gamma float
///
QColorSpace* q_colorspace_new14(const void* whitePoint, const void* redPoint, const void* greenPoint, const void* bluePoint, int32_t transferFunction, float gamma);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#operator-eq)
///
/// @param self QColorSpace*
/// @param colorSpace QColorSpace*
///
void q_colorspace_operator_assign(void* self, const void* colorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#swap)
///
/// @param self QColorSpace*
/// @param colorSpace QColorSpace*
///
void q_colorspace_swap(void* self, void* colorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#primaries)
///
/// @param self const QColorSpace*
///
/// @return enum QColorSpace__Primaries
///
int32_t q_colorspace_primaries(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transferFunction)
///
/// @param self const QColorSpace*
///
/// @return enum QColorSpace__TransferFunction
///
int32_t q_colorspace_transfer_function(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#gamma)
///
/// @param self const QColorSpace*
///
float q_colorspace_gamma(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QColorSpace*
///
const char* q_colorspace_description(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setDescription)
///
/// @param self QColorSpace*
/// @param description const char*
///
void q_colorspace_set_description(void* self, const char* description);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
///
/// @param self QColorSpace*
/// @param transferFunction enum QColorSpace__TransferFunction
///
void q_colorspace_set_transfer_function(void* self, int32_t transferFunction);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
///
/// @param self QColorSpace*
/// @param transferFunctionTable libqt_list of uint16_t
///
void q_colorspace_set_transfer_function2(void* self, libqt_list transferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunctions)
///
/// @param self QColorSpace*
/// @param redTransferFunctionTable libqt_list of uint16_t
/// @param greenTransferFunctionTable libqt_list of uint16_t
/// @param blueTransferFunctionTable libqt_list of uint16_t
///
void q_colorspace_set_transfer_functions(void* self, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
///
/// @param self const QColorSpace*
/// @param transferFunction enum QColorSpace__TransferFunction
///
QColorSpace* q_colorspace_with_transfer_function(const void* self, int32_t transferFunction);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
///
/// @param self const QColorSpace*
/// @param transferFunctionTable libqt_list of uint16_t
///
QColorSpace* q_colorspace_with_transfer_function2(const void* self, libqt_list transferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunctions)
///
/// @param self const QColorSpace*
/// @param redTransferFunctionTable libqt_list of uint16_t
/// @param greenTransferFunctionTable libqt_list of uint16_t
/// @param blueTransferFunctionTable libqt_list of uint16_t
///
QColorSpace* q_colorspace_with_transfer_functions(const void* self, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
///
/// @param self QColorSpace*
/// @param primariesId enum QColorSpace__Primaries
///
void q_colorspace_set_primaries(void* self, int32_t primariesId);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
///
/// @param self QColorSpace*
/// @param whitePoint QPointF*
/// @param redPoint QPointF*
/// @param greenPoint QPointF*
/// @param bluePoint QPointF*
///
void q_colorspace_set_primaries2(void* self, const void* whitePoint, const void* redPoint, const void* greenPoint, const void* bluePoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setWhitePoint)
///
/// @param self QColorSpace*
/// @param whitePoint QPointF*
///
void q_colorspace_set_white_point(void* self, void* whitePoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#whitePoint)
///
/// @param self const QColorSpace*
///
QPointF* q_colorspace_white_point(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transformModel)
///
/// @param self const QColorSpace*
///
/// @return enum QColorSpace__TransformModel
///
uint8_t q_colorspace_transform_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#colorModel)
///
/// @param self const QColorSpace*
///
/// @return enum QColorSpace__ColorModel
///
uint8_t q_colorspace_color_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#detach)
///
/// @param self QColorSpace*
///
void q_colorspace_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#isValid)
///
/// @param self const QColorSpace*
///
bool q_colorspace_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#isValidTarget)
///
/// @param self const QColorSpace*
///
bool q_colorspace_is_valid_target(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#fromIccProfile)
///
/// @param iccProfile const char*
///
QColorSpace* q_colorspace_from_icc_profile(const char* iccProfile);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#iccProfile)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QColorSpace*
///
const char* q_colorspace_icc_profile(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transformationToColorSpace)
///
/// @param self const QColorSpace*
/// @param colorspace QColorSpace*
///
QColorTransform* q_colorspace_transformation_to_color_space(const void* self, const void* colorspace);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#operator-QVariant)
///
/// @param self const QColorSpace*
///
QVariant* q_colorspace_to_q_variant(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
///
/// @param self QColorSpace*
/// @param transferFunction enum QColorSpace__TransferFunction
/// @param gamma float
///
void q_colorspace_set_transfer_function22(void* self, int32_t transferFunction, float gamma);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
///
/// @param self const QColorSpace*
/// @param transferFunction enum QColorSpace__TransferFunction
/// @param gamma float
///
QColorSpace* q_colorspace_with_transfer_function22(const void* self, int32_t transferFunction, float gamma);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#dtor.QColorSpace)
///
/// Delete this object from C++ memory.
///
/// @param self QColorSpace*
///
void q_colorspace_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#public-types)

typedef enum {
    QCOLORSPACE_NAMEDCOLORSPACE_SRGB = 1,
    QCOLORSPACE_NAMEDCOLORSPACE_SRGBLINEAR = 2,
    QCOLORSPACE_NAMEDCOLORSPACE_ADOBERGB = 3,
    QCOLORSPACE_NAMEDCOLORSPACE_DISPLAYP3 = 4,
    QCOLORSPACE_NAMEDCOLORSPACE_PROPHOTORGB = 5,
    QCOLORSPACE_NAMEDCOLORSPACE_BT2020 = 6,
    QCOLORSPACE_NAMEDCOLORSPACE_BT2100PQ = 7,
    QCOLORSPACE_NAMEDCOLORSPACE_BT2100HLG = 8
} QColorSpace__NamedColorSpace;

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#public-types)

typedef enum {
    QCOLORSPACE_PRIMARIES_CUSTOM = 0,
    QCOLORSPACE_PRIMARIES_SRGB = 1,
    QCOLORSPACE_PRIMARIES_ADOBERGB = 2,
    QCOLORSPACE_PRIMARIES_DCIP3D65 = 3,
    QCOLORSPACE_PRIMARIES_PROPHOTORGB = 4,
    QCOLORSPACE_PRIMARIES_BT2020 = 5
} QColorSpace__Primaries;

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#public-types)

typedef enum {
    QCOLORSPACE_TRANSFERFUNCTION_CUSTOM = 0,
    QCOLORSPACE_TRANSFERFUNCTION_LINEAR = 1,
    QCOLORSPACE_TRANSFERFUNCTION_GAMMA = 2,
    QCOLORSPACE_TRANSFERFUNCTION_SRGB = 3,
    QCOLORSPACE_TRANSFERFUNCTION_PROPHOTORGB = 4,
    QCOLORSPACE_TRANSFERFUNCTION_BT2020 = 5,
    QCOLORSPACE_TRANSFERFUNCTION_ST2084 = 6,
    QCOLORSPACE_TRANSFERFUNCTION_HLG = 7
} QColorSpace__TransferFunction;

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#public-types)

typedef enum {
    QCOLORSPACE_TRANSFORMMODEL_THREECOMPONENTMATRIX = 0,
    QCOLORSPACE_TRANSFORMMODEL_ELEMENTLISTPROCESSING = 1
} QColorSpace__TransformModel;

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#public-types)

typedef enum {
    QCOLORSPACE_COLORMODEL_UNDEFINED = 0,
    QCOLORSPACE_COLORMODEL_RGB = 1,
    QCOLORSPACE_COLORMODEL_GRAY = 2,
    QCOLORSPACE_COLORMODEL_CMYK = 3
} QColorSpace__ColorModel;

#endif
