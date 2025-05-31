#include "libqcameradevice.hpp"
#include "../libqevent.hpp"
#include "libqmediacapturesession.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpoint.hpp"
#include <string.h>
#include "../libqcoreevent.hpp"
#include "libqcamera.hpp"
#include "libqcamera.h"

QCamera* q_camera_new() {
    return QCamera_new();
}

QCamera* q_camera_new2(void* cameraDevice) {
    return QCamera_new2((QCameraDevice*)cameraDevice);
}

QCamera* q_camera_new3(int64_t position) {
    return QCamera_new3(position);
}

QCamera* q_camera_new4(void* parent) {
    return QCamera_new4((QObject*)parent);
}

QCamera* q_camera_new5(void* cameraDevice, void* parent) {
    return QCamera_new5((QCameraDevice*)cameraDevice, (QObject*)parent);
}

QCamera* q_camera_new6(int64_t position, void* parent) {
    return QCamera_new6(position, (QObject*)parent);
}

const QMetaObject* q_camera_meta_object(void* self) {
    return QCamera_MetaObject((QCamera*)self);
}

void* q_camera_metacast(void* self, const char* param1) {
    return QCamera_Metacast((QCamera*)self, param1);
}

int32_t q_camera_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCamera_Metacall((QCamera*)self, param1, param2, param3);
}

void q_camera_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCamera_OnMetacall((QCamera*)self, (intptr_t)slot);
}

int32_t q_camera_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCamera_QBaseMetacall((QCamera*)self, param1, param2, param3);
}

