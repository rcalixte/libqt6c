#include "libqcolortransform.hpp"
#include "libqpoint.hpp"
#include "libqvariant.hpp"
#include "libqcolorspace.hpp"
#include "libqcolorspace.h"

QColorSpace* q_colorspace_new() {
    return QColorSpace_new();
}

QColorSpace* q_colorspace_new2(int32_t namedColorSpace) {
    return QColorSpace_new2(namedColorSpace);
}

QColorSpace* q_colorspace_new3(void* whitePoint, int32_t transferFunction) {
    return QColorSpace_new3((QPointF*)whitePoint, transferFunction);
}

QColorSpace* q_colorspace_new4(void* whitePoint, libqt_list transferFunctionTable) {
    return QColorSpace_new4((QPointF*)whitePoint, transferFunctionTable);
}

QColorSpace* q_colorspace_new5(int32_t primaries, int32_t transferFunction) {
    return QColorSpace_new5(primaries, transferFunction);
}

QColorSpace* q_colorspace_new6(int32_t primaries, float gamma) {
    return QColorSpace_new6(primaries, gamma);
}

QColorSpace* q_colorspace_new7(int32_t primaries, libqt_list transferFunctionTable) {
    return QColorSpace_new7(primaries, transferFunctionTable);
}

QColorSpace* q_colorspace_new8(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int32_t transferFunction) {
    return QColorSpace_new8((QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint, transferFunction);
}

QColorSpace* q_colorspace_new9(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, libqt_list transferFunctionTable) {
    return QColorSpace_new9((QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint, transferFunctionTable);
}

QColorSpace* q_colorspace_new10(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable) {
    return QColorSpace_new10((QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint, redTransferFunctionTable, greenTransferFunctionTable, blueTransferFunctionTable);
}

QColorSpace* q_colorspace_new11(void* colorSpace) {
    return QColorSpace_new11((QColorSpace*)colorSpace);
}

QColorSpace* q_colorspace_new12(void* whitePoint, int32_t transferFunction, float gamma) {
    return QColorSpace_new12((QPointF*)whitePoint, transferFunction, gamma);
}

QColorSpace* q_colorspace_new13(int32_t primaries, int32_t transferFunction, float gamma) {
    return QColorSpace_new13(primaries, transferFunction, gamma);
}

QColorSpace* q_colorspace_new14(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int32_t transferFunction, float gamma) {
    return QColorSpace_new14((QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint, transferFunction, gamma);
}

void q_colorspace_operator_assign(void* self, void* colorSpace) {
    QColorSpace_OperatorAssign((QColorSpace*)self, (QColorSpace*)colorSpace);
}

void q_colorspace_swap(void* self, void* colorSpace) {
    QColorSpace_Swap((QColorSpace*)self, (QColorSpace*)colorSpace);
}

int32_t q_colorspace_primaries(void* self) {
    return QColorSpace_Primaries((QColorSpace*)self);
}

int32_t q_colorspace_transfer_function(void* self) {
    return QColorSpace_TransferFunction((QColorSpace*)self);
}

float q_colorspace_gamma(void* self) {
    return QColorSpace_Gamma((QColorSpace*)self);
}

const char* q_colorspace_description(void* self) {
    libqt_string _str = QColorSpace_Description((QColorSpace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_colorspace_set_description(void* self, const char* description) {
    QColorSpace_SetDescription((QColorSpace*)self, qstring(description));
}

void q_colorspace_set_transfer_function(void* self, int32_t transferFunction) {
    QColorSpace_SetTransferFunction((QColorSpace*)self, transferFunction);
}

void q_colorspace_set_transfer_function2(void* self, libqt_list transferFunctionTable) {
    QColorSpace_SetTransferFunction2((QColorSpace*)self, transferFunctionTable);
}

void q_colorspace_set_transfer_functions(void* self, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable) {
    QColorSpace_SetTransferFunctions((QColorSpace*)self, redTransferFunctionTable, greenTransferFunctionTable, blueTransferFunctionTable);
}

QColorSpace* q_colorspace_with_transfer_function(void* self, int32_t transferFunction) {
    return QColorSpace_WithTransferFunction((QColorSpace*)self, transferFunction);
}

QColorSpace* q_colorspace_with_transfer_function2(void* self, libqt_list transferFunctionTable) {
    return QColorSpace_WithTransferFunction2((QColorSpace*)self, transferFunctionTable);
}

QColorSpace* q_colorspace_with_transfer_functions(void* self, libqt_list redTransferFunctionTable, libqt_list greenTransferFunctionTable, libqt_list blueTransferFunctionTable) {
    return QColorSpace_WithTransferFunctions((QColorSpace*)self, redTransferFunctionTable, greenTransferFunctionTable, blueTransferFunctionTable);
}

void q_colorspace_set_primaries(void* self, int32_t primariesId) {
    QColorSpace_SetPrimaries((QColorSpace*)self, primariesId);
}

void q_colorspace_set_primaries2(void* self, void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint) {
    QColorSpace_SetPrimaries2((QColorSpace*)self, (QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint);
}

void q_colorspace_set_white_point(void* self, void* whitePoint) {
    QColorSpace_SetWhitePoint((QColorSpace*)self, (QPointF*)whitePoint);
}

QPointF* q_colorspace_white_point(void* self) {
    return QColorSpace_WhitePoint((QColorSpace*)self);
}

uint8_t q_colorspace_transform_model(void* self) {
    return QColorSpace_TransformModel((QColorSpace*)self);
}

uint8_t q_colorspace_color_model(void* self) {
    return QColorSpace_ColorModel((QColorSpace*)self);
}

void q_colorspace_detach(void* self) {
    QColorSpace_Detach((QColorSpace*)self);
}

bool q_colorspace_is_valid(void* self) {
    return QColorSpace_IsValid((QColorSpace*)self);
}

bool q_colorspace_is_valid_target(void* self) {
    return QColorSpace_IsValidTarget((QColorSpace*)self);
}

QColorSpace* q_colorspace_from_icc_profile(const char* iccProfile) {
    return QColorSpace_FromIccProfile(qstring(iccProfile));
}

char* q_colorspace_icc_profile(void* self) {
    libqt_string _str = QColorSpace_IccProfile((QColorSpace*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColorTransform* q_colorspace_transformation_to_color_space(void* self, void* colorspace) {
    return QColorSpace_TransformationToColorSpace((QColorSpace*)self, (QColorSpace*)colorspace);
}

QVariant* q_colorspace_to_q_variant(void* self) {
    return QColorSpace_ToQVariant((QColorSpace*)self);
}

void q_colorspace_set_transfer_function22(void* self, int32_t transferFunction, float gamma) {
    QColorSpace_SetTransferFunction22((QColorSpace*)self, transferFunction, gamma);
}

QColorSpace* q_colorspace_with_transfer_function22(void* self, int32_t transferFunction, float gamma) {
    return QColorSpace_WithTransferFunction22((QColorSpace*)self, transferFunction, gamma);
}

void q_colorspace_delete(void* self) {
    QColorSpace_Delete((QColorSpace*)(self));
}
