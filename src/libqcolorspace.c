#include "libqcolortransform.hpp"
#include "libqpoint.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqcolorspace.hpp"
#include "libqcolorspace.h"

QColorSpace* q_colorspace_new() {
    return QColorSpace_new();
}

QColorSpace* q_colorspace_new2(int64_t namedColorSpace) {
    return QColorSpace_new2(namedColorSpace);
}

QColorSpace* q_colorspace_new3(int64_t primaries, int64_t transferFunction) {
    return QColorSpace_new3(primaries, transferFunction);
}

QColorSpace* q_colorspace_new4(int64_t primaries, float gamma) {
    return QColorSpace_new4(primaries, gamma);
}

QColorSpace* q_colorspace_new5(int64_t primaries, uint16_t* transferFunctionTable[]) {
    size_t transferFunctionTable_len = 0;
    while (transferFunctionTable[transferFunctionTable_len] != NULL) {
        transferFunctionTable_len++;
    }
    libqt_list transferFunctionTable_list = {
        .len = transferFunctionTable_len,
        .data = {(uint16_t*)transferFunctionTable},
    };

    return QColorSpace_new5(primaries, transferFunctionTable_list);
}

QColorSpace* q_colorspace_new6(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int64_t transferFunction) {
    return QColorSpace_new6((QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint, transferFunction);
}

QColorSpace* q_colorspace_new7(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, uint16_t* transferFunctionTable[]) {
    size_t transferFunctionTable_len = 0;
    while (transferFunctionTable[transferFunctionTable_len] != NULL) {
        transferFunctionTable_len++;
    }
    libqt_list transferFunctionTable_list = {
        .len = transferFunctionTable_len,
        .data = {(uint16_t*)transferFunctionTable},
    };

    return QColorSpace_new7((QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint, transferFunctionTable_list);
}

QColorSpace* q_colorspace_new8(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, uint16_t* redTransferFunctionTable[], uint16_t* greenTransferFunctionTable[], uint16_t* blueTransferFunctionTable[]) {
    size_t redTransferFunctionTable_len = 0;
    while (redTransferFunctionTable[redTransferFunctionTable_len] != NULL) {
        redTransferFunctionTable_len++;
    }
    libqt_list redTransferFunctionTable_list = {
        .len = redTransferFunctionTable_len,
        .data = {(uint16_t*)redTransferFunctionTable},
    };
    size_t greenTransferFunctionTable_len = 0;
    while (greenTransferFunctionTable[greenTransferFunctionTable_len] != NULL) {
        greenTransferFunctionTable_len++;
    }
    libqt_list greenTransferFunctionTable_list = {
        .len = greenTransferFunctionTable_len,
        .data = {(uint16_t*)greenTransferFunctionTable},
    };
    size_t blueTransferFunctionTable_len = 0;
    while (blueTransferFunctionTable[blueTransferFunctionTable_len] != NULL) {
        blueTransferFunctionTable_len++;
    }
    libqt_list blueTransferFunctionTable_list = {
        .len = blueTransferFunctionTable_len,
        .data = {(uint16_t*)blueTransferFunctionTable},
    };

    return QColorSpace_new8((QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint, redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list);
}

QColorSpace* q_colorspace_new9(void* colorSpace) {
    return QColorSpace_new9((QColorSpace*)colorSpace);
}

QColorSpace* q_colorspace_new10(int64_t primaries, int64_t transferFunction, float gamma) {
    return QColorSpace_new10(primaries, transferFunction, gamma);
}

QColorSpace* q_colorspace_new11(void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint, int64_t transferFunction, float gamma) {
    return QColorSpace_new11((QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint, transferFunction, gamma);
}

void q_colorspace_operator_assign(void* self, void* colorSpace) {
    QColorSpace_OperatorAssign((QColorSpace*)self, (QColorSpace*)colorSpace);
}

void q_colorspace_swap(void* self, void* colorSpace) {
    QColorSpace_Swap((QColorSpace*)self, (QColorSpace*)colorSpace);
}

int64_t q_colorspace_primaries(void* self) {
    return QColorSpace_Primaries((QColorSpace*)self);
}

int64_t q_colorspace_transfer_function(void* self) {
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

void q_colorspace_set_transfer_function(void* self, int64_t transferFunction) {
    QColorSpace_SetTransferFunction((QColorSpace*)self, transferFunction);
}

void q_colorspace_set_transfer_function_with_transfer_function_table(void* self, uint16_t* transferFunctionTable[]) {
    size_t transferFunctionTable_len = 0;
    while (transferFunctionTable[transferFunctionTable_len] != NULL) {
        transferFunctionTable_len++;
    }
    libqt_list transferFunctionTable_list = {
        .len = transferFunctionTable_len,
        .data = {(uint16_t*)transferFunctionTable},
    };
    QColorSpace_SetTransferFunctionWithTransferFunctionTable((QColorSpace*)self, transferFunctionTable_list);
}

void q_colorspace_set_transfer_functions(void* self, uint16_t* redTransferFunctionTable[], uint16_t* greenTransferFunctionTable[], uint16_t* blueTransferFunctionTable[]) {
    size_t redTransferFunctionTable_len = 0;
    while (redTransferFunctionTable[redTransferFunctionTable_len] != NULL) {
        redTransferFunctionTable_len++;
    }
    libqt_list redTransferFunctionTable_list = {
        .len = redTransferFunctionTable_len,
        .data = {(uint16_t*)redTransferFunctionTable},
    };
    size_t greenTransferFunctionTable_len = 0;
    while (greenTransferFunctionTable[greenTransferFunctionTable_len] != NULL) {
        greenTransferFunctionTable_len++;
    }
    libqt_list greenTransferFunctionTable_list = {
        .len = greenTransferFunctionTable_len,
        .data = {(uint16_t*)greenTransferFunctionTable},
    };
    size_t blueTransferFunctionTable_len = 0;
    while (blueTransferFunctionTable[blueTransferFunctionTable_len] != NULL) {
        blueTransferFunctionTable_len++;
    }
    libqt_list blueTransferFunctionTable_list = {
        .len = blueTransferFunctionTable_len,
        .data = {(uint16_t*)blueTransferFunctionTable},
    };
    QColorSpace_SetTransferFunctions((QColorSpace*)self, redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list);
}

QColorSpace* q_colorspace_with_transfer_function(void* self, int64_t transferFunction) {
    return QColorSpace_WithTransferFunction((QColorSpace*)self, transferFunction);
}

QColorSpace* q_colorspace_with_transfer_function_with_transfer_function_table(void* self, uint16_t* transferFunctionTable[]) {
    size_t transferFunctionTable_len = 0;
    while (transferFunctionTable[transferFunctionTable_len] != NULL) {
        transferFunctionTable_len++;
    }
    libqt_list transferFunctionTable_list = {
        .len = transferFunctionTable_len,
        .data = {(uint16_t*)transferFunctionTable},
    };
    return QColorSpace_WithTransferFunctionWithTransferFunctionTable((QColorSpace*)self, transferFunctionTable_list);
}

QColorSpace* q_colorspace_with_transfer_functions(void* self, uint16_t* redTransferFunctionTable[], uint16_t* greenTransferFunctionTable[], uint16_t* blueTransferFunctionTable[]) {
    size_t redTransferFunctionTable_len = 0;
    while (redTransferFunctionTable[redTransferFunctionTable_len] != NULL) {
        redTransferFunctionTable_len++;
    }
    libqt_list redTransferFunctionTable_list = {
        .len = redTransferFunctionTable_len,
        .data = {(uint16_t*)redTransferFunctionTable},
    };
    size_t greenTransferFunctionTable_len = 0;
    while (greenTransferFunctionTable[greenTransferFunctionTable_len] != NULL) {
        greenTransferFunctionTable_len++;
    }
    libqt_list greenTransferFunctionTable_list = {
        .len = greenTransferFunctionTable_len,
        .data = {(uint16_t*)greenTransferFunctionTable},
    };
    size_t blueTransferFunctionTable_len = 0;
    while (blueTransferFunctionTable[blueTransferFunctionTable_len] != NULL) {
        blueTransferFunctionTable_len++;
    }
    libqt_list blueTransferFunctionTable_list = {
        .len = blueTransferFunctionTable_len,
        .data = {(uint16_t*)blueTransferFunctionTable},
    };
    return QColorSpace_WithTransferFunctions((QColorSpace*)self, redTransferFunctionTable_list, greenTransferFunctionTable_list, blueTransferFunctionTable_list);
}

void q_colorspace_set_primaries(void* self, int64_t primariesId) {
    QColorSpace_SetPrimaries((QColorSpace*)self, primariesId);
}

void q_colorspace_set_primaries2(void* self, void* whitePoint, void* redPoint, void* greenPoint, void* bluePoint) {
    QColorSpace_SetPrimaries2((QColorSpace*)self, (QPointF*)whitePoint, (QPointF*)redPoint, (QPointF*)greenPoint, (QPointF*)bluePoint);
}

void q_colorspace_detach(void* self) {
    QColorSpace_Detach((QColorSpace*)self);
}

bool q_colorspace_is_valid(void* self) {
    return QColorSpace_IsValid((QColorSpace*)self);
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

void q_colorspace_set_transfer_function2(void* self, int64_t transferFunction, float gamma) {
    QColorSpace_SetTransferFunction2((QColorSpace*)self, transferFunction, gamma);
}

QColorSpace* q_colorspace_with_transfer_function2(void* self, int64_t transferFunction, float gamma) {
    return QColorSpace_WithTransferFunction2((QColorSpace*)self, transferFunction, gamma);
}

void q_colorspace_delete(void* self) {
    QColorSpace_Delete((QColorSpace*)(self));
}
