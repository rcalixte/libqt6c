#include "../libqsize.hpp"
#include <string.h>
#include "libqcameradevice.hpp"
#include "libqcameradevice.h"

/// https://doc.qt.io/qt-6/qcameraformat.html

/// q_cameraformat_new constructs a new QCameraFormat object.
///
///
QCameraFormat* q_cameraformat_new() {
    return QCameraFormat_new();
}

/// q_cameraformat_new2 constructs a new QCameraFormat object.
///
/// ``` QCameraFormat* other ```
QCameraFormat* q_cameraformat_new2(void* other) {
    return QCameraFormat_new2((QCameraFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator=)
///
/// ``` QCameraFormat* self, QCameraFormat* other ```
void q_cameraformat_operator_assign(void* self, void* other) {
    QCameraFormat_OperatorAssign((QCameraFormat*)self, (QCameraFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#pixelFormat)
///
/// ``` QCameraFormat* self ```
int64_t q_cameraformat_pixel_format(void* self) {
    return QCameraFormat_PixelFormat((QCameraFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#resolution)
///
/// ``` QCameraFormat* self ```
QSize* q_cameraformat_resolution(void* self) {
    return QCameraFormat_Resolution((QCameraFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#minFrameRate)
///
/// ``` QCameraFormat* self ```
float q_cameraformat_min_frame_rate(void* self) {
    return QCameraFormat_MinFrameRate((QCameraFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#maxFrameRate)
///
/// ``` QCameraFormat* self ```
float q_cameraformat_max_frame_rate(void* self) {
    return QCameraFormat_MaxFrameRate((QCameraFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#isNull)
///
/// ``` QCameraFormat* self ```
bool q_cameraformat_is_null(void* self) {
    return QCameraFormat_IsNull((QCameraFormat*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator==)
///
/// ``` QCameraFormat* self, QCameraFormat* other ```
bool q_cameraformat_operator_equal(void* self, void* other) {
    return QCameraFormat_OperatorEqual((QCameraFormat*)self, (QCameraFormat*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameraformat.html#operator!=)
///
/// ``` QCameraFormat* self, QCameraFormat* other ```
bool q_cameraformat_operator_not_equal(void* self, void* other) {
    return QCameraFormat_OperatorNotEqual((QCameraFormat*)self, (QCameraFormat*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QCameraFormat* self ```
void q_cameraformat_delete(void* self) {
    QCameraFormat_Delete((QCameraFormat*)(self));
}

/// https://doc.qt.io/qt-6/qcameradevice.html

/// q_cameradevice_new constructs a new QCameraDevice object.
///
///
QCameraDevice* q_cameradevice_new() {
    return QCameraDevice_new();
}

/// q_cameradevice_new2 constructs a new QCameraDevice object.
///
/// ``` QCameraDevice* other ```
QCameraDevice* q_cameradevice_new2(void* other) {
    return QCameraDevice_new2((QCameraDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator=)
///
/// ``` QCameraDevice* self, QCameraDevice* other ```
void q_cameradevice_operator_assign(void* self, void* other) {
    QCameraDevice_OperatorAssign((QCameraDevice*)self, (QCameraDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator==)
///
/// ``` QCameraDevice* self, QCameraDevice* other ```
bool q_cameradevice_operator_equal(void* self, void* other) {
    return QCameraDevice_OperatorEqual((QCameraDevice*)self, (QCameraDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#operator!=)
///
/// ``` QCameraDevice* self, QCameraDevice* other ```
bool q_cameradevice_operator_not_equal(void* self, void* other) {
    return QCameraDevice_OperatorNotEqual((QCameraDevice*)self, (QCameraDevice*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#isNull)
///
/// ``` QCameraDevice* self ```
bool q_cameradevice_is_null(void* self) {
    return QCameraDevice_IsNull((QCameraDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#id)
///
/// ``` QCameraDevice* self ```
char* q_cameradevice_id(void* self) {
    libqt_string _str = QCameraDevice_Id((QCameraDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#description)
///
/// ``` QCameraDevice* self ```
const char* q_cameradevice_description(void* self) {
    libqt_string _str = QCameraDevice_Description((QCameraDevice*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#isDefault)
///
/// ``` QCameraDevice* self ```
bool q_cameradevice_is_default(void* self) {
    return QCameraDevice_IsDefault((QCameraDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#position)
///
/// ``` QCameraDevice* self ```
int64_t q_cameradevice_position(void* self) {
    return QCameraDevice_Position((QCameraDevice*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#photoResolutions)
///
/// ``` QCameraDevice* self ```
libqt_list /* of QSize* */ q_cameradevice_photo_resolutions(void* self) {
    libqt_list _arr = QCameraDevice_PhotoResolutions((QCameraDevice*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcameradevice.html#videoFormats)
///
/// ``` QCameraDevice* self ```
libqt_list /* of QCameraFormat* */ q_cameradevice_video_formats(void* self) {
    libqt_list _arr = QCameraDevice_VideoFormats((QCameraDevice*)self);
    return _arr;
}

/// Delete this object from C++ memory.
///
/// ``` QCameraDevice* self ```
void q_cameradevice_delete(void* self) {
    QCameraDevice_Delete((QCameraDevice*)(self));
}