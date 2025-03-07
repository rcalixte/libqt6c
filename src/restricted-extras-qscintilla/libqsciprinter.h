#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIPRINTER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIPRINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqmargins.h"
#include "../libqpagelayout.h"
#include "../libqpageranges.h"
#include "../libqpagesize.h"
#include "../libqpagedpaintdevice.h"
#include "../libqpaintdevice.h"
#include "../libqpaintengine.h"
#include "../libqpainter.h"
#include "../libqpoint.h"
#include "../printsupport/libqprintengine.h"
#include "../printsupport/libqprinter.h"
#include "../libqrect.h"
#include <string.h>

QsciPrinter* q_sciprinter_new();
QsciPrinter* q_sciprinter_new2(int64_t mode);
void q_sciprinter_format_page(void* self, void* painter, bool drawing, void* area, int pagenr);
void q_sciprinter_on_format_page(void* self, void (*slot)(void*, void*, bool, void*, int));
void q_sciprinter_qbase_format_page(void* self, void* painter, bool drawing, void* area, int pagenr);
int32_t q_sciprinter_magnification(void* self);
void q_sciprinter_set_magnification(void* self, int magnification);
void q_sciprinter_on_set_magnification(void* self, void (*slot)(void*, int));
void q_sciprinter_qbase_set_magnification(void* self, int magnification);
int32_t q_sciprinter_print_range(void* self, void* qsb, void* painter, int from, int to);
void q_sciprinter_on_print_range(void* self, int32_t (*slot)(void*, void*, void*, int, int));
int32_t q_sciprinter_qbase_print_range(void* self, void* qsb, void* painter, int from, int to);
int32_t q_sciprinter_print_range2(void* self, void* qsb, int from, int to);
void q_sciprinter_on_print_range2(void* self, int32_t (*slot)(void*, void*, int, int));
int32_t q_sciprinter_qbase_print_range2(void* self, void* qsb, int from, int to);
int64_t q_sciprinter_wrap_mode(void* self);
void q_sciprinter_set_wrap_mode(void* self, int64_t wmode);
void q_sciprinter_on_set_wrap_mode(void* self, void (*slot)(void*, int64_t));
void q_sciprinter_qbase_set_wrap_mode(void* self, int64_t wmode);
void q_sciprinter_set_output_format(void* self, int64_t format);
int64_t q_sciprinter_output_format(void* self);
void q_sciprinter_set_pdf_version(void* self, int64_t version);
int64_t q_sciprinter_pdf_version(void* self);
void q_sciprinter_set_printer_name(void* self, const char* printerName);
const char* q_sciprinter_printer_name(void* self);
bool q_sciprinter_is_valid(void* self);
void q_sciprinter_set_output_file_name(void* self, const char* outputFileName);
const char* q_sciprinter_output_file_name(void* self);
void q_sciprinter_set_print_program(void* self, const char* printProgram);
const char* q_sciprinter_print_program(void* self);
void q_sciprinter_set_doc_name(void* self, const char* docName);
const char* q_sciprinter_doc_name(void* self);
void q_sciprinter_set_creator(void* self, const char* creator);
const char* q_sciprinter_creator(void* self);
void q_sciprinter_set_page_order(void* self, int64_t pageOrder);
int64_t q_sciprinter_page_order(void* self);
void q_sciprinter_set_resolution(void* self, int resolution);
int32_t q_sciprinter_resolution(void* self);
void q_sciprinter_set_color_mode(void* self, int64_t colorMode);
int64_t q_sciprinter_color_mode(void* self);
void q_sciprinter_set_collate_copies(void* self, bool collate);
bool q_sciprinter_collate_copies(void* self);
void q_sciprinter_set_full_page(void* self, bool fullPage);
bool q_sciprinter_full_page(void* self);
void q_sciprinter_set_copy_count(void* self, int copyCount);
int32_t q_sciprinter_copy_count(void* self);
bool q_sciprinter_supports_multiple_copies(void* self);
void q_sciprinter_set_paper_source(void* self, int64_t paperSource);
int64_t q_sciprinter_paper_source(void* self);
void q_sciprinter_set_duplex(void* self, int64_t duplex);
int64_t q_sciprinter_duplex(void* self);
libqt_list /* of int */ q_sciprinter_supported_resolutions(void* self);
void q_sciprinter_set_font_embedding_enabled(void* self, bool enable);
bool q_sciprinter_font_embedding_enabled(void* self);
QRectF* q_sciprinter_paper_rect(void* self, int64_t param1);
QRectF* q_sciprinter_page_rect(void* self, int64_t param1);
const char* q_sciprinter_printer_selection_option(void* self);
void q_sciprinter_set_printer_selection_option(void* self, const char* printerSelectionOption);
bool q_sciprinter_abort(void* self);
int64_t q_sciprinter_printer_state(void* self);
QPrintEngine* q_sciprinter_print_engine(void* self);
void q_sciprinter_set_from_to(void* self, int fromPage, int toPage);
int32_t q_sciprinter_from_page(void* self);
int32_t q_sciprinter_to_page(void* self);
void q_sciprinter_set_print_range(void* self, int64_t range);
QPageLayout* q_sciprinter_page_layout(void* self);
QPageRanges* q_sciprinter_page_ranges(void* self);
bool q_sciprinter_painting_active(void* self);
int32_t q_sciprinter_width(void* self);
int32_t q_sciprinter_height(void* self);
int32_t q_sciprinter_width_m_m(void* self);
int32_t q_sciprinter_height_m_m(void* self);
int32_t q_sciprinter_logical_dpi_x(void* self);
int32_t q_sciprinter_logical_dpi_y(void* self);
int32_t q_sciprinter_physical_dpi_x(void* self);
int32_t q_sciprinter_physical_dpi_y(void* self);
double q_sciprinter_device_pixel_ratio(void* self);
double q_sciprinter_device_pixel_ratio_f(void* self);
int32_t q_sciprinter_color_count(void* self);
int32_t q_sciprinter_depth(void* self);
double q_sciprinter_device_pixel_ratio_f_scale();
int32_t q_sciprinter_dev_type(void* self);
int32_t q_sciprinter_qbase_dev_type(void* self);
void q_sciprinter_on_dev_type(void* self, int32_t (*slot)());
bool q_sciprinter_new_page(void* self);
bool q_sciprinter_qbase_new_page(void* self);
void q_sciprinter_on_new_page(void* self, bool (*slot)());
QPaintEngine* q_sciprinter_paint_engine(void* self);
QPaintEngine* q_sciprinter_qbase_paint_engine(void* self);
void q_sciprinter_on_paint_engine(void* self, QPaintEngine* (*slot)());
int32_t q_sciprinter_metric(void* self, int64_t param1);
int32_t q_sciprinter_qbase_metric(void* self, int64_t param1);
void q_sciprinter_on_metric(void* self, int32_t (*slot)(void*, int64_t));
bool q_sciprinter_set_page_layout(void* self, void* pageLayout);
bool q_sciprinter_qbase_set_page_layout(void* self, void* pageLayout);
void q_sciprinter_on_set_page_layout(void* self, bool (*slot)(void*, void*));
bool q_sciprinter_set_page_size(void* self, void* pageSize);
bool q_sciprinter_qbase_set_page_size(void* self, void* pageSize);
void q_sciprinter_on_set_page_size(void* self, bool (*slot)(void*, void*));
bool q_sciprinter_set_page_orientation(void* self, int64_t orientation);
bool q_sciprinter_qbase_set_page_orientation(void* self, int64_t orientation);
void q_sciprinter_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t));
bool q_sciprinter_set_page_margins(void* self, void* margins, int64_t units);
bool q_sciprinter_qbase_set_page_margins(void* self, void* margins, int64_t units);
void q_sciprinter_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t));
void q_sciprinter_set_page_ranges(void* self, void* ranges);
void q_sciprinter_qbase_set_page_ranges(void* self, void* ranges);
void q_sciprinter_on_set_page_ranges(void* self, void (*slot)(void*, void*));
void q_sciprinter_init_painter(void* self, void* painter);
void q_sciprinter_qbase_init_painter(void* self, void* painter);
void q_sciprinter_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_sciprinter_redirected(void* self, void* offset);
QPaintDevice* q_sciprinter_qbase_redirected(void* self, void* offset);
void q_sciprinter_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_sciprinter_shared_painter(void* self);
QPainter* q_sciprinter_qbase_shared_painter(void* self);
void q_sciprinter_on_shared_painter(void* self, QPainter* (*slot)());
void q_sciprinter_set_engines(void* self, void* printEngine, void* paintEngine);
void q_sciprinter_qbase_set_engines(void* self, void* printEngine, void* paintEngine);
void q_sciprinter_on_set_engines(void* self, void (*slot)(void*, void*, void*));
void q_sciprinter_delete(void* self);

#endif
