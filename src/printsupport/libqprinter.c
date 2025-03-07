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
#include <string.h>
#include "libqprinter.hpp"
#include "libqprinter.h"

/// https://doc.qt.io/qt-6/qprinter.html

/// q_printer_new constructs a new QPrinter object.
///
///
QPrinter* q_printer_new() {
    return QPrinter_new();
}

/// q_printer_new2 constructs a new QPrinter object.
///
/// ``` QPrinterInfo* printer ```
QPrinter* q_printer_new2(void* printer) {
    return QPrinter_new2((QPrinterInfo*)printer);
}

/// q_printer_new3 constructs a new QPrinter object.
///
/// ``` enum QPrinter__PrinterMode mode ```
QPrinter* q_printer_new3(int64_t mode) {
    return QPrinter_new3(mode);
}

/// q_printer_new4 constructs a new QPrinter object.
///
/// ``` QPrinterInfo* printer, enum QPrinter__PrinterMode mode ```
QPrinter* q_printer_new4(void* printer, int64_t mode) {
    return QPrinter_new4((QPrinterInfo*)printer, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// ``` QPrinter* self ```
int32_t q_printer_dev_type(void* self) {
    return QPrinter_DevType((QPrinter*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, int32_t (*slot)() ```
void q_printer_on_dev_type(void* self, int32_t (*slot)()) {
    QPrinter_OnDevType((QPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrinter* self ```
int32_t q_printer_qbase_dev_type(void* self) {
    return QPrinter_QBaseDevType((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
///
/// ``` QPrinter* self, enum QPrinter__OutputFormat format ```
void q_printer_set_output_format(void* self, int64_t format) {
    QPrinter_SetOutputFormat((QPrinter*)self, format);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
///
/// ``` QPrinter* self ```
int64_t q_printer_output_format(void* self) {
    return QPrinter_OutputFormat((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
///
/// ``` QPrinter* self, enum QPagedPaintDevice__PdfVersion version ```
void q_printer_set_pdf_version(void* self, int64_t version) {
    QPrinter_SetPdfVersion((QPrinter*)self, version);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
///
/// ``` QPrinter* self ```
int64_t q_printer_pdf_version(void* self) {
    return QPrinter_PdfVersion((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
///
/// ``` QPrinter* self, const char* printerName ```
void q_printer_set_printer_name(void* self, const char* printerName) {
    QPrinter_SetPrinterName((QPrinter*)self, qstring(printerName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerName)
///
/// ``` QPrinter* self ```
const char* q_printer_printer_name(void* self) {
    libqt_string _str = QPrinter_PrinterName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#isValid)
///
/// ``` QPrinter* self ```
bool q_printer_is_valid(void* self) {
    return QPrinter_IsValid((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
///
/// ``` QPrinter* self, const char* outputFileName ```
void q_printer_set_output_file_name(void* self, const char* outputFileName) {
    QPrinter_SetOutputFileName((QPrinter*)self, qstring(outputFileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
///
/// ``` QPrinter* self ```
const char* q_printer_output_file_name(void* self) {
    libqt_string _str = QPrinter_OutputFileName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
///
/// ``` QPrinter* self, const char* printProgram ```
void q_printer_set_print_program(void* self, const char* printProgram) {
    QPrinter_SetPrintProgram((QPrinter*)self, qstring(printProgram));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printProgram)
///
/// ``` QPrinter* self ```
const char* q_printer_print_program(void* self) {
    libqt_string _str = QPrinter_PrintProgram((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDocName)
///
/// ``` QPrinter* self, const char* docName ```
void q_printer_set_doc_name(void* self, const char* docName) {
    QPrinter_SetDocName((QPrinter*)self, qstring(docName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#docName)
///
/// ``` QPrinter* self ```
const char* q_printer_doc_name(void* self) {
    libqt_string _str = QPrinter_DocName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCreator)
///
/// ``` QPrinter* self, const char* creator ```
void q_printer_set_creator(void* self, const char* creator) {
    QPrinter_SetCreator((QPrinter*)self, qstring(creator));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#creator)
///
/// ``` QPrinter* self ```
const char* q_printer_creator(void* self) {
    libqt_string _str = QPrinter_Creator((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
///
/// ``` QPrinter* self, enum QPrinter__PageOrder pageOrder ```
void q_printer_set_page_order(void* self, int64_t pageOrder) {
    QPrinter_SetPageOrder((QPrinter*)self, pageOrder);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
///
/// ``` QPrinter* self ```
int64_t q_printer_page_order(void* self) {
    return QPrinter_PageOrder((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setResolution)
///
/// ``` QPrinter* self, int resolution ```
void q_printer_set_resolution(void* self, int resolution) {
    QPrinter_SetResolution((QPrinter*)self, resolution);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#resolution)
///
/// ``` QPrinter* self ```
int32_t q_printer_resolution(void* self) {
    return QPrinter_Resolution((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
///
/// ``` QPrinter* self, enum QPrinter__ColorMode colorMode ```
void q_printer_set_color_mode(void* self, int64_t colorMode) {
    QPrinter_SetColorMode((QPrinter*)self, colorMode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#colorMode)
///
/// ``` QPrinter* self ```
int64_t q_printer_color_mode(void* self) {
    return QPrinter_ColorMode((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
///
/// ``` QPrinter* self, bool collate ```
void q_printer_set_collate_copies(void* self, bool collate) {
    QPrinter_SetCollateCopies((QPrinter*)self, collate);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
///
/// ``` QPrinter* self ```
bool q_printer_collate_copies(void* self) {
    return QPrinter_CollateCopies((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
///
/// ``` QPrinter* self, bool fullPage ```
void q_printer_set_full_page(void* self, bool fullPage) {
    QPrinter_SetFullPage((QPrinter*)self, fullPage);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fullPage)
///
/// ``` QPrinter* self ```
bool q_printer_full_page(void* self) {
    return QPrinter_FullPage((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
///
/// ``` QPrinter* self, int copyCount ```
void q_printer_set_copy_count(void* self, int copyCount) {
    QPrinter_SetCopyCount((QPrinter*)self, copyCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#copyCount)
///
/// ``` QPrinter* self ```
int32_t q_printer_copy_count(void* self) {
    return QPrinter_CopyCount((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
///
/// ``` QPrinter* self ```
bool q_printer_supports_multiple_copies(void* self) {
    return QPrinter_SupportsMultipleCopies((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
///
/// ``` QPrinter* self, enum QPrinter__PaperSource paperSource ```
void q_printer_set_paper_source(void* self, int64_t paperSource) {
    QPrinter_SetPaperSource((QPrinter*)self, paperSource);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperSource)
///
/// ``` QPrinter* self ```
int64_t q_printer_paper_source(void* self) {
    return QPrinter_PaperSource((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
///
/// ``` QPrinter* self, enum QPrinter__DuplexMode duplex ```
void q_printer_set_duplex(void* self, int64_t duplex) {
    QPrinter_SetDuplex((QPrinter*)self, duplex);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#duplex)
///
/// ``` QPrinter* self ```
int64_t q_printer_duplex(void* self) {
    return QPrinter_Duplex((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
///
/// ``` QPrinter* self ```
libqt_list /* of int */ q_printer_supported_resolutions(void* self) {
    libqt_list _arr = QPrinter_SupportedResolutions((QPrinter*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
///
/// ``` QPrinter* self, bool enable ```
void q_printer_set_font_embedding_enabled(void* self, bool enable) {
    QPrinter_SetFontEmbeddingEnabled((QPrinter*)self, enable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
///
/// ``` QPrinter* self ```
bool q_printer_font_embedding_enabled(void* self) {
    return QPrinter_FontEmbeddingEnabled((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperRect)
///
/// ``` QPrinter* self, enum QPrinter__Unit param1 ```
QRectF* q_printer_paper_rect(void* self, int64_t param1) {
    return QPrinter_PaperRect((QPrinter*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageRect)
///
/// ``` QPrinter* self, enum QPrinter__Unit param1 ```
QRectF* q_printer_page_rect(void* self, int64_t param1) {
    return QPrinter_PageRect((QPrinter*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
///
/// ``` QPrinter* self ```
const char* q_printer_printer_selection_option(void* self) {
    libqt_string _str = QPrinter_PrinterSelectionOption((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
///
/// ``` QPrinter* self, const char* printerSelectionOption ```
void q_printer_set_printer_selection_option(void* self, const char* printerSelectionOption) {
    QPrinter_SetPrinterSelectionOption((QPrinter*)self, qstring(printerSelectionOption));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// ``` QPrinter* self ```
bool q_printer_new_page(void* self) {
    return QPrinter_NewPage((QPrinter*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, bool (*slot)() ```
void q_printer_on_new_page(void* self, bool (*slot)()) {
    QPrinter_OnNewPage((QPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrinter* self ```
bool q_printer_qbase_new_page(void* self) {
    return QPrinter_QBaseNewPage((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#abort)
///
/// ``` QPrinter* self ```
bool q_printer_abort(void* self) {
    return QPrinter_Abort((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerState)
///
/// ``` QPrinter* self ```
int64_t q_printer_printer_state(void* self) {
    return QPrinter_PrinterState((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// ``` QPrinter* self ```
QPaintEngine* q_printer_paint_engine(void* self) {
    return QPrinter_PaintEngine((QPrinter*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, QPaintEngine* (*slot)() ```
void q_printer_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QPrinter_OnPaintEngine((QPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrinter* self ```
QPaintEngine* q_printer_qbase_paint_engine(void* self) {
    return QPrinter_QBasePaintEngine((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printEngine)
///
/// ``` QPrinter* self ```
QPrintEngine* q_printer_print_engine(void* self) {
    return QPrinter_PrintEngine((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
///
/// ``` QPrinter* self, int fromPage, int toPage ```
void q_printer_set_from_to(void* self, int fromPage, int toPage) {
    QPrinter_SetFromTo((QPrinter*)self, fromPage, toPage);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fromPage)
///
/// ``` QPrinter* self ```
int32_t q_printer_from_page(void* self) {
    return QPrinter_FromPage((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#toPage)
///
/// ``` QPrinter* self ```
int32_t q_printer_to_page(void* self) {
    return QPrinter_ToPage((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
///
/// ``` QPrinter* self, enum QPrinter__PrintRange range ```
void q_printer_set_print_range(void* self, int64_t range) {
    QPrinter_SetPrintRange((QPrinter*)self, range);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printRange)
///
/// ``` QPrinter* self ```
int64_t q_printer_print_range(void* self) {
    return QPrinter_PrintRange((QPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// ``` QPrinter* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printer_metric(void* self, int64_t param1) {
    return QPrinter_Metric((QPrinter*)self, param1);
}

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, int32_t (*slot)(QPrinter*, enum QPaintDevice__PaintDeviceMetric) ```
void q_printer_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QPrinter_OnMetric((QPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrinter* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printer_qbase_metric(void* self, int64_t param1) {
    return QPrinter_QBaseMetric((QPrinter*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// ``` QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine ```
void q_printer_set_engines(void* self, void* printEngine, void* paintEngine) {
    QPrinter_SetEngines((QPrinter*)self, (QPrintEngine*)printEngine, (QPaintEngine*)paintEngine);
}

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, void (*slot)(QPrinter*, QPrintEngine*, QPaintEngine*) ```
void q_printer_on_set_engines(void* self, void (*slot)(void*, void*, void*)) {
    QPrinter_OnSetEngines((QPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine ```
void q_printer_qbase_set_engines(void* self, void* printEngine, void* paintEngine) {
    QPrinter_QBaseSetEngines((QPrinter*)self, (QPrintEngine*)printEngine, (QPaintEngine*)paintEngine);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// ``` QPrinter* self ```
QPageLayout* q_printer_page_layout(void* self) {
    return QPagedPaintDevice_PageLayout((QPagedPaintDevice*)self);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// ``` QPrinter* self ```
QPageRanges* q_printer_page_ranges(void* self) {
    return QPagedPaintDevice_PageRanges((QPagedPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPrinter* self ```
bool q_printer_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QPrinter* self ```
int32_t q_printer_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QPrinter* self ```
int32_t q_printer_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPrinter* self ```
int32_t q_printer_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPrinter* self ```
int32_t q_printer_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPrinter* self ```
int32_t q_printer_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPrinter* self ```
int32_t q_printer_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPrinter* self ```
int32_t q_printer_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPrinter* self ```
int32_t q_printer_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPrinter* self ```
double q_printer_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPrinter* self ```
double q_printer_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPrinter* self ```
int32_t q_printer_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPrinter* self ```
int32_t q_printer_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_printer_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPageLayout* pageLayout ```
bool q_printer_set_page_layout(void* self, void* pageLayout) {
    return QPrinter_SetPageLayout((QPrinter*)self, (QPageLayout*)pageLayout);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPageLayout* pageLayout ```
bool q_printer_qbase_set_page_layout(void* self, void* pageLayout) {
    return QPrinter_QBaseSetPageLayout((QPrinter*)self, (QPageLayout*)pageLayout);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, bool (*slot)(QPrinter*, QPageLayout*) ```
void q_printer_on_set_page_layout(void* self, bool (*slot)(void*, void*)) {
    QPrinter_OnSetPageLayout((QPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPageSize* pageSize ```
bool q_printer_set_page_size(void* self, void* pageSize) {
    return QPrinter_SetPageSize((QPrinter*)self, (QPageSize*)pageSize);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPageSize* pageSize ```
bool q_printer_qbase_set_page_size(void* self, void* pageSize) {
    return QPrinter_QBaseSetPageSize((QPrinter*)self, (QPageSize*)pageSize);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, bool (*slot)(QPrinter*, QPageSize*) ```
void q_printer_on_set_page_size(void* self, bool (*slot)(void*, void*)) {
    QPrinter_OnSetPageSize((QPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, enum QPageLayout__Orientation orientation ```
bool q_printer_set_page_orientation(void* self, int64_t orientation) {
    return QPrinter_SetPageOrientation((QPrinter*)self, orientation);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, enum QPageLayout__Orientation orientation ```
bool q_printer_qbase_set_page_orientation(void* self, int64_t orientation) {
    return QPrinter_QBaseSetPageOrientation((QPrinter*)self, orientation);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, bool (*slot)(QPrinter*, enum QPageLayout__Orientation) ```
void q_printer_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t)) {
    QPrinter_OnSetPageOrientation((QPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_printer_set_page_margins(void* self, void* margins, int64_t units) {
    return QPrinter_SetPageMargins((QPrinter*)self, (QMarginsF*)margins, units);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_printer_qbase_set_page_margins(void* self, void* margins, int64_t units) {
    return QPrinter_QBaseSetPageMargins((QPrinter*)self, (QMarginsF*)margins, units);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, bool (*slot)(QPrinter*, QMarginsF*, enum QPageLayout__Unit) ```
void q_printer_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t)) {
    QPrinter_OnSetPageMargins((QPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPageRanges* ranges ```
void q_printer_set_page_ranges(void* self, void* ranges) {
    QPrinter_SetPageRanges((QPrinter*)self, (QPageRanges*)ranges);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPageRanges* ranges ```
void q_printer_qbase_set_page_ranges(void* self, void* ranges) {
    QPrinter_QBaseSetPageRanges((QPrinter*)self, (QPageRanges*)ranges);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, void (*slot)(QPrinter*, QPageRanges*) ```
void q_printer_on_set_page_ranges(void* self, void (*slot)(void*, void*)) {
    QPrinter_OnSetPageRanges((QPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPainter* painter ```
void q_printer_init_painter(void* self, void* painter) {
    QPrinter_InitPainter((QPrinter*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPainter* painter ```
void q_printer_qbase_init_painter(void* self, void* painter) {
    QPrinter_QBaseInitPainter((QPrinter*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, void (*slot)(QPrinter*, QPainter*) ```
void q_printer_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QPrinter_OnInitPainter((QPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPoint* offset ```
QPaintDevice* q_printer_redirected(void* self, void* offset) {
    return QPrinter_Redirected((QPrinter*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPoint* offset ```
QPaintDevice* q_printer_qbase_redirected(void* self, void* offset) {
    return QPrinter_QBaseRedirected((QPrinter*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, QPaintDevice* (*slot)(QPrinter*, QPoint*) ```
void q_printer_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QPrinter_OnRedirected((QPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self ```
QPainter* q_printer_shared_painter(void* self) {
    return QPrinter_SharedPainter((QPrinter*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self ```
QPainter* q_printer_qbase_shared_painter(void* self) {
    return QPrinter_QBaseSharedPainter((QPrinter*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, QPainter* (*slot)() ```
void q_printer_on_shared_painter(void* self, QPainter* (*slot)()) {
    QPrinter_OnSharedPainter((QPrinter*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPrinter* self ```
void q_printer_delete(void* self) {
    QPrinter_Delete((QPrinter*)(self));
}