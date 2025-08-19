#include "../libqmargins.hpp"
#include "../libqpagelayout.hpp"
#include "../libqpageranges.hpp"
#include "../libqpagesize.hpp"
#include "../libqpagedpaintdevice.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../printsupport/libqprintengine.hpp"
#include "../printsupport/libqprinter.hpp"
#include "../libqrect.hpp"
#include "libqsciscintillabase.hpp"
#include "libqsciprinter.hpp"
#include "libqsciprinter.h"

QsciPrinter* q_sciprinter_new() {
    return QsciPrinter_new();
}

QsciPrinter* q_sciprinter_new2(int32_t mode) {
    return QsciPrinter_new2(mode);
}

void q_sciprinter_format_page(void* self, void* painter, bool drawing, void* area, int pagenr) {
    QsciPrinter_FormatPage((QsciPrinter*)self, (QPainter*)painter, drawing, (QRect*)area, pagenr);
}

void q_sciprinter_on_format_page(void* self, void (*callback)(void*, void*, bool, void*, int)) {
    QsciPrinter_OnFormatPage((QsciPrinter*)self, (intptr_t)callback);
}

void q_sciprinter_qbase_format_page(void* self, void* painter, bool drawing, void* area, int pagenr) {
    QsciPrinter_QBaseFormatPage((QsciPrinter*)self, (QPainter*)painter, drawing, (QRect*)area, pagenr);
}

int32_t q_sciprinter_magnification(void* self) {
    return QsciPrinter_Magnification((QsciPrinter*)self);
}

void q_sciprinter_set_magnification(void* self, int magnification) {
    QsciPrinter_SetMagnification((QsciPrinter*)self, magnification);
}

void q_sciprinter_on_set_magnification(void* self, void (*callback)(void*, int)) {
    QsciPrinter_OnSetMagnification((QsciPrinter*)self, (intptr_t)callback);
}

void q_sciprinter_qbase_set_magnification(void* self, int magnification) {
    QsciPrinter_QBaseSetMagnification((QsciPrinter*)self, magnification);
}

int32_t q_sciprinter_print_range(void* self, void* qsb, void* painter, int from, int to) {
    return QsciPrinter_PrintRange((QsciPrinter*)self, (QsciScintillaBase*)qsb, (QPainter*)painter, from, to);
}

void q_sciprinter_on_print_range(void* self, int32_t (*callback)(void*, void*, void*, int, int)) {
    QsciPrinter_OnPrintRange((QsciPrinter*)self, (intptr_t)callback);
}

int32_t q_sciprinter_qbase_print_range(void* self, void* qsb, void* painter, int from, int to) {
    return QsciPrinter_QBasePrintRange((QsciPrinter*)self, (QsciScintillaBase*)qsb, (QPainter*)painter, from, to);
}

int32_t q_sciprinter_print_range2(void* self, void* qsb, int from, int to) {
    return QsciPrinter_PrintRange2((QsciPrinter*)self, (QsciScintillaBase*)qsb, from, to);
}

void q_sciprinter_on_print_range2(void* self, int32_t (*callback)(void*, void*, int, int)) {
    QsciPrinter_OnPrintRange2((QsciPrinter*)self, (intptr_t)callback);
}

int32_t q_sciprinter_qbase_print_range2(void* self, void* qsb, int from, int to) {
    return QsciPrinter_QBasePrintRange2((QsciPrinter*)self, (QsciScintillaBase*)qsb, from, to);
}

int32_t q_sciprinter_wrap_mode(void* self) {
    return QsciPrinter_WrapMode((QsciPrinter*)self);
}

void q_sciprinter_set_wrap_mode(void* self, int32_t wmode) {
    QsciPrinter_SetWrapMode((QsciPrinter*)self, wmode);
}

void q_sciprinter_on_set_wrap_mode(void* self, void (*callback)(void*, int32_t)) {
    QsciPrinter_OnSetWrapMode((QsciPrinter*)self, (intptr_t)callback);
}

void q_sciprinter_qbase_set_wrap_mode(void* self, int32_t wmode) {
    QsciPrinter_QBaseSetWrapMode((QsciPrinter*)self, wmode);
}

void q_sciprinter_set_output_format(void* self, int32_t format) {
    QPrinter_SetOutputFormat((QPrinter*)self, format);
}

int32_t q_sciprinter_output_format(void* self) {
    return QPrinter_OutputFormat((QPrinter*)self);
}

void q_sciprinter_set_pdf_version(void* self, int32_t version) {
    QPrinter_SetPdfVersion((QPrinter*)self, version);
}

int32_t q_sciprinter_pdf_version(void* self) {
    return QPrinter_PdfVersion((QPrinter*)self);
}

