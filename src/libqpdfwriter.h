#pragma once
#ifndef SRCQT6C_LIBQPDFWRITER_H
#define SRCQT6C_LIBQPDFWRITER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qpdfwriter.html

/// q_pdfwriter_new constructs a new QPdfWriter object.
///
/// @param filename const char*
QPdfWriter* q_pdfwriter_new(const char* filename);

/// q_pdfwriter_new2 constructs a new QPdfWriter object.
///
/// @param device QIODevice*
QPdfWriter* q_pdfwriter_new2(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPdfWriter*
const QMetaObject* q_pdfwriter_meta_object(void* self);

/// @param self QPdfWriter*
/// @param param1 const char*
void* q_pdfwriter_metacast(void* self, const char* param1);

/// @param self QPdfWriter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pdfwriter_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback int32_t fn(QPdfWriter*, enum QMetaObject__Call, int, void*)
void q_pdfwriter_on_metacall(void* self, int32_t (*callback)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// @param self QPdfWriter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t q_pdfwriter_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* q_pdfwriter_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setPdfVersion)
///
/// @param self QPdfWriter*
/// @param version enum QPagedPaintDevice__PdfVersion
void q_pdfwriter_set_pdf_version(void* self, int64_t version);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#pdfVersion)
///
/// @param self QPdfWriter*
///
/// @return enum QPagedPaintDevice__PdfVersion
int64_t q_pdfwriter_pdf_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#title)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfWriter*
const char* q_pdfwriter_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setTitle)
///
/// @param self QPdfWriter*
/// @param title const char*
void q_pdfwriter_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#creator)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfWriter*
const char* q_pdfwriter_creator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setCreator)
///
/// @param self QPdfWriter*
/// @param creator const char*
void q_pdfwriter_set_creator(void* self, const char* creator);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#documentId)
///
/// @param self QPdfWriter*
QUuid* q_pdfwriter_document_id(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setDocumentId)
///
/// @param self QPdfWriter*
/// @param documentId QUuid*
void q_pdfwriter_set_document_id(void* self, void* documentId);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
///
/// @param self QPdfWriter*
bool q_pdfwriter_new_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
///
/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback bool fn()
void q_pdfwriter_on_new_page(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
///
/// Base class method implementation
///
/// @param self QPdfWriter*
bool q_pdfwriter_qbase_new_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setResolution)
///
/// @param self QPdfWriter*
/// @param resolution int
void q_pdfwriter_set_resolution(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#resolution)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_resolution(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setDocumentXmpMetadata)
///
/// @param self QPdfWriter*
/// @param xmpMetadata const char*
void q_pdfwriter_set_document_xmp_metadata(void* self, const char* xmpMetadata);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#documentXmpMetadata)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfWriter*
char* q_pdfwriter_document_xmp_metadata(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
///
/// @param self QPdfWriter*
/// @param fileName const char*
/// @param data const char*
void q_pdfwriter_add_file_attachment(void* self, const char* fileName, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#colorModel)
///
/// @param self QPdfWriter*
///
/// @return enum QPdfWriter__ColorModel
int64_t q_pdfwriter_color_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setColorModel)
///
/// @param self QPdfWriter*
/// @param model enum QPdfWriter__ColorModel
void q_pdfwriter_set_color_model(void* self, int64_t model);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#outputIntent)
///
/// @param self QPdfWriter*
QPdfOutputIntent* q_pdfwriter_output_intent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setOutputIntent)
///
/// @param self QPdfWriter*
/// @param intent QPdfOutputIntent*
void q_pdfwriter_set_output_intent(void* self, void* intent);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
///
/// @param self QPdfWriter*
QPaintEngine* q_pdfwriter_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback QPaintEngine* fn()
void q_pdfwriter_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
///
/// Base class method implementation
///
/// @param self QPdfWriter*
QPaintEngine* q_pdfwriter_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
///
/// @param self QPdfWriter*
/// @param id enum QPaintDevice__PaintDeviceMetric
int32_t q_pdfwriter_metric(void* self, int64_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback int32_t fn(QPdfWriter*, enum QPaintDevice__PaintDeviceMetric)
void q_pdfwriter_on_metric(void* self, int32_t (*callback)(void*, int64_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
///
/// Base class method implementation
///
/// @param self QPdfWriter*
/// @param id enum QPaintDevice__PaintDeviceMetric
int32_t q_pdfwriter_qbase_metric(void* self, int64_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* q_pdfwriter_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* q_pdfwriter_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
///
/// @param self QPdfWriter*
/// @param fileName const char*
/// @param data const char*
/// @param mimeType const char*
void q_pdfwriter_add_file_attachment3(void* self, const char* fileName, const char* data, const char* mimeType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfWriter*
const char* q_pdfwriter_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPdfWriter*
/// @param name char*
void q_pdfwriter_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPdfWriter*
bool q_pdfwriter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPdfWriter*
bool q_pdfwriter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPdfWriter*
bool q_pdfwriter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPdfWriter*
bool q_pdfwriter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPdfWriter*
/// @param b bool
bool q_pdfwriter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPdfWriter*
QThread* q_pdfwriter_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfWriter*
/// @param thread QThread*
bool q_pdfwriter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfWriter*
/// @param interval int
int32_t q_pdfwriter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfWriter*
/// @param id int
void q_pdfwriter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfWriter*
/// @param id enum Qt__TimerId
void q_pdfwriter_kill_timer2(void* self, int64_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPdfWriter*
libqt_list /* of QObject* */ q_pdfwriter_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPdfWriter*
/// @param parent QObject*
void q_pdfwriter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPdfWriter*
/// @param filterObj QObject*
void q_pdfwriter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPdfWriter*
/// @param obj QObject*
void q_pdfwriter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* q_pdfwriter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfWriter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* q_pdfwriter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool q_pdfwriter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool q_pdfwriter_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPdfWriter*
void q_pdfwriter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPdfWriter*
void q_pdfwriter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPdfWriter*
/// @param name const char*
/// @param value QVariant*
bool q_pdfwriter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPdfWriter*
/// @param name const char*
QVariant* q_pdfwriter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPdfWriter*
const char** q_pdfwriter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfWriter*
QBindingStorage* q_pdfwriter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfWriter*
const QBindingStorage* q_pdfwriter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfWriter*
void q_pdfwriter_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*)
void q_pdfwriter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPdfWriter*
QObject* q_pdfwriter_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPdfWriter*
/// @param classname const char*
bool q_pdfwriter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPdfWriter*
void q_pdfwriter_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfWriter*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool q_pdfwriter_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfWriter*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t q_pdfwriter_start_timer22(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pdfwriter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfWriter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* q_pdfwriter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfWriter*
/// @param param1 QObject*
void q_pdfwriter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*, QObject*)
void q_pdfwriter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// @param self QPdfWriter*
QPageLayout* q_pdfwriter_page_layout(void* self);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// @param self QPdfWriter*
QPageRanges* q_pdfwriter_page_ranges(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPdfWriter*
bool q_pdfwriter_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_width(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_height(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QPdfWriter*
double q_pdfwriter_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPdfWriter*
double q_pdfwriter_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_pdfwriter_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_pdfwriter_encode_metric_f(int64_t metric, double value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QEvent*
bool q_pdfwriter_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QEvent*
bool q_pdfwriter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool fn(QPdfWriter*, QEvent*)
void q_pdfwriter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param watched QObject*
/// @param event QEvent*
bool q_pdfwriter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param watched QObject*
/// @param event QEvent*
bool q_pdfwriter_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool fn(QPdfWriter*, QObject*, QEvent*)
void q_pdfwriter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QTimerEvent*
void q_pdfwriter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QTimerEvent*
void q_pdfwriter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*, QTimerEvent*)
void q_pdfwriter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QChildEvent*
void q_pdfwriter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QChildEvent*
void q_pdfwriter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*, QChildEvent*)
void q_pdfwriter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QEvent*
void q_pdfwriter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QEvent*
void q_pdfwriter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*, QEvent*)
void q_pdfwriter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
void q_pdfwriter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
void q_pdfwriter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*, QMetaMethod*)
void q_pdfwriter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
void q_pdfwriter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
void q_pdfwriter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*, QMetaMethod*)
void q_pdfwriter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param pageLayout QPageLayout*
bool q_pdfwriter_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param pageLayout QPageLayout*
bool q_pdfwriter_qbase_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool fn(QPdfWriter*, QPageLayout*)
void q_pdfwriter_on_set_page_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param pageSize QPageSize*
bool q_pdfwriter_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param pageSize QPageSize*
bool q_pdfwriter_qbase_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool fn(QPdfWriter*, QPageSize*)
void q_pdfwriter_on_set_page_size(void* self, bool (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param orientation enum QPageLayout__Orientation
bool q_pdfwriter_set_page_orientation(void* self, int64_t orientation);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param orientation enum QPageLayout__Orientation
bool q_pdfwriter_qbase_set_page_orientation(void* self, int64_t orientation);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool fn(QPdfWriter*, enum QPageLayout__Orientation)
void q_pdfwriter_on_set_page_orientation(void* self, bool (*callback)(void*, int64_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
bool q_pdfwriter_set_page_margins(void* self, void* margins, int64_t units);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
bool q_pdfwriter_qbase_set_page_margins(void* self, void* margins, int64_t units);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool fn(QPdfWriter*, QMarginsF*, enum QPageLayout__Unit)
void q_pdfwriter_on_set_page_margins(void* self, bool (*callback)(void*, void*, int64_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param ranges QPageRanges*
void q_pdfwriter_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param ranges QPageRanges*
void q_pdfwriter_qbase_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*, QPageRanges*)
void q_pdfwriter_on_set_page_ranges(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_qbase_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback int32_t fn()
void q_pdfwriter_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param painter QPainter*
void q_pdfwriter_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param painter QPainter*
void q_pdfwriter_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*, QPainter*)
void q_pdfwriter_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param offset QPoint*
QPaintDevice* q_pdfwriter_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param offset QPoint*
QPaintDevice* q_pdfwriter_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback QPaintDevice* fn(QPdfWriter*, QPoint*)
void q_pdfwriter_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
QPainter* q_pdfwriter_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
QPainter* q_pdfwriter_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback QPainter* fn()
void q_pdfwriter_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
QObject* q_pdfwriter_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
QObject* q_pdfwriter_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback QObject* fn()
void q_pdfwriter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
int32_t q_pdfwriter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback int32_t fn()
void q_pdfwriter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal const char*
int32_t q_pdfwriter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal const char*
int32_t q_pdfwriter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback int32_t fn(QPdfWriter*, const char*)
void q_pdfwriter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
bool q_pdfwriter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
bool q_pdfwriter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool fn(QPdfWriter*, QMetaMethod*)
void q_pdfwriter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_pdfwriter_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_pdfwriter_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback double fn(QPdfWriter*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric)
void q_pdfwriter_on_get_decoded_metric_f(void* self, double (*callback)(void*, int64_t, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfWriter*
/// @param callback void fn(QPdfWriter*, const char*)
void q_pdfwriter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#dtor.QPdfWriter)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfWriter*
void q_pdfwriter_delete(void* self);

/// https://doc.qt.io/qt-6/qpdfwriter.html#types

typedef enum {
    QPDFWRITER_COLORMODEL_RGB = 0,
    QPDFWRITER_COLORMODEL_GRAYSCALE = 1,
    QPDFWRITER_COLORMODEL_CMYK = 2,
    QPDFWRITER_COLORMODEL_AUTO = 3
} QPdfWriter__ColorModel;

#endif
