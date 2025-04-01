#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQCAMERA_H
#define SRC_MULTIMEDIAQT6C_LIBQCAMERA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "libqcameradevice.h"
#include "../libqevent.h"
#include "libqmediacapturesession.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqpoint.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"

/// https://doc.qt.io/qt-6/qcamera.html

/// q_camera_new constructs a new QCamera object.
///
///
QCamera* q_camera_new();

/// q_camera_new2 constructs a new QCamera object.
///
/// ``` QCameraDevice* cameraDevice ```
QCamera* q_camera_new2(void* cameraDevice);

/// q_camera_new3 constructs a new QCamera object.
///
/// ``` enum QCameraDevice__Position position ```
QCamera* q_camera_new3(int64_t position);

/// q_camera_new4 constructs a new QCamera object.
///
/// ``` QObject* parent ```
QCamera* q_camera_new4(void* parent);

/// q_camera_new5 constructs a new QCamera object.
///
/// ``` QCameraDevice* cameraDevice, QObject* parent ```
QCamera* q_camera_new5(void* cameraDevice, void* parent);

/// q_camera_new6 constructs a new QCamera object.
///
/// ``` enum QCameraDevice__Position position, QObject* parent ```
QCamera* q_camera_new6(int64_t position, void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCamera* self ```
QMetaObject* q_camera_meta_object(void* self);

/// ``` QCamera* self, const char* param1 ```
void* q_camera_metacast(void* self, const char* param1);

/// ``` QCamera* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_camera_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QCamera* self, int32_t (*slot)(QCamera*, enum QMetaObject__Call, int, void*) ```
void q_camera_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QCamera* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_camera_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_camera_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isAvailable)
///
/// ``` QCamera* self ```
bool q_camera_is_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isActive)
///
/// ``` QCamera* self ```
bool q_camera_is_active(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#captureSession)
///
/// ``` QCamera* self ```
QMediaCaptureSession* q_camera_capture_session(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDevice)
///
/// ``` QCamera* self ```
QCameraDevice* q_camera_camera_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraDevice)
///
/// ``` QCamera* self, QCameraDevice* cameraDevice ```
void q_camera_set_camera_device(void* self, void* cameraDevice);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormat)
///
/// ``` QCamera* self ```
QCameraFormat* q_camera_camera_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCameraFormat)
///
/// ``` QCamera* self, QCameraFormat* format ```
void q_camera_set_camera_format(void* self, void* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#error)
///
/// ``` QCamera* self ```
int64_t q_camera_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorString)
///
/// ``` QCamera* self ```
const char* q_camera_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeatures)
///
/// ``` QCamera* self ```
int64_t q_camera_supported_features(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusMode)
///
/// ``` QCamera* self ```
int64_t q_camera_focus_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusMode)
///
/// ``` QCamera* self, enum QCamera__FocusMode mode ```
void q_camera_set_focus_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFocusModeSupported)
///
/// ``` QCamera* self, enum QCamera__FocusMode mode ```
bool q_camera_is_focus_mode_supported(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPoint)
///
/// ``` QCamera* self ```
QPointF* q_camera_focus_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPoint)
///
/// ``` QCamera* self ```
QPointF* q_camera_custom_focus_point(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setCustomFocusPoint)
///
/// ``` QCamera* self, QPointF* point ```
void q_camera_set_custom_focus_point(void* self, void* point);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFocusDistance)
///
/// ``` QCamera* self, float d ```
void q_camera_set_focus_distance(void* self, float d);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistance)
///
/// ``` QCamera* self ```
float q_camera_focus_distance(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactor)
///
/// ``` QCamera* self ```
float q_camera_minimum_zoom_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactor)
///
/// ``` QCamera* self ```
float q_camera_maximum_zoom_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactor)
///
/// ``` QCamera* self ```
float q_camera_zoom_factor(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setZoomFactor)
///
/// ``` QCamera* self, float factor ```
void q_camera_set_zoom_factor(void* self, float factor);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashMode)
///
/// ``` QCamera* self ```
int64_t q_camera_flash_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashModeSupported)
///
/// ``` QCamera* self, enum QCamera__FlashMode mode ```
bool q_camera_is_flash_mode_supported(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isFlashReady)
///
/// ``` QCamera* self ```
bool q_camera_is_flash_ready(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchMode)
///
/// ``` QCamera* self ```
int64_t q_camera_torch_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isTorchModeSupported)
///
/// ``` QCamera* self, enum QCamera__TorchMode mode ```
bool q_camera_is_torch_mode_supported(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureMode)
///
/// ``` QCamera* self ```
int64_t q_camera_exposure_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isExposureModeSupported)
///
/// ``` QCamera* self, enum QCamera__ExposureMode mode ```
bool q_camera_is_exposure_mode_supported(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensation)
///
/// ``` QCamera* self ```
float q_camera_exposure_compensation(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivity)
///
/// ``` QCamera* self ```
int32_t q_camera_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivity)
///
/// ``` QCamera* self ```
int32_t q_camera_manual_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTime)
///
/// ``` QCamera* self ```
float q_camera_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTime)
///
/// ``` QCamera* self ```
float q_camera_manual_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumIsoSensitivity)
///
/// ``` QCamera* self ```
int32_t q_camera_minimum_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumIsoSensitivity)
///
/// ``` QCamera* self ```
int32_t q_camera_maximum_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumExposureTime)
///
/// ``` QCamera* self ```
float q_camera_minimum_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumExposureTime)
///
/// ``` QCamera* self ```
float q_camera_maximum_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceMode)
///
/// ``` QCamera* self ```
int64_t q_camera_white_balance_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isWhiteBalanceModeSupported)
///
/// ``` QCamera* self, enum QCamera__WhiteBalanceMode mode ```
bool q_camera_is_white_balance_mode_supported(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperature)
///
/// ``` QCamera* self ```
int32_t q_camera_color_temperature(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setActive)
///
/// ``` QCamera* self, bool active ```
void q_camera_set_active(void* self, bool active);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#start)
///
/// ``` QCamera* self ```
void q_camera_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#stop)
///
/// ``` QCamera* self ```
void q_camera_stop(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomTo)
///
/// ``` QCamera* self, float zoom, float rate ```
void q_camera_zoom_to(void* self, float zoom, float rate);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setFlashMode)
///
/// ``` QCamera* self, enum QCamera__FlashMode mode ```
void q_camera_set_flash_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setTorchMode)
///
/// ``` QCamera* self, enum QCamera__TorchMode mode ```
void q_camera_set_torch_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureMode)
///
/// ``` QCamera* self, enum QCamera__ExposureMode mode ```
void q_camera_set_exposure_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setExposureCompensation)
///
/// ``` QCamera* self, float ev ```
void q_camera_set_exposure_compensation(void* self, float ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualIsoSensitivity)
///
/// ``` QCamera* self, int iso ```
void q_camera_set_manual_iso_sensitivity(void* self, int iso);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoIsoSensitivity)
///
/// ``` QCamera* self ```
void q_camera_set_auto_iso_sensitivity(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setManualExposureTime)
///
/// ``` QCamera* self, float seconds ```
void q_camera_set_manual_exposure_time(void* self, float seconds);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setAutoExposureTime)
///
/// ``` QCamera* self ```
void q_camera_set_auto_exposure_time(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setWhiteBalanceMode)
///
/// ``` QCamera* self, enum QCamera__WhiteBalanceMode mode ```
void q_camera_set_white_balance_mode(void* self, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#setColorTemperature)
///
/// ``` QCamera* self, int colorTemperature ```
void q_camera_set_color_temperature(void* self, int colorTemperature);

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#activeChanged)
///
/// ``` QCamera* self, bool param1 ```
void q_camera_active_changed(void* self, bool param1);

/// ``` QCamera* self, void (*slot)(QCamera*, bool) ```
void q_camera_on_active_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorChanged)
///
/// ``` QCamera* self ```
void q_camera_error_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_error_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#errorOccurred)
///
/// ``` QCamera* self, enum QCamera__Error errorVal, const char* errorString ```
void q_camera_error_occurred(void* self, int64_t errorVal, const char* errorString);

/// ``` QCamera* self, void (*slot)(QCamera*, enum QCamera__Error, const char*) ```
void q_camera_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraDeviceChanged)
///
/// ``` QCamera* self ```
void q_camera_camera_device_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_camera_device_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#cameraFormatChanged)
///
/// ``` QCamera* self ```
void q_camera_camera_format_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_camera_format_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#supportedFeaturesChanged)
///
/// ``` QCamera* self ```
void q_camera_supported_features_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_supported_features_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusModeChanged)
///
/// ``` QCamera* self ```
void q_camera_focus_mode_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_focus_mode_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#zoomFactorChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_zoom_factor_changed(void* self, float param1);

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_zoom_factor_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#minimumZoomFactorChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_minimum_zoom_factor_changed(void* self, float param1);

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_minimum_zoom_factor_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#maximumZoomFactorChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_maximum_zoom_factor_changed(void* self, float param1);

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_maximum_zoom_factor_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusDistanceChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_focus_distance_changed(void* self, float param1);

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_focus_distance_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#focusPointChanged)
///
/// ``` QCamera* self ```
void q_camera_focus_point_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_focus_point_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#customFocusPointChanged)
///
/// ``` QCamera* self ```
void q_camera_custom_focus_point_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_custom_focus_point_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashReady)
///
/// ``` QCamera* self, bool param1 ```
void q_camera_flash_ready(void* self, bool param1);

/// ``` QCamera* self, void (*slot)(QCamera*, bool) ```
void q_camera_on_flash_ready(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#flashModeChanged)
///
/// ``` QCamera* self ```
void q_camera_flash_mode_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_flash_mode_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#torchModeChanged)
///
/// ``` QCamera* self ```
void q_camera_torch_mode_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_torch_mode_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureTimeChanged)
///
/// ``` QCamera* self, float speed ```
void q_camera_exposure_time_changed(void* self, float speed);

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_exposure_time_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualExposureTimeChanged)
///
/// ``` QCamera* self, float speed ```
void q_camera_manual_exposure_time_changed(void* self, float speed);

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_manual_exposure_time_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#isoSensitivityChanged)
///
/// ``` QCamera* self, int param1 ```
void q_camera_iso_sensitivity_changed(void* self, int param1);

/// ``` QCamera* self, void (*slot)(QCamera*, int) ```
void q_camera_on_iso_sensitivity_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#manualIsoSensitivityChanged)
///
/// ``` QCamera* self, int param1 ```
void q_camera_manual_iso_sensitivity_changed(void* self, int param1);

/// ``` QCamera* self, void (*slot)(QCamera*, int) ```
void q_camera_on_manual_iso_sensitivity_changed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureCompensationChanged)
///
/// ``` QCamera* self, float param1 ```
void q_camera_exposure_compensation_changed(void* self, float param1);

/// ``` QCamera* self, void (*slot)(QCamera*, float) ```
void q_camera_on_exposure_compensation_changed(void* self, void (*slot)(void*, float));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#exposureModeChanged)
///
/// ``` QCamera* self ```
void q_camera_exposure_mode_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_exposure_mode_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#whiteBalanceModeChanged)
///
/// ``` QCamera* self ```
void q_camera_white_balance_mode_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_white_balance_mode_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#colorTemperatureChanged)
///
/// ``` QCamera* self ```
void q_camera_color_temperature_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_color_temperature_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#brightnessChanged)
///
/// ``` QCamera* self ```
void q_camera_brightness_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_brightness_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#contrastChanged)
///
/// ``` QCamera* self ```
void q_camera_contrast_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_contrast_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#saturationChanged)
///
/// ``` QCamera* self ```
void q_camera_saturation_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_saturation_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qcamera.html#hueChanged)
///
/// ``` QCamera* self ```
void q_camera_hue_changed(void* self);

/// ``` QCamera* self, void (*slot)(QCamera*) ```
void q_camera_on_hue_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_camera_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_camera_tr3(const char* s, const char* c, int n);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCamera* self ```
const char* q_camera_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCamera* self, const char* name ```
void q_camera_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCamera* self ```
bool q_camera_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCamera* self ```
bool q_camera_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCamera* self ```
bool q_camera_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCamera* self ```
bool q_camera_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCamera* self, bool b ```
bool q_camera_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCamera* self ```
QThread* q_camera_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCamera* self, QThread* thread ```
void q_camera_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCamera* self, int interval ```
int32_t q_camera_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCamera* self, int id ```
void q_camera_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCamera* self ```
libqt_list /* of QObject* */ q_camera_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCamera* self, QObject* parent ```
void q_camera_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCamera* self, QObject* filterObj ```
void q_camera_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCamera* self, QObject* obj ```
void q_camera_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_camera_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCamera* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_camera_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_camera_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_camera_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCamera* self ```
void q_camera_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCamera* self ```
void q_camera_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCamera* self, const char* name, QVariant* value ```
bool q_camera_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCamera* self, const char* name ```
QVariant* q_camera_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCamera* self ```
const char** q_camera_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCamera* self ```
QBindingStorage* q_camera_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCamera* self ```
QBindingStorage* q_camera_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCamera* self ```
void q_camera_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QCamera* self, void (*slot)(QObject*) ```
void q_camera_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCamera* self ```
QObject* q_camera_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCamera* self, const char* classname ```
bool q_camera_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCamera* self ```
void q_camera_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCamera* self, int interval, enum Qt__TimerType timerType ```
int32_t q_camera_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_camera_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCamera* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_camera_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCamera* self, QObject* param1 ```
void q_camera_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QCamera* self, void (*slot)(QObject*, QObject*) ```
void q_camera_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QEvent* event ```
bool q_camera_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QEvent* event ```
bool q_camera_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, bool (*slot)(QCamera*, QEvent*) ```
void q_camera_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QObject* watched, QEvent* event ```
bool q_camera_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QObject* watched, QEvent* event ```
bool q_camera_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, bool (*slot)(QCamera*, QObject*, QEvent*) ```
void q_camera_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QTimerEvent* event ```
void q_camera_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QTimerEvent* event ```
void q_camera_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QTimerEvent*) ```
void q_camera_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QChildEvent* event ```
void q_camera_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QChildEvent* event ```
void q_camera_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QChildEvent*) ```
void q_camera_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QEvent* event ```
void q_camera_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QEvent* event ```
void q_camera_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QEvent*) ```
void q_camera_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
void q_camera_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
void q_camera_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QMetaMethod*) ```
void q_camera_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
void q_camera_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
void q_camera_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, void (*slot)(QCamera*, QMetaMethod*) ```
void q_camera_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self ```
QObject* q_camera_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self ```
QObject* q_camera_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, QObject* (*slot)() ```
void q_camera_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self ```
int32_t q_camera_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self ```
int32_t q_camera_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, int32_t (*slot)() ```
void q_camera_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, const char* signal ```
int32_t q_camera_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, const char* signal ```
int32_t q_camera_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, int32_t (*slot)(QCamera*, const char*) ```
void q_camera_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
bool q_camera_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCamera* self, QMetaMethod* signal ```
bool q_camera_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCamera* self, bool (*slot)(QCamera*, QMetaMethod*) ```
void q_camera_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QCamera* self ```
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
