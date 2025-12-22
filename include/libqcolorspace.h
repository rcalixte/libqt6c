#pragma once
#ifndef SRC_QT6C_LIBQCOLORSPACE_H
#define SRC_QT6C_LIBQCOLORSPACE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @param transferFunctionTable libqt_list /* of uint16_t */
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
/// @param transferFunctionTable libqt_list /* of uint16_t */
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
QColorSpace* q_colorspace_new8(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int32_t transferFunction);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new9 constructs a new QColorSpace object.
///
/// @param whitePoint QPointF*
/// @param redPoint QPointF*
/// @param greenPoint QPointF*
/// @param bluePoint QPointF*
/// @param transferFunctionTable libqt_list /* of uint16_t */
///
QColorSpace* q_colorspace_new9(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, libqt_list transferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new10 constructs a new QColorSpace object.
///
/// @param whitePoint QPointF*
/// @param redPoint QPointF*
/// @param greenPoint QPointF*
/// @param bluePoint QPointF*
/// @param redTransferFunctionTable libqt_list /* of uint16_t */
/// @param greenTransferFunctionTable libqt_list /* of uint16_t */
/// @param blueTransferFunctionTable libqt_list /* of uint16_t */
///
QColorSpace* q_colorspace_new10(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html)

/// q_colorspace_new11 constructs a new QColorSpace object.
///
/// @param colorSpace QColorSpace*
///
QColorSpace* q_colorspace_new11(void* colorSpace);

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
QColorSpace* q_colorspace_new14(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int32_t transferFunction, float gamma);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#operator-eq)
///
/// @param self QColorSpace*
/// @param colorSpace QColorSpace*
///
void q_colorspace_operator_assign(void* self, void* colorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#swap)
///
/// @param self QColorSpace*
/// @param colorSpace QColorSpace*
///
void q_colorspace_swap(void* self, void* colorSpace);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#primaries)
///
/// @param self QColorSpace*
///
/// @return enum QColorSpace__Primaries
///
int32_t q_colorspace_primaries(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transferFunction)
///
/// @param self QColorSpace*
///
/// @return enum QColorSpace__TransferFunction
///
int32_t q_colorspace_transfer_function(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#gamma)
///
/// @param self QColorSpace*
///
float q_colorspace_gamma(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QColorSpace*
///
const char* q_colorspace_description(void* self);

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
/// @param transferFunctionTable libqt_list /* of uint16_t */
///
void q_colorspace_set_transfer_function2(void* self, libqt_list transferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunctions)
///
/// @param self QColorSpace*
/// @param redTransferFunctionTable libqt_list /* of uint16_t */
/// @param greenTransferFunctionTable libqt_list /* of uint16_t */
/// @param blueTransferFunctionTable libqt_list /* of uint16_t */
///
void q_colorspace_set_transfer_functions(void* self, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
///
/// @param self QColorSpace*
/// @param transferFunction enum QColorSpace__TransferFunction
///
QColorSpace* q_colorspace_with_transfer_function(void* self, int32_t transferFunction);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
///
/// @param self QColorSpace*
/// @param transferFunctionTable libqt_list /* of uint16_t */
///
QColorSpace* q_colorspace_with_transfer_function2(void* self, libqt_list transferFunctionTable);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunctions)
///
/// @param self QColorSpace*
/// @param redTransferFunctionTable libqt_list /* of uint16_t */
/// @param greenTransferFunctionTable libqt_list /* of uint16_t */
/// @param blueTransferFunctionTable libqt_list /* of uint16_t */
///
QColorSpace* q_colorspace_with_transfer_functions(void* self, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable);

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
void q_colorspace_set_primaries2(void* self, void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setWhitePoint)
///
/// @param self QColorSpace*
/// @param whitePoint QPointF*
///
void q_colorspace_set_white_point(void* self, void* whitePoint);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#whitePoint)
///
/// @param self QColorSpace*
///
QPointF* q_colorspace_white_point(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transformModel)
///
/// @param self QColorSpace*
///
/// @return enum QColorSpace__TransformModel
///
uint8_t q_colorspace_transform_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#colorModel)
///
/// @param self QColorSpace*
///
/// @return enum QColorSpace__ColorModel
///
uint8_t q_colorspace_color_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#detach)
///
/// @param self QColorSpace*
///
void q_colorspace_detach(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#isValid)
///
/// @param self QColorSpace*
///
bool q_colorspace_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#isValidTarget)
///
/// @param self QColorSpace*
///
bool q_colorspace_is_valid_target(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#fromIccProfile)
///
/// @param iccProfile const char*
///
QColorSpace* q_colorspace_from_icc_profile(const char* iccProfile);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#iccProfile)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QColorSpace*
///
char* q_colorspace_icc_profile(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#transformationToColorSpace)
///
/// @param self QColorSpace*
/// @param colorspace QColorSpace*
///
QColorTransform* q_colorspace_transformation_to_color_space(void* self, void* colorspace);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#operator)
///
/// @param self QColorSpace*
///
QVariant* q_colorspace_to_q_variant(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
///
/// @param self QColorSpace*
/// @param transferFunction enum QColorSpace__TransferFunction
/// @param gamma float
///
void q_colorspace_set_transfer_function22(void* self, int32_t transferFunction, float gamma);

/// [Upstream resources](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
///
/// @param self QColorSpace*
/// @param transferFunction enum QColorSpace__TransferFunction
/// @param gamma float
///
QColorSpace* q_colorspace_with_transfer_function22(void* self, int32_t transferFunction, float gamma);

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
