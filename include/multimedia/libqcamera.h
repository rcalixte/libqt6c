#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQCAMERA_H
#define SRC_MULTIMEDIAQT6C_LIBQCAMERA_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qcamera.html

/// q_camera_new constructs a new QCamera object.
///
QCamera* q_camera_new();

/// q_camera_new2 constructs a new QCamera object.
///
/// @param cameraDevice QCameraDevice*
QCamera* q_camera_new2(void* cameraDevice);

/// q_camera_new3 constructs a new QCamera object.
///
/// @param position enum QCameraDevice__Position
QCamera* q_camera_new3(int32_t position);

/// q_camera_new4 constructs a new QCamera object.
///
/// @param parent QObject*
QCamera* q_camera_new4(void* parent);

/// q_camera_new5 constructs a new QCamera object.
///
/// @param cameraDevice QCameraDevice*
/// @param parent QObject*
QCamera* q_camera_new5(void* cameraDevice, void* parent);

/// q_camera_new6 constructs a new QCamera object.
///
/// @param position enum QCameraDevice__Position
/// @param parent QObject*
QCamera* q_camera_new6(int32_t position, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QCamera*
const QMetaObject* q_camera_meta_object(void* self);

/// @param self QCamera*
/// @param param1 const char*
void* q_camera_metacast(void* self, const char* param1);

/// @param self QCamera*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_camera_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QCamera*
/// @param callback int32_t fn(QCamera*, enum QMetaObject__Call, int, void*)
void q_camera_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self QCamera*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_camera_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_camera_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isAvailable)
///
/// @param self QCamera*
bool q_camera_is_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isActive)
///
/// @param self QCamera*
bool q_camera_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#captureSession)
///
/// @param self QCamera*
QMediaCaptureSession* q_camera_capture_session(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDevice)
///
/// @param self QCamera*
QCameraDevice* q_camera_camera_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraDevice)
///
/// @param self QCamera*
/// @param cameraDevice QCameraDevice*
void q_camera_set_camera_device(void* self, void* cameraDevice);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormat)
///
/// @param self QCamera*
QCameraFormat* q_camera_camera_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraFormat)
///
/// @param self QCamera*
/// @param format QCameraFormat*
void q_camera_set_camera_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#error)
///
/// @param self QCamera*
///
/// @return enum QCamera__Error
int32_t q_camera_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorString)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCamera*
const char* q_camera_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeatures)
///
/// @param self QCamera*
///
/// @return flag of enum QCamera__Feature
int64_t q_camera_supported_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusMode)
///
/// @param self QCamera*
///
/// @return enum QCamera__FocusMode
int32_t q_camera_focus_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusMode)
///
/// @param self QCamera*
/// @param mode enum QCamera__FocusMode
void q_camera_set_focus_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFocusModeSupported)
///
/// @param self QCamera*
/// @param mode enum QCamera__FocusMode
bool q_camera_is_focus_mode_supported(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPoint)
///
/// @param self QCamera*
QPointF* q_camera_focus_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPoint)
///
/// @param self QCamera*
QPointF* q_camera_custom_focus_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCustomFocusPoint)
///
/// @param self QCamera*
/// @param point QPointF*
void q_camera_set_custom_focus_point(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusDistance)
///
/// @param self QCamera*
/// @param d float
void q_camera_set_focus_distance(void* self, float d);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistance)
///
/// @param self QCamera*
float q_camera_focus_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactor)
///
/// @param self QCamera*
float q_camera_minimum_zoom_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactor)
///
/// @param self QCamera*
float q_camera_maximum_zoom_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactor)
///
/// @param self QCamera*
float q_camera_zoom_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setZoomFactor)
///
/// @param self QCamera*
/// @param factor float
void q_camera_set_zoom_factor(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashMode)
///
/// @param self QCamera*
///
/// @return enum QCamera__FlashMode
int32_t q_camera_flash_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashModeSupported)
///
/// @param self QCamera*
/// @param mode enum QCamera__FlashMode
bool q_camera_is_flash_mode_supported(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashReady)
///
/// @param self QCamera*
bool q_camera_is_flash_ready(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchMode)
///
/// @param self QCamera*
///
/// @return enum QCamera__TorchMode
int32_t q_camera_torch_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isTorchModeSupported)
///
/// @param self QCamera*
/// @param mode enum QCamera__TorchMode
bool q_camera_is_torch_mode_supported(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureMode)
///
/// @param self QCamera*
///
/// @return enum QCamera__ExposureMode
int32_t q_camera_exposure_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isExposureModeSupported)
///
/// @param self QCamera*
/// @param mode enum QCamera__ExposureMode
bool q_camera_is_exposure_mode_supported(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensation)
///
/// @param self QCamera*
float q_camera_exposure_compensation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivity)
///
/// @param self QCamera*
int32_t q_camera_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivity)
///
/// @param self QCamera*
int32_t q_camera_manual_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTime)
///
/// @param self QCamera*
float q_camera_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTime)
///
/// @param self QCamera*
float q_camera_manual_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumIsoSensitivity)
///
/// @param self QCamera*
int32_t q_camera_minimum_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumIsoSensitivity)
///
/// @param self QCamera*
int32_t q_camera_maximum_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumExposureTime)
///
/// @param self QCamera*
float q_camera_minimum_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumExposureTime)
///
/// @param self QCamera*
float q_camera_maximum_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceMode)
///
/// @param self QCamera*
///
/// @return enum QCamera__WhiteBalanceMode
int32_t q_camera_white_balance_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isWhiteBalanceModeSupported)
///
/// @param self QCamera*
/// @param mode enum QCamera__WhiteBalanceMode
bool q_camera_is_white_balance_mode_supported(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperature)
///
/// @param self QCamera*
int32_t q_camera_color_temperature(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setActive)
///
/// @param self QCamera*
/// @param active bool
void q_camera_set_active(void* self, bool active);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#start)
///
/// @param self QCamera*
void q_camera_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#stop)
///
/// @param self QCamera*
void q_camera_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomTo)
///
/// @param self QCamera*
/// @param zoom float
/// @param rate float
void q_camera_zoom_to(void* self, float zoom, float rate);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFlashMode)
///
/// @param self QCamera*
/// @param mode enum QCamera__FlashMode
void q_camera_set_flash_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setTorchMode)
///
/// @param self QCamera*
/// @param mode enum QCamera__TorchMode
void q_camera_set_torch_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureMode)
///
/// @param self QCamera*
/// @param mode enum QCamera__ExposureMode
void q_camera_set_exposure_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureCompensation)
///
/// @param self QCamera*
/// @param ev float
void q_camera_set_exposure_compensation(void* self, float ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualIsoSensitivity)
///
/// @param self QCamera*
/// @param iso int
void q_camera_set_manual_iso_sensitivity(void* self, int iso);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoIsoSensitivity)
///
/// @param self QCamera*
void q_camera_set_auto_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualExposureTime)
///
/// @param self QCamera*
/// @param seconds float
void q_camera_set_manual_exposure_time(void* self, float seconds);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoExposureTime)
///
/// @param self QCamera*
void q_camera_set_auto_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setWhiteBalanceMode)
///
/// @param self QCamera*
/// @param mode enum QCamera__WhiteBalanceMode
void q_camera_set_white_balance_mode(void* self, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setColorTemperature)
///
/// @param self QCamera*
/// @param colorTemperature int
void q_camera_set_color_temperature(void* self, int colorTemperature);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
///
/// @param self QCamera*
/// @param param1 bool
void q_camera_active_changed(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, bool)
void q_camera_on_active_changed(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
///
/// @param self QCamera*
void q_camera_error_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_error_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
///
/// @param self QCamera*
/// @param errorVal enum QCamera__Error
/// @param errorString const char*
void q_camera_error_occurred(void* self, int32_t errorVal, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, enum QCamera__Error, const char*)
void q_camera_on_error_occurred(void* self, void (*callback)(void*, int32_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
///
/// @param self QCamera*
void q_camera_camera_device_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_camera_device_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
///
/// @param self QCamera*
void q_camera_camera_format_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_camera_format_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
///
/// @param self QCamera*
void q_camera_supported_features_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_supported_features_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
///
/// @param self QCamera*
void q_camera_focus_mode_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_focus_mode_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
///
/// @param self QCamera*
/// @param param1 float
void q_camera_zoom_factor_changed(void* self, float param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, float)
void q_camera_on_zoom_factor_changed(void* self, void (*callback)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
///
/// @param self QCamera*
/// @param param1 float
void q_camera_minimum_zoom_factor_changed(void* self, float param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, float)
void q_camera_on_minimum_zoom_factor_changed(void* self, void (*callback)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
///
/// @param self QCamera*
/// @param param1 float
void q_camera_maximum_zoom_factor_changed(void* self, float param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, float)
void q_camera_on_maximum_zoom_factor_changed(void* self, void (*callback)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
///
/// @param self QCamera*
/// @param param1 float
void q_camera_focus_distance_changed(void* self, float param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, float)
void q_camera_on_focus_distance_changed(void* self, void (*callback)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
///
/// @param self QCamera*
void q_camera_focus_point_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_focus_point_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
///
/// @param self QCamera*
void q_camera_custom_focus_point_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_custom_focus_point_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashReady)
///
/// @param self QCamera*
/// @param param1 bool
void q_camera_flash_ready(void* self, bool param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashReady)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, bool)
void q_camera_on_flash_ready(void* self, void (*callback)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
///
/// @param self QCamera*
void q_camera_flash_mode_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_flash_mode_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
///
/// @param self QCamera*
void q_camera_torch_mode_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_torch_mode_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
///
/// @param self QCamera*
/// @param speed float
void q_camera_exposure_time_changed(void* self, float speed);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, float)
void q_camera_on_exposure_time_changed(void* self, void (*callback)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
///
/// @param self QCamera*
/// @param speed float
void q_camera_manual_exposure_time_changed(void* self, float speed);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, float)
void q_camera_on_manual_exposure_time_changed(void* self, void (*callback)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
///
/// @param self QCamera*
/// @param param1 int
void q_camera_iso_sensitivity_changed(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, int)
void q_camera_on_iso_sensitivity_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
///
/// @param self QCamera*
/// @param param1 int
void q_camera_manual_iso_sensitivity_changed(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, int)
void q_camera_on_manual_iso_sensitivity_changed(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
///
/// @param self QCamera*
/// @param param1 float
void q_camera_exposure_compensation_changed(void* self, float param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, float)
void q_camera_on_exposure_compensation_changed(void* self, void (*callback)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
///
/// @param self QCamera*
void q_camera_exposure_mode_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_exposure_mode_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
///
/// @param self QCamera*
void q_camera_white_balance_mode_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_white_balance_mode_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
///
/// @param self QCamera*
void q_camera_color_temperature_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_color_temperature_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
///
/// @param self QCamera*
void q_camera_brightness_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_brightness_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
///
/// @param self QCamera*
void q_camera_contrast_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_contrast_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
///
/// @param self QCamera*
void q_camera_saturation_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_saturation_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
///
/// @param self QCamera*
void q_camera_hue_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_hue_changed(void* self, void (*callback)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_camera_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_camera_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCamera*
const char* q_camera_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QCamera*
/// @param name char*
void q_camera_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QCamera*
bool q_camera_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QCamera*
bool q_camera_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QCamera*
bool q_camera_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QCamera*
bool q_camera_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QCamera*
/// @param b bool
bool q_camera_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QCamera*
QThread* q_camera_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCamera*
/// @param thread QThread*
bool q_camera_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCamera*
/// @param interval int
int32_t q_camera_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCamera*
/// @param id int
void q_camera_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QCamera*
/// @param id enum Qt__TimerId
void q_camera_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QCamera*
libqt_list /* of QObject* */ q_camera_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QCamera*
/// @param parent QObject*
void q_camera_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QCamera*
/// @param filterObj QObject*
void q_camera_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QCamera*
/// @param obj QObject*
void q_camera_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_camera_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCamera*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_camera_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_camera_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_camera_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QCamera*
void q_camera_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QCamera*
void q_camera_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QCamera*
/// @param name const char*
/// @param value QVariant*
bool q_camera_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QCamera*
/// @param name const char*
QVariant* q_camera_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QCamera*
const char** q_camera_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCamera*
QBindingStorage* q_camera_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QCamera*
const QBindingStorage* q_camera_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCamera*
void q_camera_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*)
void q_camera_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QCamera*
QObject* q_camera_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QCamera*
/// @param classname const char*
bool q_camera_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QCamera*
void q_camera_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QCamera*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_camera_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QCamera*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_camera_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_camera_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QCamera*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_camera_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCamera*
/// @param param1 QObject*
void q_camera_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, QObject*)
void q_camera_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
/// @param event QEvent*
bool q_camera_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
/// @param event QEvent*
bool q_camera_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback bool fn(QCamera*, QEvent*)
void q_camera_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
/// @param watched QObject*
/// @param event QEvent*
bool q_camera_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
/// @param watched QObject*
/// @param event QEvent*
bool q_camera_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback bool fn(QCamera*, QObject*, QEvent*)
void q_camera_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
/// @param event QTimerEvent*
void q_camera_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
/// @param event QTimerEvent*
void q_camera_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, QTimerEvent*)
void q_camera_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
/// @param event QChildEvent*
void q_camera_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
/// @param event QChildEvent*
void q_camera_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, QChildEvent*)
void q_camera_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
/// @param event QEvent*
void q_camera_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
/// @param event QEvent*
void q_camera_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, QEvent*)
void q_camera_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
/// @param signal QMetaMethod*
void q_camera_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
/// @param signal QMetaMethod*
void q_camera_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, QMetaMethod*)
void q_camera_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
/// @param signal QMetaMethod*
void q_camera_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
/// @param signal QMetaMethod*
void q_camera_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, QMetaMethod*)
void q_camera_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
QObject* q_camera_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
QObject* q_camera_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback QObject* fn()
void q_camera_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
int32_t q_camera_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
int32_t q_camera_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback int32_t fn()
void q_camera_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
/// @param signal const char*
int32_t q_camera_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
/// @param signal const char*
int32_t q_camera_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback int32_t fn(QCamera*, const char*)
void q_camera_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QCamera*
/// @param signal QMetaMethod*
bool q_camera_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QCamera*
/// @param signal QMetaMethod*
bool q_camera_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QCamera*
/// @param callback bool fn(QCamera*, QMetaMethod*)
void q_camera_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QCamera*
/// @param callback void fn(QCamera*, const char*)
void q_camera_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#dtor.QCamera)
///
/// Delete this object from C++ memory.
///
/// @param self QCamera*
void q_camera_delete(void* self);

/// https://doc.qt.io/qt-6/qcamera.html#types

typedef enum {
    QCAMERA_ERROR_NOERROR = 0,
    QCAMERA_ERROR_CAMERAERROR = 1
} QCamera__Error;

typedef enum {
    QCAMERA_FOCUSMODE_FOCUSMODEAUTO = 0,
    QCAMERA_FOCUSMODE_FOCUSMODEAUTONEAR = 1,
    QCAMERA_FOCUSMODE_FOCUSMODEAUTOFAR = 2,
    QCAMERA_FOCUSMODE_FOCUSMODEHYPERFOCAL = 3,
    QCAMERA_FOCUSMODE_FOCUSMODEINFINITY = 4,
    QCAMERA_FOCUSMODE_FOCUSMODEMANUAL = 5
} QCamera__FocusMode;

typedef enum {
    QCAMERA_FLASHMODE_FLASHOFF = 0,
    QCAMERA_FLASHMODE_FLASHON = 1,
    QCAMERA_FLASHMODE_FLASHAUTO = 2
} QCamera__FlashMode;

typedef enum {
    QCAMERA_TORCHMODE_TORCHOFF = 0,
    QCAMERA_TORCHMODE_TORCHON = 1,
    QCAMERA_TORCHMODE_TORCHAUTO = 2
} QCamera__TorchMode;

typedef enum {
    QCAMERA_EXPOSUREMODE_EXPOSUREAUTO = 0,
    QCAMERA_EXPOSUREMODE_EXPOSUREMANUAL = 1,
    QCAMERA_EXPOSUREMODE_EXPOSUREPORTRAIT = 2,
    QCAMERA_EXPOSUREMODE_EXPOSURENIGHT = 3,
    QCAMERA_EXPOSUREMODE_EXPOSURESPORTS = 4,
    QCAMERA_EXPOSUREMODE_EXPOSURESNOW = 5,
    QCAMERA_EXPOSUREMODE_EXPOSUREBEACH = 6,
    QCAMERA_EXPOSUREMODE_EXPOSUREACTION = 7,
    QCAMERA_EXPOSUREMODE_EXPOSURELANDSCAPE = 8,
    QCAMERA_EXPOSUREMODE_EXPOSURENIGHTPORTRAIT = 9,
    QCAMERA_EXPOSUREMODE_EXPOSURETHEATRE = 10,
    QCAMERA_EXPOSUREMODE_EXPOSURESUNSET = 11,
    QCAMERA_EXPOSUREMODE_EXPOSURESTEADYPHOTO = 12,
    QCAMERA_EXPOSUREMODE_EXPOSUREFIREWORKS = 13,
    QCAMERA_EXPOSUREMODE_EXPOSUREPARTY = 14,
    QCAMERA_EXPOSUREMODE_EXPOSURECANDLELIGHT = 15,
    QCAMERA_EXPOSUREMODE_EXPOSUREBARCODE = 16
} QCamera__ExposureMode;

typedef enum {
    QCAMERA_WHITEBALANCEMODE_WHITEBALANCEAUTO = 0,
    QCAMERA_WHITEBALANCEMODE_WHITEBALANCEMANUAL = 1,
    QCAMERA_WHITEBALANCEMODE_WHITEBALANCESUNLIGHT = 2,
    QCAMERA_WHITEBALANCEMODE_WHITEBALANCECLOUDY = 3,
    QCAMERA_WHITEBALANCEMODE_WHITEBALANCESHADE = 4,
    QCAMERA_WHITEBALANCEMODE_WHITEBALANCETUNGSTEN = 5,
    QCAMERA_WHITEBALANCEMODE_WHITEBALANCEFLUORESCENT = 6,
    QCAMERA_WHITEBALANCEMODE_WHITEBALANCEFLASH = 7,
    QCAMERA_WHITEBALANCEMODE_WHITEBALANCESUNSET = 8
} QCamera__WhiteBalanceMode;

typedef enum {
    QCAMERA_FEATURE_COLORTEMPERATURE = 1,
    QCAMERA_FEATURE_EXPOSURECOMPENSATION = 2,
    QCAMERA_FEATURE_ISOSENSITIVITY = 4,
    QCAMERA_FEATURE_MANUALEXPOSURETIME = 8,
    QCAMERA_FEATURE_CUSTOMFOCUSPOINT = 16,
    QCAMERA_FEATURE_FOCUSDISTANCE = 32
} QCamera__Feature;

#endif
