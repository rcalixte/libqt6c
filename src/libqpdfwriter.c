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

QPdfWriter* q_pdfwriter_new(const char* filename) {
    return QPdfWriter_new(qstring(filename));
}

QPdfWriter* q_pdfwriter_new2(void* device) {
    return QPdfWriter_new2((QIODevice*)device);
}

QMetaObject* q_pdfwriter_meta_object(void* self) {
    return QPdfWriter_MetaObject((QPdfWriter*)self);
}

void* q_pdfwriter_metacast(void* self, const char* param1) {
    return QPdfWriter_Metacast((QPdfWriter*)self, param1);
}

int32_t q_pdfwriter_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPdfWriter_Metacall((QPdfWriter*)self, param1, param2, param3);
}

void q_pdfwriter_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPdfWriter_OnMetacall((QPdfWriter*)self, (intptr_t)slot);
}

int32_t q_pdfwriter_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPdfWriter_QBaseMetacall((QPdfWriter*)self, param1, param2, param3);
}

const char* q_pdfwriter_tr(const char* s) {
    libqt_string _str = QPdfWriter_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_set_pdf_version(void* self, int64_t version) {
    QPdfWriter_SetPdfVersion((QPdfWriter*)self, version);
}

int64_t q_pdfwriter_pdf_version(void* self) {
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

bool q_pdfwriter_new_page(void* self) {
    return QPdfWriter_NewPage((QPdfWriter*)self);
}

void q_pdfwriter_on_new_page(void* self, bool (*slot)()) {
    QPdfWriter_OnNewPage((QPdfWriter*)self, (intptr_t)slot);
}

bool q_pdfwriter_qbase_new_page(void* self) {
    return QPdfWriter_QBaseNewPage((QPdfWriter*)self);
}

void q_pdfwriter_set_resolution(void* self, int resolution) {
    QPdfWriter_SetResolution((QPdfWriter*)self, resolution);
}

int32_t q_pdfwriter_resolution(void* self) {
    return QPdfWriter_Resolution((QPdfWriter*)self);
}

void q_pdfwriter_set_document_xmp_metadata(void* self, const char* xmpMetadata) {
    QPdfWriter_SetDocumentXmpMetadata((QPdfWriter*)self, qstring(xmpMetadata));
}

char* q_pdfwriter_document_xmp_metadata(void* self) {
    libqt_string _str = QPdfWriter_DocumentXmpMetadata((QPdfWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_add_file_attachment(void* self, const char* fileName, const char* data) {
    QPdfWriter_AddFileAttachment((QPdfWriter*)self, qstring(fileName), qstring(data));
}

QPaintEngine* q_pdfwriter_paint_engine(void* self) {
    return QPdfWriter_PaintEngine((QPdfWriter*)self);
}

void q_pdfwriter_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPdfWriter_OnPaintEngine((QPdfWriter*)self, (intptr_t)slot);
}

QPaintEngine* q_pdfwriter_qbase_paint_engine(void* self) {
    return QPdfWriter_QBasePaintEngine((QPdfWriter*)self);
}

int32_t q_pdfwriter_metric(void* self, int64_t id) {
    return QPdfWriter_Metric((QPdfWriter*)self, id);
}

void q_pdfwriter_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPdfWriter_OnMetric((QPdfWriter*)self, (intptr_t)slot);
}

int32_t q_pdfwriter_qbase_metric(void* self, int64_t id) {
    return QPdfWriter_QBaseMetric((QPdfWriter*)self, id);
}

const char* q_pdfwriter_tr2(const char* s, const char* c) {
    libqt_string _str = QPdfWriter_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_pdfwriter_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPdfWriter_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_add_file_attachment3(void* self, const char* fileName, const char* data, const char* mimeType) {
    QPdfWriter_AddFileAttachment3((QPdfWriter*)self, qstring(fileName), qstring(data), qstring(mimeType));
}

const char* q_pdfwriter_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_pdfwriter_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
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

void q_pdfwriter_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_pdfwriter_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_pdfwriter_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
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

QMetaObject__Connection* q_pdfwriter_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_pdfwriter_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_pdfwriter_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_pdfwriter_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
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
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_pdfwriter_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_pdfwriter_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_pdfwriter_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_pdfwriter_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
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

int32_t q_pdfwriter_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_pdfwriter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_pdfwriter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_pdfwriter_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_pdfwriter_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
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

bool q_pdfwriter_event(void* self, void* event) {
    return QPdfWriter_Event((QPdfWriter*)self, (QEvent*)event);
}

bool q_pdfwriter_qbase_event(void* self, void* event) {
    return QPdfWriter_QBaseEvent((QPdfWriter*)self, (QEvent*)event);
}

void q_pdfwriter_on_event(void* self, bool (*slot)(void*, void*)) {
    QPdfWriter_OnEvent((QPdfWriter*)self, (intptr_t)slot);
}

bool q_pdfwriter_event_filter(void* self, void* watched, void* event) {
    return QPdfWriter_EventFilter((QPdfWriter*)self, (QObject*)watched, (QEvent*)event);
}

bool q_pdfwriter_qbase_event_filter(void* self, void* watched, void* event) {
    return QPdfWriter_QBaseEventFilter((QPdfWriter*)self, (QObject*)watched, (QEvent*)event);
}

void q_pdfwriter_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPdfWriter_OnEventFilter((QPdfWriter*)self, (intptr_t)slot);
}

void q_pdfwriter_timer_event(void* self, void* event) {
    QPdfWriter_TimerEvent((QPdfWriter*)self, (QTimerEvent*)event);
}

void q_pdfwriter_qbase_timer_event(void* self, void* event) {
    QPdfWriter_QBaseTimerEvent((QPdfWriter*)self, (QTimerEvent*)event);
}

void q_pdfwriter_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnTimerEvent((QPdfWriter*)self, (intptr_t)slot);
}

void q_pdfwriter_child_event(void* self, void* event) {
    QPdfWriter_ChildEvent((QPdfWriter*)self, (QChildEvent*)event);
}

void q_pdfwriter_qbase_child_event(void* self, void* event) {
    QPdfWriter_QBaseChildEvent((QPdfWriter*)self, (QChildEvent*)event);
}

void q_pdfwriter_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnChildEvent((QPdfWriter*)self, (intptr_t)slot);
}

void q_pdfwriter_custom_event(void* self, void* event) {
    QPdfWriter_CustomEvent((QPdfWriter*)self, (QEvent*)event);
}

void q_pdfwriter_qbase_custom_event(void* self, void* event) {
    QPdfWriter_QBaseCustomEvent((QPdfWriter*)self, (QEvent*)event);
}

void q_pdfwriter_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnCustomEvent((QPdfWriter*)self, (intptr_t)slot);
}

