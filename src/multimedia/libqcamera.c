#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "libqcameradevice.hpp"
#include "../libqevent.hpp"
#include "libqmediacapturesession.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqcamera.hpp"
#include "libqcamera.h"

/// https://doc.qt.io/qt-6/qcamera.html

/// q_camera_new constructs a new QCamera object.
///
///
QCamera* q_camera_new() {
    return QCamera_new();
}

/// q_camera_new2 constructs a new QCamera object.
///
/// ``` QCameraDevice* cameraDevice ```
QCamera* q_camera_new2(void* cameraDevice) {
    return QCamera_new2((QCameraDevice*)cameraDevice);
}

/// q_camera_new3 constructs a new QCamera object.
///
/// ``` enum QCameraDevice__Position position ```
QCamera* q_camera_new3(int64_t position) {
    return QCamera_new3(position);
}

/// q_camera_new4 constructs a new QCamera object.
///
/// ``` QObject* parent ```
QCamera* q_camera_new4(void* parent) {
    return QCamera_new4((QObject*)parent);
}

/// q_camera_new5 constructs a new QCamera object.
///
/// ``` QCameraDevice* cameraDevice, QObject* parent ```
QCamera* q_camera_new5(void* cameraDevice, void* parent) {
    return QCamera_new5((QCameraDevice*)cameraDevice, (QObject*)parent);
}

