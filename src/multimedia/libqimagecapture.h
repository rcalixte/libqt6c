#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQIMAGECAPTURE_H
#define SRC_MULTIMEDIAQT6C_LIBQIMAGECAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqanystringview.h"
#include "../libqbindingstorage.h"
#include "../libqevent.h"
#include "../libqimage.h"
#include "libqmediacapturesession.h"
#include "libqmediametadata.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqsize.h"
#include <string.h>
#include "../libqthread.h"
#include "../libqvariant.h"
#include "libqvideoframe.h"

QImageCapture* q_imagecapture_new();
QImageCapture* q_imagecapture_new2(void* parent);
QMetaObject* q_imagecapture_meta_object(void* self);
void* q_imagecapture_metacast(void* self, const char* param1);
int32_t q_imagecapture_metacall(void* self, int64_t param1, int param2, void* param3);
void q_imagecapture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_imagecapture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_imagecapture_tr(const char* s);
bool q_imagecapture_is_available(void* self);
QMediaCaptureSession* q_imagecapture_capture_session(void* self);
int64_t q_imagecapture_error(void* self);
const char* q_imagecapture_error_string(void* self);
bool q_imagecapture_is_ready_for_capture(void* self);
int64_t q_imagecapture_file_format(void* self);
void q_imagecapture_set_file_format(void* self, int64_t format);
libqt_list /* of int64_t */ q_imagecapture_supported_formats();
const char* q_imagecapture_file_format_name(int64_t c);
const char* q_imagecapture_file_format_description(int64_t c);
QSize* q_imagecapture_resolution(void* self);
void q_imagecapture_set_resolution(void* self, void* resolution);
void q_imagecapture_set_resolution2(void* self, int width, int height);
int64_t q_imagecapture_quality(void* self);
void q_imagecapture_set_quality(void* self, int64_t quality);
QMediaMetaData* q_imagecapture_meta_data(void* self);
void q_imagecapture_set_meta_data(void* self, void* metaData);
void q_imagecapture_add_meta_data(void* self, void* metaData);
int32_t q_imagecapture_capture_to_file(void* self);
int32_t q_imagecapture_capture(void* self);
void q_imagecapture_error_changed(void* self);
void q_imagecapture_on_error_changed(void* self, void (*slot)(void*));
void q_imagecapture_error_occurred(void* self, int id, int64_t errorVal, const char* errorString);
void q_imagecapture_on_error_occurred(void* self, void (*slot)(void*, int, int64_t, const char*));
void q_imagecapture_ready_for_capture_changed(void* self, bool ready);
void q_imagecapture_on_ready_for_capture_changed(void* self, void (*slot)(void*, bool));
void q_imagecapture_meta_data_changed(void* self);
void q_imagecapture_on_meta_data_changed(void* self, void (*slot)(void*));
void q_imagecapture_file_format_changed(void* self);
void q_imagecapture_on_file_format_changed(void* self, void (*slot)(void*));
void q_imagecapture_quality_changed(void* self);
void q_imagecapture_on_quality_changed(void* self, void (*slot)(void*));
void q_imagecapture_resolution_changed(void* self);
void q_imagecapture_on_resolution_changed(void* self, void (*slot)(void*));
void q_imagecapture_image_exposed(void* self, int id);
void q_imagecapture_on_image_exposed(void* self, void (*slot)(void*, int));
void q_imagecapture_image_captured(void* self, int id, void* preview);
void q_imagecapture_on_image_captured(void* self, void (*slot)(void*, int, void*));
void q_imagecapture_image_metadata_available(void* self, int id, void* metaData);
void q_imagecapture_on_image_metadata_available(void* self, void (*slot)(void*, int, void*));
void q_imagecapture_image_available(void* self, int id, void* frame);
void q_imagecapture_on_image_available(void* self, void (*slot)(void*, int, void*));
void q_imagecapture_image_saved(void* self, int id, const char* fileName);
void q_imagecapture_on_image_saved(void* self, void (*slot)(void*, int, const char*));
const char* q_imagecapture_tr2(const char* s, const char* c);
const char* q_imagecapture_tr3(const char* s, const char* c, int n);
int32_t q_imagecapture_capture_to_file1(void* self, const char* location);
const char* q_imagecapture_object_name(void* self);
void q_imagecapture_set_object_name(void* self, const char* name);
bool q_imagecapture_is_widget_type(void* self);
bool q_imagecapture_is_window_type(void* self);
bool q_imagecapture_is_quick_item_type(void* self);
bool q_imagecapture_signals_blocked(void* self);
bool q_imagecapture_block_signals(void* self, bool b);
QThread* q_imagecapture_thread(void* self);
void q_imagecapture_move_to_thread(void* self, void* thread);
int32_t q_imagecapture_start_timer(void* self, int interval);
void q_imagecapture_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_imagecapture_children(void* self);
void q_imagecapture_set_parent(void* self, void* parent);
void q_imagecapture_install_event_filter(void* self, void* filterObj);
void q_imagecapture_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_imagecapture_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_imagecapture_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_imagecapture_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_imagecapture_disconnect_with_q_meta_object_connection(void* param1);
void q_imagecapture_dump_object_tree(void* self);
void q_imagecapture_dump_object_info(void* self);
bool q_imagecapture_set_property(void* self, const char* name, void* value);
QVariant* q_imagecapture_property(void* self, const char* name);
const char** q_imagecapture_dynamic_property_names(void* self);
QBindingStorage* q_imagecapture_binding_storage(void* self);
QBindingStorage* q_imagecapture_binding_storage2(void* self);
void q_imagecapture_destroyed(void* self);
void q_imagecapture_on_destroyed(void* self, void (*slot)(void*));
QObject* q_imagecapture_parent(void* self);
bool q_imagecapture_inherits(void* self, const char* classname);
void q_imagecapture_delete_later(void* self);
int32_t q_imagecapture_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_imagecapture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_imagecapture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_imagecapture_destroyed1(void* self, void* param1);
void q_imagecapture_on_destroyed1(void* self, void (*slot)(void*, void*));
bool q_imagecapture_event(void* self, void* event);
bool q_imagecapture_qbase_event(void* self, void* event);
void q_imagecapture_on_event(void* self, bool (*slot)(void*, void*));
bool q_imagecapture_event_filter(void* self, void* watched, void* event);
bool q_imagecapture_qbase_event_filter(void* self, void* watched, void* event);
void q_imagecapture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_imagecapture_timer_event(void* self, void* event);
void q_imagecapture_qbase_timer_event(void* self, void* event);
void q_imagecapture_on_timer_event(void* self, void (*slot)(void*, void*));
void q_imagecapture_child_event(void* self, void* event);
void q_imagecapture_qbase_child_event(void* self, void* event);
void q_imagecapture_on_child_event(void* self, void (*slot)(void*, void*));
void q_imagecapture_custom_event(void* self, void* event);
void q_imagecapture_qbase_custom_event(void* self, void* event);
void q_imagecapture_on_custom_event(void* self, void (*slot)(void*, void*));
void q_imagecapture_connect_notify(void* self, void* signal);
void q_imagecapture_qbase_connect_notify(void* self, void* signal);
void q_imagecapture_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_imagecapture_disconnect_notify(void* self, void* signal);
void q_imagecapture_qbase_disconnect_notify(void* self, void* signal);
void q_imagecapture_on_disconnect_notify(void* self, void (*slot)(void*, void*));
QObject* q_imagecapture_sender(void* self);
QObject* q_imagecapture_qbase_sender(void* self);
void q_imagecapture_on_sender(void* self, QObject* (*slot)());
int32_t q_imagecapture_sender_signal_index(void* self);
int32_t q_imagecapture_qbase_sender_signal_index(void* self);
void q_imagecapture_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_imagecapture_receivers(void* self, const char* signal);
int32_t q_imagecapture_qbase_receivers(void* self, const char* signal);
void q_imagecapture_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_imagecapture_is_signal_connected(void* self, void* signal);
bool q_imagecapture_qbase_is_signal_connected(void* self, void* signal);
void q_imagecapture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_imagecapture_delete(void* self);

