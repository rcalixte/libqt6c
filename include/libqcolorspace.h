#pragma once
#ifndef SRCQT6C_LIBQCOLORSPACE_H
#define SRCQT6C_LIBQCOLORSPACE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqcolortransform.h"
#include "libqpoint.h"
#include <string.h>
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qcolorspace.html

/// q_colorspace_new constructs a new QColorSpace object.
///
///
QColorSpace* q_colorspace_new();

/// q_colorspace_new2 constructs a new QColorSpace object.
///
/// ``` enum QColorSpace__NamedColorSpace namedColorSpace ```
QColorSpace* q_colorspace_new2(int64_t namedColorSpace);

/// q_colorspace_new3 constructs a new QColorSpace object.
///
/// ``` enum QColorSpace__Primaries primaries, enum QColorSpace__TransferFunction transferFunction ```
QColorSpace* q_colorspace_new3(int64_t primaries, int64_t transferFunction);

/// q_colorspace_new4 constructs a new QColorSpace object.
///
/// ``` enum QColorSpace__Primaries primaries, float gamma ```
QColorSpace* q_colorspace_new4(int64_t primaries, float gamma);

/// q_colorspace_new5 constructs a new QColorSpace object.
///
/// ``` enum QColorSpace__Primaries primaries, libqt_list /* of uint16_t */ transferFunctionTable ```
QColorSpace* q_colorspace_new5(int64_t primaries, libqt_list transferFunctionTable);

/// q_colorspace_new6 constructs a new QColorSpace object.
///
/// ``` QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, enum QColorSpace__TransferFunction transferFunction ```
QColorSpace* q_colorspace_new6(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int64_t transferFunction);

/// q_colorspace_new7 constructs a new QColorSpace object.
///
/// ``` QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, libqt_list /* of uint16_t */ transferFunctionTable ```
QColorSpace* q_colorspace_new7(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, libqt_list transferFunctionTable);

/// q_colorspace_new8 constructs a new QColorSpace object.
///
/// ``` QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, libqt_list /* of uint16_t */ redTransferFunctionTable, libqt_list /* of uint16_t */ greenTransferFunctionTable, libqt_list /* of uint16_t */ blueTransferFunctionTable ```
QColorSpace* q_colorspace_new8(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable);

/// q_colorspace_new9 constructs a new QColorSpace object.
///
/// ``` QColorSpace* colorSpace ```
QColorSpace* q_colorspace_new9(void* colorSpace);

/// q_colorspace_new10 constructs a new QColorSpace object.
///
/// ``` enum QColorSpace__Primaries primaries, enum QColorSpace__TransferFunction transferFunction, float gamma ```
QColorSpace* q_colorspace_new10(int64_t primaries, int64_t transferFunction, float gamma);