void q_pdfwriter_connect_notify(void* self, void* signal) {
    QPdfWriter_ConnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_qbase_connect_notify(void* self, void* signal) {
    QPdfWriter_QBaseConnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnConnectNotify((QPdfWriter*)self, (intptr_t)slot);
}

void q_pdfwriter_disconnect_notify(void* self, void* signal) {
    QPdfWriter_DisconnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_qbase_disconnect_notify(void* self, void* signal) {
    QPdfWriter_QBaseDisconnectNotify((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnDisconnectNotify((QPdfWriter*)self, (intptr_t)slot);
}

bool q_pdfwriter_set_page_layout(void* self, void* pageLayout) {
    return QPdfWriter_SetPageLayout((QPdfWriter*)self, (QPageLayout*)pageLayout);
}

bool q_pdfwriter_qbase_set_page_layout(void* self, void* pageLayout) {
    return QPdfWriter_QBaseSetPageLayout((QPdfWriter*)self, (QPageLayout*)pageLayout);
}

void q_pdfwriter_on_set_page_layout(void* self, bool (*slot)(void*, void*)) {
    QPdfWriter_OnSetPageLayout((QPdfWriter*)self, (intptr_t)slot);
}

bool q_pdfwriter_set_page_size(void* self, void* pageSize) {
    return QPdfWriter_SetPageSize((QPdfWriter*)self, (QPageSize*)pageSize);
}

bool q_pdfwriter_qbase_set_page_size(void* self, void* pageSize) {
    return QPdfWriter_QBaseSetPageSize((QPdfWriter*)self, (QPageSize*)pageSize);
}

void q_pdfwriter_on_set_page_size(void* self, bool (*slot)(void*, void*)) {
    QPdfWriter_OnSetPageSize((QPdfWriter*)self, (intptr_t)slot);
}

bool q_pdfwriter_set_page_orientation(void* self, int64_t orientation) {
    return QPdfWriter_SetPageOrientation((QPdfWriter*)self, orientation);
}

bool q_pdfwriter_qbase_set_page_orientation(void* self, int64_t orientation) {
    return QPdfWriter_QBaseSetPageOrientation((QPdfWriter*)self, orientation);
}

void q_pdfwriter_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t)) {
    QPdfWriter_OnSetPageOrientation((QPdfWriter*)self, (intptr_t)slot);
}

bool q_pdfwriter_set_page_margins(void* self, void* margins, int64_t units) {
    return QPdfWriter_SetPageMargins((QPdfWriter*)self, (QMarginsF*)margins, units);
}

bool q_pdfwriter_qbase_set_page_margins(void* self, void* margins, int64_t units) {
    return QPdfWriter_QBaseSetPageMargins((QPdfWriter*)self, (QMarginsF*)margins, units);
}

void q_pdfwriter_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t)) {
    QPdfWriter_OnSetPageMargins((QPdfWriter*)self, (intptr_t)slot);
}

