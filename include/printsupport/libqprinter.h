#pragma once
#ifndef SRC_PRINTSUPPORTQT6C_LIBQPRINTER_H
#define SRC_PRINTSUPPORTQT6C_LIBQPRINTER_H

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
#include "libqprintengine.h"
#include "libqprinterinfo.h"
#include "../libqrect.h"
#include <string.h>

QPrinter* q_printer_new();
QPrinter* q_printer_new2(void* printer);
QPrinter* q_printer_new3(int64_t mode);
QPrinter* q_printer_new4(void* printer, int64_t mode);
int32_t q_printer_dev_type(void* self);
void q_printer_on_dev_type(void* self, int32_t (*slot)());
int32_t q_printer_qbase_dev_type(void* self);
void q_printer_set_output_format(void* self, int64_t format);
int64_t q_printer_output_format(void* self);
void q_printer_set_pdf_version(void* self, int64_t version);
int64_t q_printer_pdf_version(void* self);
void q_printer_set_printer_name(void* self, const char* printerName);
const char* q_printer_printer_name(void* self);
bool q_printer_is_valid(void* self);
void q_printer_set_output_file_name(void* self, const char* outputFileName);
const char* q_printer_output_file_name(void* self);
void q_printer_set_print_program(void* self, const char* printProgram);
const char* q_printer_print_program(void* self);
void q_printer_set_doc_name(void* self, const char* docName);
const char* q_printer_doc_name(void* self);
void q_printer_set_creator(void* self, const char* creator);
const char* q_printer_creator(void* self);
void q_printer_set_page_order(void* self, int64_t pageOrder);
int64_t q_printer_page_order(void* self);
void q_printer_set_resolution(void* self, int resolution);
int32_t q_printer_resolution(void* self);
void q_printer_set_color_mode(void* self, int64_t colorMode);
int64_t q_printer_color_mode(void* self);
void q_printer_set_collate_copies(void* self, bool collate);
bool q_printer_collate_copies(void* self);
void q_printer_set_full_page(void* self, bool fullPage);
bool q_printer_full_page(void* self);
void q_printer_set_copy_count(void* self, int copyCount);
int32_t q_printer_copy_count(void* self);
bool q_printer_supports_multiple_copies(void* self);
void q_printer_set_paper_source(void* self, int64_t paperSource);
int64_t q_printer_paper_source(void* self);
void q_printer_set_duplex(void* self, int64_t duplex);
int64_t q_printer_duplex(void* self);
libqt_list /* of int */ q_printer_supported_resolutions(void* self);
void q_printer_set_font_embedding_enabled(void* self, bool enable);
bool q_printer_font_embedding_enabled(void* self);
QRectF* q_printer_paper_rect(void* self, int64_t param1);
QRectF* q_printer_page_rect(void* self, int64_t param1);
const char* q_printer_printer_selection_option(void* self);
void q_printer_set_printer_selection_option(void* self, const char* printerSelectionOption);
bool q_printer_new_page(void* self);
void q_printer_on_new_page(void* self, bool (*slot)());
bool q_printer_qbase_new_page(void* self);
bool q_printer_abort(void* self);
int64_t q_printer_printer_state(void* self);
QPaintEngine* q_printer_paint_engine(void* self);
void q_printer_on_paint_engine(void* self, QPaintEngine* (*slot)());
QPaintEngine* q_printer_qbase_paint_engine(void* self);
QPrintEngine* q_printer_print_engine(void* self);
void q_printer_set_from_to(void* self, int fromPage, int toPage);
int32_t q_printer_from_page(void* self);
int32_t q_printer_to_page(void* self);
void q_printer_set_print_range(void* self, int64_t range);
int64_t q_printer_print_range(void* self);
int32_t q_printer_metric(void* self, int64_t param1);
void q_printer_on_metric(void* self, int32_t (*slot)(void*, int64_t));
int32_t q_printer_qbase_metric(void* self, int64_t param1);
void q_printer_set_engines(void* self, void* printEngine, void* paintEngine);
void q_printer_on_set_engines(void* self, void (*slot)(void*, void*, void*));
void q_printer_qbase_set_engines(void* self, void* printEngine, void* paintEngine);
QPageLayout* q_printer_page_layout(void* self);
QPageRanges* q_printer_page_ranges(void* self);
bool q_printer_painting_active(void* self);
int32_t q_printer_width(void* self);
int32_t q_printer_height(void* self);
int32_t q_printer_width_m_m(void* self);
int32_t q_printer_height_m_m(void* self);
int32_t q_printer_logical_dpi_x(void* self);
int32_t q_printer_logical_dpi_y(void* self);
int32_t q_printer_physical_dpi_x(void* self);
int32_t q_printer_physical_dpi_y(void* self);
double q_printer_device_pixel_ratio(void* self);
double q_printer_device_pixel_ratio_f(void* self);
int32_t q_printer_color_count(void* self);
int32_t q_printer_depth(void* self);
double q_printer_device_pixel_ratio_f_scale();
bool q_printer_set_page_layout(void* self, void* pageLayout);
bool q_printer_qbase_set_page_layout(void* self, void* pageLayout);
void q_printer_on_set_page_layout(void* self, bool (*slot)(void*, void*));
bool q_printer_set_page_size(void* self, void* pageSize);
bool q_printer_qbase_set_page_size(void* self, void* pageSize);
void q_printer_on_set_page_size(void* self, bool (*slot)(void*, void*));
bool q_printer_set_page_orientation(void* self, int64_t orientation);
bool q_printer_qbase_set_page_orientation(void* self, int64_t orientation);
void q_printer_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t));
bool q_printer_set_page_margins(void* self, void* margins, int64_t units);
bool q_printer_qbase_set_page_margins(void* self, void* margins, int64_t units);
void q_printer_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t));
void q_printer_set_page_ranges(void* self, void* ranges);
void q_printer_qbase_set_page_ranges(void* self, void* ranges);
void q_printer_on_set_page_ranges(void* self, void (*slot)(void*, void*));
void q_printer_init_painter(void* self, void* painter);
void q_printer_qbase_init_painter(void* self, void* painter);
void q_printer_on_init_painter(void* self, void (*slot)(void*, void*));
QPaintDevice* q_printer_redirected(void* self, void* offset);
QPaintDevice* q_printer_qbase_redirected(void* self, void* offset);
void q_printer_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));
QPainter* q_printer_shared_painter(void* self);
QPainter* q_printer_qbase_shared_painter(void* self);
void q_printer_on_shared_painter(void* self, QPainter* (*slot)());
void q_printer_delete(void* self);

