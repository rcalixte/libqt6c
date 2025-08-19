#include "../libqmargins.hpp"
#include "../libqpagelayout.hpp"
#include "../libqpageranges.hpp"
#include "../libqpagesize.hpp"
#include "../libqpagedpaintdevice.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "libqprintengine.hpp"
#include "libqprinterinfo.hpp"
#include "../libqrect.hpp"
#include "libqprinter.hpp"
#include "libqprinter.h"

QPrinter* q_printer_new() {
    return QPrinter_new();
}

QPrinter* q_printer_new2(void* printer) {
    return QPrinter_new2((QPrinterInfo*)printer);
}

QPrinter* q_printer_new3(int32_t mode) {
    return QPrinter_new3(mode);
}

QPrinter* q_printer_new4(void* printer, int32_t mode) {
    return QPrinter_new4((QPrinterInfo*)printer, mode);
}

int32_t q_printer_dev_type(void* self) {
    return QPrinter_DevType((QPrinter*)self);
}

void q_printer_on_dev_type(void* self, int32_t (*callback)()) {
    QPrinter_OnDevType((QPrinter*)self, (intptr_t)callback);
}

int32_t q_printer_qbase_dev_type(void* self) {
    return QPrinter_QBaseDevType((QPrinter*)self);
}

void q_printer_set_output_format(void* self, int32_t format) {
    QPrinter_SetOutputFormat((QPrinter*)self, format);
}

int32_t q_printer_output_format(void* self) {
    return QPrinter_OutputFormat((QPrinter*)self);
}

void q_printer_set_pdf_version(void* self, int32_t version) {
    QPrinter_SetPdfVersion((QPrinter*)self, version);
}

int32_t q_printer_pdf_version(void* self) {
    return QPrinter_PdfVersion((QPrinter*)self);
}

void q_printer_set_printer_name(void* self, const char* printerName) {
    QPrinter_SetPrinterName((QPrinter*)self, qstring(printerName));
}

