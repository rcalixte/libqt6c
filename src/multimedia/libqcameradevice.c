#include "../libqsize.hpp"
#include <string.h>
#include "libqcameradevice.hpp"
#include "libqcameradevice.h"

QCameraFormat* q_cameraformat_new() {
    return QCameraFormat_new();
}

QCameraFormat* q_cameraformat_new2(void* other) {
    return QCameraFormat_new2((QCameraFormat*)other);
}

void q_cameraformat_operator_assign(void* self, void* other) {
    QCameraFormat_OperatorAssign((QCameraFormat*)self, (QCameraFormat*)other);
}

int64_t q_cameraformat_pixel_format(void* self) {
    return QCameraFormat_PixelFormat((QCameraFormat*)self);
}

QSize* q_cameraformat_resolution(void* self) {
    return QCameraFormat_Resolution((QCameraFormat*)self);
}

float q_cameraformat_min_frame_rate(void* self) {
    return QCameraFormat_MinFrameRate((QCameraFormat*)self);
}

float q_cameraformat_max_frame_rate(void* self) {
    return QCameraFormat_MaxFrameRate((QCameraFormat*)self);
}

bool q_cameraformat_is_null(void* self) {
    return QCameraFormat_IsNull((QCameraFormat*)self);
}

bool q_cameraformat_operator_equal(void* self, void* other) {
    return QCameraFormat_OperatorEqual((QCameraFormat*)self, (QCameraFormat*)other);
}

bool q_cameraformat_operator_not_equal(void* self, void* other) {
    return QCameraFormat_OperatorNotEqual((QCameraFormat*)self, (QCameraFormat*)other);
}

void q_cameraformat_delete(void* self) {
    QCameraFormat_Delete((QCameraFormat*)(self));
}

QCameraDevice* q_cameradevice_new() {
    return QCameraDevice_new();
}

QCameraDevice* q_cameradevice_new2(void* other) {
    return QCameraDevice_new2((QCameraDevice*)other);
}

void q_cameradevice_operator_assign(void* self, void* other) {
    QCameraDevice_OperatorAssign((QCameraDevice*)self, (QCameraDevice*)other);
}

bool q_cameradevice_operator_equal(void* self, void* other) {
    return QCameraDevice_OperatorEqual((QCameraDevice*)self, (QCameraDevice*)other);
}

bool q_cameradevice_operator_not_equal(void* self, void* other) {
    return QCameraDevice_OperatorNotEqual((QCameraDevice*)self, (QCameraDevice*)other);
}

bool q_cameradevice_is_null(void* self) {
    return QCameraDevice_IsNull((QCameraDevice*)self);
}

char* q_cameradevice_id(void* self) {
    libqt_string _str = QCameraDevice_Id((QCameraDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_cameradevice_description(void* self) {
    libqt_string _str = QCameraDevice_Description((QCameraDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_cameradevice_is_default(void* self) {
    return QCameraDevice_IsDefault((QCameraDevice*)self);
}

int64_t q_cameradevice_position(void* self) {
    return QCameraDevice_Position((QCameraDevice*)self);
}

libqt_list /* of QSize* */ q_cameradevice_photo_resolutions(void* self) {
    libqt_list _arr = QCameraDevice_PhotoResolutions((QCameraDevice*)self);
    return _arr;
}

libqt_list /* of QCameraFormat* */ q_cameradevice_video_formats(void* self) {
    libqt_list _arr = QCameraDevice_VideoFormats((QCameraDevice*)self);
    return _arr;
}

void q_cameradevice_delete(void* self) {
    QCameraDevice_Delete((QCameraDevice*)(self));
}