/// https://doc.qt.io/qt-6/qimagecapture.html#types

typedef enum {
    QIMAGECAPTURE_ERROR_NOERROR = 0,
    QIMAGECAPTURE_ERROR_NOTREADYERROR = 1,
    QIMAGECAPTURE_ERROR_RESOURCEERROR = 2,
    QIMAGECAPTURE_ERROR_OUTOFSPACEERROR = 3,
    QIMAGECAPTURE_ERROR_NOTSUPPORTEDFEATUREERROR = 4,
    QIMAGECAPTURE_ERROR_FORMATERROR = 5
} QImageCapture__Error;

typedef enum {
    QIMAGECAPTURE_QUALITY_VERYLOWQUALITY = 0,
    QIMAGECAPTURE_QUALITY_LOWQUALITY = 1,
    QIMAGECAPTURE_QUALITY_NORMALQUALITY = 2,
    QIMAGECAPTURE_QUALITY_HIGHQUALITY = 3,
    QIMAGECAPTURE_QUALITY_VERYHIGHQUALITY = 4
} QImageCapture__Quality;

typedef enum {
    QIMAGECAPTURE_FILEFORMAT_UNSPECIFIEDFORMAT = 0,
    QIMAGECAPTURE_FILEFORMAT_JPEG = 1,
    QIMAGECAPTURE_FILEFORMAT_PNG = 2,
    QIMAGECAPTURE_FILEFORMAT_WEBP = 3,
    QIMAGECAPTURE_FILEFORMAT_TIFF = 4,
    QIMAGECAPTURE_FILEFORMAT_LASTFILEFORMAT = 4
} QImageCapture__FileFormat;

#endif
