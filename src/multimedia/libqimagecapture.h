#pragma once
#ifndef SRC_MULTIMEDIAQT6C_LIBQIMAGECAPTURE_H
#define SRC_MULTIMEDIAQT6C_LIBQIMAGECAPTURE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqevent.h"
#include "../libqimage.h"
#include "libqmediacapturesession.h"
#include "libqmediametadata.h"
#include "../libqmetaobject.h"
#include "../libqobject.h"
#include "../libqsize.h"
#include <string.h>
#include "libqvideoframe.h"

/// https://doc.qt.io/qt-6/qimagecapture.html

/// q_imagecapture_new constructs a new QImageCapture object.
///
///
QImageCapture* q_imagecapture_new();

/// q_imagecapture_new2 constructs a new QImageCapture object.
///
/// ``` QObject* parent ```
QImageCapture* q_imagecapture_new2(void* parent);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QImageCapture* self ```
const QMetaObject* q_imagecapture_meta_object(void* self);

/// ``` QImageCapture* self, const char* param1 ```
void* q_imagecapture_metacast(void* self, const char* param1);

/// ``` QImageCapture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_imagecapture_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QImageCapture* self, int32_t (*slot)(QImageCapture*, enum QMetaObject__Call, int, void*) ```
void q_imagecapture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QImageCapture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_imagecapture_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_imagecapture_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#isAvailable)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_available(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#captureSession)
///
/// ``` QImageCapture* self ```
QMediaCaptureSession* q_imagecapture_capture_session(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#error)
///
/// ``` QImageCapture* self ```
int64_t q_imagecapture_error(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorString)
///
/// ``` QImageCapture* self ```
const char* q_imagecapture_error_string(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#isReadyForCapture)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_ready_for_capture(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormat)
///
/// ``` QImageCapture* self ```
int64_t q_imagecapture_file_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setFileFormat)
///
/// ``` QImageCapture* self, enum QImageCapture__FileFormat format ```
void q_imagecapture_set_file_format(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#supportedFormats)
///
///
libqt_list /* of int64_t */ q_imagecapture_supported_formats();

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatName)
///
/// ``` enum QImageCapture__FileFormat c ```
const char* q_imagecapture_file_format_name(int64_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatDescription)
///
/// ``` enum QImageCapture__FileFormat c ```
const char* q_imagecapture_file_format_description(int64_t c);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#resolution)
///
/// ``` QImageCapture* self ```
QSize* q_imagecapture_resolution(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setResolution)
///
/// ``` QImageCapture* self, QSize* resolution ```
void q_imagecapture_set_resolution(void* self, void* resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setResolution)
///
/// ``` QImageCapture* self, int width, int height ```
void q_imagecapture_set_resolution2(void* self, int width, int height);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#quality)
///
/// ``` QImageCapture* self ```
int64_t q_imagecapture_quality(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setQuality)
///
/// ``` QImageCapture* self, enum QImageCapture__Quality quality ```
void q_imagecapture_set_quality(void* self, int64_t quality);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#metaData)
///
/// ``` QImageCapture* self ```
QMediaMetaData* q_imagecapture_meta_data(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setMetaData)
///
/// ``` QImageCapture* self, QMediaMetaData* metaData ```
void q_imagecapture_set_meta_data(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#addMetaData)
///
/// ``` QImageCapture* self, QMediaMetaData* metaData ```
void q_imagecapture_add_meta_data(void* self, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
///
/// ``` QImageCapture* self ```
int32_t q_imagecapture_capture_to_file(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#capture)
///
/// ``` QImageCapture* self ```
int32_t q_imagecapture_capture(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_error_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorChanged)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_error_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorOccurred)
///
/// ``` QImageCapture* self, int id, enum QImageCapture__Error errorVal, const char* errorString ```
void q_imagecapture_error_occurred(void* self, int id, int64_t errorVal, const char* errorString);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorOccurred)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, enum QImageCapture__Error, const char*) ```
void q_imagecapture_on_error_occurred(void* self, void (*slot)(void*, int, int64_t, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#readyForCaptureChanged)
///
/// ``` QImageCapture* self, bool ready ```
void q_imagecapture_ready_for_capture_changed(void* self, bool ready);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#readyForCaptureChanged)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, bool) ```
void q_imagecapture_on_ready_for_capture_changed(void* self, void (*slot)(void*, bool));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#metaDataChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_meta_data_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#metaDataChanged)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_meta_data_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_file_format_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatChanged)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_file_format_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#qualityChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_quality_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#qualityChanged)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_quality_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#resolutionChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_resolution_changed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#resolutionChanged)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_resolution_changed(void* self, void (*slot)(void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageExposed)
///
/// ``` QImageCapture* self, int id ```
void q_imagecapture_image_exposed(void* self, int id);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageExposed)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int) ```
void q_imagecapture_on_image_exposed(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageCaptured)
///
/// ``` QImageCapture* self, int id, QImage* preview ```
void q_imagecapture_image_captured(void* self, int id, void* preview);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageCaptured)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, QImage*) ```
void q_imagecapture_on_image_captured(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageMetadataAvailable)
///
/// ``` QImageCapture* self, int id, QMediaMetaData* metaData ```
void q_imagecapture_image_metadata_available(void* self, int id, void* metaData);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageMetadataAvailable)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, QMediaMetaData*) ```
void q_imagecapture_on_image_metadata_available(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageAvailable)
///
/// ``` QImageCapture* self, int id, QVideoFrame* frame ```
void q_imagecapture_image_available(void* self, int id, void* frame);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageAvailable)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, QVideoFrame*) ```
void q_imagecapture_on_image_available(void* self, void (*slot)(void*, int, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageSaved)
///
/// ``` QImageCapture* self, int id, const char* fileName ```
void q_imagecapture_image_saved(void* self, int id, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageSaved)
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, const char*) ```
void q_imagecapture_on_image_saved(void* self, void (*slot)(void*, int, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_imagecapture_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_imagecapture_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
///
/// ``` QImageCapture* self, const char* location ```
int32_t q_imagecapture_capture_to_file1(void* self, const char* location);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QImageCapture* self ```
const char* q_imagecapture_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QImageCapture* self, char* name ```
void q_imagecapture_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QImageCapture* self, bool b ```
bool q_imagecapture_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QImageCapture* self ```
QThread* q_imagecapture_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QImageCapture* self, QThread* thread ```
void q_imagecapture_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QImageCapture* self, int interval ```
int32_t q_imagecapture_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QImageCapture* self, int id ```
void q_imagecapture_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QImageCapture* self ```
libqt_list /* of QObject* */ q_imagecapture_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QImageCapture* self, QObject* parent ```
void q_imagecapture_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QImageCapture* self, QObject* filterObj ```
void q_imagecapture_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QImageCapture* self, QObject* obj ```
void q_imagecapture_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_imagecapture_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QImageCapture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_imagecapture_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_imagecapture_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_imagecapture_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QImageCapture* self ```
void q_imagecapture_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QImageCapture* self ```
void q_imagecapture_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QImageCapture* self, const char* name, QVariant* value ```
bool q_imagecapture_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QImageCapture* self, const char* name ```
QVariant* q_imagecapture_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QImageCapture* self ```
const char** q_imagecapture_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QImageCapture* self ```
QBindingStorage* q_imagecapture_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QImageCapture* self ```
const QBindingStorage* q_imagecapture_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageCapture* self ```
void q_imagecapture_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageCapture* self, void (*slot)(QObject*) ```
void q_imagecapture_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QImageCapture* self ```
QObject* q_imagecapture_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QImageCapture* self, const char* classname ```
bool q_imagecapture_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QImageCapture* self ```
void q_imagecapture_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QImageCapture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_imagecapture_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_imagecapture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QImageCapture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_imagecapture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageCapture* self, QObject* param1 ```
void q_imagecapture_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageCapture* self, void (*slot)(QObject*, QObject*) ```
void q_imagecapture_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QEvent* event ```
bool q_imagecapture_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QEvent* event ```
bool q_imagecapture_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, bool (*slot)(QImageCapture*, QEvent*) ```
void q_imagecapture_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QObject* watched, QEvent* event ```
bool q_imagecapture_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QObject* watched, QEvent* event ```
bool q_imagecapture_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, bool (*slot)(QImageCapture*, QObject*, QEvent*) ```
void q_imagecapture_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QTimerEvent* event ```
void q_imagecapture_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QTimerEvent* event ```
void q_imagecapture_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QTimerEvent*) ```
void q_imagecapture_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QChildEvent* event ```
void q_imagecapture_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QChildEvent* event ```
void q_imagecapture_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QChildEvent*) ```
void q_imagecapture_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QEvent* event ```
void q_imagecapture_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QEvent* event ```
void q_imagecapture_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QEvent*) ```
void q_imagecapture_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
void q_imagecapture_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
void q_imagecapture_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QMetaMethod*) ```
void q_imagecapture_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
void q_imagecapture_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
void q_imagecapture_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QMetaMethod*) ```
void q_imagecapture_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self ```
QObject* q_imagecapture_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self ```
QObject* q_imagecapture_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, QObject* (*slot)() ```
void q_imagecapture_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self ```
int32_t q_imagecapture_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self ```
int32_t q_imagecapture_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, int32_t (*slot)() ```
void q_imagecapture_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, const char* signal ```
int32_t q_imagecapture_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, const char* signal ```
int32_t q_imagecapture_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, int32_t (*slot)(QImageCapture*, const char*) ```
void q_imagecapture_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
bool q_imagecapture_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
bool q_imagecapture_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, bool (*slot)(QImageCapture*, QMetaMethod*) ```
void q_imagecapture_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// ``` QImageCapture* self, void (*slot)(QObject*, const char*) ```
void q_imagecapture_on_object_name_changed(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#dtor.QImageCapture)
///
/// Delete this object from C++ memory.
///
/// ``` QImageCapture* self ```
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
