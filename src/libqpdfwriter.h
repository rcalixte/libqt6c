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

QPdfWriter* q_pdfwriter_new(const char* filename);
QPdfWriter* q_pdfwriter_new2(void* device);
QMetaObject* q_pdfwriter_meta_object(void* self);
void* q_pdfwriter_metacast(void* self, const char* param1);
int32_t q_pdfwriter_metacall(void* self, int64_t param1, int param2, void* param3);
void q_pdfwriter_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));
int32_t q_pdfwriter_qbase_metacall(void* self, int64_t param1, int param2, void* param3);
const char* q_pdfwriter_tr(const char* s);
void q_pdfwriter_set_pdf_version(void* self, int64_t version);
int64_t q_pdfwriter_pdf_version(void* self);
const char* q_pdfwriter_title(void* self);
void q_pdfwriter_set_title(void* self, const char* title);
const char* q_pdfwriter_creator(void* self);
void q_pdfwriter_set_creator(void* self, const char* creator);
bool q_pdfwriter_new_page(void* self);
void q_pdfwriter_on_new_page(void* self, bool (*slot)());
bool q_pdfwriter_qbase_new_page(void* self);
void q_pdfwriter_set_resolution(void* self, int resolution);
int32_t q_pdfwriter_resolution(void* self);
void q_pdfwriter_set_document_xmp_metadata(void* self, const char* xmpMetadata);
char* q_pdfwriter_document_xmp_metadata(void* self);
void q_pdfwriter_add_file_attachment(void* self, const char* fileName, const char* data);
QPaintEngine* q_pdfwriter_paint_engine(void* self);
void q_pdfwriter_on_paint_engine(void* self, QPaintEngine* (*slot)());
QPaintEngine* q_pdfwriter_qbase_paint_engine(void* self);
int32_t q_pdfwriter_metric(void* self, int64_t id);
void q_pdfwriter_on_metric(void* self, int32_t (*slot)(void*, int64_t));
int32_t q_pdfwriter_qbase_metric(void* self, int64_t id);
const char* q_pdfwriter_tr2(const char* s, const char* c);
const char* q_pdfwriter_tr3(const char* s, const char* c, int n);
void q_pdfwriter_add_file_attachment3(void* self, const char* fileName, const char* data, const char* mimeType);
const char* q_pdfwriter_object_name(void* self);
void q_pdfwriter_set_object_name(void* self, const char* name);
bool q_pdfwriter_is_widget_type(void* self);
bool q_pdfwriter_is_window_type(void* self);
bool q_pdfwriter_is_quick_item_type(void* self);
bool q_pdfwriter_signals_blocked(void* self);
bool q_pdfwriter_block_signals(void* self, bool b);
QThread* q_pdfwriter_thread(void* self);
void q_pdfwriter_move_to_thread(void* self, void* thread);
int32_t q_pdfwriter_start_timer(void* self, int interval);
void q_pdfwriter_kill_timer(void* self, int id);
libqt_list /* of QObject* */ q_pdfwriter_children(void* self);
void q_pdfwriter_set_parent(void* self, void* parent);
void q_pdfwriter_install_event_filter(void* self, void* filterObj);
void q_pdfwriter_remove_event_filter(void* self, void* obj);
QMetaObject__Connection* q_pdfwriter_connect(void* sender, void* signal, void* receiver, void* method);
QMetaObject__Connection* q_pdfwriter_connect2(void* self, void* sender, const char* signal, const char* member);
bool q_pdfwriter_disconnect(void* sender, void* signal, void* receiver, void* member);
bool q_pdfwriter_disconnect_with_q_meta_object_connection(void* param1);
void q_pdfwriter_dump_object_tree(void* self);
void q_pdfwriter_dump_object_info(void* self);
bool q_pdfwriter_set_property(void* self, const char* name, void* value);
QVariant* q_pdfwriter_property(void* self, const char* name);
const char** q_pdfwriter_dynamic_property_names(void* self);
QBindingStorage* q_pdfwriter_binding_storage(void* self);
QBindingStorage* q_pdfwriter_binding_storage2(void* self);
void q_pdfwriter_destroyed(void* self);
void q_pdfwriter_on_destroyed(void* self, void (*slot)(void*));
QObject* q_pdfwriter_parent(void* self);
bool q_pdfwriter_inherits(void* self, const char* classname);
void q_pdfwriter_delete_later(void* self);
int32_t q_pdfwriter_start_timer2(void* self, int interval, int64_t timerType);
QMetaObject__Connection* q_pdfwriter_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);
QMetaObject__Connection* q_pdfwriter_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);
void q_pdfwriter_destroyed1(void* self, void* param1);
void q_pdfwriter_on_destroyed1(void* self, void (*slot)(void*, void*));
QPageLayout* q_pdfwriter_page_layout(void* self);
QPageRanges* q_pdfwriter_page_ranges(void* self);
bool q_pdfwriter_painting_active(void* self);
int32_t q_pdfwriter_width(void* self);
int32_t q_pdfwriter_height(void* self);
int32_t q_pdfwriter_width_m_m(void* self);
int32_t q_pdfwriter_height_m_m(void* self);
int32_t q_pdfwriter_logical_dpi_x(void* self);
int32_t q_pdfwriter_logical_dpi_y(void* self);
int32_t q_pdfwriter_physical_dpi_x(void* self);
int32_t q_pdfwriter_physical_dpi_y(void* self);
double q_pdfwriter_device_pixel_ratio(void* self);
double q_pdfwriter_device_pixel_ratio_f(void* self);
int32_t q_pdfwriter_color_count(void* self);
int32_t q_pdfwriter_depth(void* self);
double q_pdfwriter_device_pixel_ratio_f_scale();
bool q_pdfwriter_event(void* self, void* event);
bool q_pdfwriter_qbase_event(void* self, void* event);
void q_pdfwriter_on_event(void* self, bool (*slot)(void*, void*));
bool q_pdfwriter_event_filter(void* self, void* watched, void* event);
bool q_pdfwriter_qbase_event_filter(void* self, void* watched, void* event);
void q_pdfwriter_on_event_filter(void* self, bool (*slot)(void*, void*, void*));
void q_pdfwriter_timer_event(void* self, void* event);
void q_pdfwriter_qbase_timer_event(void* self, void* event);
void q_pdfwriter_on_timer_event(void* self, void (*slot)(void*, void*));
void q_pdfwriter_child_event(void* self, void* event);
void q_pdfwriter_qbase_child_event(void* self, void* event);
void q_pdfwriter_on_child_event(void* self, void (*slot)(void*, void*));
void q_pdfwriter_custom_event(void* self, void* event);
void q_pdfwriter_qbase_custom_event(void* self, void* event);
void q_pdfwriter_on_custom_event(void* self, void (*slot)(void*, void*));
void q_pdfwriter_connect_notify(void* self, void* signal);
void q_pdfwriter_qbase_connect_notify(void* self, void* signal);
void q_pdfwriter_on_connect_notify(void* self, void (*slot)(void*, void*));
void q_pdfwriter_disconnect_notify(void* self, void* signal);
void q_pdfwriter_qbase_disconnect_notify(void* self, void* signal);
void q_pdfwriter_on_disconnect_notify(void* self, void (*slot)(void*, void*));
bool q_pdfwriter_set_page_layout(void* self, void* pageLayout);
bool q_pdfwriter_qbase_set_page_layout(void* self, void* pageLayout);
void q_pdfwriter_on_set_page_layout(void* self, bool (*slot)(void*, void*));
bool q_pdfwriter_set_page_size(void* self, void* pageSize);
bool q_pdfwriter_qbase_set_page_size(void* self, void* pageSize);
void q_pdfwriter_on_set_page_size(void* self, bool (*slot)(void*, void*));
bool q_pdfwriter_set_page_orientation(void* self, int64_t orientation);
bool q_pdfwriter_qbase_set_page_orientation(void* self, int64_t orientation);
void q_pdfwriter_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t));
bool q_pdfwriter_set_page_margins(void* self, void* margins, int64_t units);
bool q_pdfwriter_qbase_set_page_margins(void* self, void* margins, int64_t units);
void q_pdfwriter_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t));
void q_pdfwriter_set_page_ranges(void* self, void* ranges);
void q_pdfwriter_qbase_set_page_ranges(void* self, void* ranges);
void q_pdfwriter_on_set_page_ranges(void* self, void (*slot)(void*, void*));
int32_t q_pdfwriter_dev_type(void* self);
int32_t q_pdfwriter_qbase_dev_type(void* self);
void q_pdfwriter_on_dev_type(void* self, int32_t (*slot)());
void q_pdfwriter_init_painter(void* self, void* painter);
void q_pdfwriter_qbase_init_painter(void* self, void* painter);
void q_pdfwriter_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_pdfwriter_redirected(void* self, void* offset);
QPaintDevice* q_pdfwriter_qbase_redirected(void* self, void* offset);
void q_pdfwriter_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_pdfwriter_shared_painter(void* self);
QPainter* q_pdfwriter_qbase_shared_painter(void* self);
void q_pdfwriter_on_shared_painter(void* self, QPainter* (*slot)());
QObject* q_pdfwriter_sender(void* self);
QObject* q_pdfwriter_qbase_sender(void* self);
void q_pdfwriter_on_sender(void* self, QObject* (*slot)());
int32_t q_pdfwriter_sender_signal_index(void* self);
int32_t q_pdfwriter_qbase_sender_signal_index(void* self);
void q_pdfwriter_on_sender_signal_index(void* self, int32_t (*slot)());
int32_t q_pdfwriter_receivers(void* self, const char* signal);
int32_t q_pdfwriter_qbase_receivers(void* self, const char* signal);
void q_pdfwriter_on_receivers(void* self, int32_t (*slot)(void*, const char*));
bool q_pdfwriter_is_signal_connected(void* self, void* signal);
bool q_pdfwriter_qbase_is_signal_connected(void* self, void* signal);
void q_pdfwriter_on_is_signal_connected(void* self, bool (*slot)(void*, void*));
void q_pdfwriter_delete(void* self);

#endif