const char* q_camera_tr(const char* s) {
    libqt_string _str = QCamera_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_camera_is_available(void* self) {
    return QCamera_IsAvailable((QCamera*)self);
}

bool q_camera_is_active(void* self) {
    return QCamera_IsActive((QCamera*)self);
}

QMediaCaptureSession* q_camera_capture_session(void* self) {
    return QCamera_CaptureSession((QCamera*)self);
}

QCameraDevice* q_camera_camera_device(void* self) {
    return QCamera_CameraDevice((QCamera*)self);
}

void q_camera_set_camera_device(void* self, void* cameraDevice) {
    QCamera_SetCameraDevice((QCamera*)self, (QCameraDevice*)cameraDevice);
}

QCameraFormat* q_camera_camera_format(void* self) {
    return QCamera_CameraFormat((QCamera*)self);
}

void q_camera_set_camera_format(void* self, void* format) {
    QCamera_SetCameraFormat((QCamera*)self, (QCameraFormat*)format);
}

int64_t q_camera_error(void* self) {
    return QCamera_Error((QCamera*)self);
}

const char* q_camera_error_string(void* self) {
    libqt_string _str = QCamera_ErrorString((QCamera*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_camera_supported_features(void* self) {
    return QCamera_SupportedFeatures((QCamera*)self);
}

int64_t q_camera_focus_mode(void* self) {
    return QCamera_FocusMode((QCamera*)self);
}

void q_camera_set_focus_mode(void* self, int64_t mode) {
    QCamera_SetFocusMode((QCamera*)self, mode);
}

bool q_camera_is_focus_mode_supported(void* self, int64_t mode) {
    return QCamera_IsFocusModeSupported((QCamera*)self, mode);
}

QPointF* q_camera_focus_point(void* self) {
    return QCamera_FocusPoint((QCamera*)self);
}

QPointF* q_camera_custom_focus_point(void* self) {
    return QCamera_CustomFocusPoint((QCamera*)self);
}

void q_camera_set_custom_focus_point(void* self, void* point) {
    QCamera_SetCustomFocusPoint((QCamera*)self, (QPointF*)point);
}

void q_camera_set_focus_distance(void* self, float d) {
    QCamera_SetFocusDistance((QCamera*)self, d);
}

float q_camera_focus_distance(void* self) {
    return QCamera_FocusDistance((QCamera*)self);
}

float q_camera_minimum_zoom_factor(void* self) {
    return QCamera_MinimumZoomFactor((QCamera*)self);
}

float q_camera_maximum_zoom_factor(void* self) {
    return QCamera_MaximumZoomFactor((QCamera*)self);
}

float q_camera_zoom_factor(void* self) {
    return QCamera_ZoomFactor((QCamera*)self);
}

void q_camera_set_zoom_factor(void* self, float factor) {
    QCamera_SetZoomFactor((QCamera*)self, factor);
}

int64_t q_camera_flash_mode(void* self) {
    return QCamera_FlashMode((QCamera*)self);
}

bool q_camera_is_flash_mode_supported(void* self, int64_t mode) {
    return QCamera_IsFlashModeSupported((QCamera*)self, mode);
}

bool q_camera_is_flash_ready(void* self) {
    return QCamera_IsFlashReady((QCamera*)self);
}

int64_t q_camera_torch_mode(void* self) {
    return QCamera_TorchMode((QCamera*)self);
}

bool q_camera_is_torch_mode_supported(void* self, int64_t mode) {
    return QCamera_IsTorchModeSupported((QCamera*)self, mode);
}

int64_t q_camera_exposure_mode(void* self) {
    return QCamera_ExposureMode((QCamera*)self);
}

bool q_camera_is_exposure_mode_supported(void* self, int64_t mode) {
    return QCamera_IsExposureModeSupported((QCamera*)self, mode);
}

float q_camera_exposure_compensation(void* self) {
    return QCamera_ExposureCompensation((QCamera*)self);
}

int32_t q_camera_iso_sensitivity(void* self) {
    return QCamera_IsoSensitivity((QCamera*)self);
}

int32_t q_camera_manual_iso_sensitivity(void* self) {
    return QCamera_ManualIsoSensitivity((QCamera*)self);
}

float q_camera_exposure_time(void* self) {
    return QCamera_ExposureTime((QCamera*)self);
}

float q_camera_manual_exposure_time(void* self) {
    return QCamera_ManualExposureTime((QCamera*)self);
}

int32_t q_camera_minimum_iso_sensitivity(void* self) {
    return QCamera_MinimumIsoSensitivity((QCamera*)self);
}

int32_t q_camera_maximum_iso_sensitivity(void* self) {
    return QCamera_MaximumIsoSensitivity((QCamera*)self);
}

float q_camera_minimum_exposure_time(void* self) {
    return QCamera_MinimumExposureTime((QCamera*)self);
}

float q_camera_maximum_exposure_time(void* self) {
    return QCamera_MaximumExposureTime((QCamera*)self);
}

int64_t q_camera_white_balance_mode(void* self) {
    return QCamera_WhiteBalanceMode((QCamera*)self);
}

bool q_camera_is_white_balance_mode_supported(void* self, int64_t mode) {
    return QCamera_IsWhiteBalanceModeSupported((QCamera*)self, mode);
}

int32_t q_camera_color_temperature(void* self) {
    return QCamera_ColorTemperature((QCamera*)self);
}

void q_camera_set_active(void* self, bool active) {
    QCamera_SetActive((QCamera*)self, active);
}

void q_camera_start(void* self) {
    QCamera_Start((QCamera*)self);
}

void q_camera_stop(void* self) {
    QCamera_Stop((QCamera*)self);
}

void q_camera_zoom_to(void* self, float zoom, float rate) {
    QCamera_ZoomTo((QCamera*)self, zoom, rate);
}

void q_camera_set_flash_mode(void* self, int64_t mode) {
    QCamera_SetFlashMode((QCamera*)self, mode);
}

void q_camera_set_torch_mode(void* self, int64_t mode) {
    QCamera_SetTorchMode((QCamera*)self, mode);
}

void q_camera_set_exposure_mode(void* self, int64_t mode) {
    QCamera_SetExposureMode((QCamera*)self, mode);
}

void q_camera_set_exposure_compensation(void* self, float ev) {
    QCamera_SetExposureCompensation((QCamera*)self, ev);
}

void q_camera_set_manual_iso_sensitivity(void* self, int iso) {
    QCamera_SetManualIsoSensitivity((QCamera*)self, iso);
}

void q_camera_set_auto_iso_sensitivity(void* self) {
    QCamera_SetAutoIsoSensitivity((QCamera*)self);
}

void q_camera_set_manual_exposure_time(void* self, float seconds) {
    QCamera_SetManualExposureTime((QCamera*)self, seconds);
}

void q_camera_set_auto_exposure_time(void* self) {
    QCamera_SetAutoExposureTime((QCamera*)self);
}

void q_camera_set_white_balance_mode(void* self, int64_t mode) {
    QCamera_SetWhiteBalanceMode((QCamera*)self, mode);
}

void q_camera_set_color_temperature(void* self, int colorTemperature) {
    QCamera_SetColorTemperature((QCamera*)self, colorTemperature);
}

void q_camera_active_changed(void* self, bool param1) {
    QCamera_ActiveChanged((QCamera*)self, param1);
}

void q_camera_on_active_changed(void* self, void (*slot)(void*, bool)) {
    QCamera_Connect_ActiveChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_error_changed(void* self) {
    QCamera_ErrorChanged((QCamera*)self);
}

void q_camera_on_error_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_ErrorChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_error_occurred(void* self, int64_t errorVal, const char* errorString) {
    QCamera_ErrorOccurred((QCamera*)self, errorVal, qstring(errorString));
}

void q_camera_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*)) {
    QCamera_Connect_ErrorOccurred((QCamera*)self, (intptr_t)slot);
}

void q_camera_camera_device_changed(void* self) {
    QCamera_CameraDeviceChanged((QCamera*)self);
}

void q_camera_on_camera_device_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_CameraDeviceChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_camera_format_changed(void* self) {
    QCamera_CameraFormatChanged((QCamera*)self);
}

void q_camera_on_camera_format_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_CameraFormatChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_supported_features_changed(void* self) {
    QCamera_SupportedFeaturesChanged((QCamera*)self);
}

void q_camera_on_supported_features_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_SupportedFeaturesChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_focus_mode_changed(void* self) {
    QCamera_FocusModeChanged((QCamera*)self);
}

void q_camera_on_focus_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_FocusModeChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_zoom_factor_changed(void* self, float param1) {
    QCamera_ZoomFactorChanged((QCamera*)self, param1);
}

void q_camera_on_zoom_factor_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_ZoomFactorChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_minimum_zoom_factor_changed(void* self, float param1) {
    QCamera_MinimumZoomFactorChanged((QCamera*)self, param1);
}

void q_camera_on_minimum_zoom_factor_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_MinimumZoomFactorChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_maximum_zoom_factor_changed(void* self, float param1) {
    QCamera_MaximumZoomFactorChanged((QCamera*)self, param1);
}

void q_camera_on_maximum_zoom_factor_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_MaximumZoomFactorChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_focus_distance_changed(void* self, float param1) {
    QCamera_FocusDistanceChanged((QCamera*)self, param1);
}

void q_camera_on_focus_distance_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_FocusDistanceChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_focus_point_changed(void* self) {
    QCamera_FocusPointChanged((QCamera*)self);
}

void q_camera_on_focus_point_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_FocusPointChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_custom_focus_point_changed(void* self) {
    QCamera_CustomFocusPointChanged((QCamera*)self);
}

void q_camera_on_custom_focus_point_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_CustomFocusPointChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_flash_ready(void* self, bool param1) {
    QCamera_FlashReady((QCamera*)self, param1);
}

void q_camera_on_flash_ready(void* self, void (*slot)(void*, bool)) {
    QCamera_Connect_FlashReady((QCamera*)self, (intptr_t)slot);
}

void q_camera_flash_mode_changed(void* self) {
    QCamera_FlashModeChanged((QCamera*)self);
}

void q_camera_on_flash_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_FlashModeChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_torch_mode_changed(void* self) {
    QCamera_TorchModeChanged((QCamera*)self);
}

void q_camera_on_torch_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_TorchModeChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_exposure_time_changed(void* self, float speed) {
    QCamera_ExposureTimeChanged((QCamera*)self, speed);
}

void q_camera_on_exposure_time_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_ExposureTimeChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_manual_exposure_time_changed(void* self, float speed) {
    QCamera_ManualExposureTimeChanged((QCamera*)self, speed);
}

void q_camera_on_manual_exposure_time_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_ManualExposureTimeChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_iso_sensitivity_changed(void* self, int param1) {
    QCamera_IsoSensitivityChanged((QCamera*)self, param1);
}

void q_camera_on_iso_sensitivity_changed(void* self, void (*slot)(void*, int)) {
    QCamera_Connect_IsoSensitivityChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_manual_iso_sensitivity_changed(void* self, int param1) {
    QCamera_ManualIsoSensitivityChanged((QCamera*)self, param1);
}

void q_camera_on_manual_iso_sensitivity_changed(void* self, void (*slot)(void*, int)) {
    QCamera_Connect_ManualIsoSensitivityChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_exposure_compensation_changed(void* self, float param1) {
    QCamera_ExposureCompensationChanged((QCamera*)self, param1);
}

void q_camera_on_exposure_compensation_changed(void* self, void (*slot)(void*, float)) {
    QCamera_Connect_ExposureCompensationChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_exposure_mode_changed(void* self) {
    QCamera_ExposureModeChanged((QCamera*)self);
}

void q_camera_on_exposure_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_ExposureModeChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_white_balance_mode_changed(void* self) {
    QCamera_WhiteBalanceModeChanged((QCamera*)self);
}

void q_camera_on_white_balance_mode_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_WhiteBalanceModeChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_color_temperature_changed(void* self) {
    QCamera_ColorTemperatureChanged((QCamera*)self);
}

void q_camera_on_color_temperature_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_ColorTemperatureChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_brightness_changed(void* self) {
    QCamera_BrightnessChanged((QCamera*)self);
}

void q_camera_on_brightness_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_BrightnessChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_contrast_changed(void* self) {
    QCamera_ContrastChanged((QCamera*)self);
}

void q_camera_on_contrast_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_ContrastChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_saturation_changed(void* self) {
    QCamera_SaturationChanged((QCamera*)self);
}

void q_camera_on_saturation_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_SaturationChanged((QCamera*)self, (intptr_t)slot);
}

void q_camera_hue_changed(void* self) {
    QCamera_HueChanged((QCamera*)self);
}

void q_camera_on_hue_changed(void* self, void (*slot)(void*)) {
    QCamera_Connect_HueChanged((QCamera*)self, (intptr_t)slot);
}

const char* q_camera_tr2(const char* s, const char* c) {
    libqt_string _str = QCamera_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_camera_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCamera_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_camera_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_camera_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_camera_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_camera_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_camera_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_camera_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_camera_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_camera_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_camera_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_camera_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_camera_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_camera_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_camera_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_camera_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_camera_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_camera_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_camera_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_camera_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_camera_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_camera_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_camera_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_camera_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_camera_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

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

QBindingStorage* q_camera_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_camera_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_camera_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_camera_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_camera_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_camera_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_camera_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_camera_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_camera_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_camera_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_camera_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_camera_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_camera_event(void* self, void* event) {
    return QCamera_Event((QCamera*)self, (QEvent*)event);
}

bool q_camera_qbase_event(void* self, void* event) {
    return QCamera_QBaseEvent((QCamera*)self, (QEvent*)event);
}

void q_camera_on_event(void* self, bool (*slot)(void*, void*)) {
    QCamera_OnEvent((QCamera*)self, (intptr_t)slot);
}

bool q_camera_event_filter(void* self, void* watched, void* event) {
    return QCamera_EventFilter((QCamera*)self, (QObject*)watched, (QEvent*)event);
}

bool q_camera_qbase_event_filter(void* self, void* watched, void* event) {
    return QCamera_QBaseEventFilter((QCamera*)self, (QObject*)watched, (QEvent*)event);
}

void q_camera_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCamera_OnEventFilter((QCamera*)self, (intptr_t)slot);
}

void q_camera_timer_event(void* self, void* event) {
    QCamera_TimerEvent((QCamera*)self, (QTimerEvent*)event);
}

void q_camera_qbase_timer_event(void* self, void* event) {
    QCamera_QBaseTimerEvent((QCamera*)self, (QTimerEvent*)event);
}

void q_camera_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCamera_OnTimerEvent((QCamera*)self, (intptr_t)slot);
}

void q_camera_child_event(void* self, void* event) {
    QCamera_ChildEvent((QCamera*)self, (QChildEvent*)event);
}

void q_camera_qbase_child_event(void* self, void* event) {
    QCamera_QBaseChildEvent((QCamera*)self, (QChildEvent*)event);
}

void q_camera_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCamera_OnChildEvent((QCamera*)self, (intptr_t)slot);
}

void q_camera_custom_event(void* self, void* event) {
    QCamera_CustomEvent((QCamera*)self, (QEvent*)event);
}

void q_camera_qbase_custom_event(void* self, void* event) {
    QCamera_QBaseCustomEvent((QCamera*)self, (QEvent*)event);
}

void q_camera_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCamera_OnCustomEvent((QCamera*)self, (intptr_t)slot);
}

void q_camera_connect_notify(void* self, void* signal) {
    QCamera_ConnectNotify((QCamera*)self, (QMetaMethod*)signal);
}

void q_camera_qbase_connect_notify(void* self, void* signal) {
    QCamera_QBaseConnectNotify((QCamera*)self, (QMetaMethod*)signal);
}

void q_camera_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCamera_OnConnectNotify((QCamera*)self, (intptr_t)slot);
}

void q_camera_disconnect_notify(void* self, void* signal) {
    QCamera_DisconnectNotify((QCamera*)self, (QMetaMethod*)signal);
}

void q_camera_qbase_disconnect_notify(void* self, void* signal) {
    QCamera_QBaseDisconnectNotify((QCamera*)self, (QMetaMethod*)signal);
}

void q_camera_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCamera_OnDisconnectNotify((QCamera*)self, (intptr_t)slot);
}

