#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqevent.hpp"
#include "../libqimage.hpp"
#include "libqmediacapturesession.hpp"
#include "libqmediametadata.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqsize.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "libqvideoframe.hpp"
#include "../libqcoreevent.hpp"
#include "libqimagecapture.hpp"
#include "libqimagecapture.h"

/// https://doc.qt.io/qt-6/qimagecapture.html

/// q_imagecapture_new constructs a new QImageCapture object.
///
///
QImageCapture* q_imagecapture_new() {
    return QImageCapture_new();
}

/// q_imagecapture_new2 constructs a new QImageCapture object.
///
/// ``` QObject* parent ```
QImageCapture* q_imagecapture_new2(void* parent) {
    return QImageCapture_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QImageCapture* self ```
QMetaObject* q_imagecapture_meta_object(void* self) {
    return QImageCapture_MetaObject((QImageCapture*)self);
}

/// ``` QImageCapture* self, const char* param1 ```
void* q_imagecapture_metacast(void* self, const char* param1) {
    return QImageCapture_Metacast((QImageCapture*)self, param1);
}

/// ``` QImageCapture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_imagecapture_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QImageCapture_Metacall((QImageCapture*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QImageCapture* self, int32_t (*slot)(QImageCapture*, enum QMetaObject__Call, int, void*) ```
void q_imagecapture_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QImageCapture_OnMetacall((QImageCapture*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QImageCapture* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_imagecapture_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QImageCapture_QBaseMetacall((QImageCapture*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_imagecapture_tr(const char* s) {
    libqt_string _str = QImageCapture_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#isAvailable)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_available(void* self) {
    return QImageCapture_IsAvailable((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#captureSession)
///
/// ``` QImageCapture* self ```
QMediaCaptureSession* q_imagecapture_capture_session(void* self) {
    return QImageCapture_CaptureSession((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#error)
///
/// ``` QImageCapture* self ```
int64_t q_imagecapture_error(void* self) {
    return QImageCapture_Error((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorString)
///
/// ``` QImageCapture* self ```
const char* q_imagecapture_error_string(void* self) {
    libqt_string _str = QImageCapture_ErrorString((QImageCapture*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#isReadyForCapture)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_ready_for_capture(void* self) {
    return QImageCapture_IsReadyForCapture((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormat)
///
/// ``` QImageCapture* self ```
int64_t q_imagecapture_file_format(void* self) {
    return QImageCapture_FileFormat((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setFileFormat)
///
/// ``` QImageCapture* self, enum QImageCapture__FileFormat format ```
void q_imagecapture_set_file_format(void* self, int64_t format) {
    QImageCapture_SetFileFormat((QImageCapture*)self, format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#supportedFormats)
///
///
libqt_list /* of int64_t */ q_imagecapture_supported_formats() {
    libqt_list _arr = QImageCapture_SupportedFormats();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatName)
///
/// ``` enum QImageCapture__FileFormat c ```
const char* q_imagecapture_file_format_name(int64_t c) {
    libqt_string _str = QImageCapture_FileFormatName(c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatDescription)
///
/// ``` enum QImageCapture__FileFormat c ```
const char* q_imagecapture_file_format_description(int64_t c) {
    libqt_string _str = QImageCapture_FileFormatDescription(c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#resolution)
///
/// ``` QImageCapture* self ```
QSize* q_imagecapture_resolution(void* self) {
    return QImageCapture_Resolution((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setResolution)
///
/// ``` QImageCapture* self, QSize* resolution ```
void q_imagecapture_set_resolution(void* self, void* resolution) {
    QImageCapture_SetResolution((QImageCapture*)self, (QSize*)resolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setResolution)
///
/// ``` QImageCapture* self, int width, int height ```
void q_imagecapture_set_resolution2(void* self, int width, int height) {
    QImageCapture_SetResolution2((QImageCapture*)self, width, height);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#quality)
///
/// ``` QImageCapture* self ```
int64_t q_imagecapture_quality(void* self) {
    return QImageCapture_Quality((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setQuality)
///
/// ``` QImageCapture* self, enum QImageCapture__Quality quality ```
void q_imagecapture_set_quality(void* self, int64_t quality) {
    QImageCapture_SetQuality((QImageCapture*)self, quality);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#metaData)
///
/// ``` QImageCapture* self ```
QMediaMetaData* q_imagecapture_meta_data(void* self) {
    return QImageCapture_MetaData((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#setMetaData)
///
/// ``` QImageCapture* self, QMediaMetaData* metaData ```
void q_imagecapture_set_meta_data(void* self, void* metaData) {
    QImageCapture_SetMetaData((QImageCapture*)self, (QMediaMetaData*)metaData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#addMetaData)
///
/// ``` QImageCapture* self, QMediaMetaData* metaData ```
void q_imagecapture_add_meta_data(void* self, void* metaData) {
    QImageCapture_AddMetaData((QImageCapture*)self, (QMediaMetaData*)metaData);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
///
/// ``` QImageCapture* self ```
int32_t q_imagecapture_capture_to_file(void* self) {
    return QImageCapture_CaptureToFile((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#capture)
///
/// ``` QImageCapture* self ```
int32_t q_imagecapture_capture(void* self) {
    return QImageCapture_Capture((QImageCapture*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_error_changed(void* self) {
    QImageCapture_ErrorChanged((QImageCapture*)self);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_error_changed(void* self, void (*slot)(void*)) {
    QImageCapture_Connect_ErrorChanged((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#errorOccurred)
///
/// ``` QImageCapture* self, int id, enum QImageCapture__Error errorVal, const char* errorString ```
void q_imagecapture_error_occurred(void* self, int id, int64_t errorVal, const char* errorString) {
    QImageCapture_ErrorOccurred((QImageCapture*)self, id, errorVal, qstring(errorString));
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, enum QImageCapture__Error, const char*) ```
void q_imagecapture_on_error_occurred(void* self, void (*slot)(void*, int, int64_t, const char*)) {
    QImageCapture_Connect_ErrorOccurred((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#readyForCaptureChanged)
///
/// ``` QImageCapture* self, bool ready ```
void q_imagecapture_ready_for_capture_changed(void* self, bool ready) {
    QImageCapture_ReadyForCaptureChanged((QImageCapture*)self, ready);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*, bool) ```
void q_imagecapture_on_ready_for_capture_changed(void* self, void (*slot)(void*, bool)) {
    QImageCapture_Connect_ReadyForCaptureChanged((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#metaDataChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_meta_data_changed(void* self) {
    QImageCapture_MetaDataChanged((QImageCapture*)self);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_meta_data_changed(void* self, void (*slot)(void*)) {
    QImageCapture_Connect_MetaDataChanged((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#fileFormatChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_file_format_changed(void* self) {
    QImageCapture_FileFormatChanged((QImageCapture*)self);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_file_format_changed(void* self, void (*slot)(void*)) {
    QImageCapture_Connect_FileFormatChanged((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#qualityChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_quality_changed(void* self) {
    QImageCapture_QualityChanged((QImageCapture*)self);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_quality_changed(void* self, void (*slot)(void*)) {
    QImageCapture_Connect_QualityChanged((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#resolutionChanged)
///
/// ``` QImageCapture* self ```
void q_imagecapture_resolution_changed(void* self) {
    QImageCapture_ResolutionChanged((QImageCapture*)self);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*) ```
void q_imagecapture_on_resolution_changed(void* self, void (*slot)(void*)) {
    QImageCapture_Connect_ResolutionChanged((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageExposed)
///
/// ``` QImageCapture* self, int id ```
void q_imagecapture_image_exposed(void* self, int id) {
    QImageCapture_ImageExposed((QImageCapture*)self, id);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int) ```
void q_imagecapture_on_image_exposed(void* self, void (*slot)(void*, int)) {
    QImageCapture_Connect_ImageExposed((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageCaptured)
///
/// ``` QImageCapture* self, int id, QImage* preview ```
void q_imagecapture_image_captured(void* self, int id, void* preview) {
    QImageCapture_ImageCaptured((QImageCapture*)self, id, (QImage*)preview);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, QImage*) ```
void q_imagecapture_on_image_captured(void* self, void (*slot)(void*, int, void*)) {
    QImageCapture_Connect_ImageCaptured((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageMetadataAvailable)
///
/// ``` QImageCapture* self, int id, QMediaMetaData* metaData ```
void q_imagecapture_image_metadata_available(void* self, int id, void* metaData) {
    QImageCapture_ImageMetadataAvailable((QImageCapture*)self, id, (QMediaMetaData*)metaData);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, QMediaMetaData*) ```
void q_imagecapture_on_image_metadata_available(void* self, void (*slot)(void*, int, void*)) {
    QImageCapture_Connect_ImageMetadataAvailable((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageAvailable)
///
/// ``` QImageCapture* self, int id, QVideoFrame* frame ```
void q_imagecapture_image_available(void* self, int id, void* frame) {
    QImageCapture_ImageAvailable((QImageCapture*)self, id, (QVideoFrame*)frame);
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, QVideoFrame*) ```
void q_imagecapture_on_image_available(void* self, void (*slot)(void*, int, void*)) {
    QImageCapture_Connect_ImageAvailable((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#imageSaved)
///
/// ``` QImageCapture* self, int id, const char* fileName ```
void q_imagecapture_image_saved(void* self, int id, const char* fileName) {
    QImageCapture_ImageSaved((QImageCapture*)self, id, qstring(fileName));
}

/// ``` QImageCapture* self, void (*slot)(QImageCapture*, int, const char*) ```
void q_imagecapture_on_image_saved(void* self, void (*slot)(void*, int, const char*)) {
    QImageCapture_Connect_ImageSaved((QImageCapture*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_imagecapture_tr2(const char* s, const char* c) {
    libqt_string _str = QImageCapture_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_imagecapture_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QImageCapture_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qimagecapture.html#captureToFile)
///
/// ``` QImageCapture* self, const char* location ```
int32_t q_imagecapture_capture_to_file1(void* self, const char* location) {
    return QImageCapture_CaptureToFile1((QImageCapture*)self, qstring(location));
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QImageCapture* self ```
const char* q_imagecapture_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QImageCapture* self, const char* name ```
void q_imagecapture_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QImageCapture* self ```
bool q_imagecapture_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QImageCapture* self, bool b ```
bool q_imagecapture_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QImageCapture* self ```
QThread* q_imagecapture_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QImageCapture* self, QThread* thread ```
void q_imagecapture_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QImageCapture* self, int interval ```
int32_t q_imagecapture_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QImageCapture* self, int id ```
void q_imagecapture_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QImageCapture* self ```
libqt_list /* of QObject* */ q_imagecapture_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QImageCapture* self, QObject* parent ```
void q_imagecapture_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QImageCapture* self, QObject* filterObj ```
void q_imagecapture_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QImageCapture* self, QObject* obj ```
void q_imagecapture_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_imagecapture_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QImageCapture* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_imagecapture_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_imagecapture_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_imagecapture_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QImageCapture* self ```
void q_imagecapture_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QImageCapture* self ```
void q_imagecapture_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QImageCapture* self, const char* name, QVariant* value ```
bool q_imagecapture_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QImageCapture* self, const char* name ```
QVariant* q_imagecapture_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QImageCapture* self ```
const char** q_imagecapture_dynamic_property_names(void* self) {
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
/// ``` QImageCapture* self ```
QBindingStorage* q_imagecapture_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QImageCapture* self ```
QBindingStorage* q_imagecapture_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageCapture* self ```
void q_imagecapture_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QImageCapture* self, void (*slot)(QObject*) ```
void q_imagecapture_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QImageCapture* self ```
QObject* q_imagecapture_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QImageCapture* self, const char* classname ```
bool q_imagecapture_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QImageCapture* self ```
void q_imagecapture_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QImageCapture* self, int interval, enum Qt__TimerType timerType ```
int32_t q_imagecapture_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_imagecapture_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QImageCapture* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_imagecapture_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QImageCapture* self, QObject* param1 ```
void q_imagecapture_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QImageCapture* self, void (*slot)(QObject*, QObject*) ```
void q_imagecapture_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QEvent* event ```
bool q_imagecapture_event(void* self, void* event) {
    return QImageCapture_Event((QImageCapture*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QEvent* event ```
bool q_imagecapture_qbase_event(void* self, void* event) {
    return QImageCapture_QBaseEvent((QImageCapture*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, bool (*slot)(QImageCapture*, QEvent*) ```
void q_imagecapture_on_event(void* self, bool (*slot)(void*, void*)) {
    QImageCapture_OnEvent((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QObject* watched, QEvent* event ```
bool q_imagecapture_event_filter(void* self, void* watched, void* event) {
    return QImageCapture_EventFilter((QImageCapture*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QObject* watched, QEvent* event ```
bool q_imagecapture_qbase_event_filter(void* self, void* watched, void* event) {
    return QImageCapture_QBaseEventFilter((QImageCapture*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, bool (*slot)(QImageCapture*, QObject*, QEvent*) ```
void q_imagecapture_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QImageCapture_OnEventFilter((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QTimerEvent* event ```
void q_imagecapture_timer_event(void* self, void* event) {
    QImageCapture_TimerEvent((QImageCapture*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QTimerEvent* event ```
void q_imagecapture_qbase_timer_event(void* self, void* event) {
    QImageCapture_QBaseTimerEvent((QImageCapture*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QTimerEvent*) ```
void q_imagecapture_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QImageCapture_OnTimerEvent((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QChildEvent* event ```
void q_imagecapture_child_event(void* self, void* event) {
    QImageCapture_ChildEvent((QImageCapture*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QChildEvent* event ```
void q_imagecapture_qbase_child_event(void* self, void* event) {
    QImageCapture_QBaseChildEvent((QImageCapture*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QChildEvent*) ```
void q_imagecapture_on_child_event(void* self, void (*slot)(void*, void*)) {
    QImageCapture_OnChildEvent((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QEvent* event ```
void q_imagecapture_custom_event(void* self, void* event) {
    QImageCapture_CustomEvent((QImageCapture*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QEvent* event ```
void q_imagecapture_qbase_custom_event(void* self, void* event) {
    QImageCapture_QBaseCustomEvent((QImageCapture*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QEvent*) ```
void q_imagecapture_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QImageCapture_OnCustomEvent((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
void q_imagecapture_connect_notify(void* self, void* signal) {
    QImageCapture_ConnectNotify((QImageCapture*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
void q_imagecapture_qbase_connect_notify(void* self, void* signal) {
    QImageCapture_QBaseConnectNotify((QImageCapture*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QMetaMethod*) ```
void q_imagecapture_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QImageCapture_OnConnectNotify((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
void q_imagecapture_disconnect_notify(void* self, void* signal) {
    QImageCapture_DisconnectNotify((QImageCapture*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
void q_imagecapture_qbase_disconnect_notify(void* self, void* signal) {
    QImageCapture_QBaseDisconnectNotify((QImageCapture*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, void (*slot)(QImageCapture*, QMetaMethod*) ```
void q_imagecapture_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QImageCapture_OnDisconnectNotify((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self ```
QObject* q_imagecapture_sender(void* self) {
    return QImageCapture_Sender((QImageCapture*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self ```
QObject* q_imagecapture_qbase_sender(void* self) {
    return QImageCapture_QBaseSender((QImageCapture*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, QObject* (*slot)() ```
void q_imagecapture_on_sender(void* self, QObject* (*slot)()) {
    QImageCapture_OnSender((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self ```
int32_t q_imagecapture_sender_signal_index(void* self) {
    return QImageCapture_SenderSignalIndex((QImageCapture*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self ```
int32_t q_imagecapture_qbase_sender_signal_index(void* self) {
    return QImageCapture_QBaseSenderSignalIndex((QImageCapture*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, int32_t (*slot)() ```
void q_imagecapture_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QImageCapture_OnSenderSignalIndex((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, const char* signal ```
int32_t q_imagecapture_receivers(void* self, const char* signal) {
    return QImageCapture_Receivers((QImageCapture*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, const char* signal ```
int32_t q_imagecapture_qbase_receivers(void* self, const char* signal) {
    return QImageCapture_QBaseReceivers((QImageCapture*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, int32_t (*slot)(QImageCapture*, const char*) ```
void q_imagecapture_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QImageCapture_OnReceivers((QImageCapture*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
bool q_imagecapture_is_signal_connected(void* self, void* signal) {
    return QImageCapture_IsSignalConnected((QImageCapture*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QImageCapture* self, QMetaMethod* signal ```
bool q_imagecapture_qbase_is_signal_connected(void* self, void* signal) {
    return QImageCapture_QBaseIsSignalConnected((QImageCapture*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QImageCapture* self, bool (*slot)(QImageCapture*, QMetaMethod*) ```
void q_imagecapture_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QImageCapture_OnIsSignalConnected((QImageCapture*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QImageCapture* self ```
void q_imagecapture_delete(void* self) {
    QImageCapture_Delete((QImageCapture*)(self));
}