/// https://doc.qt.io/qt-6/qprinter.html#types

typedef enum {
    QPRINTER_PRINTERMODE_SCREENRESOLUTION = 0,
    QPRINTER_PRINTERMODE_PRINTERRESOLUTION = 1,
    QPRINTER_PRINTERMODE_HIGHRESOLUTION = 2
} QPrinter__PrinterMode;

typedef enum {
    QPRINTER_PAGEORDER_FIRSTPAGEFIRST = 0,
    QPRINTER_PAGEORDER_LASTPAGEFIRST = 1
} QPrinter__PageOrder;

typedef enum {
    QPRINTER_COLORMODE_GRAYSCALE = 0,
    QPRINTER_COLORMODE_COLOR = 1
} QPrinter__ColorMode;

typedef enum {
    QPRINTER_PAPERSOURCE_ONLYONE = 0,
    QPRINTER_PAPERSOURCE_LOWER = 1,
    QPRINTER_PAPERSOURCE_MIDDLE = 2,
    QPRINTER_PAPERSOURCE_MANUAL = 3,
    QPRINTER_PAPERSOURCE_ENVELOPE = 4,
    QPRINTER_PAPERSOURCE_ENVELOPEMANUAL = 5,
    QPRINTER_PAPERSOURCE_AUTO = 6,
    QPRINTER_PAPERSOURCE_TRACTOR = 7,
    QPRINTER_PAPERSOURCE_SMALLFORMAT = 8,
    QPRINTER_PAPERSOURCE_LARGEFORMAT = 9,
    QPRINTER_PAPERSOURCE_LARGECAPACITY = 10,
    QPRINTER_PAPERSOURCE_CASSETTE = 11,
    QPRINTER_PAPERSOURCE_FORMSOURCE = 12,
    QPRINTER_PAPERSOURCE_MAXPAGESOURCE = 13,
    QPRINTER_PAPERSOURCE_CUSTOMSOURCE = 14,
    QPRINTER_PAPERSOURCE_LASTPAPERSOURCE = 14,
    QPRINTER_PAPERSOURCE_UPPER = 0
} QPrinter__PaperSource;

typedef enum {
    QPRINTER_PRINTERSTATE_IDLE = 0,
    QPRINTER_PRINTERSTATE_ACTIVE = 1,
    QPRINTER_PRINTERSTATE_ABORTED = 2,
    QPRINTER_PRINTERSTATE_ERROR = 3
} QPrinter__PrinterState;

typedef enum {
    QPRINTER_OUTPUTFORMAT_NATIVEFORMAT = 0,
    QPRINTER_OUTPUTFORMAT_PDFFORMAT = 1
} QPrinter__OutputFormat;

typedef enum {
    QPRINTER_PRINTRANGE_ALLPAGES = 0,
    QPRINTER_PRINTRANGE_SELECTION = 1,
    QPRINTER_PRINTRANGE_PAGERANGE = 2,
    QPRINTER_PRINTRANGE_CURRENTPAGE = 3
} QPrinter__PrintRange;

typedef enum {
    QPRINTER_UNIT_MILLIMETER = 0,
    QPRINTER_UNIT_POINT = 1,
    QPRINTER_UNIT_INCH = 2,
    QPRINTER_UNIT_PICA = 3,
    QPRINTER_UNIT_DIDOT = 4,
    QPRINTER_UNIT_CICERO = 5,
    QPRINTER_UNIT_DEVICEPIXEL = 6
} QPrinter__Unit;

typedef enum {
    QPRINTER_DUPLEXMODE_DUPLEXNONE = 0,
    QPRINTER_DUPLEXMODE_DUPLEXAUTO = 1,
    QPRINTER_DUPLEXMODE_DUPLEXLONGSIDE = 2,
    QPRINTER_DUPLEXMODE_DUPLEXSHORTSIDE = 3
} QPrinter__DuplexMode;

#endif