/// q_colorspace_new11 constructs a new QColorSpace object.
///
/// ``` QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint, enum QColorSpace__TransferFunction transferFunction, float gamma ```
QColorSpace* q_colorspace_new11(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int64_t transferFunction, float gamma);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#operator=)
///
/// ``` QColorSpace* self, QColorSpace* colorSpace ```
void q_colorspace_operator_assign(void* self, void* colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#swap)
///
/// ``` QColorSpace* self, QColorSpace* colorSpace ```
void q_colorspace_swap(void* self, void* colorSpace);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#primaries)
///
/// ``` QColorSpace* self ```
int64_t q_colorspace_primaries(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#transferFunction)
///
/// ``` QColorSpace* self ```
int64_t q_colorspace_transfer_function(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#gamma)
///
/// ``` QColorSpace* self ```
float q_colorspace_gamma(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#description)
///
/// ``` QColorSpace* self ```
const char* q_colorspace_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setDescription)
///
/// ``` QColorSpace* self, const char* description ```
void q_colorspace_set_description(void* self, const char* description);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
///
/// ``` QColorSpace* self, enum QColorSpace__TransferFunction transferFunction ```
void q_colorspace_set_transfer_function(void* self, int64_t transferFunction);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
///
/// ``` QColorSpace* self, libqt_list /* of uint16_t */ transferFunctionTable ```
void q_colorspace_set_transfer_function_with_transfer_function_table(void* self, libqt_list transferFunctionTable);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunctions)
///
/// ``` QColorSpace* self, libqt_list /* of uint16_t */ redTransferFunctionTable, libqt_list /* of uint16_t */ greenTransferFunctionTable, libqt_list /* of uint16_t */ blueTransferFunctionTable ```
void q_colorspace_set_transfer_functions(void* self, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
///
/// ``` QColorSpace* self, enum QColorSpace__TransferFunction transferFunction ```
QColorSpace* q_colorspace_with_transfer_function(void* self, int64_t transferFunction);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
///
/// ``` QColorSpace* self, libqt_list /* of uint16_t */ transferFunctionTable ```
QColorSpace* q_colorspace_with_transfer_function_with_transfer_function_table(void* self, libqt_list transferFunctionTable);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunctions)
///
/// ``` QColorSpace* self, libqt_list /* of uint16_t */ redTransferFunctionTable, libqt_list /* of uint16_t */ greenTransferFunctionTable, libqt_list /* of uint16_t */ blueTransferFunctionTable ```
QColorSpace* q_colorspace_with_transfer_functions(void* self, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
///
/// ``` QColorSpace* self, enum QColorSpace__Primaries primariesId ```
void q_colorspace_set_primaries(void* self, int64_t primariesId);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setPrimaries)
///
/// ``` QColorSpace* self, QPointF* whitePoint, QPointF* redPoint, QPointF* greenPoint, QPointF* bluePoint ```
void q_colorspace_set_primaries2(void* self, void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#detach)
///
/// ``` QColorSpace* self ```
void q_colorspace_detach(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#isValid)
///
/// ``` QColorSpace* self ```
bool q_colorspace_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#fromIccProfile)
///
/// ``` const char* iccProfile ```
QColorSpace* q_colorspace_from_icc_profile(const char* iccProfile);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#iccProfile)
///
/// ``` QColorSpace* self ```
char* q_colorspace_icc_profile(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#transformationToColorSpace)
///
/// ``` QColorSpace* self, QColorSpace* colorspace ```
QColorTransform* q_colorspace_transformation_to_color_space(void* self, void* colorspace);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#operator QVariant)
///
/// ``` QColorSpace* self ```
QVariant* q_colorspace_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#setTransferFunction)
///
/// ``` QColorSpace* self, enum QColorSpace__TransferFunction transferFunction, float gamma ```
void q_colorspace_set_transfer_function2(void* self, int64_t transferFunction, float gamma);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#withTransferFunction)
///
/// ``` QColorSpace* self, enum QColorSpace__TransferFunction transferFunction, float gamma ```
QColorSpace* q_colorspace_with_transfer_function2(void* self, int64_t transferFunction, float gamma);

/// [Qt documentation](https://doc.qt.io/qt-6/qcolorspace.html#dtor.QColorSpace)
///
/// Delete this object from C++ memory.
///
/// ``` QColorSpace* self ```
void q_colorspace_delete(void* self);

/// https://doc.qt.io/qt-6/qcolorspace.html#types

typedef enum {
    QCOLORSPACE_NAMEDCOLORSPACE_SRGB = 1,
    QCOLORSPACE_NAMEDCOLORSPACE_SRGBLINEAR = 2,
    QCOLORSPACE_NAMEDCOLORSPACE_ADOBERGB = 3,
    QCOLORSPACE_NAMEDCOLORSPACE_DISPLAYP3 = 4,
    QCOLORSPACE_NAMEDCOLORSPACE_PROPHOTORGB = 5
} QColorSpace__NamedColorSpace;

typedef enum {
    QCOLORSPACE_PRIMARIES_CUSTOM = 0,
    QCOLORSPACE_PRIMARIES_SRGB = 1,
    QCOLORSPACE_PRIMARIES_ADOBERGB = 2,
    QCOLORSPACE_PRIMARIES_DCIP3D65 = 3,
    QCOLORSPACE_PRIMARIES_PROPHOTORGB = 4
} QColorSpace__Primaries;

typedef enum {
    QCOLORSPACE_TRANSFERFUNCTION_CUSTOM = 0,
    QCOLORSPACE_TRANSFERFUNCTION_LINEAR = 1,
    QCOLORSPACE_TRANSFERFUNCTION_GAMMA = 2,
    QCOLORSPACE_TRANSFERFUNCTION_SRGB = 3,
    QCOLORSPACE_TRANSFERFUNCTION_PROPHOTORGB = 4
} QColorSpace__TransferFunction;

#endif