void q_sciprinter_set_printer_name(void* self, const char* printerName) {
    QPrinter_SetPrinterName((QPrinter*)self, qstring(printerName));
}

const char* q_sciprinter_printer_name(void* self) {
    libqt_string _str = QPrinter_PrinterName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_sciprinter_is_valid(void* self) {
    return QPrinter_IsValid((QPrinter*)self);
}

void q_sciprinter_set_output_file_name(void* self, const char* outputFileName) {
    QPrinter_SetOutputFileName((QPrinter*)self, qstring(outputFileName));
}

const char* q_sciprinter_output_file_name(void* self) {
    libqt_string _str = QPrinter_OutputFileName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciprinter_set_print_program(void* self, const char* printProgram) {
    QPrinter_SetPrintProgram((QPrinter*)self, qstring(printProgram));
}

const char* q_sciprinter_print_program(void* self) {
    libqt_string _str = QPrinter_PrintProgram((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciprinter_set_doc_name(void* self, const char* docName) {
    QPrinter_SetDocName((QPrinter*)self, qstring(docName));
}

const char* q_sciprinter_doc_name(void* self) {
    libqt_string _str = QPrinter_DocName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciprinter_set_creator(void* self, const char* creator) {
    QPrinter_SetCreator((QPrinter*)self, qstring(creator));
}

const char* q_sciprinter_creator(void* self) {
    libqt_string _str = QPrinter_Creator((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciprinter_set_page_order(void* self, int32_t pageOrder) {
    QPrinter_SetPageOrder((QPrinter*)self, pageOrder);
}

int32_t q_sciprinter_page_order(void* self) {
    return QPrinter_PageOrder((QPrinter*)self);
}

void q_sciprinter_set_resolution(void* self, int resolution) {
    QPrinter_SetResolution((QPrinter*)self, resolution);
}

int32_t q_sciprinter_resolution(void* self) {
    return QPrinter_Resolution((QPrinter*)self);
}

void q_sciprinter_set_color_mode(void* self, int32_t colorMode) {
    QPrinter_SetColorMode((QPrinter*)self, colorMode);
}

int32_t q_sciprinter_color_mode(void* self) {
    return QPrinter_ColorMode((QPrinter*)self);
}

void q_sciprinter_set_collate_copies(void* self, bool collate) {
    QPrinter_SetCollateCopies((QPrinter*)self, collate);
}

bool q_sciprinter_collate_copies(void* self) {
    return QPrinter_CollateCopies((QPrinter*)self);
}

void q_sciprinter_set_full_page(void* self, bool fullPage) {
    QPrinter_SetFullPage((QPrinter*)self, fullPage);
}

bool q_sciprinter_full_page(void* self) {
    return QPrinter_FullPage((QPrinter*)self);
}

void q_sciprinter_set_copy_count(void* self, int copyCount) {
    QPrinter_SetCopyCount((QPrinter*)self, copyCount);
}

int32_t q_sciprinter_copy_count(void* self) {
    return QPrinter_CopyCount((QPrinter*)self);
}

bool q_sciprinter_supports_multiple_copies(void* self) {
    return QPrinter_SupportsMultipleCopies((QPrinter*)self);
}

void q_sciprinter_set_paper_source(void* self, int32_t paperSource) {
    QPrinter_SetPaperSource((QPrinter*)self, paperSource);
}

int32_t q_sciprinter_paper_source(void* self) {
    return QPrinter_PaperSource((QPrinter*)self);
}

void q_sciprinter_set_duplex(void* self, int32_t duplex) {
    QPrinter_SetDuplex((QPrinter*)self, duplex);
}

int32_t q_sciprinter_duplex(void* self) {
    return QPrinter_Duplex((QPrinter*)self);
}

libqt_list /* of int */ q_sciprinter_supported_resolutions(void* self) {
    libqt_list _arr = QPrinter_SupportedResolutions((QPrinter*)self);
    return _arr;
}

void q_sciprinter_set_font_embedding_enabled(void* self, bool enable) {
    QPrinter_SetFontEmbeddingEnabled((QPrinter*)self, enable);
}

bool q_sciprinter_font_embedding_enabled(void* self) {
    return QPrinter_FontEmbeddingEnabled((QPrinter*)self);
}

QRectF* q_sciprinter_paper_rect(void* self, int32_t param1) {
    return QPrinter_PaperRect((QPrinter*)self, param1);
}

QRectF* q_sciprinter_page_rect(void* self, int32_t param1) {
    return QPrinter_PageRect((QPrinter*)self, param1);
}

const char* q_sciprinter_printer_selection_option(void* self) {
    libqt_string _str = QPrinter_PrinterSelectionOption((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_sciprinter_set_printer_selection_option(void* self, const char* printerSelectionOption) {
    QPrinter_SetPrinterSelectionOption((QPrinter*)self, qstring(printerSelectionOption));
}

bool q_sciprinter_abort(void* self) {
    return QPrinter_Abort((QPrinter*)self);
}

int32_t q_sciprinter_printer_state(void* self) {
    return QPrinter_PrinterState((QPrinter*)self);
}

QPrintEngine* q_sciprinter_print_engine(void* self) {
    return QPrinter_PrintEngine((QPrinter*)self);
}

void q_sciprinter_set_from_to(void* self, int fromPage, int toPage) {
    QPrinter_SetFromTo((QPrinter*)self, fromPage, toPage);
}

int32_t q_sciprinter_from_page(void* self) {
    return QPrinter_FromPage((QPrinter*)self);
}

int32_t q_sciprinter_to_page(void* self) {
    return QPrinter_ToPage((QPrinter*)self);
}

void q_sciprinter_set_print_range(void* self, int32_t range) {
    QPrinter_SetPrintRange((QPrinter*)self, range);
}

QPageLayout* q_sciprinter_page_layout(void* self) {
    return QPagedPaintDevice_PageLayout((QPagedPaintDevice*)self);
}

QPageRanges* q_sciprinter_page_ranges(void* self) {
    return QPagedPaintDevice_PageRanges((QPagedPaintDevice*)self);
}

bool q_sciprinter_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_sciprinter_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

int32_t q_sciprinter_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

int32_t q_sciprinter_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_sciprinter_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_sciprinter_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_sciprinter_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_sciprinter_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_sciprinter_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_sciprinter_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_sciprinter_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_sciprinter_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_sciprinter_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_sciprinter_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_sciprinter_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_sciprinter_dev_type(void* self) {
    return QsciPrinter_DevType((QsciPrinter*)self);
}

int32_t q_sciprinter_qbase_dev_type(void* self) {
    return QsciPrinter_QBaseDevType((QsciPrinter*)self);
}

void q_sciprinter_on_dev_type(void* self, int32_t (*callback)()) {
    QsciPrinter_OnDevType((QsciPrinter*)self, (intptr_t)callback);
}

bool q_sciprinter_new_page(void* self) {
    return QsciPrinter_NewPage((QsciPrinter*)self);
}

bool q_sciprinter_qbase_new_page(void* self) {
    return QsciPrinter_QBaseNewPage((QsciPrinter*)self);
}

void q_sciprinter_on_new_page(void* self, bool (*callback)()) {
    QsciPrinter_OnNewPage((QsciPrinter*)self, (intptr_t)callback);
}

QPaintEngine* q_sciprinter_paint_engine(void* self) {
    return QsciPrinter_PaintEngine((QsciPrinter*)self);
}

QPaintEngine* q_sciprinter_qbase_paint_engine(void* self) {
    return QsciPrinter_QBasePaintEngine((QsciPrinter*)self);
}

void q_sciprinter_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QsciPrinter_OnPaintEngine((QsciPrinter*)self, (intptr_t)callback);
}

int32_t q_sciprinter_metric(void* self, int32_t param1) {
    return QsciPrinter_Metric((QsciPrinter*)self, param1);
}

int32_t q_sciprinter_qbase_metric(void* self, int32_t param1) {
    return QsciPrinter_QBaseMetric((QsciPrinter*)self, param1);
}

void q_sciprinter_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QsciPrinter_OnMetric((QsciPrinter*)self, (intptr_t)callback);
}

bool q_sciprinter_set_page_layout(void* self, void* pageLayout) {
    return QsciPrinter_SetPageLayout((QsciPrinter*)self, (QPageLayout*)pageLayout);
}

bool q_sciprinter_qbase_set_page_layout(void* self, void* pageLayout) {
    return QsciPrinter_QBaseSetPageLayout((QsciPrinter*)self, (QPageLayout*)pageLayout);
}

void q_sciprinter_on_set_page_layout(void* self, bool (*callback)(void*, void*)) {
    QsciPrinter_OnSetPageLayout((QsciPrinter*)self, (intptr_t)callback);
}

bool q_sciprinter_set_page_size(void* self, void* pageSize) {
    return QsciPrinter_SetPageSize((QsciPrinter*)self, (QPageSize*)pageSize);
}

bool q_sciprinter_qbase_set_page_size(void* self, void* pageSize) {
    return QsciPrinter_QBaseSetPageSize((QsciPrinter*)self, (QPageSize*)pageSize);
}

void q_sciprinter_on_set_page_size(void* self, bool (*callback)(void*, void*)) {
    QsciPrinter_OnSetPageSize((QsciPrinter*)self, (intptr_t)callback);
}

bool q_sciprinter_set_page_orientation(void* self, int32_t orientation) {
    return QsciPrinter_SetPageOrientation((QsciPrinter*)self, orientation);
}

bool q_sciprinter_qbase_set_page_orientation(void* self, int32_t orientation) {
    return QsciPrinter_QBaseSetPageOrientation((QsciPrinter*)self, orientation);
}

void q_sciprinter_on_set_page_orientation(void* self, bool (*callback)(void*, int32_t)) {
    QsciPrinter_OnSetPageOrientation((QsciPrinter*)self, (intptr_t)callback);
}

bool q_sciprinter_set_page_margins(void* self, void* margins, int32_t units) {
    return QsciPrinter_SetPageMargins((QsciPrinter*)self, (QMarginsF*)margins, units);
}

bool q_sciprinter_qbase_set_page_margins(void* self, void* margins, int32_t units) {
    return QsciPrinter_QBaseSetPageMargins((QsciPrinter*)self, (QMarginsF*)margins, units);
}

void q_sciprinter_on_set_page_margins(void* self, bool (*callback)(void*, void*, int32_t)) {
    QsciPrinter_OnSetPageMargins((QsciPrinter*)self, (intptr_t)callback);
}

void q_sciprinter_set_page_ranges(void* self, void* ranges) {
    QsciPrinter_SetPageRanges((QsciPrinter*)self, (QPageRanges*)ranges);
}

void q_sciprinter_qbase_set_page_ranges(void* self, void* ranges) {
    QsciPrinter_QBaseSetPageRanges((QsciPrinter*)self, (QPageRanges*)ranges);
}

void q_sciprinter_on_set_page_ranges(void* self, void (*callback)(void*, void*)) {
    QsciPrinter_OnSetPageRanges((QsciPrinter*)self, (intptr_t)callback);
}

void q_sciprinter_init_painter(void* self, void* painter) {
    QsciPrinter_InitPainter((QsciPrinter*)self, (QPainter*)painter);
}

void q_sciprinter_qbase_init_painter(void* self, void* painter) {
    QsciPrinter_QBaseInitPainter((QsciPrinter*)self, (QPainter*)painter);
}

void q_sciprinter_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QsciPrinter_OnInitPainter((QsciPrinter*)self, (intptr_t)callback);
}

QPaintDevice* q_sciprinter_redirected(void* self, void* offset) {
    return QsciPrinter_Redirected((QsciPrinter*)self, (QPoint*)offset);
}

QPaintDevice* q_sciprinter_qbase_redirected(void* self, void* offset) {
    return QsciPrinter_QBaseRedirected((QsciPrinter*)self, (QPoint*)offset);
}

void q_sciprinter_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QsciPrinter_OnRedirected((QsciPrinter*)self, (intptr_t)callback);
}

QPainter* q_sciprinter_shared_painter(void* self) {
    return QsciPrinter_SharedPainter((QsciPrinter*)self);
}

QPainter* q_sciprinter_qbase_shared_painter(void* self) {
    return QsciPrinter_QBaseSharedPainter((QsciPrinter*)self);
}

void q_sciprinter_on_shared_painter(void* self, QPainter* (*callback)()) {
    QsciPrinter_OnSharedPainter((QsciPrinter*)self, (intptr_t)callback);
}

void q_sciprinter_set_engines(void* self, void* printEngine, void* paintEngine) {
    QsciPrinter_SetEngines((QsciPrinter*)self, (QPrintEngine*)printEngine, (QPaintEngine*)paintEngine);
}

void q_sciprinter_qbase_set_engines(void* self, void* printEngine, void* paintEngine) {
    QsciPrinter_QBaseSetEngines((QsciPrinter*)self, (QPrintEngine*)printEngine, (QPaintEngine*)paintEngine);
}

void q_sciprinter_on_set_engines(void* self, void (*callback)(void*, void*, void*)) {
    QsciPrinter_OnSetEngines((QsciPrinter*)self, (intptr_t)callback);
}

double q_sciprinter_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QsciPrinter_GetDecodedMetricF((QsciPrinter*)self, metricA, metricB);
}

double q_sciprinter_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QsciPrinter_QBaseGetDecodedMetricF((QsciPrinter*)self, metricA, metricB);
}

void q_sciprinter_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QsciPrinter_OnGetDecodedMetricF((QsciPrinter*)self, (intptr_t)callback);
}

void q_sciprinter_delete(void* self) {
    QsciPrinter_Delete((QsciPrinter*)(self));
}
