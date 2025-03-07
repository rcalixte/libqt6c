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

QColorSpace* q_colorspace_new();
QColorSpace* q_colorspace_new2(int64_t namedColorSpace);
QColorSpace* q_colorspace_new3(int64_t primaries, int64_t transferFunction);
QColorSpace* q_colorspace_new4(int64_t primaries, float gamma);
QColorSpace* q_colorspace_new5(int64_t primaries, uint16_t* transferFunctionTable[]);
QColorSpace* q_colorspace_new6(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int64_t transferFunction);
QColorSpace* q_colorspace_new7(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, uint16_t* transferFunctionTable[]);
QColorSpace* q_colorspace_new8(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, uint16_t* redTransferFunctionTable[], uint16_t* greenTransferFunctionTable[], uint16_t* blueTransferFunctionTable[]);
QColorSpace* q_colorspace_new9(void* colorSpace);
QColorSpace* q_colorspace_new10(int64_t primaries, int64_t transferFunction, float gamma);
QColorSpace* q_colorspace_new11(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int64_t transferFunction, float gamma);
void q_colorspace_operator_assign(void* self, void* colorSpace);
void q_colorspace_swap(void* self, void* colorSpace);
int64_t q_colorspace_primaries(void* self);
int64_t q_colorspace_transfer_function(void* self);
float q_colorspace_gamma(void* self);
const char* q_colorspace_description(void* self);
void q_colorspace_set_description(void* self, const char* description);
void q_colorspace_set_transfer_function(void* self, int64_t transferFunction);
void q_colorspace_set_transfer_function_with_transfer_function_table(void* self, uint16_t* transferFunctionTable[]);
void q_colorspace_set_transfer_functions(void* self, uint16_t* redTransferFunctionTable[], uint16_t* greenTransferFunctionTable[], uint16_t* blueTransferFunctionTable[]);
QColorSpace* q_colorspace_with_transfer_function(void* self, int64_t transferFunction);
QColorSpace* q_colorspace_with_transfer_function_with_transfer_function_table(void* self, uint16_t* transferFunctionTable[]);
QColorSpace* q_colorspace_with_transfer_functions(void* self, uint16_t* redTransferFunctionTable[], uint16_t* greenTransferFunctionTable[], uint16_t* blueTransferFunctionTable[]);
void q_colorspace_set_primaries(void* self, int64_t primariesId);
void q_colorspace_set_primaries2(void* self, void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint);
void q_colorspace_detach(void* self);
bool q_colorspace_is_valid(void* self);
QColorSpace* q_colorspace_from_icc_profile(const char* iccProfile);
char* q_colorspace_icc_profile(void* self);
QColorTransform* q_colorspace_transformation_to_color_space(void* self, void* colorspace);
QVariant* q_colorspace_to_q_variant(void* self);
void q_colorspace_set_transfer_function2(void* self, int64_t transferFunction, float gamma);
QColorSpace* q_colorspace_with_transfer_function2(void* self, int64_t transferFunction, float gamma);
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
