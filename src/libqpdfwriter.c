#include "libqcoreevent.hpp"
#include "libqiodevice.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpagelayout.hpp"
#include "libqpageranges.hpp"
#include "libqpagesize.hpp"
#include "libqpagedpaintdevice.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpdfoutputintent.hpp"
#include "libqpoint.hpp"
#include "libquuid.hpp"
#include "libqpdfwriter.hpp"
#include "libqpdfwriter.h"

QPdfWriter* q_pdfwriter_new(const char* filename) {
    return QPdfWriter_new(qstring(filename));
}

QPdfWriter* q_pdfwriter_new2(void* device) {
    return QPdfWriter_new2((QIODevice*)device);
}

const QMetaObject* q_pdfwriter_meta_object(void* self) {
    return QPdfWriter_MetaObject((QPdfWriter*)self);
}

void q_pdfwriter_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    QPdfWriter_OnMetaObject((QPdfWriter*)self, (intptr_t)callback);
}

const QMetaObject* q_pdfwriter_super_meta_object(void* self) {
    return QPdfWriter_SuperMetaObject((QPdfWriter*)self);
}

void* q_pdfwriter_metacast(void* self, const char* param1) {
    return QPdfWriter_Metacast((QPdfWriter*)self, param1);
}

void q_pdfwriter_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    QPdfWriter_OnMetacast((QPdfWriter*)self, (intptr_t)callback);
}

void* q_pdfwriter_super_metacast(void* self, const char* param1) {
    return QPdfWriter_SuperMetacast((QPdfWriter*)self, param1);
}

int32_t q_pdfwriter_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfWriter_Metacall((QPdfWriter*)self, param1, param2, param3);
}

void q_pdfwriter_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QPdfWriter_OnMetacall((QPdfWriter*)self, (intptr_t)callback);
}

int32_t q_pdfwriter_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QPdfWriter_SuperMetacall((QPdfWriter*)self, param1, param2, param3);
}

const char* q_pdfwriter_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_set_pdf_version(void* self, int32_t version) {
    QPdfWriter_SetPdfVersion((QPdfWriter*)self, version);
}

int32_t q_pdfwriter_pdf_version(void* self) {
    return QPdfWriter_PdfVersion((QPdfWriter*)self);
}