const char* q_printer_printer_name(void* self) {
    libqt_string _str = QPrinter_PrinterName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_printer_is_valid(void* self) {
    return QPrinter_IsValid((QPrinter*)self);
}

void q_printer_set_output_file_name(void* self, const char* outputFileName) {
    QPrinter_SetOutputFileName((QPrinter*)self, qstring(outputFileName));
}

const char* q_printer_output_file_name(void* self) {
    libqt_string _str = QPrinter_OutputFileName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printer_set_print_program(void* self, const char* printProgram) {
    QPrinter_SetPrintProgram((QPrinter*)self, qstring(printProgram));
}

const char* q_printer_print_program(void* self) {
    libqt_string _str = QPrinter_PrintProgram((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printer_set_doc_name(void* self, const char* docName) {
    QPrinter_SetDocName((QPrinter*)self, qstring(docName));
}

const char* q_printer_doc_name(void* self) {
    libqt_string _str = QPrinter_DocName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printer_set_creator(void* self, const char* creator) {
    QPrinter_SetCreator((QPrinter*)self, qstring(creator));
}

const char* q_printer_creator(void* self) {
    libqt_string _str = QPrinter_Creator((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printer_set_page_order(void* self, int32_t pageOrder) {
    QPrinter_SetPageOrder((QPrinter*)self, pageOrder);
}

int32_t q_printer_page_order(void* self) {
    return QPrinter_PageOrder((QPrinter*)self);
}

void q_printer_set_resolution(void* self, int resolution) {
    QPrinter_SetResolution((QPrinter*)self, resolution);
}

int32_t q_printer_resolution(void* self) {
    return QPrinter_Resolution((QPrinter*)self);
}

void q_printer_set_color_mode(void* self, int32_t colorMode) {
    QPrinter_SetColorMode((QPrinter*)self, colorMode);
}

int32_t q_printer_color_mode(void* self) {
    return QPrinter_ColorMode((QPrinter*)self);
}

void q_printer_set_collate_copies(void* self, bool collate) {
    QPrinter_SetCollateCopies((QPrinter*)self, collate);
}

bool q_printer_collate_copies(void* self) {
    return QPrinter_CollateCopies((QPrinter*)self);
}

void q_printer_set_full_page(void* self, bool fullPage) {
    QPrinter_SetFullPage((QPrinter*)self, fullPage);
}

bool q_printer_full_page(void* self) {
    return QPrinter_FullPage((QPrinter*)self);
}

void q_printer_set_copy_count(void* self, int copyCount) {
    QPrinter_SetCopyCount((QPrinter*)self, copyCount);
}

int32_t q_printer_copy_count(void* self) {
    return QPrinter_CopyCount((QPrinter*)self);
}

bool q_printer_supports_multiple_copies(void* self) {
    return QPrinter_SupportsMultipleCopies((QPrinter*)self);
}

void q_printer_set_paper_source(void* self, int32_t paperSource) {
    QPrinter_SetPaperSource((QPrinter*)self, paperSource);
}

int32_t q_printer_paper_source(void* self) {
    return QPrinter_PaperSource((QPrinter*)self);
}

void q_printer_set_duplex(void* self, int32_t duplex) {
    QPrinter_SetDuplex((QPrinter*)self, duplex);
}

int32_t q_printer_duplex(void* self) {
    return QPrinter_Duplex((QPrinter*)self);
}

libqt_list /* of int */ q_printer_supported_resolutions(void* self) {
    libqt_list _arr = QPrinter_SupportedResolutions((QPrinter*)self);
    return _arr;
}

void q_printer_set_font_embedding_enabled(void* self, bool enable) {
    QPrinter_SetFontEmbeddingEnabled((QPrinter*)self, enable);
}

bool q_printer_font_embedding_enabled(void* self) {
    return QPrinter_FontEmbeddingEnabled((QPrinter*)self);
}

QRectF* q_printer_paper_rect(void* self, int32_t param1) {
    return QPrinter_PaperRect((QPrinter*)self, param1);
}

QRectF* q_printer_page_rect(void* self, int32_t param1) {
    return QPrinter_PageRect((QPrinter*)self, param1);
}

const char* q_printer_printer_selection_option(void* self) {
    libqt_string _str = QPrinter_PrinterSelectionOption((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_printer_set_printer_selection_option(void* self, const char* printerSelectionOption) {
    QPrinter_SetPrinterSelectionOption((QPrinter*)self, qstring(printerSelectionOption));
}

bool q_printer_new_page(void* self) {
    return QPrinter_NewPage((QPrinter*)self);
}

void q_printer_on_new_page(void* self, bool (*callback)()) {
    QPrinter_OnNewPage((QPrinter*)self, (intptr_t)callback);
}

bool q_printer_qbase_new_page(void* self) {
    return QPrinter_QBaseNewPage((QPrinter*)self);
}

bool q_printer_abort(void* self) {
    return QPrinter_Abort((QPrinter*)self);
}

int32_t q_printer_printer_state(void* self) {
    return QPrinter_PrinterState((QPrinter*)self);
}

QPaintEngine* q_printer_paint_engine(void* self) {
    return QPrinter_PaintEngine((QPrinter*)self);
}

void q_printer_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QPrinter_OnPaintEngine((QPrinter*)self, (intptr_t)callback);
}

QPaintEngine* q_printer_qbase_paint_engine(void* self) {
    return QPrinter_QBasePaintEngine((QPrinter*)self);
}

QPrintEngine* q_printer_print_engine(void* self) {
    return QPrinter_PrintEngine((QPrinter*)self);
}

void q_printer_set_from_to(void* self, int fromPage, int toPage) {
    QPrinter_SetFromTo((QPrinter*)self, fromPage, toPage);
}

int32_t q_printer_from_page(void* self) {
    return QPrinter_FromPage((QPrinter*)self);
}

int32_t q_printer_to_page(void* self) {
    return QPrinter_ToPage((QPrinter*)self);
}

void q_printer_set_print_range(void* self, int32_t range) {
    QPrinter_SetPrintRange((QPrinter*)self, range);
}

int32_t q_printer_print_range(void* self) {
    return QPrinter_PrintRange((QPrinter*)self);
}

int32_t q_printer_metric(void* self, int32_t param1) {
    return QPrinter_Metric((QPrinter*)self, param1);
}

void q_printer_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QPrinter_OnMetric((QPrinter*)self, (intptr_t)callback);
}

int32_t q_printer_qbase_metric(void* self, int32_t param1) {
    return QPrinter_QBaseMetric((QPrinter*)self, param1);
}

void q_printer_set_engines(void* self, void* printEngine, void* paintEngine) {
    QPrinter_SetEngines((QPrinter*)self, (QPrintEngine*)printEngine, (QPaintEngine*)paintEngine);
}

void q_printer_on_set_engines(void* self, void (*callback)(void*, void*, void*)) {
    QPrinter_OnSetEngines((QPrinter*)self, (intptr_t)callback);
}

void q_printer_qbase_set_engines(void* self, void* printEngine, void* paintEngine) {
    QPrinter_QBaseSetEngines((QPrinter*)self, (QPrintEngine*)printEngine, (QPaintEngine*)paintEngine);
}

QPageLayout* q_printer_page_layout(void* self) {
    return QPagedPaintDevice_PageLayout((QPagedPaintDevice*)self);
}

QPageRanges* q_printer_page_ranges(void* self) {
    return QPagedPaintDevice_PageRanges((QPagedPaintDevice*)self);
}

bool q_printer_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_printer_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

int32_t q_printer_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

int32_t q_printer_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_printer_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_printer_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_printer_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_printer_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_printer_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_printer_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_printer_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_printer_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_printer_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_printer_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_printer_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool q_printer_set_page_layout(void* self, void* pageLayout) {
    return QPrinter_SetPageLayout((QPrinter*)self, (QPageLayout*)pageLayout);
}

bool q_printer_qbase_set_page_layout(void* self, void* pageLayout) {
    return QPrinter_QBaseSetPageLayout((QPrinter*)self, (QPageLayout*)pageLayout);
}

void q_printer_on_set_page_layout(void* self, bool (*callback)(void*, void*)) {
    QPrinter_OnSetPageLayout((QPrinter*)self, (intptr_t)callback);
}

bool q_printer_set_page_size(void* self, void* pageSize) {
    return QPrinter_SetPageSize((QPrinter*)self, (QPageSize*)pageSize);
}

bool q_printer_qbase_set_page_size(void* self, void* pageSize) {
    return QPrinter_QBaseSetPageSize((QPrinter*)self, (QPageSize*)pageSize);
}

void q_printer_on_set_page_size(void* self, bool (*callback)(void*, void*)) {
    QPrinter_OnSetPageSize((QPrinter*)self, (intptr_t)callback);
}

bool q_printer_set_page_orientation(void* self, int32_t orientation) {
    return QPrinter_SetPageOrientation((QPrinter*)self, orientation);
}

bool q_printer_qbase_set_page_orientation(void* self, int32_t orientation) {
    return QPrinter_QBaseSetPageOrientation((QPrinter*)self, orientation);
}

void q_printer_on_set_page_orientation(void* self, bool (*callback)(void*, int32_t)) {
    QPrinter_OnSetPageOrientation((QPrinter*)self, (intptr_t)callback);
}

bool q_printer_set_page_margins(void* self, void* margins, int32_t units) {
    return QPrinter_SetPageMargins((QPrinter*)self, (QMarginsF*)margins, units);
}

bool q_printer_qbase_set_page_margins(void* self, void* margins, int32_t units) {
    return QPrinter_QBaseSetPageMargins((QPrinter*)self, (QMarginsF*)margins, units);
}

void q_printer_on_set_page_margins(void* self, bool (*callback)(void*, void*, int32_t)) {
    QPrinter_OnSetPageMargins((QPrinter*)self, (intptr_t)callback);
}

void q_printer_set_page_ranges(void* self, void* ranges) {
    QPrinter_SetPageRanges((QPrinter*)self, (QPageRanges*)ranges);
}

void q_printer_qbase_set_page_ranges(void* self, void* ranges) {
    QPrinter_QBaseSetPageRanges((QPrinter*)self, (QPageRanges*)ranges);
}

void q_printer_on_set_page_ranges(void* self, void (*callback)(void*, void*)) {
    QPrinter_OnSetPageRanges((QPrinter*)self, (intptr_t)callback);
}

void q_printer_init_painter(void* self, void* painter) {
    QPrinter_InitPainter((QPrinter*)self, (QPainter*)painter);
}

void q_printer_qbase_init_painter(void* self, void* painter) {
    QPrinter_QBaseInitPainter((QPrinter*)self, (QPainter*)painter);
}

void q_printer_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QPrinter_OnInitPainter((QPrinter*)self, (intptr_t)callback);
}

QPaintDevice* q_printer_redirected(void* self, void* offset) {
    return QPrinter_Redirected((QPrinter*)self, (QPoint*)offset);
}

QPaintDevice* q_printer_qbase_redirected(void* self, void* offset) {
    return QPrinter_QBaseRedirected((QPrinter*)self, (QPoint*)offset);
}

void q_printer_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QPrinter_OnRedirected((QPrinter*)self, (intptr_t)callback);
}

QPainter* q_printer_shared_painter(void* self) {
    return QPrinter_SharedPainter((QPrinter*)self);
}

QPainter* q_printer_qbase_shared_painter(void* self) {
    return QPrinter_QBaseSharedPainter((QPrinter*)self);
}

void q_printer_on_shared_painter(void* self, QPainter* (*callback)()) {
    QPrinter_OnSharedPainter((QPrinter*)self, (intptr_t)callback);
}

double q_printer_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPrinter_GetDecodedMetricF((QPrinter*)self, metricA, metricB);
}

double q_printer_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QPrinter_QBaseGetDecodedMetricF((QPrinter*)self, metricA, metricB);
}

void q_printer_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QPrinter_OnGetDecodedMetricF((QPrinter*)self, (intptr_t)callback);
}

void q_printer_delete(void* self) {
    QPrinter_Delete((QPrinter*)(self));
}