QObject* q_camera_sender(void* self) {
    return QCamera_Sender((QCamera*)self);
}

QObject* q_camera_qbase_sender(void* self) {
    return QCamera_QBaseSender((QCamera*)self);
}

void q_camera_on_sender(void* self, QObject* (*slot)()) {
    QCamera_OnSender((QCamera*)self, (intptr_t)slot);
}

int32_t q_camera_sender_signal_index(void* self) {
    return QCamera_SenderSignalIndex((QCamera*)self);
}

int32_t q_camera_qbase_sender_signal_index(void* self) {
    return QCamera_QBaseSenderSignalIndex((QCamera*)self);
}

void q_camera_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCamera_OnSenderSignalIndex((QCamera*)self, (intptr_t)slot);
}

int32_t q_camera_receivers(void* self, const char* signal) {
    return QCamera_Receivers((QCamera*)self, signal);
}

int32_t q_camera_qbase_receivers(void* self, const char* signal) {
    return QCamera_QBaseReceivers((QCamera*)self, signal);
}

void q_camera_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCamera_OnReceivers((QCamera*)self, (intptr_t)slot);
}

bool q_camera_is_signal_connected(void* self, void* signal) {
    return QCamera_IsSignalConnected((QCamera*)self, (QMetaMethod*)signal);
}

bool q_camera_qbase_is_signal_connected(void* self, void* signal) {
    return QCamera_QBaseIsSignalConnected((QCamera*)self, (QMetaMethod*)signal);
}

void q_camera_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCamera_OnIsSignalConnected((QCamera*)self, (intptr_t)slot);
}

void q_camera_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_camera_delete(void* self) {
    QCamera_Delete((QCamera*)(self));
}
