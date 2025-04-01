#pragma once
#ifndef SRCQT6C_LIBQPDFWRITER_H
#define SRCQT6C_LIBQPDFWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqanystringview.h"
#include "libqbindingstorage.h"
#include "libqevent.h"
#include "libqiodevice.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqobject.h"
#include "libqpagelayout.h"
#include "libqpageranges.h"
#include "libqpagesize.h"
#include "libqpagedpaintdevice.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpoint.h"
#include <string.h>
#include "libqthread.h"
#include "libqvariant.h"

/// https://doc.qt.io/qt-6/qpdfwriter.html

/// q_pdfwriter_new constructs a new QPdfWriter object.
///
/// ``` const char* filename ```
QPdfWriter* q_pdfwriter_new(const char* filename);

/// q_pdfwriter_new2 constructs a new QPdfWriter object.
///
/// ``` QIODevice* device ```
QPdfWriter* q_pdfwriter_new2(void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPdfWriter* self ```
QMetaObject* q_pdfwriter_meta_object(void* self);

/// ``` QPdfWriter* self, const char* param1 ```
void* q_pdfwriter_metacast(void* self, const char* param1);

/// ``` QPdfWriter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfwriter_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QPdfWriter* self, int32_t (*slot)(QPdfWriter*, enum QMetaObject__Call, int, void*) ```
void q_pdfwriter_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QPdfWriter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfwriter_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pdfwriter_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setPdfVersion)
///
/// ``` QPdfWriter* self, enum QPagedPaintDevice__PdfVersion version ```
void q_pdfwriter_set_pdf_version(void* self, int64_t version);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#pdfVersion)
///
/// ``` QPdfWriter* self ```
int64_t q_pdfwriter_pdf_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#title)
///
/// ``` QPdfWriter* self ```
const char* q_pdfwriter_title(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setTitle)
///
/// ``` QPdfWriter* self, const char* title ```
void q_pdfwriter_set_title(void* self, const char* title);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#creator)
///
/// ``` QPdfWriter* self ```
const char* q_pdfwriter_creator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setCreator)
///
/// ``` QPdfWriter* self, const char* creator ```
void q_pdfwriter_set_creator(void* self, const char* creator);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_new_page(void* self);

/// Allows for overriding the related default method
///
/// ``` QPdfWriter* self, bool (*slot)() ```
void q_pdfwriter_on_new_page(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_qbase_new_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setResolution)
///
/// ``` QPdfWriter* self, int resolution ```
void q_pdfwriter_set_resolution(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#resolution)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_resolution(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setDocumentXmpMetadata)
///
/// ``` QPdfWriter* self, const char* xmpMetadata ```
void q_pdfwriter_set_document_xmp_metadata(void* self, const char* xmpMetadata);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#documentXmpMetadata)
///
/// ``` QPdfWriter* self ```
char* q_pdfwriter_document_xmp_metadata(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
///
/// ``` QPdfWriter* self, const char* fileName, const char* data ```
void q_pdfwriter_add_file_attachment(void* self, const char* fileName, const char* data);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
///
/// ``` QPdfWriter* self ```
QPaintEngine* q_pdfwriter_paint_engine(void* self);

/// Allows for overriding the related default method
///
/// ``` QPdfWriter* self, QPaintEngine* (*slot)() ```
void q_pdfwriter_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Base class method implementation
///
/// ``` QPdfWriter* self ```
QPaintEngine* q_pdfwriter_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
///
/// ``` QPdfWriter* self, enum QPaintDevice__PaintDeviceMetric id ```
int32_t q_pdfwriter_metric(void* self, int64_t id);

/// Allows for overriding the related default method
///
/// ``` QPdfWriter* self, int32_t (*slot)(QPdfWriter*, enum QPaintDevice__PaintDeviceMetric) ```
void q_pdfwriter_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QPdfWriter* self, enum QPaintDevice__PaintDeviceMetric id ```
int32_t q_pdfwriter_qbase_metric(void* self, int64_t id);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pdfwriter_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pdfwriter_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
///
/// ``` QPdfWriter* self, const char* fileName, const char* data, const char* mimeType ```
void q_pdfwriter_add_file_attachment3(void* self, const char* fileName, const char* data, const char* mimeType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPdfWriter* self ```
const char* q_pdfwriter_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPdfWriter* self, const char* name ```
void q_pdfwriter_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPdfWriter* self, bool b ```
bool q_pdfwriter_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPdfWriter* self ```
QThread* q_pdfwriter_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfWriter* self, QThread* thread ```
void q_pdfwriter_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfWriter* self, int interval ```
int32_t q_pdfwriter_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfWriter* self, int id ```
void q_pdfwriter_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPdfWriter* self ```
libqt_list /* of QObject* */ q_pdfwriter_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPdfWriter* self, QObject* parent ```
void q_pdfwriter_set_parent(void* self, void* parent);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPdfWriter* self, QObject* filterObj ```
void q_pdfwriter_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPdfWriter* self, QObject* obj ```
void q_pdfwriter_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pdfwriter_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfWriter* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pdfwriter_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pdfwriter_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pdfwriter_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPdfWriter* self, const char* name, QVariant* value ```
bool q_pdfwriter_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPdfWriter* self, const char* name ```
QVariant* q_pdfwriter_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPdfWriter* self ```
const char** q_pdfwriter_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfWriter* self ```
QBindingStorage* q_pdfwriter_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfWriter* self ```
QBindingStorage* q_pdfwriter_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QPdfWriter* self, void (*slot)(QObject*) ```
void q_pdfwriter_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPdfWriter* self ```
QObject* q_pdfwriter_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPdfWriter* self, const char* classname ```
bool q_pdfwriter_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfWriter* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pdfwriter_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfwriter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfWriter* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfwriter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfWriter* self, QObject* param1 ```
void q_pdfwriter_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QPdfWriter* self, void (*slot)(QObject*, QObject*) ```
void q_pdfwriter_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// ``` QPdfWriter* self ```
QPageLayout* q_pdfwriter_page_layout(void* self);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// ``` QPdfWriter* self ```
QPageRanges* q_pdfwriter_page_ranges(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_width(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_height(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPdfWriter* self ```
double q_pdfwriter_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPdfWriter* self ```
double q_pdfwriter_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_pdfwriter_device_pixel_ratio_f_scale();

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QEvent* event ```
bool q_pdfwriter_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QEvent* event ```
bool q_pdfwriter_qbase_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QEvent*) ```
void q_pdfwriter_on_event(void* self, bool (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QObject* watched, QEvent* event ```
bool q_pdfwriter_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QObject* watched, QEvent* event ```
bool q_pdfwriter_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QObject*, QEvent*) ```
void q_pdfwriter_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QTimerEvent* event ```
void q_pdfwriter_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QTimerEvent* event ```
void q_pdfwriter_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QTimerEvent*) ```
void q_pdfwriter_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QChildEvent* event ```
void q_pdfwriter_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QChildEvent* event ```
void q_pdfwriter_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QChildEvent*) ```
void q_pdfwriter_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QEvent* event ```
void q_pdfwriter_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QEvent* event ```
void q_pdfwriter_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QEvent*) ```
void q_pdfwriter_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
void q_pdfwriter_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
void q_pdfwriter_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QMetaMethod*) ```
void q_pdfwriter_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
void q_pdfwriter_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
void q_pdfwriter_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QMetaMethod*) ```
void q_pdfwriter_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPageLayout* pageLayout ```
bool q_pdfwriter_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPageLayout* pageLayout ```
bool q_pdfwriter_qbase_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QPageLayout*) ```
void q_pdfwriter_on_set_page_layout(void* self, bool (*slot)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPageSize* pageSize ```
bool q_pdfwriter_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPageSize* pageSize ```
bool q_pdfwriter_qbase_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QPageSize*) ```
void q_pdfwriter_on_set_page_size(void* self, bool (*slot)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, enum QPageLayout__Orientation orientation ```
bool q_pdfwriter_set_page_orientation(void* self, int64_t orientation);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, enum QPageLayout__Orientation orientation ```
bool q_pdfwriter_qbase_set_page_orientation(void* self, int64_t orientation);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, enum QPageLayout__Orientation) ```
void q_pdfwriter_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_pdfwriter_set_page_margins(void* self, void* margins, int64_t units);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_pdfwriter_qbase_set_page_margins(void* self, void* margins, int64_t units);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QMarginsF*, enum QPageLayout__Unit) ```
void q_pdfwriter_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPageRanges* ranges ```
void q_pdfwriter_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPageRanges* ranges ```
void q_pdfwriter_qbase_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QPageRanges*) ```
void q_pdfwriter_on_set_page_ranges(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_qbase_dev_type(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, int32_t (*slot)() ```
void q_pdfwriter_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPainter* painter ```
void q_pdfwriter_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPainter* painter ```
void q_pdfwriter_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QPainter*) ```
void q_pdfwriter_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPoint* offset ```
QPaintDevice* q_pdfwriter_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPoint* offset ```
QPaintDevice* q_pdfwriter_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, QPaintDevice* (*slot)(QPdfWriter*, QPoint*) ```
void q_pdfwriter_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self ```
QPainter* q_pdfwriter_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self ```
QPainter* q_pdfwriter_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, QPainter* (*slot)() ```
void q_pdfwriter_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self ```
QObject* q_pdfwriter_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self ```
QObject* q_pdfwriter_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, QObject* (*slot)() ```
void q_pdfwriter_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, int32_t (*slot)() ```
void q_pdfwriter_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, const char* signal ```
int32_t q_pdfwriter_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, const char* signal ```
int32_t q_pdfwriter_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, int32_t (*slot)(QPdfWriter*, const char*) ```
void q_pdfwriter_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
bool q_pdfwriter_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
bool q_pdfwriter_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QMetaMethod*) ```
void q_pdfwriter_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_delete(void* self);

#endif