/// q_camera_new6 constructs a new QCamera object.
///
/// ``` enum QCameraDevice__Position position, QObject* parent ```
QCamera* q_camera_new6(int64_t position, void* parent) {
    return QCamera_new6(position, (QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCamera* self ```
QMetaObject* q_camera_meta_object(void* self) {
    return QCamera_MetaObject((QCamera*)self);
}

/// ``` QCamera* self, const char* param1 ```
void* q_camera_metacast(void* self, const char* param1) {
    return QCamera_Metacast((QCamera*)self, param1);
}

/// ``` QCamera* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_camera_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCamera_Metacall((QCamera*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCamera* self, int32_t (*slot)(QCamera*, enum QMetaObject__Call, int, void*) ```
void q_camera_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCamera_OnMetacall((QCamera*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCamera* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_camera_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCamera_QBaseMetacall((QCamera*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_camera_tr(const char* s) {
    libqt_string _str = QCamera_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isAvailable)
///
/// ``` QCamera* self ```
bool q_camera_is_available(void* self) {
    return QCamera_IsAvailable((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isActive)
///
/// ``` QCamera* self ```
bool q_camera_is_active(void* self) {
    return QCamera_IsActive((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#captureSession)
///
/// ``` QCamera* self ```
QMediaCaptureSession* q_camera_capture_session(void* self) {
    return QCamera_CaptureSession((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDevice)
///
/// ``` QCamera* self ```
QCameraDevice* q_camera_camera_device(void* self) {
    return QCamera_CameraDevice((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraDevice)
///
/// ``` QCamera* self, QCameraDevice* cameraDevice ```
void q_camera_set_camera_device(void* self, void* cameraDevice) {
    QCamera_SetCameraDevice((QCamera*)self, (QCameraDevice*)cameraDevice);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormat)
///
/// ``` QCamera* self ```
QCameraFormat* q_camera_camera_format(void* self) {
    return QCamera_CameraFormat((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraFormat)
///
/// ``` QCamera* self, QCameraFormat* format ```
void q_camera_set_camera_format(void* self, void* format) {
    QCamera_SetCameraFormat((QCamera*)self, (QCameraFormat*)format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#error)
///
/// ``` QCamera* self ```
int64_t q_camera_error(void* self) {
    return QCamera_Error((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorString)
///
/// ``` QCamera* self ```
const char* q_camera_error_string(void* self) {
    libqt_string _str = QCamera_ErrorString((QCamera*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeatures)
///
/// ``` QCamera* self ```
int64_t q_camera_supported_features(void* self) {
    return QCamera_SupportedFeatures((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusMode)
///
/// ``` QCamera* self ```
int64_t q_camera_focus_mode(void* self) {
    return QCamera_FocusMode((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusMode)
///
/// ``` QCamera* self, enum QCamera__FocusMode mode ```
void q_camera_set_focus_mode(void* self, int64_t mode) {
    QCamera_SetFocusMode((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFocusModeSupported)
///
/// ``` QCamera* self, enum QCamera__FocusMode mode ```
bool q_camera_is_focus_mode_supported(void* self, int64_t mode) {
    return QCamera_IsFocusModeSupported((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPoint)
///
/// ``` QCamera* self ```
QPointF* q_camera_focus_point(void* self) {
    return QCamera_FocusPoint((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPoint)
///
/// ``` QCamera* self ```
QPointF* q_camera_custom_focus_point(void* self) {
    return QCamera_CustomFocusPoint((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCustomFocusPoint)
///
/// ``` QCamera* self, QPointF* point ```
void q_camera_set_custom_focus_point(void* self, void* point) {
    QCamera_SetCustomFocusPoint((QCamera*)self, (QPointF*)point);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusDistance)
///
/// ``` QCamera* self, float d ```
void q_camera_set_focus_distance(void* self, float d) {
    QCamera_SetFocusDistance((QCamera*)self, d);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistance)
///
/// ``` QCamera* self ```
float q_camera_focus_distance(void* self) {
    return QCamera_FocusDistance((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactor)
///
/// ``` QCamera* self ```
float q_camera_minimum_zoom_factor(void* self) {
    return QCamera_MinimumZoomFactor((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactor)
///
/// ``` QCamera* self ```
float q_camera_maximum_zoom_factor(void* self) {
    return QCamera_MaximumZoomFactor((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactor)
///
/// ``` QCamera* self ```
float q_camera_zoom_factor(void* self) {
    return QCamera_ZoomFactor((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setZoomFactor)
///
/// ``` QCamera* self, float factor ```
void q_camera_set_zoom_factor(void* self, float factor) {
    QCamera_SetZoomFactor((QCamera*)self, factor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashMode)
///
/// ``` QCamera* self ```
int64_t q_camera_flash_mode(void* self) {
    return QCamera_FlashMode((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashModeSupported)
///
/// ``` QCamera* self, enum QCamera__FlashMode mode ```
bool q_camera_is_flash_mode_supported(void* self, int64_t mode) {
    return QCamera_IsFlashModeSupported((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashReady)
///
/// ``` QCamera* self ```
bool q_camera_is_flash_ready(void* self) {
    return QCamera_IsFlashReady((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchMode)
///
/// ``` QCamera* self ```
int64_t q_camera_torch_mode(void* self) {
    return QCamera_TorchMode((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isTorchModeSupported)
///
/// ``` QCamera* self, enum QCamera__TorchMode mode ```
bool q_camera_is_torch_mode_supported(void* self, int64_t mode) {
    return QCamera_IsTorchModeSupported((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureMode)
///
/// ``` QCamera* self ```
int64_t q_camera_exposure_mode(void* self) {
    return QCamera_ExposureMode((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isExposureModeSupported)
///
/// ``` QCamera* self, enum QCamera__ExposureMode mode ```
bool q_camera_is_exposure_mode_supported(void* self, int64_t mode) {
    return QCamera_IsExposureModeSupported((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensation)
///
/// ``` QCamera* self ```
float q_camera_exposure_compensation(void* self) {
    return QCamera_ExposureCompensation((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivity)
///
/// ``` QCamera* self ```
int32_t q_camera_iso_sensitivity(void* self) {
    return QCamera_IsoSensitivity((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivity)
///
/// ``` QCamera* self ```
int32_t q_camera_manual_iso_sensitivity(void* self) {
    return QCamera_ManualIsoSensitivity((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTime)
///
/// ``` QCamera* self ```
float q_camera_exposure_time(void* self) {
    return QCamera_ExposureTime((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTime)
///
/// ``` QCamera* self ```
float q_camera_manual_exposure_time(void* self) {
    return QCamera_ManualExposureTime((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumIsoSensitivity)
///
/// ``` QCamera* self ```
int32_t q_camera_minimum_iso_sensitivity(void* self) {
    return QCamera_MinimumIsoSensitivity((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumIsoSensitivity)
///
/// ``` QCamera* self ```
int32_t q_camera_maximum_iso_sensitivity(void* self) {
    return QCamera_MaximumIsoSensitivity((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumExposureTime)
///
/// ``` QCamera* self ```
float q_camera_minimum_exposure_time(void* self) {
    return QCamera_MinimumExposureTime((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumExposureTime)
///
/// ``` QCamera* self ```
float q_camera_maximum_exposure_time(void* self) {
    return QCamera_MaximumExposureTime((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceMode)
///
/// ``` QCamera* self ```
int64_t q_camera_white_balance_mode(void* self) {
    return QCamera_WhiteBalanceMode((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isWhiteBalanceModeSupported)
///
/// ``` QCamera* self, enum QCamera__WhiteBalanceMode mode ```
bool q_camera_is_white_balance_mode_supported(void* self, int64_t mode) {
    return QCamera_IsWhiteBalanceModeSupported((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperature)
///
/// ``` QCamera* self ```
int32_t q_camera_color_temperature(void* self) {
    return QCamera_ColorTemperature((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setActive)
///
/// ``` QCamera* self, bool active ```
void q_camera_set_active(void* self, bool active) {
    QCamera_SetActive((QCamera*)self, active);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#start)
///
/// ``` QCamera* self ```
void q_camera_start(void* self) {
    QCamera_Start((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#stop)
///
/// ``` QCamera* self ```
void q_camera_stop(void* self) {
    QCamera_Stop((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomTo)
///
/// ``` QCamera* self, float zoom, float rate ```
void q_camera_zoom_to(void* self, float zoom, float rate) {
    QCamera_ZoomTo((QCamera*)self, zoom, rate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFlashMode)
///
/// ``` QCamera* self, enum QCamera__FlashMode mode ```
void q_camera_set_flash_mode(void* self, int64_t mode) {
    QCamera_SetFlashMode((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setTorchMode)
///
/// ``` QCamera* self, enum QCamera__TorchMode mode ```
void q_camera_set_torch_mode(void* self, int64_t mode) {
    QCamera_SetTorchMode((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureMode)
///
/// ``` QCamera* self, enum QCamera__ExposureMode mode ```
void q_camera_set_exposure_mode(void* self, int64_t mode) {
    QCamera_SetExposureMode((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureCompensation)
///
/// ``` QCamera* self, float ev ```
void q_camera_set_exposure_compensation(void* self, float ev) {
    QCamera_SetExposureCompensation((QCamera*)self, ev);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualIsoSensitivity)
///
/// ``` QCamera* self, int iso ```
void q_camera_set_manual_iso_sensitivity(void* self, int iso) {
    QCamera_SetManualIsoSensitivity((QCamera*)self, iso);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoIsoSensitivity)
///
/// ``` QCamera* self ```
void q_camera_set_auto_iso_sensitivity(void* self) {
    QCamera_SetAutoIsoSensitivity((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualExposureTime)
///
/// ``` QCamera* self, float seconds ```
void q_camera_set_manual_exposure_time(void* self, float seconds) {
    QCamera_SetManualExposureTime((QCamera*)self, seconds);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoExposureTime)
///
/// ``` QCamera* self ```
void q_camera_set_auto_exposure_time(void* self) {
    QCamera_SetAutoExposureTime((QCamera*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setWhiteBalanceMode)
///
/// ``` QCamera* self, enum QCamera__WhiteBalanceMode mode ```
void q_camera_set_white_balance_mode(void* self, int64_t mode) {
    QCamera_SetWhiteBalanceMode((QCamera*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setColorTemperature)
///
/// ``` QCamera* self, int colorTemperature ```
void q_camera_set_color_temperature(void* self, int colorTemperature) {
    QCamera_SetColorTemperature((QCamera*)self, colorTemperature);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
///
/// ``` QCamera* self, bool param1 ```
void q_camera_active_changed(void* self, bool param1) {
    QCamera_ActiveChanged((QCamera*)self, param1);
}

/// ``` QCamera* self, void (*slot)(QCamera*, bool) ```
void q_camera_on_active_changed(void* self, void (*slot)(void*, bool)) {
    QCamera_Connect_ActiveChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
///
/// ``` QCamera* self ```
void q_camera_error_changed(void* self) {
    QCamera_ErrorChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_error_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_ErrorChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
///
/// ``` QCamera* self, enum QCamera__Error errorVal, const char* errorString ```
void q_camera_error_occurred(void* self, int64_t errorVal, const char* errorString) {
    QCamera_ErrorOccurred((QCamera*)self, errorVal, qstring(errorString));
}

/// ``` QCamera* self, void (*slot)(QCamera*, enum QCamera__Error, const char*) ```
void q_camera_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*)) {
    QCamera_Connect_ErrorOccurred((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
///
/// ``` QCamera* self ```
void q_camera_camera_device_changed(void* self) {
    QCamera_CameraDeviceChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_camera_device_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_CameraDeviceChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
///
/// ``` QCamera* self ```
void q_camera_camera_format_changed(void* self) {
    QCamera_CameraFormatChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_camera_format_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_CameraFormatChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
///
/// ``` QCamera* self ```
void q_camera_supported_features_changed(void* self) {
    QCamera_SupportedFeaturesChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_supported_features_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_SupportedFeaturesChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
///
/// ``` QCamera* self ```
void q_camera_focus_mode_changed(void* self) {
    QCamera_FocusModeChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_focus_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_FocusModeChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_zoom_factor_changed(void* self, float param1) {
    QCamera_ZoomFactorChanged((QCamera*)self, param1);
}

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_zoom_factor_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_ZoomFactorChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_minimum_zoom_factor_changed(void* self, float param1) {
    QCamera_MinimumZoomFactorChanged((QCamera*)self, param1);
}

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_minimum_zoom_factor_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_MinimumZoomFactorChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_maximum_zoom_factor_changed(void* self, float param1) {
    QCamera_MaximumZoomFactorChanged((QCamera*)self, param1);
}

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_maximum_zoom_factor_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_MaximumZoomFactorChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_focus_distance_changed(void* self, float param1) {
    QCamera_FocusDistanceChanged((QCamera*)self, param1);
}

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_focus_distance_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_FocusDistanceChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
///
/// ``` QCamera* self ```
void q_camera_focus_point_changed(void* self) {
    QCamera_FocusPointChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_focus_point_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_FocusPointChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
///
/// ``` QCamera* self ```
void q_camera_custom_focus_point_changed(void* self) {
    QCamera_CustomFocusPointChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_custom_focus_point_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_CustomFocusPointChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashReady)
///
/// ``` QCamera* self, bool param1 ```
void q_camera_flash_ready(void* self, bool param1) {
    QCamera_FlashReady((QCamera*)self, param1);
}

/// ``` QCamera* self, void (*slot)(QCamera*, bool) ```
void q_camera_on_flash_ready(void* self, void (*slot)(void*, bool)) {
    QCamera_Connect_FlashReady((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
///
/// ``` QCamera* self ```
void q_camera_flash_mode_changed(void* self) {
    QCamera_FlashModeChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_flash_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_FlashModeChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
///
/// ``` QCamera* self ```
void q_camera_torch_mode_changed(void* self) {
    QCamera_TorchModeChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_torch_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_TorchModeChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
///
/// ``` QCamera* self, float speed ```
void q_camera_exposure_time_changed(void* self, float speed) {
    QCamera_ExposureTimeChanged((QCamera*)self, speed);
}

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_exposure_time_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_ExposureTimeChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
///
/// ``` QCamera* self, float speed ```
void q_camera_manual_exposure_time_changed(void* self, float speed) {
    QCamera_ManualExposureTimeChanged((QCamera*)self, speed);
}

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_manual_exposure_time_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_ManualExposureTimeChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
///
/// ``` QCamera* self, int param1 ```
void q_camera_iso_sensitivity_changed(void* self, int param1) {
    QCamera_IsoSensitivityChanged((QCamera*)self, param1);
}

/// ``` QCamera* self, void (*slot)(QCamera*, int) ```
void q_camera_on_iso_sensitivity_changed(void* self, void (*slot)(void*, int)) {
    QCamera_Connect_IsoSensitivityChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
///
/// ``` QCamera* self, int param1 ```
void q_camera_manual_iso_sensitivity_changed(void* self, int param1) {
    QCamera_ManualIsoSensitivityChanged((QCamera*)self, param1);
}

/// ``` QCamera* self, void (*slot)(QCamera*, int) ```
void q_camera_on_manual_iso_sensitivity_changed(void* self, void (*slot)(void*, int)) {
    QCamera_Connect_ManualIsoSensitivityChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_exposure_compensation_changed(void* self, float param1) {
    QCamera_ExposureCompensationChanged((QCamera*)self, param1);
}

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_exposure_compensation_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_ExposureCompensationChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
///
/// ``` QCamera* self ```
void q_camera_exposure_mode_changed(void* self) {
    QCamera_ExposureModeChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_exposure_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_ExposureModeChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
///
/// ``` QCamera* self ```
void q_camera_white_balance_mode_changed(void* self) {
    QCamera_WhiteBalanceModeChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_white_balance_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_WhiteBalanceModeChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
///
/// ``` QCamera* self ```
void q_camera_color_temperature_changed(void* self) {
    QCamera_ColorTemperatureChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_color_temperature_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_ColorTemperatureChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
///
/// ``` QCamera* self ```
void q_camera_brightness_changed(void* self) {
    QCamera_BrightnessChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_brightness_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_BrightnessChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
///
/// ``` QCamera* self ```
void q_camera_contrast_changed(void* self) {
    QCamera_ContrastChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_contrast_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_ContrastChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
///
/// ``` QCamera* self ```
void q_camera_saturation_changed(void* self) {
    QCamera_SaturationChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_saturation_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_SaturationChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
///
/// ``` QCamera* self ```
void q_camera_hue_changed(void* self) {
    QCamera_HueChanged((QCamera*)self);
}

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_hue_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_HueChanged((QCamera*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_camera_tr2(const char* s, const char* c) {
    libqt_string _str = QCamera_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_camera_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCamera_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCamera* self ```
const char* q_camera_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCamera* self, const char* name ```
void q_camera_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCamera* self ```
bool q_camera_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCamera* self ```
bool q_camera_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCamera* self ```
bool q_camera_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCamera* self ```
bool q_camera_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCamera* self, bool b ```
bool q_camera_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCamera* self ```
QThread* q_camera_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCamera* self, QThread* thread ```
void q_camera_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCamera* self, int interval ```
int32_t q_camera_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCamera* self, int id ```
void q_camera_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCamera* self ```
libqt_list /* of QObject* */ q_camera_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCamera* self, QObject* parent ```
void q_camera_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCamera* self, QObject* filterObj ```
void q_camera_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCamera* self, QObject* obj ```
void q_camera_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_camera_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCamera* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_camera_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_camera_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_camera_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCamera* self ```
void q_camera_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCamera* self ```
void q_camera_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCamera* self, const char* name, QVariant* value ```
bool q_camera_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCamera* self, const char* name ```
QVariant* q_camera_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCamera* self ```
const char** q_camera_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCamera* self ```
QBindingStorage* q_camera_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCamera* self ```
QBindingStorage* q_camera_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCamera* self ```
void q_camera_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCamera* self, void (*slot)(QObject*) ```
void q_camera_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCamera* self ```
QObject* q_camera_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCamera* self, const char* classname ```
bool q_camera_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCamera* self ```
void q_camera_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCamera* self, int interval, enum Qt__TimerType timerType ```
int32_t q_camera_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_camera_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCamera* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_camera_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCamera* self, QObject* param1 ```
void q_camera_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCamera* self, void (*slot)(QObject*, QObject*) ```
void q_camera_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QEvent* event ```
bool q_camera_event(void* self, void* event) {
    return QCamera_Event((QCamera*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QEvent* event ```
bool q_camera_qbase_event(void* self, void* event) {
    return QCamera_QBaseEvent((QCamera*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, bool (*slot)(QCamera*, QEvent*) ```
void q_camera_on_event(void* self, bool (*slot)(void*, void*)) {
    QCamera_OnEvent((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QObject* watched, QEvent* event ```
bool q_camera_event_filter(void* self, void* watched, void* event) {
    return QCamera_EventFilter((QCamera*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QObject* watched, QEvent* event ```
bool q_camera_qbase_event_filter(void* self, void* watched, void* event) {
    return QCamera_QBaseEventFilter((QCamera*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, bool (*slot)(QCamera*, QObject*, QEvent*) ```
void q_camera_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCamera_OnEventFilter((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QTimerEvent* event ```
void q_camera_timer_event(void* self, void* event) {
    QCamera_TimerEvent((QCamera*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QTimerEvent* event ```
void q_camera_qbase_timer_event(void* self, void* event) {
    QCamera_QBaseTimerEvent((QCamera*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QTimerEvent*) ```
void q_camera_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCamera_OnTimerEvent((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QChildEvent* event ```
void q_camera_child_event(void* self, void* event) {
    QCamera_ChildEvent((QCamera*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QChildEvent* event ```
void q_camera_qbase_child_event(void* self, void* event) {
    QCamera_QBaseChildEvent((QCamera*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QChildEvent*) ```
void q_camera_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCamera_OnChildEvent((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QEvent* event ```
void q_camera_custom_event(void* self, void* event) {
    QCamera_CustomEvent((QCamera*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QEvent* event ```
void q_camera_qbase_custom_event(void* self, void* event) {
    QCamera_QBaseCustomEvent((QCamera*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QEvent*) ```
void q_camera_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCamera_OnCustomEvent((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
void q_camera_connect_notify(void* self, void* signal) {
    QCamera_ConnectNotify((QCamera*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
void q_camera_qbase_connect_notify(void* self, void* signal) {
    QCamera_QBaseConnectNotify((QCamera*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QMetaMethod*) ```
void q_camera_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCamera_OnConnectNotify((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
void q_camera_disconnect_notify(void* self, void* signal) {
    QCamera_DisconnectNotify((QCamera*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
void q_camera_qbase_disconnect_notify(void* self, void* signal) {
    QCamera_QBaseDisconnectNotify((QCamera*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QMetaMethod*) ```
void q_camera_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCamera_OnDisconnectNotify((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self ```
QObject* q_camera_sender(void* self) {
    return QCamera_Sender((QCamera*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self ```
QObject* q_camera_qbase_sender(void* self) {
    return QCamera_QBaseSender((QCamera*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, QObject* (*slot)() ```
void q_camera_on_sender(void* self, QObject* (*slot)()) {
    QCamera_OnSender((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self ```
int32_t q_camera_sender_signal_index(void* self) {
    return QCamera_SenderSignalIndex((QCamera*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self ```
int32_t q_camera_qbase_sender_signal_index(void* self) {
    return QCamera_QBaseSenderSignalIndex((QCamera*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, int32_t (*slot)() ```
void q_camera_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCamera_OnSenderSignalIndex((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, const char* signal ```
int32_t q_camera_receivers(void* self, const char* signal) {
    return QCamera_Receivers((QCamera*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, const char* signal ```
int32_t q_camera_qbase_receivers(void* self, const char* signal) {
    return QCamera_QBaseReceivers((QCamera*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, int32_t (*slot)(QCamera*, const char*) ```
void q_camera_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCamera_OnReceivers((QCamera*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
bool q_camera_is_signal_connected(void* self, void* signal) {
    return QCamera_IsSignalConnected((QCamera*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
bool q_camera_qbase_is_signal_connected(void* self, void* signal) {
    return QCamera_QBaseIsSignalConnected((QCamera*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, bool (*slot)(QCamera*, QMetaMethod*) ```
void q_camera_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCamera_OnIsSignalConnected((QCamera*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCamera* self ```
void q_camera_delete(void* self) {
    QCamera_Delete((QCamera*)(self));
}