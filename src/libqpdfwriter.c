#include "libqanystringview.hpp"
#include "libqbindingstorage.hpp"
#include "libqevent.hpp"
#include "libqiodevice.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpagelayout.hpp"
#include "libqpageranges.hpp"
#include "libqpagesize.hpp"
#include "libqpagedpaintdevice.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include <string.h>
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqcoreevent.hpp"
#include "libqpdfwriter.hpp"
#include "libqpdfwriter.h"

/// https://doc.qt.io/qt-6/qpdfwriter.html

/// q_pdfwriter_new constructs a new QPdfWriter object.
///
/// ``` const char* filename ```
QPdfWriter* q_pdfwriter_new(const char* filename) {
    return QPdfWriter_new(qstring(filename));
}

/// q_pdfwriter_new2 constructs a new QPdfWriter object.
///
/// ``` QIODevice* device ```
QPdfWriter* q_pdfwriter_new2(void* device) {
    return QPdfWriter_new2((QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPdfWriter* self ```
QMetaObject* q_pdfwriter_meta_object(void* self) {
    return QPdfWriter_MetaObject((QPdfWriter*)self);
}

/// ``` QPdfWriter* self, const char* param1 ```
void* q_pdfwriter_metacast(void* self, const char* param1) {
    return QPdfWriter_Metacast((QPdfWriter*)self, param1);
}

/// ``` QPdfWriter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfwriter_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPdfWriter_Metacall((QPdfWriter*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPdfWriter* self, int32_t (*slot)(QPdfWriter*, enum QMetaObject__Call, int, void*) ```
void q_pdfwriter_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPdfWriter_OnMetacall((QPdfWriter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPdfWriter* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_pdfwriter_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPdfWriter_QBaseMetacall((QPdfWriter*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_pdfwriter_tr(const char* s) {
    libqt_string _str = QPdfWriter_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setPdfVersion)
///
/// ``` QPdfWriter* self, enum QPagedPaintDevice__PdfVersion version ```
void q_pdfwriter_set_pdf_version(void* self, int64_t version) {
    QPdfWriter_SetPdfVersion((QPdfWriter*)self, version);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#pdfVersion)
///
/// ``` QPdfWriter* self ```
int64_t q_pdfwriter_pdf_version(void* self) {
    return QPdfWriter_PdfVersion((QPdfWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#title)
///
/// ``` QPdfWriter* self ```
const char* q_pdfwriter_title(void* self) {
    libqt_string _str = QPdfWriter_Title((QPdfWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setTitle)
///
/// ``` QPdfWriter* self, const char* title ```
void q_pdfwriter_set_title(void* self, const char* title) {
    QPdfWriter_SetTitle((QPdfWriter*)self, qstring(title));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#creator)
///
/// ``` QPdfWriter* self ```
const char* q_pdfwriter_creator(void* self) {
    libqt_string _str = QPdfWriter_Creator((QPdfWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setCreator)
///
/// ``` QPdfWriter* self, const char* creator ```
void q_pdfwriter_set_creator(void* self, const char* creator) {
    QPdfWriter_SetCreator((QPdfWriter*)self, qstring(creator));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#newPage)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_new_page(void* self) {
    return QPdfWriter_NewPage((QPdfWriter*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPdfWriter* self, bool (*slot)() ```
void q_pdfwriter_on_new_page(void* self, bool (*slot)()) {
    QPdfWriter_OnNewPage((QPdfWriter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_qbase_new_page(void* self) {
    return QPdfWriter_QBaseNewPage((QPdfWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setResolution)
///
/// ``` QPdfWriter* self, int resolution ```
void q_pdfwriter_set_resolution(void* self, int resolution) {
    QPdfWriter_SetResolution((QPdfWriter*)self, resolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#resolution)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_resolution(void* self) {
    return QPdfWriter_Resolution((QPdfWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#setDocumentXmpMetadata)
///
/// ``` QPdfWriter* self, const char* xmpMetadata ```
void q_pdfwriter_set_document_xmp_metadata(void* self, const char* xmpMetadata) {
    QPdfWriter_SetDocumentXmpMetadata((QPdfWriter*)self, qstring(xmpMetadata));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#documentXmpMetadata)
///
/// ``` QPdfWriter* self ```
char* q_pdfwriter_document_xmp_metadata(void* self) {
    libqt_string _str = QPdfWriter_DocumentXmpMetadata((QPdfWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
///
/// ``` QPdfWriter* self, const char* fileName, const char* data ```
void q_pdfwriter_add_file_attachment(void* self, const char* fileName, const char* data) {
    QPdfWriter_AddFileAttachment((QPdfWriter*)self, qstring(fileName), qstring(data));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#paintEngine)
///
/// ``` QPdfWriter* self ```
QPaintEngine* q_pdfwriter_paint_engine(void* self) {
    return QPdfWriter_PaintEngine((QPdfWriter*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPdfWriter* self, QPaintEngine* (*slot)() ```
void q_pdfwriter_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPdfWriter_OnPaintEngine((QPdfWriter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPdfWriter* self ```
QPaintEngine* q_pdfwriter_qbase_paint_engine(void* self) {
    return QPdfWriter_QBasePaintEngine((QPdfWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#metric)
///
/// ``` QPdfWriter* self, enum QPaintDevice__PaintDeviceMetric id ```
int32_t q_pdfwriter_metric(void* self, int64_t id) {
    return QPdfWriter_Metric((QPdfWriter*)self, id);
}

/// Allows for overriding the related default method
///
/// ``` QPdfWriter* self, int32_t (*slot)(QPdfWriter*, enum QPaintDevice__PaintDeviceMetric) ```
void q_pdfwriter_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPdfWriter_OnMetric((QPdfWriter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPdfWriter* self, enum QPaintDevice__PaintDeviceMetric id ```
int32_t q_pdfwriter_qbase_metric(void* self, int64_t id) {
    return QPdfWriter_QBaseMetric((QPdfWriter*)self, id);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_pdfwriter_tr2(const char* s, const char* c) {
    libqt_string _str = QPdfWriter_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_pdfwriter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPdfWriter_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpdfwriter.html#addFileAttachment)
///
/// ``` QPdfWriter* self, const char* fileName, const char* data, const char* mimeType ```
void q_pdfwriter_add_file_attachment3(void* self, const char* fileName, const char* data, const char* mimeType) {
    QPdfWriter_AddFileAttachment3((QPdfWriter*)self, qstring(fileName), qstring(data), qstring(mimeType));
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPdfWriter* self ```
const char* q_pdfwriter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPdfWriter* self, const char* name ```
void q_pdfwriter_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPdfWriter* self, bool b ```
bool q_pdfwriter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPdfWriter* self ```
QThread* q_pdfwriter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPdfWriter* self, QThread* thread ```
void q_pdfwriter_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfWriter* self, int interval ```
int32_t q_pdfwriter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPdfWriter* self, int id ```
void q_pdfwriter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPdfWriter* self ```
libqt_list /* of QObject* */ q_pdfwriter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPdfWriter* self, QObject* parent ```
void q_pdfwriter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPdfWriter* self, QObject* filterObj ```
void q_pdfwriter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPdfWriter* self, QObject* obj ```
void q_pdfwriter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_pdfwriter_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfWriter* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_pdfwriter_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_pdfwriter_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_pdfwriter_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPdfWriter* self, const char* name, QVariant* value ```
bool q_pdfwriter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPdfWriter* self, const char* name ```
QVariant* q_pdfwriter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPdfWriter* self ```
const char** q_pdfwriter_dynamic_property_names(void* self) {
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
/// ``` QPdfWriter* self ```
QBindingStorage* q_pdfwriter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPdfWriter* self ```
QBindingStorage* q_pdfwriter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPdfWriter* self, void (*slot)(QObject*) ```
void q_pdfwriter_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPdfWriter* self ```
QObject* q_pdfwriter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPdfWriter* self, const char* classname ```
bool q_pdfwriter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPdfWriter* self, int interval, enum Qt__TimerType timerType ```
int32_t q_pdfwriter_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfwriter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPdfWriter* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_pdfwriter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPdfWriter* self, QObject* param1 ```
void q_pdfwriter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPdfWriter* self, void (*slot)(QObject*, QObject*) ```
void q_pdfwriter_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// ``` QPdfWriter* self ```
QPageLayout* q_pdfwriter_page_layout(void* self) {
    return QPagedPaintDevice_PageLayout((QPagedPaintDevice*)self);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// ``` QPdfWriter* self ```
QPageRanges* q_pdfwriter_page_ranges(void* self) {
    return QPagedPaintDevice_PageRanges((QPagedPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPdfWriter* self ```
bool q_pdfwriter_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPdfWriter* self ```
double q_pdfwriter_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPdfWriter* self ```
double q_pdfwriter_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_pdfwriter_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QEvent* event ```
bool q_pdfwriter_event(void* self, void* event) {
    return QPdfWriter_Event((QPdfWriter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QEvent* event ```
bool q_pdfwriter_qbase_event(void* self, void* event) {
    return QPdfWriter_QBaseEvent((QPdfWriter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QEvent*) ```
void q_pdfwriter_on_event(void* self, bool (*slot)(void*, void*)) {
    QPdfWriter_OnEvent((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QObject* watched, QEvent* event ```
bool q_pdfwriter_event_filter(void* self, void* watched, void* event) {
    return QPdfWriter_EventFilter((QPdfWriter*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QObject* watched, QEvent* event ```
bool q_pdfwriter_qbase_event_filter(void* self, void* watched, void* event) {
    return QPdfWriter_QBaseEventFilter((QPdfWriter*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QObject*, QEvent*) ```
void q_pdfwriter_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPdfWriter_OnEventFilter((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QTimerEvent* event ```
void q_pdfwriter_timer_event(void* self, void* event) {
    QPdfWriter_TimerEvent((QPdfWriter*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QTimerEvent* event ```
void q_pdfwriter_qbase_timer_event(void* self, void* event) {
    QPdfWriter_QBaseTimerEvent((QPdfWriter*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QTimerEvent*) ```
void q_pdfwriter_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnTimerEvent((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QChildEvent* event ```
void q_pdfwriter_child_event(void* self, void* event) {
    QPdfWriter_ChildEvent((QPdfWriter*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QChildEvent* event ```
void q_pdfwriter_qbase_child_event(void* self, void* event) {
    QPdfWriter_QBaseChildEvent((QPdfWriter*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QChildEvent*) ```
void q_pdfwriter_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnChildEvent((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QEvent* event ```
void q_pdfwriter_custom_event(void* self, void* event) {
    QPdfWriter_CustomEvent((QPdfWriter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QEvent* event ```
void q_pdfwriter_qbase_custom_event(void* self, void* event) {
    QPdfWriter_QBaseCustomEvent((QPdfWriter*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QEvent*) ```
void q_pdfwriter_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnCustomEvent((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
void q_pdfwriter_connect_notify(void* self, void* signal) {
    QPdfWriter_ConnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
void q_pdfwriter_qbase_connect_notify(void* self, void* signal) {
    QPdfWriter_QBaseConnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QMetaMethod*) ```
void q_pdfwriter_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnConnectNotify((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
void q_pdfwriter_disconnect_notify(void* self, void* signal) {
    QPdfWriter_DisconnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
void q_pdfwriter_qbase_disconnect_notify(void* self, void* signal) {
    QPdfWriter_QBaseDisconnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QMetaMethod*) ```
void q_pdfwriter_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnDisconnectNotify((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPageLayout* pageLayout ```
bool q_pdfwriter_set_page_layout(void* self, void* pageLayout) {
    return QPdfWriter_SetPageLayout((QPdfWriter*)self, (QPageLayout*)pageLayout);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPageLayout* pageLayout ```
bool q_pdfwriter_qbase_set_page_layout(void* self, void* pageLayout) {
    return QPdfWriter_QBaseSetPageLayout((QPdfWriter*)self, (QPageLayout*)pageLayout);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QPageLayout*) ```
void q_pdfwriter_on_set_page_layout(void* self, bool (*slot)(void*, void*)) {
    QPdfWriter_OnSetPageLayout((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPageSize* pageSize ```
bool q_pdfwriter_set_page_size(void* self, void* pageSize) {
    return QPdfWriter_SetPageSize((QPdfWriter*)self, (QPageSize*)pageSize);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPageSize* pageSize ```
bool q_pdfwriter_qbase_set_page_size(void* self, void* pageSize) {
    return QPdfWriter_QBaseSetPageSize((QPdfWriter*)self, (QPageSize*)pageSize);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QPageSize*) ```
void q_pdfwriter_on_set_page_size(void* self, bool (*slot)(void*, void*)) {
    QPdfWriter_OnSetPageSize((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, enum QPageLayout__Orientation orientation ```
bool q_pdfwriter_set_page_orientation(void* self, int64_t orientation) {
    return QPdfWriter_SetPageOrientation((QPdfWriter*)self, orientation);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, enum QPageLayout__Orientation orientation ```
bool q_pdfwriter_qbase_set_page_orientation(void* self, int64_t orientation) {
    return QPdfWriter_QBaseSetPageOrientation((QPdfWriter*)self, orientation);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, enum QPageLayout__Orientation) ```
void q_pdfwriter_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t)) {
    QPdfWriter_OnSetPageOrientation((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_pdfwriter_set_page_margins(void* self, void* margins, int64_t units) {
    return QPdfWriter_SetPageMargins((QPdfWriter*)self, (QMarginsF*)margins, units);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_pdfwriter_qbase_set_page_margins(void* self, void* margins, int64_t units) {
    return QPdfWriter_QBaseSetPageMargins((QPdfWriter*)self, (QMarginsF*)margins, units);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QMarginsF*, enum QPageLayout__Unit) ```
void q_pdfwriter_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t)) {
    QPdfWriter_OnSetPageMargins((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPageRanges* ranges ```
void q_pdfwriter_set_page_ranges(void* self, void* ranges) {
    QPdfWriter_SetPageRanges((QPdfWriter*)self, (QPageRanges*)ranges);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPageRanges* ranges ```
void q_pdfwriter_qbase_set_page_ranges(void* self, void* ranges) {
    QPdfWriter_QBaseSetPageRanges((QPdfWriter*)self, (QPageRanges*)ranges);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QPageRanges*) ```
void q_pdfwriter_on_set_page_ranges(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnSetPageRanges((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_dev_type(void* self) {
    return QPdfWriter_DevType((QPdfWriter*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_qbase_dev_type(void* self) {
    return QPdfWriter_QBaseDevType((QPdfWriter*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, int32_t (*slot)() ```
void q_pdfwriter_on_dev_type(void* self, int32_t (*slot)()) {
    QPdfWriter_OnDevType((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPainter* painter ```
void q_pdfwriter_init_painter(void* self, void* painter) {
    QPdfWriter_InitPainter((QPdfWriter*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPainter* painter ```
void q_pdfwriter_qbase_init_painter(void* self, void* painter) {
    QPdfWriter_QBaseInitPainter((QPdfWriter*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, void (*slot)(QPdfWriter*, QPainter*) ```
void q_pdfwriter_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnInitPainter((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QPoint* offset ```
QPaintDevice* q_pdfwriter_redirected(void* self, void* offset) {
    return QPdfWriter_Redirected((QPdfWriter*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QPoint* offset ```
QPaintDevice* q_pdfwriter_qbase_redirected(void* self, void* offset) {
    return QPdfWriter_QBaseRedirected((QPdfWriter*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, QPaintDevice* (*slot)(QPdfWriter*, QPoint*) ```
void q_pdfwriter_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPdfWriter_OnRedirected((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self ```
QPainter* q_pdfwriter_shared_painter(void* self) {
    return QPdfWriter_SharedPainter((QPdfWriter*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self ```
QPainter* q_pdfwriter_qbase_shared_painter(void* self) {
    return QPdfWriter_QBaseSharedPainter((QPdfWriter*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, QPainter* (*slot)() ```
void q_pdfwriter_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPdfWriter_OnSharedPainter((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self ```
QObject* q_pdfwriter_sender(void* self) {
    return QPdfWriter_Sender((QPdfWriter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self ```
QObject* q_pdfwriter_qbase_sender(void* self) {
    return QPdfWriter_QBaseSender((QPdfWriter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, QObject* (*slot)() ```
void q_pdfwriter_on_sender(void* self, QObject* (*slot)()) {
    QPdfWriter_OnSender((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_sender_signal_index(void* self) {
    return QPdfWriter_SenderSignalIndex((QPdfWriter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self ```
int32_t q_pdfwriter_qbase_sender_signal_index(void* self) {
    return QPdfWriter_QBaseSenderSignalIndex((QPdfWriter*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, int32_t (*slot)() ```
void q_pdfwriter_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPdfWriter_OnSenderSignalIndex((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, const char* signal ```
int32_t q_pdfwriter_receivers(void* self, const char* signal) {
    return QPdfWriter_Receivers((QPdfWriter*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, const char* signal ```
int32_t q_pdfwriter_qbase_receivers(void* self, const char* signal) {
    return QPdfWriter_QBaseReceivers((QPdfWriter*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, int32_t (*slot)(QPdfWriter*, const char*) ```
void q_pdfwriter_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPdfWriter_OnReceivers((QPdfWriter*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
bool q_pdfwriter_is_signal_connected(void* self, void* signal) {
    return QPdfWriter_IsSignalConnected((QPdfWriter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPdfWriter* self, QMetaMethod* signal ```
bool q_pdfwriter_qbase_is_signal_connected(void* self, void* signal) {
    return QPdfWriter_QBaseIsSignalConnected((QPdfWriter*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPdfWriter* self, bool (*slot)(QPdfWriter*, QMetaMethod*) ```
void q_pdfwriter_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPdfWriter_OnIsSignalConnected((QPdfWriter*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPdfWriter* self ```
void q_pdfwriter_delete(void* self) {
    QPdfWriter_Delete((QPdfWriter*)(self));
}