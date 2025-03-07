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

QCamera* q_camera_new();
QCamera* q_camera_new2(void* cameraDevice);
QCamera* q_camera_new3(int64_t position);
QCamera* q_camera_new4(void* parent);
QCamera* q_camera_new5(void* cameraDevice, void* parent);
QCamera* q_camera_new6(int64_t position, void* parent);
QMetaObject* q_camera_meta_object(void* self);
void* q_camera_metacast(void* self, const char* param1);
int32_t q_camera_metacall(void* self, int64_t param1, int param2, void* param3);
void q_camera_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_camera_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_camera_tr(const char* s);
bool q_camera_is_available(void* self);
bool q_camera_is_active(void* self);
QMediaCaptureSession* q_camera_capture_session(void* self);
QCameraDevice* q_camera_camera_device(void* self);
void q_camera_set_camera_device(void* self, void* cameraDevice);
QCameraFormat* q_camera_camera_format(void* self);
void q_camera_set_camera_format(void* self, void* format);
int64_t q_camera_error(void* self);
const char* q_camera_error_string(void* self);
int64_t q_camera_supported_features(void* self);
int64_t q_camera_focus_mode(void* self);
void q_camera_set_focus_mode(void* self, int64_t mode);
bool q_camera_is_focus_mode_supported(void* self, int64_t mode);
QPointF* q_camera_focus_point(void* self);
QPointF* q_camera_custom_focus_point(void* self);
void q_camera_set_custom_focus_point(void* self, void* point);
void q_camera_set_focus_distance(void* self, float d);
float q_camera_focus_distance(void* self);
float q_camera_minimum_zoom_factor(void* self);
float q_camera_maximum_zoom_factor(void* self);
float q_camera_zoom_factor(void* self);
void q_camera_set_zoom_factor(void* self, float factor);
int64_t q_camera_flash_mode(void* self);
bool q_camera_is_flash_mode_supported(void* self, int64_t mode);
bool q_camera_is_flash_ready(void* self);
int64_t q_camera_torch_mode(void* self);
bool q_camera_is_torch_mode_supported(void* self, int64_t mode);
int64_t q_camera_exposure_mode(void* self);
bool q_camera_is_exposure_mode_supported(void* self, int64_t mode);
float q_camera_exposure_compensation(void* self);
int32_t q_camera_iso_sensitivity(void* self);
int32_t q_camera_manual_iso_sensitivity(void* self);
float q_camera_exposure_time(void* self);
float q_camera_manual_exposure_time(void* self);
int32_t q_camera_minimum_iso_sensitivity(void* self);
int32_t q_camera_maximum_iso_sensitivity(void* self);
float q_camera_minimum_exposure_time(void* self);
float q_camera_maximum_exposure_time(void* self);
int64_t q_camera_white_balance_mode(void* self);
bool q_camera_is_white_balance_mode_supported(void* self, int64_t mode);
int32_t q_camera_color_temperature(void* self);
void q_camera_set_active(void* self, bool active);
void q_camera_start(void* self);
void q_camera_stop(void* self);
void q_camera_zoom_to(void* self, float zoom, float rate);
void q_camera_set_flash_mode(void* self, int64_t mode);
void q_camera_set_torch_mode(void* self, int64_t mode);
void q_camera_set_exposure_mode(void* self, int64_t mode);
void q_camera_set_exposure_compensation(void* self, float ev);
void q_camera_set_manual_iso_sensitivity(void* self, int iso);
void q_camera_set_auto_iso_sensitivity(void* self);
void q_camera_set_manual_exposure_time(void* self, float seconds);
void q_camera_set_auto_exposure_time(void* self);
void q_camera_set_white_balance_mode(void* self, int64_t mode);
void q_camera_set_color_temperature(void* self, int colorTemperature);
void q_camera_active_changed(void* self, bool param1);
void q_camera_on_active_changed(void* self, void (*slot)(void*, bool));
void q_camera_error_changed(void* self);
void q_camera_on_error_changed(void* self, void (*slot)(void*));
void q_camera_error_occurred(void* self, int64_t errorVal, const char* errorString);
void q_camera_on_error_occurred(void* self, void (*slot)(void*, int64_t, const char*));
void q_camera_camera_device_changed(void* self);
void q_camera_on_camera_device_changed(void* self, void (*slot)(void*));
void q_camera_camera_format_changed(void* self);
void q_camera_on_camera_format_changed(void* self, void (*slot)(void*));
void q_camera_supported_features_changed(void* self);
void q_camera_on_supported_features_changed(void* self, void (*slot)(void*));
void q_camera_focus_mode_changed(void* self);
void q_camera_on_focus_mode_changed(void* self, void (*slot)(void*));
void q_camera_zoom_factor_changed(void* self, float param1);
void q_camera_on_zoom_factor_changed(void* self, void (*slot)(void*, float));
void q_camera_minimum_zoom_factor_changed(void* self, float param1);
void q_camera_on_minimum_zoom_factor_changed(void* self, void (*slot)(void*, float));
void q_camera_maximum_zoom_factor_changed(void* self, float param1);
void q_camera_on_maximum_zoom_factor_changed(void* self, void (*slot)(void*, float));
void q_camera_focus_distance_changed(void* self, float param1);
void q_camera_on_focus_distance_changed(void* self, void (*slot)(void*, float));
void q_camera_focus_point_changed(void* self);
void q_camera_on_focus_point_changed(void* self, void (*slot)(void*));
void q_camera_custom_focus_point_changed(void* self);
void q_camera_on_custom_focus_point_changed(void* self, void (*slot)(void*));
void q_camera_flash_ready(void* self, bool param1);
void q_camera_on_flash_ready(void* self, void (*slot)(void*, bool));
void q_camera_flash_mode_changed(void* self);
void q_camera_on_flash_mode_changed(void* self, void (*slot)(void*));
void q_camera_torch_mode_changed(void* self);
void q_camera_on_torch_mode_changed(void* self, void (*slot)(void*));
void q_camera_exposure_time_changed(void* self, float speed);
void q_camera_on_exposure_time_changed(void* self, void (*slot)(void*, float));
void q_camera_manual_exposure_time_changed(void* self, float speed);
void q_camera_on_manual_exposure_time_changed(void* self, void (*slot)(void*, float));
void q_camera_iso_sensitivity_changed(void* self, int param1);
void q_camera_on_iso_sensitivity_changed(void* self, void (*slot)(void*, int));
void q_camera_manual_iso_sensitivity_changed(void* self, int param1);
void q_camera_on_manual_iso_sensitivity_changed(void* self, void (*slot)(void*, int));
void q_camera_exposure_compensation_changed(void* self, float param1);
void q_camera_on_exposure_compensation_changed(void* self, void (*slot)(void*, float));
void q_camera_exposure_mode_changed(void* self);
void q_camera_on_exposure_mode_changed(void* self, void (*slot)(void*));
void q_camera_white_balance_mode_changed(void* self);
void q_camera_on_white_balance_mode_changed(void* self, void (*slot)(void*));
void q_camera_color_temperature_changed(void* self);
void q_camera_on_color_temperature_changed(void* self, void (*slot)(void*));
void q_camera_brightness_changed(void* self);
void q_camera_on_brightness_changed(void* self, void (*slot)(void*));
void q_camera_contrast_changed(void* self);
void q_camera_on_contrast_changed(void* self, void (*slot)(void*));
void q_camera_saturation_changed(void* self);
void q_camera_on_saturation_changed(void* self, void (*slot)(void*));
void q_camera_hue_changed(void* self);
void q_camera_on_hue_changed(void* self, void (*slot)(void*));
const char* q_camera_tr2(const char* s, const char* c);
const char* q_camera_tr3(const char* s, const char* c, int n);
const char* q_camera_object_name(void* self);
void q_camera_set_object_name(void* self, const char* name);
bool q_camera_is_widget_type(void* self);
bool q_camera_is_window_type(void* self);
bool q_camera_is_quick_item_type(void* self);
bool q_camera_signals_blocked(void* self);
bool q_camera_block_signals(void* self, bool b);
QThread* q_camera_thread(void* self);
void q_camera_move_to_thread(void* self, void* thread);
int32_t q_camera_start_timer(void* self, int interval);
void q_camera_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_camera_children(void* self);
void q_camera_set_parent(void* self, void* parent);
void q_camera_install_event_filter(void* self, void* filterObj);
void q_camera_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_camera_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_camera_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_camera_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_camera_disconnect_with_q_meta_object_connection(void* param1);
void q_camera_dump_object_tree(void* self);
void q_camera_dump_object_info(void* self);
bool q_camera_set_property(void* self, const char* name, void* value);
QVariant* q_camera_property(void* self, const char* name);
const char** q_camera_dynamic_property_names(void* self);
QBindingStorage* q_camera_binding_storage(void* self);
QBindingStorage* q_camera_binding_storage2(void* self);
void q_camera_destroyed(void* self);
void q_camera_on_destroyed(void* self, void (*slot)(void*));
QObject* q_camera_parent(void* self);
bool q_camera_inherits(void* self, const char* classname);
void q_camera_delete_later(void* self);
int32_t q_camera_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_camera_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_camera_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_camera_destroyed1(void* self, void* param1);
void q_camera_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_camera_event(void* self, void* event);
bool q_camera_qbase_event(void* self, void* event);
void q_camera_on_event(void* self, bool (*slot)(void*, void*));
bool q_camera_event_filter(void* self, void* watched, void* event);
bool q_camera_qbase_event_filter(void* self, void* watched, void* event);
void q_camera_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_camera_timer_event(void* self, void* event);
void q_camera_qbase_timer_event(void* self, void* event);
void q_camera_on_timer_event(void* self, void (*slot)(void*, void*));
void q_camera_child_event(void* self, void* event);
void q_camera_qbase_child_event(void* self, void* event);
void q_camera_on_child_event(void* self, void (*slot)(void*, void*));
void q_camera_custom_event(void* self, void* event);
void q_camera_qbase_custom_event(void* self, void* event);
void q_camera_on_custom_event(void* self, void (*slot)(void*, void*));
void q_camera_connect_notify(void* self, void* signal);
void q_camera_qbase_connect_notify(void* self, void* signal);
void q_camera_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_camera_disconnect_notify(void* self, void* signal);
void q_camera_qbase_disconnect_notify(void* self, void* signal);
void q_camera_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_camera_sender(void* self);
QObject* q_camera_qbase_sender(void* self);
void q_camera_on_sender(void* self, QObject* (*slot)());
int32_t q_camera_sender_signal_index(void* self);
int32_t q_camera_qbase_sender_signal_index(void* self);
void q_camera_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_camera_receivers(void* self, const char* signal);
int32_t q_camera_qbase_receivers(void* self, const char* signal);
void q_camera_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_camera_is_signal_connected(void* self, void* signal);
bool q_camera_qbase_is_signal_connected(void* self, void* signal);
void q_camera_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
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