void q_pdfwriter_set_page_ranges(void* self, void* ranges) {
    QPdfWriter_SetPageRanges((QPdfWriter*)self, (QPageRanges*)ranges);
}

void q_pdfwriter_qbase_set_page_ranges(void* self, void* ranges) {
    QPdfWriter_QBaseSetPageRanges((QPdfWriter*)self, (QPageRanges*)ranges);
}

void q_pdfwriter_on_set_page_ranges(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnSetPageRanges((QPdfWriter*)self, (intptr_t)slot);
}

int32_t q_pdfwriter_dev_type(void* self) {
    return QPdfWriter_DevType((QPdfWriter*)self);
}

int32_t q_pdfwriter_qbase_dev_type(void* self) {
    return QPdfWriter_QBaseDevType((QPdfWriter*)self);
}

void q_pdfwriter_on_dev_type(void* self, int32_t (*slot)()) {
    QPdfWriter_OnDevType((QPdfWriter*)self, (intptr_t)slot);
}

void q_pdfwriter_init_painter(void* self, void* painter) {
    QPdfWriter_InitPainter((QPdfWriter*)self, (QPainter*)painter);
}

void q_pdfwriter_qbase_init_painter(void* self, void* painter) {
    QPdfWriter_QBaseInitPainter((QPdfWriter*)self, (QPainter*)painter);
}

void q_pdfwriter_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPdfWriter_OnInitPainter((QPdfWriter*)self, (intptr_t)slot);
}

QPaintDevice* q_pdfwriter_redirected(void* self, void* offset) {
    return QPdfWriter_Redirected((QPdfWriter*)self, (QPoint*)offset);
}

QPaintDevice* q_pdfwriter_qbase_redirected(void* self, void* offset) {
    return QPdfWriter_QBaseRedirected((QPdfWriter*)self, (QPoint*)offset);
}

void q_pdfwriter_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPdfWriter_OnRedirected((QPdfWriter*)self, (intptr_t)slot);
}

QPainter* q_pdfwriter_shared_painter(void* self) {
    return QPdfWriter_SharedPainter((QPdfWriter*)self);
}

QPainter* q_pdfwriter_qbase_shared_painter(void* self) {
    return QPdfWriter_QBaseSharedPainter((QPdfWriter*)self);
}

void q_pdfwriter_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPdfWriter_OnSharedPainter((QPdfWriter*)self, (intptr_t)slot);
}

QObject* q_pdfwriter_sender(void* self) {
    return QPdfWriter_Sender((QPdfWriter*)self);
}

QObject* q_pdfwriter_qbase_sender(void* self) {
    return QPdfWriter_QBaseSender((QPdfWriter*)self);
}

void q_pdfwriter_on_sender(void* self, QObject* (*slot)()) {
    QPdfWriter_OnSender((QPdfWriter*)self, (intptr_t)slot);
}

int32_t q_pdfwriter_sender_signal_index(void* self) {
    return QPdfWriter_SenderSignalIndex((QPdfWriter*)self);
}

int32_t q_pdfwriter_qbase_sender_signal_index(void* self) {
    return QPdfWriter_QBaseSenderSignalIndex((QPdfWriter*)self);
}

void q_pdfwriter_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPdfWriter_OnSenderSignalIndex((QPdfWriter*)self, (intptr_t)slot);
}

int32_t q_pdfwriter_receivers(void* self, const char* signal) {
    return QPdfWriter_Receivers((QPdfWriter*)self, signal);
}

int32_t q_pdfwriter_qbase_receivers(void* self, const char* signal) {
    return QPdfWriter_QBaseReceivers((QPdfWriter*)self, signal);
}

void q_pdfwriter_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPdfWriter_OnReceivers((QPdfWriter*)self, (intptr_t)slot);
}

bool q_pdfwriter_is_signal_connected(void* self, void* signal) {
    return QPdfWriter_IsSignalConnected((QPdfWriter*)self, (QMetaMethod*)signal);
}

bool q_pdfwriter_qbase_is_signal_connected(void* self, void* signal) {
    return QPdfWriter_QBaseIsSignalConnected((QPdfWriter*)self, (QMetaMethod*)signal);
}

void q_pdfwriter_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPdfWriter_OnIsSignalConnected((QPdfWriter*)self, (intptr_t)slot);
}

void q_pdfwriter_delete(void* self) {
    QPdfWriter_Delete((QPdfWriter*)(self));
}
