#pragma once
#ifndef SRC_QT6C_LIBQPDFWRITER_H
#define SRC_QT6C_LIBQPDFWRITER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html)

/// q_pdfwriter_new constructs a new QPdfWriter object.
///
/// @param filename const char*
///
QPdfWriter* q_pdfwriter_new(const char* filename);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html)

/// q_pdfwriter_new2 constructs a new QPdfWriter object.
///
/// @param device QIODevice*
///
QPdfWriter* q_pdfwriter_new2(void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self QPdfWriter*
///
const QMetaObject* q_pdfwriter_meta_object(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback const QMetaObject* func()
///
void q_pdfwriter_on_meta_object(void* self, const QMetaObject* (*callback)());

/// @warning DEPRECATED: Use `q_pdfwriter_super_meta_object` instead
///
#define q_pdfwriter_qbase_meta_object q_pdfwriter_super_meta_object

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self QPdfWriter*
///
const QMetaObject* q_pdfwriter_super_meta_object(void* self);

/// @param self QPdfWriter*
/// @param param1 const char*
///
void* q_pdfwriter_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback void* func(QPdfWriter* self, const char* param1)
///
void q_pdfwriter_on_metacast(void* self, void* (*callback)(void*, const char*));

/// @warning DEPRECATED: Use `q_pdfwriter_super_metacast` instead
///
#define q_pdfwriter_qbase_metacast q_pdfwriter_super_metacast

/// Base class method implementation
///
/// @param self QPdfWriter*
/// @param param1 const char*
///
void* q_pdfwriter_super_metacast(void* self, const char* param1);

/// @param self QPdfWriter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pdfwriter_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback int32_t func(QPdfWriter* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void q_pdfwriter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// @warning DEPRECATED: Use `q_pdfwriter_super_metacall` instead
///
#define q_pdfwriter_qbase_metacall q_pdfwriter_super_metacall

/// Base class method implementation
///
/// @param self QPdfWriter*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t q_pdfwriter_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* q_pdfwriter_tr(const char* s);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setPdfVersion)
///
/// @param self QPdfWriter*
/// @param version enum QPagedPaintDevice__PdfVersion
///
void q_pdfwriter_set_pdf_version(void* self, int32_t version);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#pdfVersion)
///
/// @param self QPdfWriter*
///
/// @return enum QPagedPaintDevice__PdfVersion
///
int32_t q_pdfwriter_pdf_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#title)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPdfWriter*
///
const char* q_pdfwriter_title(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setTitle)
///
/// @param self QPdfWriter*
/// @param title const char*
///
void q_pdfwriter_set_title(void* self, const char* title);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#creator)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPdfWriter*
///
const char* q_pdfwriter_creator(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setCreator)
///
/// @param self QPdfWriter*
/// @param creator const char*
///
void q_pdfwriter_set_creator(void* self, const char* creator);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#documentId)
///
/// @param self QPdfWriter*
///
QUuid* q_pdfwriter_document_id(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setDocumentId)
///
/// @param self QPdfWriter*
/// @param documentId QUuid*
///
void q_pdfwriter_set_document_id(void* self, void* documentId);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
///
/// @param self QPdfWriter*
///
bool q_pdfwriter_new_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
///
/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback bool func()
///
void q_pdfwriter_on_new_page(void* self, bool (*callback)());

/// @warning DEPRECATED: Use `q_pdfwriter_super_new_page` instead
///
#define q_pdfwriter_qbase_new_page q_pdfwriter_super_new_page

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
///
/// Base class method implementation
///
/// @param self QPdfWriter*
///
bool q_pdfwriter_super_new_page(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setResolution)
///
/// @param self QPdfWriter*
/// @param resolution int
///
void q_pdfwriter_set_resolution(void* self, int resolution);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#resolution)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_resolution(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setDocumentXmpMetadata)
///
/// @param self QPdfWriter*
/// @param xmpMetadata char*
///
void q_pdfwriter_set_document_xmp_metadata(void* self, char* xmpMetadata);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#documentXmpMetadata)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPdfWriter*
///
char* q_pdfwriter_document_xmp_metadata(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
///
/// @param self QPdfWriter*
/// @param fileName const char*
/// @param data char*
///
void q_pdfwriter_add_file_attachment(void* self, const char* fileName, char* data);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#colorModel)
///
/// @param self QPdfWriter*
///
/// @return enum QPdfWriter__ColorModel
///
int32_t q_pdfwriter_color_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setColorModel)
///
/// @param self QPdfWriter*
/// @param model enum QPdfWriter__ColorModel
///
void q_pdfwriter_set_color_model(void* self, int32_t model);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#outputIntent)
///
/// @param self QPdfWriter*
///
QPdfOutputIntent* q_pdfwriter_output_intent(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#setOutputIntent)
///
/// @param self QPdfWriter*
/// @param intent QPdfOutputIntent*
///
void q_pdfwriter_set_output_intent(void* self, void* intent);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
///
/// @param self QPdfWriter*
///
QPaintEngine* q_pdfwriter_paint_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback QPaintEngine* func()
///
void q_pdfwriter_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// @warning DEPRECATED: Use `q_pdfwriter_super_paint_engine` instead
///
#define q_pdfwriter_qbase_paint_engine q_pdfwriter_super_paint_engine

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
///
/// Base class method implementation
///
/// @param self QPdfWriter*
///
QPaintEngine* q_pdfwriter_super_paint_engine(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
///
/// @param self QPdfWriter*
/// @param id enum QPaintDevice__PaintDeviceMetric
///
int32_t q_pdfwriter_metric(void* self, int32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QPdfWriter*
/// @param callback int32_t func(QPdfWriter* self, enum QPaintDevice__PaintDeviceMetric id)
///
void q_pdfwriter_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// @warning DEPRECATED: Use `q_pdfwriter_super_metric` instead
///
#define q_pdfwriter_qbase_metric q_pdfwriter_super_metric

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
///
/// Base class method implementation
///
/// @param self QPdfWriter*
/// @param id enum QPaintDevice__PaintDeviceMetric
///
int32_t q_pdfwriter_super_metric(void* self, int32_t id);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* q_pdfwriter_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* q_pdfwriter_tr3(const char* s, const char* c, int n);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
///
/// @param self QPdfWriter*
/// @param fileName const char*
/// @param data char*
/// @param mimeType const char*
///
void q_pdfwriter_add_file_attachment3(void* self, const char* fileName, char* data, const char* mimeType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QPdfWriter*
///
const char* q_pdfwriter_object_name(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self QPdfWriter*
/// @param name const char*
///
void q_pdfwriter_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self QPdfWriter*
///
bool q_pdfwriter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self QPdfWriter*
///
bool q_pdfwriter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self QPdfWriter*
///
bool q_pdfwriter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self QPdfWriter*
///
bool q_pdfwriter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self QPdfWriter*
/// @param b bool
///
bool q_pdfwriter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self QPdfWriter*
///
QThread* q_pdfwriter_thread(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self QPdfWriter*
/// @param thread QThread*
///
bool q_pdfwriter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfWriter*
/// @param interval int
///
int32_t q_pdfwriter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfWriter*
/// @param time int64_t of nanoseconds
///
int32_t q_pdfwriter_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfWriter*
/// @param id int
///
void q_pdfwriter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self QPdfWriter*
/// @param id enum Qt__TimerId
///
void q_pdfwriter_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self QPdfWriter*
///
/// @return libqt_list of QObject*
///
libqt_list q_pdfwriter_children(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// @param self QPdfWriter*
/// @param parent QObject*
///
void q_pdfwriter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self QPdfWriter*
/// @param filterObj QObject*
///
void q_pdfwriter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self QPdfWriter*
/// @param obj QObject*
///
void q_pdfwriter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* q_pdfwriter_connect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* q_pdfwriter_connect2(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfWriter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* q_pdfwriter_connect3(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pdfwriter_disconnect(void* sender, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool q_pdfwriter_disconnect2(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPdfWriter*
///
bool q_pdfwriter_disconnect3(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPdfWriter*
/// @param receiver QObject*
///
bool q_pdfwriter_disconnect4(void* self, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool q_pdfwriter_disconnect5(void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self QPdfWriter*
///
void q_pdfwriter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self QPdfWriter*
///
void q_pdfwriter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self QPdfWriter*
/// @param name const char*
/// @param value QVariant*
///
bool q_pdfwriter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self QPdfWriter*
/// @param name const char*
///
QVariant* q_pdfwriter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QPdfWriter*
///
const char** q_pdfwriter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfWriter*
///
QBindingStorage* q_pdfwriter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self QPdfWriter*
///
const QBindingStorage* q_pdfwriter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfWriter*
///
void q_pdfwriter_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self)
///
void q_pdfwriter_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self QPdfWriter*
///
QObject* q_pdfwriter_parent(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self QPdfWriter*
/// @param classname const char*
///
bool q_pdfwriter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self QPdfWriter*
///
void q_pdfwriter_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfWriter*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t q_pdfwriter_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self QPdfWriter*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t q_pdfwriter_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* q_pdfwriter_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pdfwriter_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self QPdfWriter*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* q_pdfwriter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPdfWriter*
/// @param signal const char*
///
bool q_pdfwriter_disconnect1(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPdfWriter*
/// @param signal const char*
/// @param receiver QObject*
///
bool q_pdfwriter_disconnect22(void* self, const char* signal, void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPdfWriter*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pdfwriter_disconnect32(void* self, const char* signal, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self QPdfWriter*
/// @param receiver QObject*
/// @param member const char*
///
bool q_pdfwriter_disconnect23(void* self, void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfWriter*
/// @param param1 QObject*
///
void q_pdfwriter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self, QObject* param1)
///
void q_pdfwriter_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// @param self QPdfWriter*
///
QPageLayout* q_pdfwriter_page_layout(void* self);

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// @param self QPdfWriter*
///
QPageRanges* q_pdfwriter_page_ranges(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPdfWriter*
///
bool q_pdfwriter_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_width(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_height(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QPdfWriter*
///
double q_pdfwriter_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPdfWriter*
///
double q_pdfwriter_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_pdfwriter_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t q_pdfwriter_encode_metric_f(int32_t metric, double value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QEvent*
///
bool q_pdfwriter_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_pdfwriter_super_event` instead
///
#define q_pdfwriter_qbase_event q_pdfwriter_super_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QEvent*
///
bool q_pdfwriter_super_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool func(QPdfWriter* self, QEvent* event)
///
void q_pdfwriter_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pdfwriter_event_filter(void* self, void* watched, void* event);

/// @warning DEPRECATED: Use `q_pdfwriter_super_event_filter` instead
///
#define q_pdfwriter_qbase_event_filter q_pdfwriter_super_event_filter

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param watched QObject*
/// @param event QEvent*
///
bool q_pdfwriter_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool func(QPdfWriter* self, QObject* watched, QEvent* event)
///
void q_pdfwriter_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QTimerEvent*
///
void q_pdfwriter_timer_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_pdfwriter_super_timer_event` instead
///
#define q_pdfwriter_qbase_timer_event q_pdfwriter_super_timer_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QTimerEvent*
///
void q_pdfwriter_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self, QTimerEvent* event)
///
void q_pdfwriter_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QChildEvent*
///
void q_pdfwriter_child_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_pdfwriter_super_child_event` instead
///
#define q_pdfwriter_qbase_child_event q_pdfwriter_super_child_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QChildEvent*
///
void q_pdfwriter_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self, QChildEvent* event)
///
void q_pdfwriter_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QEvent*
///
void q_pdfwriter_custom_event(void* self, void* event);

/// @warning DEPRECATED: Use `q_pdfwriter_super_custom_event` instead
///
#define q_pdfwriter_qbase_custom_event q_pdfwriter_super_custom_event

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param event QEvent*
///
void q_pdfwriter_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self, QEvent* event)
///
void q_pdfwriter_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
///
void q_pdfwriter_connect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_pdfwriter_super_connect_notify` instead
///
#define q_pdfwriter_qbase_connect_notify q_pdfwriter_super_connect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
///
void q_pdfwriter_super_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self, QMetaMethod* signal)
///
void q_pdfwriter_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
///
void q_pdfwriter_disconnect_notify(void* self, void* signal);

/// @warning DEPRECATED: Use `q_pdfwriter_super_disconnect_notify` instead
///
#define q_pdfwriter_qbase_disconnect_notify q_pdfwriter_super_disconnect_notify

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
///
void q_pdfwriter_super_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self, QMetaMethod* signal)
///
void q_pdfwriter_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param pageLayout QPageLayout*
///
bool q_pdfwriter_set_page_layout(void* self, void* pageLayout);

/// @warning DEPRECATED: Use `q_pdfwriter_super_set_page_layout` instead
///
#define q_pdfwriter_qbase_set_page_layout q_pdfwriter_super_set_page_layout

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param pageLayout QPageLayout*
///
bool q_pdfwriter_super_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool func(QPdfWriter* self, QPageLayout* pageLayout)
///
void q_pdfwriter_on_set_page_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param pageSize QPageSize*
///
bool q_pdfwriter_set_page_size(void* self, void* pageSize);

/// @warning DEPRECATED: Use `q_pdfwriter_super_set_page_size` instead
///
#define q_pdfwriter_qbase_set_page_size q_pdfwriter_super_set_page_size

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param pageSize QPageSize*
///
bool q_pdfwriter_super_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool func(QPdfWriter* self, QPageSize* pageSize)
///
void q_pdfwriter_on_set_page_size(void* self, bool (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param orientation enum QPageLayout__Orientation
///
bool q_pdfwriter_set_page_orientation(void* self, int32_t orientation);

/// @warning DEPRECATED: Use `q_pdfwriter_super_set_page_orientation` instead
///
#define q_pdfwriter_qbase_set_page_orientation q_pdfwriter_super_set_page_orientation

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param orientation enum QPageLayout__Orientation
///
bool q_pdfwriter_super_set_page_orientation(void* self, int32_t orientation);

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool func(QPdfWriter* self, enum QPageLayout__Orientation orientation)
///
void q_pdfwriter_on_set_page_orientation(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
///
bool q_pdfwriter_set_page_margins(void* self, void* margins, int32_t units);

/// @warning DEPRECATED: Use `q_pdfwriter_super_set_page_margins` instead
///
#define q_pdfwriter_qbase_set_page_margins q_pdfwriter_super_set_page_margins

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
///
bool q_pdfwriter_super_set_page_margins(void* self, void* margins, int32_t units);

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool func(QPdfWriter* self, QMarginsF* margins, enum QPageLayout__Unit units)
///
void q_pdfwriter_on_set_page_margins(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param ranges QPageRanges*
///
void q_pdfwriter_set_page_ranges(void* self, void* ranges);

/// @warning DEPRECATED: Use `q_pdfwriter_super_set_page_ranges` instead
///
#define q_pdfwriter_qbase_set_page_ranges q_pdfwriter_super_set_page_ranges

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param ranges QPageRanges*
///
void q_pdfwriter_super_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self, QPageRanges* ranges)
///
void q_pdfwriter_on_set_page_ranges(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_dev_type(void* self);

/// @warning DEPRECATED: Use `q_pdfwriter_super_dev_type` instead
///
#define q_pdfwriter_qbase_dev_type q_pdfwriter_super_dev_type

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_super_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback int32_t func()
///
void q_pdfwriter_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param painter QPainter*
///
void q_pdfwriter_init_painter(void* self, void* painter);

/// @warning DEPRECATED: Use `q_pdfwriter_super_init_painter` instead
///
#define q_pdfwriter_qbase_init_painter q_pdfwriter_super_init_painter

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param painter QPainter*
///
void q_pdfwriter_super_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self, QPainter* painter)
///
void q_pdfwriter_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param offset QPoint*
///
QPaintDevice* q_pdfwriter_redirected(void* self, void* offset);

/// @warning DEPRECATED: Use `q_pdfwriter_super_redirected` instead
///
#define q_pdfwriter_qbase_redirected q_pdfwriter_super_redirected

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param offset QPoint*
///
QPaintDevice* q_pdfwriter_super_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback QPaintDevice* func(QPdfWriter* self, QPoint* offset)
///
void q_pdfwriter_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
///
QPainter* q_pdfwriter_shared_painter(void* self);

/// @warning DEPRECATED: Use `q_pdfwriter_super_shared_painter` instead
///
#define q_pdfwriter_qbase_shared_painter q_pdfwriter_super_shared_painter

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
///
QPainter* q_pdfwriter_super_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback QPainter* func()
///
void q_pdfwriter_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
///
QObject* q_pdfwriter_sender(void* self);

/// @warning DEPRECATED: Use `q_pdfwriter_super_sender` instead
///
#define q_pdfwriter_qbase_sender q_pdfwriter_super_sender

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
///
QObject* q_pdfwriter_super_sender(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback QObject* func()
///
void q_pdfwriter_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_sender_signal_index(void* self);

/// @warning DEPRECATED: Use `q_pdfwriter_super_sender_signal_index` instead
///
#define q_pdfwriter_qbase_sender_signal_index q_pdfwriter_super_sender_signal_index

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
///
int32_t q_pdfwriter_super_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback int32_t func()
///
void q_pdfwriter_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal const char*
///
int32_t q_pdfwriter_receivers(void* self, const char* signal);

/// @warning DEPRECATED: Use `q_pdfwriter_super_receivers` instead
///
#define q_pdfwriter_qbase_receivers q_pdfwriter_super_receivers

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal const char*
///
int32_t q_pdfwriter_super_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback int32_t func(QPdfWriter* self, const char* signal)
///
void q_pdfwriter_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
///
bool q_pdfwriter_is_signal_connected(void* self, void* signal);

/// @warning DEPRECATED: Use `q_pdfwriter_super_is_signal_connected` instead
///
#define q_pdfwriter_qbase_is_signal_connected q_pdfwriter_super_is_signal_connected

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param signal QMetaMethod*
///
bool q_pdfwriter_super_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback bool func(QPdfWriter* self, QMetaMethod* signal)
///
void q_pdfwriter_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPdfWriter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_pdfwriter_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// @warning DEPRECATED: Use `q_pdfwriter_super_get_decoded_metric_f` instead
///
#define q_pdfwriter_qbase_get_decoded_metric_f q_pdfwriter_super_get_decoded_metric_f

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double q_pdfwriter_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPdfWriter*
/// @param callback double func(QPdfWriter* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void q_pdfwriter_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self QPdfWriter*
/// @param callback void func(QPdfWriter* self, const char* objectName)
///
void q_pdfwriter_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#dtor.QPdfWriter)
///
/// Delete this object from C++ memory.
///
/// @param self QPdfWriter*
///
void q_pdfwriter_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qpdfwriter.html#public-types)

typedef enum {
    QPDFWRITER_COLORMODEL_RGB = 0,
    QPDFWRITER_COLORMODEL_GRAYSCALE = 1,
    QPDFWRITER_COLORMODEL_CMYK = 2,
    QPDFWRITER_COLORMODEL_AUTO = 3
} QPdfWriter__ColorModel;

#endif