const char* q_pdfwriter_title(void* self) {
    libqt_string _str = QPdfWriter_Title((QPdfWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_set_title(void* self, const char* title) {
    QPdfWriter_SetTitle((QPdfWriter*)self, qstring(title));
}

const char* q_pdfwriter_creator(void* self) {
    libqt_string _str = QPdfWriter_Creator((QPdfWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_set_creator(void* self, const char* creator) {
    QPdfWriter_SetCreator((QPdfWriter*)self, qstring(creator));
}

QUuid* q_pdfwriter_document_id(void* self) {
    return QPdfWriter_DocumentId((QPdfWriter*)self);
}

void q_pdfwriter_set_document_id(void* self, void* documentId) {
    QPdfWriter_SetDocumentId((QPdfWriter*)self, (QUuid*)documentId);
}

bool q_pdfwriter_new_page(void* self) {
    return QPdfWriter_NewPage((QPdfWriter*)self);
}

void q_pdfwriter_on_new_page(void* self, bool (*callback)()) {
    QPdfWriter_OnNewPage((QPdfWriter*)self, (intptr_t)callback);
}

bool q_pdfwriter_super_new_page(void* self) {
    return QPdfWriter_SuperNewPage((QPdfWriter*)self);
}

void q_pdfwriter_set_resolution(void* self, int resolution) {
    QPdfWriter_SetResolution((QPdfWriter*)self, resolution);
}

int32_t q_pdfwriter_resolution(void* self) {
    return QPdfWriter_Resolution((QPdfWriter*)self);
}

void q_pdfwriter_set_document_xmp_metadata(void* self, char* xmpMetadata) {
    QPdfWriter_SetDocumentXmpMetadata((QPdfWriter*)self, qstring(xmpMetadata));
}

char* q_pdfwriter_document_xmp_metadata(void* self) {
    libqt_string _str = QPdfWriter_DocumentXmpMetadata((QPdfWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_add_file_attachment(void* self, const char* fileName, char* data) {
    QPdfWriter_AddFileAttachment((QPdfWriter*)self, qstring(fileName), qstring(data));
}

int32_t q_pdfwriter_color_model(void* self) {
    return QPdfWriter_ColorModel((QPdfWriter*)self);
}

void q_pdfwriter_set_color_model(void* self, int32_t model) {
    QPdfWriter_SetColorModel((QPdfWriter*)self, model);
}

QPdfOutputIntent* q_pdfwriter_output_intent(void* self) {
    return QPdfWriter_OutputIntent((QPdfWriter*)self);
}

void q_pdfwriter_set_output_intent(void* self, void* intent) {
    QPdfWriter_SetOutputIntent((QPdfWriter*)self, (QPdfOutputIntent*)intent);
}

QPaintEngine* q_pdfwriter_paint_engine(void* self) {
    return QPdfWriter_PaintEngine((QPdfWriter*)self);
}

void q_pdfwriter_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QPdfWriter_OnPaintEngine((QPdfWriter*)self, (intptr_t)callback);
}

QPaintEngine* q_pdfwriter_super_paint_engine(void* self) {
    return QPdfWriter_SuperPaintEngine((QPdfWriter*)self);
}

int32_t q_pdfwriter_metric(void* self, int32_t id) {
    return QPdfWriter_Metric((QPdfWriter*)self, id);
}

void q_pdfwriter_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QPdfWriter_OnMetric((QPdfWriter*)self, (intptr_t)callback);
}

int32_t q_pdfwriter_super_metric(void* self, int32_t id) {
    return QPdfWriter_SuperMetric((QPdfWriter*)self, id);
}

const char* q_pdfwriter_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfwriter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_add_file_attachment3(void* self, const char* fileName, char* data, const char* mimeType) {
    QPdfWriter_AddFileAttachment3((QPdfWriter*)self, qstring(fileName), qstring(data), qstring(mimeType));
}

const char* q_pdfwriter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_pdfwriter_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_pdfwriter_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_pdfwriter_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_pdfwriter_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_pdfwriter_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_pdfwriter_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_pdfwriter_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfwriter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t q_pdfwriter_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void q_pdfwriter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_pdfwriter_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_pdfwriter_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_pdfwriter_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_pdfwriter_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_pdfwriter_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_pdfwriter_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* q_pdfwriter_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfwriter_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfwriter_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool q_pdfwriter_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfwriter_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool q_pdfwriter_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool q_pdfwriter_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void q_pdfwriter_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_pdfwriter_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_pdfwriter_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_pdfwriter_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_pdfwriter_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_pdfwriter_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_pdfwriter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_pdfwriter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfwriter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfwriter_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_pdfwriter_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_pdfwriter_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_pdfwriter_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_pdfwriter_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t q_pdfwriter_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* q_pdfwriter_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* q_pdfwriter_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_pdfwriter_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool q_pdfwriter_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool q_pdfwriter_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool q_pdfwriter_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool q_pdfwriter_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void q_pdfwriter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfwriter_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

QPageLayout* q_pdfwriter_page_layout(void* self) {
    return QPagedPaintDevice_PageLayout((QPagedPaintDevice*)self);
}

QPageRanges* q_pdfwriter_page_ranges(void* self) {
    return QPagedPaintDevice_PageRanges((QPagedPaintDevice*)self);
}

bool q_pdfwriter_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_pdfwriter_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

int32_t q_pdfwriter_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

int32_t q_pdfwriter_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_pdfwriter_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_pdfwriter_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_pdfwriter_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_pdfwriter_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_pdfwriter_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_pdfwriter_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_pdfwriter_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_pdfwriter_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_pdfwriter_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_pdfwriter_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_pdfwriter_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool q_pdfwriter_event(void* self, void* event) {
    return QPdfWriter_Event((QPdfWriter*)self, (QEvent*)event);
}

bool q_pdfwriter_super_event(void* self, void* event) {
    return QPdfWriter_SuperEvent((QPdfWriter*)self, (QEvent*)event);
}

void q_pdfwriter_on_event(void* self, bool (*callback)(void*, void*)) {
    QPdfWriter_OnEvent((QPdfWriter*)self, (intptr_t)callback);
}

bool q_pdfwriter_event_filter(void* self, void* watched, void* event) {
    return QPdfWriter_EventFilter((QPdfWriter*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdfwriter_super_event_filter(void* self, void* watched, void* event) {
    return QPdfWriter_SuperEventFilter((QPdfWriter*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdfwriter_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QPdfWriter_OnEventFilter((QPdfWriter*)self, (intptr_t)callback);
}

void q_pdfwriter_timer_event(void* self, void* event) {
    QPdfWriter_TimerEvent((QPdfWriter*)self, (QTimerEvent*)event);
}

void q_pdfwriter_super_timer_event(void* self, void* event) {
    QPdfWriter_SuperTimerEvent((QPdfWriter*)self, (QTimerEvent*)event);
}

void q_pdfwriter_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QPdfWriter_OnTimerEvent((QPdfWriter*)self, (intptr_t)callback);
}

void q_pdfwriter_child_event(void* self, void* event) {
    QPdfWriter_ChildEvent((QPdfWriter*)self, (QChildEvent*)event);
}

void q_pdfwriter_super_child_event(void* self, void* event) {
    QPdfWriter_SuperChildEvent((QPdfWriter*)self, (QChildEvent*)event);
}

void q_pdfwriter_on_child_event(void* self, void (*callback)(void*, void*)) {
    QPdfWriter_OnChildEvent((QPdfWriter*)self, (intptr_t)callback);
}

void q_pdfwriter_custom_event(void* self, void* event) {
    QPdfWriter_CustomEvent((QPdfWriter*)self, (QEvent*)event);
}

void q_pdfwriter_super_custom_event(void* self, void* event) {
    QPdfWriter_SuperCustomEvent((QPdfWriter*)self, (QEvent*)event);
}

void q_pdfwriter_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QPdfWriter_OnCustomEvent((QPdfWriter*)self, (intptr_t)callback);
}

void q_pdfwriter_connect_notify(void* self, void* signal) {
    QPdfWriter_ConnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_super_connect_notify(void* self, void* signal) {
    QPdfWriter_SuperConnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfWriter_OnConnectNotify((QPdfWriter*)self, (intptr_t)callback);
}

void q_pdfwriter_disconnect_notify(void* self, void* signal) {
    QPdfWriter_DisconnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_super_disconnect_notify(void* self, void* signal) {
    QPdfWriter_SuperDisconnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QPdfWriter_OnDisconnectNotify((QPdfWriter*)self, (intptr_t)callback);
}

bool q_pdfwriter_set_page_layout(void* self, void* pageLayout) {
    return QPdfWriter_SetPageLayout((QPdfWriter*)self, (QPageLayout*)pageLayout);
}

bool q_pdfwriter_super_set_page_layout(void* self, void* pageLayout) {
    return QPdfWriter_SuperSetPageLayout((QPdfWriter*)self, (QPageLayout*)pageLayout);
}

void q_pdfwriter_on_set_page_layout(void* self, bool (*callback)(void*, void*)) {
    QPdfWriter_OnSetPageLayout((QPdfWriter*)self, (intptr_t)callback);
}

bool q_pdfwriter_set_page_size(void* self, void* pageSize) {
    return QPdfWriter_SetPageSize((QPdfWriter*)self, (QPageSize*)pageSize);
}

bool q_pdfwriter_super_set_page_size(void* self, void* pageSize) {
    return QPdfWriter_SuperSetPageSize((QPdfWriter*)self, (QPageSize*)pageSize);
}

void q_pdfwriter_on_set_page_size(void* self, bool (*callback)(void*, void*)) {
    QPdfWriter_OnSetPageSize((QPdfWriter*)self, (intptr_t)callback);
}

bool q_pdfwriter_set_page_orientation(void* self, int32_t orientation) {
    return QPdfWriter_SetPageOrientation((QPdfWriter*)self, orientation);
}

bool q_pdfwriter_super_set_page_orientation(void* self, int32_t orientation) {
    return QPdfWriter_SuperSetPageOrientation((QPdfWriter*)self, orientation);
}

void q_pdfwriter_on_set_page_orientation(void* self, bool (*callback)(void*, int32_t)) {
    QPdfWriter_OnSetPageOrientation((QPdfWriter*)self, (intptr_t)callback);
}

bool q_pdfwriter_set_page_margins(void* self, void* margins, int32_t units) {
    return QPdfWriter_SetPageMargins((QPdfWriter*)self, (QMarginsF*)margins, units);
}

bool q_pdfwriter_super_set_page_margins(void* self, void* margins, int32_t units) {
    return QPdfWriter_SuperSetPageMargins((QPdfWriter*)self, (QMarginsF*)margins, units);
}

void q_pdfwriter_on_set_page_margins(void* self, bool (*callback)(void*, void*, int32_t)) {
    QPdfWriter_OnSetPageMargins((QPdfWriter*)self, (intptr_t)callback);
}

void q_pdfwriter_set_page_ranges(void* self, void* ranges) {
    QPdfWriter_SetPageRanges((QPdfWriter*)self, (QPageRanges*)ranges);
}

void q_pdfwriter_super_set_page_ranges(void* self, void* ranges) {
    QPdfWriter_SuperSetPageRanges((QPdfWriter*)self, (QPageRanges*)ranges);
}

void q_pdfwriter_on_set_page_ranges(void* self, void (*callback)(void*, void*)) {
    QPdfWriter_OnSetPageRanges((QPdfWriter*)self, (intptr_t)callback);
}

int32_t q_pdfwriter_dev_type(void* self) {
    return QPdfWriter_DevType((QPdfWriter*)self);
}

int32_t q_pdfwriter_super_dev_type(void* self) {
    return QPdfWriter_SuperDevType((QPdfWriter*)self);
}

void q_pdfwriter_on_dev_type(void* self, int32_t (*callback)()) {
    QPdfWriter_OnDevType((QPdfWriter*)self, (intptr_t)callback);
}

void q_pdfwriter_init_painter(void* self, void* painter) {
    QPdfWriter_InitPainter((QPdfWriter*)self, (QPainter*)painter);
}

void q_pdfwriter_super_init_painter(void* self, void* painter) {
    QPdfWriter_SuperInitPainter((QPdfWriter*)self, (QPainter*)painter);
}

void q_pdfwriter_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QPdfWriter_OnInitPainter((QPdfWriter*)self, (intptr_t)callback);
}

QPaintDevice* q_pdfwriter_redirected(void* self, void* offset) {
    return QPdfWriter_Redirected((QPdfWriter*)self, (QPoint*)offset);
}

QPaintDevice* q_pdfwriter_super_redirected(void* self, void* offset) {
    return QPdfWriter_SuperRedirected((QPdfWriter*)self, (QPoint*)offset);
}

void q_pdfwriter_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QPdfWriter_OnRedirected((QPdfWriter*)self, (intptr_t)callback);
}

QPainter* q_pdfwriter_shared_painter(void* self) {
    return QPdfWriter_SharedPainter((QPdfWriter*)self);
}

QPainter* q_pdfwriter_super_shared_painter(void* self) {
    return QPdfWriter_SuperSharedPainter((QPdfWriter*)self);
}

void q_pdfwriter_on_shared_painter(void* self, QPainter* (*callback)()) {
    QPdfWriter_OnSharedPainter((QPdfWriter*)self, (intptr_t)callback);
}

QObject* q_pdfwriter_sender(void* self) {
    return QPdfWriter_Sender((QPdfWriter*)self);
}

QObject* q_pdfwriter_super_sender(void* self) {
    return QPdfWriter_SuperSender((QPdfWriter*)self);
}

void q_pdfwriter_on_sender(void* self, QObject* (*callback)()) {
    QPdfWriter_OnSender((QPdfWriter*)self, (intptr_t)callback);
}

int32_t q_pdfwriter_sender_signal_index(void* self) {
    return QPdfWriter_SenderSignalIndex((QPdfWriter*)self);
}

int32_t q_pdfwriter_super_sender_signal_index(void* self) {
    return QPdfWriter_SuperSenderSignalIndex((QPdfWriter*)self);
}

void q_pdfwriter_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QPdfWriter_OnSenderSignalIndex((QPdfWriter*)self, (intptr_t)callback);
}

int32_t q_pdfwriter_receivers(void* self, const char* signal) {
    return QPdfWriter_Receivers((QPdfWriter*)self, signal);
}

int32_t q_pdfwriter_super_receivers(void* self, const char* signal) {
    return QPdfWriter_SuperReceivers((QPdfWriter*)self, signal);
}

void q_pdfwriter_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QPdfWriter_OnReceivers((QPdfWriter*)self, (intptr_t)callback);
}

bool q_pdfwriter_is_signal_connected(void* self, void* signal) {
    return QPdfWriter_IsSignalConnected((QPdfWriter*)self, (QMetaMethod*)signal);
}

bool q_pdfwriter_super_is_signal_connected(void* self, void* signal) {
    return QPdfWriter_SuperIsSignalConnected((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QPdfWriter_OnIsSignalConnected((QPdfWriter*)self, (intptr_t)callback);
}

double q_pdfwriter_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPdfWriter_GetDecodedMetricF((QPdfWriter*)self, metricA, metricB);
}

double q_pdfwriter_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPdfWriter_SuperGetDecodedMetricF((QPdfWriter*)self, metricA, metricB);
}

void q_pdfwriter_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QPdfWriter_OnGetDecodedMetricF((QPdfWriter*)self, (intptr_t)callback);
}

void q_pdfwriter_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_pdfwriter_delete(void* self) {
    QPdfWriter_Delete((QPdfWriter*)(self));
}
