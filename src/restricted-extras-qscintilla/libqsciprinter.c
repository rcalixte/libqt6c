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
#include <string.h>
#include "libqsciprinter.hpp"
#include "libqsciprinter.h"

/// https://doc.qt.io/qt-6/qsciprinter.html

/// q_sciprinter_new constructs a new QsciPrinter object.
///
///
QsciPrinter* q_sciprinter_new() {
    return QsciPrinter_new();
}

/// q_sciprinter_new2 constructs a new QsciPrinter object.
///
/// ``` enum QPrinter__PrinterMode mode ```
QsciPrinter* q_sciprinter_new2(int64_t mode) {
    return QsciPrinter_new2(mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciprinter.html#formatPage)
///
/// ``` QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr ```
void q_sciprinter_format_page(void* self, void* painter, bool drawing, void* area, int pagenr) {
    QsciPrinter_FormatPage((QsciPrinter*)self, (QPainter*)painter, drawing, (QRect*)area, pagenr);
}

/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, QPainter*, bool, QRect*, int) ```
void q_sciprinter_on_format_page(void* self, void (*slot)(void*, void*, bool, void*, int)) {
    QsciPrinter_OnFormatPage((QsciPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr ```
void q_sciprinter_qbase_format_page(void* self, void* painter, bool drawing, void* area, int pagenr) {
    QsciPrinter_QBaseFormatPage((QsciPrinter*)self, (QPainter*)painter, drawing, (QRect*)area, pagenr);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciprinter.html#magnification)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_magnification(void* self) {
    return QsciPrinter_Magnification((QsciPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciprinter.html#setMagnification)
///
/// ``` QsciPrinter* self, int magnification ```
void q_sciprinter_set_magnification(void* self, int magnification) {
    QsciPrinter_SetMagnification((QsciPrinter*)self, magnification);
}

/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, int) ```
void q_sciprinter_on_set_magnification(void* self, void (*slot)(void*, int)) {
    QsciPrinter_OnSetMagnification((QsciPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciPrinter* self, int magnification ```
void q_sciprinter_qbase_set_magnification(void* self, int magnification) {
    QsciPrinter_QBaseSetMagnification((QsciPrinter*)self, magnification);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciprinter.html#printRange)
///
/// ``` QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to ```
int32_t q_sciprinter_print_range(void* self, void* qsb, void* painter, int from, int to) {
    return QsciPrinter_PrintRange((QsciPrinter*)self, (QsciScintillaBase*)qsb, (QPainter*)painter, from, to);
}

/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, int32_t (*slot)(QsciPrinter*, QsciScintillaBase*, QPainter*, int, int) ```
void q_sciprinter_on_print_range(void* self, int32_t (*slot)(void*, void*, void*, int, int)) {
    QsciPrinter_OnPrintRange((QsciPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to ```
int32_t q_sciprinter_qbase_print_range(void* self, void* qsb, void* painter, int from, int to) {
    return QsciPrinter_QBasePrintRange((QsciPrinter*)self, (QsciScintillaBase*)qsb, (QPainter*)painter, from, to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciprinter.html#printRange)
///
/// ``` QsciPrinter* self, QsciScintillaBase* qsb, int from, int to ```
int32_t q_sciprinter_print_range2(void* self, void* qsb, int from, int to) {
    return QsciPrinter_PrintRange2((QsciPrinter*)self, (QsciScintillaBase*)qsb, from, to);
}

/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, int32_t (*slot)(QsciPrinter*, QsciScintillaBase*, int, int) ```
void q_sciprinter_on_print_range2(void* self, int32_t (*slot)(void*, void*, int, int)) {
    QsciPrinter_OnPrintRange2((QsciPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciPrinter* self, QsciScintillaBase* qsb, int from, int to ```
int32_t q_sciprinter_qbase_print_range2(void* self, void* qsb, int from, int to) {
    return QsciPrinter_QBasePrintRange2((QsciPrinter*)self, (QsciScintillaBase*)qsb, from, to);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciprinter.html#wrapMode)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_wrap_mode(void* self) {
    return QsciPrinter_WrapMode((QsciPrinter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsciprinter.html#setWrapMode)
///
/// ``` QsciPrinter* self, enum QsciScintilla__WrapMode wmode ```
void q_sciprinter_set_wrap_mode(void* self, int64_t wmode) {
    QsciPrinter_SetWrapMode((QsciPrinter*)self, wmode);
}

/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, enum QsciScintilla__WrapMode) ```
void q_sciprinter_on_set_wrap_mode(void* self, void (*slot)(void*, int64_t)) {
    QsciPrinter_OnSetWrapMode((QsciPrinter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QsciPrinter* self, enum QsciScintilla__WrapMode wmode ```
void q_sciprinter_qbase_set_wrap_mode(void* self, int64_t wmode) {
    QsciPrinter_QBaseSetWrapMode((QsciPrinter*)self, wmode);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
///
/// ``` QsciPrinter* self, enum QPrinter__OutputFormat format ```
void q_sciprinter_set_output_format(void* self, int64_t format) {
    QPrinter_SetOutputFormat((QPrinter*)self, format);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_output_format(void* self) {
    return QPrinter_OutputFormat((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
///
/// ``` QsciPrinter* self, enum QPagedPaintDevice__PdfVersion version ```
void q_sciprinter_set_pdf_version(void* self, int64_t version) {
    QPrinter_SetPdfVersion((QPrinter*)self, version);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_pdf_version(void* self) {
    return QPrinter_PdfVersion((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
///
/// ``` QsciPrinter* self, const char* printerName ```
void q_sciprinter_set_printer_name(void* self, const char* printerName) {
    QPrinter_SetPrinterName((QPrinter*)self, qstring(printerName));
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerName)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_printer_name(void* self) {
    libqt_string _str = QPrinter_PrinterName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#isValid)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_is_valid(void* self) {
    return QPrinter_IsValid((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
///
/// ``` QsciPrinter* self, const char* outputFileName ```
void q_sciprinter_set_output_file_name(void* self, const char* outputFileName) {
    QPrinter_SetOutputFileName((QPrinter*)self, qstring(outputFileName));
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_output_file_name(void* self) {
    libqt_string _str = QPrinter_OutputFileName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
///
/// ``` QsciPrinter* self, const char* printProgram ```
void q_sciprinter_set_print_program(void* self, const char* printProgram) {
    QPrinter_SetPrintProgram((QPrinter*)self, qstring(printProgram));
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printProgram)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_print_program(void* self) {
    libqt_string _str = QPrinter_PrintProgram((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDocName)
///
/// ``` QsciPrinter* self, const char* docName ```
void q_sciprinter_set_doc_name(void* self, const char* docName) {
    QPrinter_SetDocName((QPrinter*)self, qstring(docName));
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#docName)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_doc_name(void* self) {
    libqt_string _str = QPrinter_DocName((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCreator)
///
/// ``` QsciPrinter* self, const char* creator ```
void q_sciprinter_set_creator(void* self, const char* creator) {
    QPrinter_SetCreator((QPrinter*)self, qstring(creator));
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#creator)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_creator(void* self) {
    libqt_string _str = QPrinter_Creator((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
///
/// ``` QsciPrinter* self, enum QPrinter__PageOrder pageOrder ```
void q_sciprinter_set_page_order(void* self, int64_t pageOrder) {
    QPrinter_SetPageOrder((QPrinter*)self, pageOrder);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_page_order(void* self) {
    return QPrinter_PageOrder((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setResolution)
///
/// ``` QsciPrinter* self, int resolution ```
void q_sciprinter_set_resolution(void* self, int resolution) {
    QPrinter_SetResolution((QPrinter*)self, resolution);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#resolution)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_resolution(void* self) {
    return QPrinter_Resolution((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
///
/// ``` QsciPrinter* self, enum QPrinter__ColorMode colorMode ```
void q_sciprinter_set_color_mode(void* self, int64_t colorMode) {
    QPrinter_SetColorMode((QPrinter*)self, colorMode);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#colorMode)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_color_mode(void* self) {
    return QPrinter_ColorMode((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
///
/// ``` QsciPrinter* self, bool collate ```
void q_sciprinter_set_collate_copies(void* self, bool collate) {
    QPrinter_SetCollateCopies((QPrinter*)self, collate);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_collate_copies(void* self) {
    return QPrinter_CollateCopies((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
///
/// ``` QsciPrinter* self, bool fullPage ```
void q_sciprinter_set_full_page(void* self, bool fullPage) {
    QPrinter_SetFullPage((QPrinter*)self, fullPage);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fullPage)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_full_page(void* self) {
    return QPrinter_FullPage((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
///
/// ``` QsciPrinter* self, int copyCount ```
void q_sciprinter_set_copy_count(void* self, int copyCount) {
    QPrinter_SetCopyCount((QPrinter*)self, copyCount);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#copyCount)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_copy_count(void* self) {
    return QPrinter_CopyCount((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_supports_multiple_copies(void* self) {
    return QPrinter_SupportsMultipleCopies((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
///
/// ``` QsciPrinter* self, enum QPrinter__PaperSource paperSource ```
void q_sciprinter_set_paper_source(void* self, int64_t paperSource) {
    QPrinter_SetPaperSource((QPrinter*)self, paperSource);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperSource)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_paper_source(void* self) {
    return QPrinter_PaperSource((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
///
/// ``` QsciPrinter* self, enum QPrinter__DuplexMode duplex ```
void q_sciprinter_set_duplex(void* self, int64_t duplex) {
    QPrinter_SetDuplex((QPrinter*)self, duplex);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#duplex)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_duplex(void* self) {
    return QPrinter_Duplex((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
///
/// ``` QsciPrinter* self ```
libqt_list /* of int */ q_sciprinter_supported_resolutions(void* self) {
    libqt_list _arr = QPrinter_SupportedResolutions((QPrinter*)self);
    return _arr;
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
///
/// ``` QsciPrinter* self, bool enable ```
void q_sciprinter_set_font_embedding_enabled(void* self, bool enable) {
    QPrinter_SetFontEmbeddingEnabled((QPrinter*)self, enable);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_font_embedding_enabled(void* self) {
    return QPrinter_FontEmbeddingEnabled((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperRect)
///
/// ``` QsciPrinter* self, enum QPrinter__Unit param1 ```
QRectF* q_sciprinter_paper_rect(void* self, int64_t param1) {
    return QPrinter_PaperRect((QPrinter*)self, param1);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageRect)
///
/// ``` QsciPrinter* self, enum QPrinter__Unit param1 ```
QRectF* q_sciprinter_page_rect(void* self, int64_t param1) {
    return QPrinter_PageRect((QPrinter*)self, param1);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_printer_selection_option(void* self) {
    libqt_string _str = QPrinter_PrinterSelectionOption((QPrinter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
///
/// ``` QsciPrinter* self, const char* printerSelectionOption ```
void q_sciprinter_set_printer_selection_option(void* self, const char* printerSelectionOption) {
    QPrinter_SetPrinterSelectionOption((QPrinter*)self, qstring(printerSelectionOption));
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#abort)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_abort(void* self) {
    return QPrinter_Abort((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerState)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_printer_state(void* self) {
    return QPrinter_PrinterState((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printEngine)
///
/// ``` QsciPrinter* self ```
QPrintEngine* q_sciprinter_print_engine(void* self) {
    return QPrinter_PrintEngine((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
///
/// ``` QsciPrinter* self, int fromPage, int toPage ```
void q_sciprinter_set_from_to(void* self, int fromPage, int toPage) {
    QPrinter_SetFromTo((QPrinter*)self, fromPage, toPage);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fromPage)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_from_page(void* self) {
    return QPrinter_FromPage((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#toPage)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_to_page(void* self) {
    return QPrinter_ToPage((QPrinter*)self);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
///
/// ``` QsciPrinter* self, enum QPrinter__PrintRange range ```
void q_sciprinter_set_print_range(void* self, int64_t range) {
    QPrinter_SetPrintRange((QPrinter*)self, range);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// ``` QsciPrinter* self ```
QPageLayout* q_sciprinter_page_layout(void* self) {
    return QPagedPaintDevice_PageLayout((QPagedPaintDevice*)self);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// ``` QsciPrinter* self ```
QPageRanges* q_sciprinter_page_ranges(void* self) {
    return QPagedPaintDevice_PageRanges((QPagedPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_width(void* self) {
    return QPaintDevice_Width((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_height(void* self) {
    return QPaintDevice_Height((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QsciPrinter* self ```
double q_sciprinter_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QsciPrinter* self ```
double q_sciprinter_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_sciprinter_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_dev_type(void* self) {
    return QsciPrinter_DevType((QsciPrinter*)self);
}

/// Inherited from QPrinter
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_qbase_dev_type(void* self) {
    return QsciPrinter_QBaseDevType((QsciPrinter*)self);
}

/// Inherited from QPrinter
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, int32_t (*slot)() ```
void q_sciprinter_on_dev_type(void* self, int32_t (*slot)()) {
    QsciPrinter_OnDevType((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_new_page(void* self) {
    return QsciPrinter_NewPage((QsciPrinter*)self);
}

/// Inherited from QPrinter
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_qbase_new_page(void* self) {
    return QsciPrinter_QBaseNewPage((QsciPrinter*)self);
}

/// Inherited from QPrinter
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)() ```
void q_sciprinter_on_new_page(void* self, bool (*slot)()) {
    QsciPrinter_OnNewPage((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self ```
QPaintEngine* q_sciprinter_paint_engine(void* self) {
    return QsciPrinter_PaintEngine((QsciPrinter*)self);
}

/// Inherited from QPrinter
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self ```
QPaintEngine* q_sciprinter_qbase_paint_engine(void* self) {
    return QsciPrinter_QBasePaintEngine((QsciPrinter*)self);
}

/// Inherited from QPrinter
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, QPaintEngine* (*slot)() ```
void q_sciprinter_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QsciPrinter_OnPaintEngine((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sciprinter_metric(void* self, int64_t param1) {
    return QsciPrinter_Metric((QsciPrinter*)self, param1);
}

/// Inherited from QPrinter
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sciprinter_qbase_metric(void* self, int64_t param1) {
    return QsciPrinter_QBaseMetric((QsciPrinter*)self, param1);
}

/// Inherited from QPrinter
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, int32_t (*slot)(QsciPrinter*, enum QPaintDevice__PaintDeviceMetric) ```
void q_sciprinter_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QsciPrinter_OnMetric((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPageLayout* pageLayout ```
bool q_sciprinter_set_page_layout(void* self, void* pageLayout) {
    return QsciPrinter_SetPageLayout((QsciPrinter*)self, (QPageLayout*)pageLayout);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPageLayout* pageLayout ```
bool q_sciprinter_qbase_set_page_layout(void* self, void* pageLayout) {
    return QsciPrinter_QBaseSetPageLayout((QsciPrinter*)self, (QPageLayout*)pageLayout);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)(QsciPrinter*, QPageLayout*) ```
void q_sciprinter_on_set_page_layout(void* self, bool (*slot)(void*, void*)) {
    QsciPrinter_OnSetPageLayout((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPageSize* pageSize ```
bool q_sciprinter_set_page_size(void* self, void* pageSize) {
    return QsciPrinter_SetPageSize((QsciPrinter*)self, (QPageSize*)pageSize);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPageSize* pageSize ```
bool q_sciprinter_qbase_set_page_size(void* self, void* pageSize) {
    return QsciPrinter_QBaseSetPageSize((QsciPrinter*)self, (QPageSize*)pageSize);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)(QsciPrinter*, QPageSize*) ```
void q_sciprinter_on_set_page_size(void* self, bool (*slot)(void*, void*)) {
    QsciPrinter_OnSetPageSize((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, enum QPageLayout__Orientation orientation ```
bool q_sciprinter_set_page_orientation(void* self, int64_t orientation) {
    return QsciPrinter_SetPageOrientation((QsciPrinter*)self, orientation);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, enum QPageLayout__Orientation orientation ```
bool q_sciprinter_qbase_set_page_orientation(void* self, int64_t orientation) {
    return QsciPrinter_QBaseSetPageOrientation((QsciPrinter*)self, orientation);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)(QsciPrinter*, enum QPageLayout__Orientation) ```
void q_sciprinter_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t)) {
    QsciPrinter_OnSetPageOrientation((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_sciprinter_set_page_margins(void* self, void* margins, int64_t units) {
    return QsciPrinter_SetPageMargins((QsciPrinter*)self, (QMarginsF*)margins, units);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_sciprinter_qbase_set_page_margins(void* self, void* margins, int64_t units) {
    return QsciPrinter_QBaseSetPageMargins((QsciPrinter*)self, (QMarginsF*)margins, units);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)(QsciPrinter*, QMarginsF*, enum QPageLayout__Unit) ```
void q_sciprinter_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t)) {
    QsciPrinter_OnSetPageMargins((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPageRanges* ranges ```
void q_sciprinter_set_page_ranges(void* self, void* ranges) {
    QsciPrinter_SetPageRanges((QsciPrinter*)self, (QPageRanges*)ranges);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPageRanges* ranges ```
void q_sciprinter_qbase_set_page_ranges(void* self, void* ranges) {
    QsciPrinter_QBaseSetPageRanges((QsciPrinter*)self, (QPageRanges*)ranges);
}

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, QPageRanges*) ```
void q_sciprinter_on_set_page_ranges(void* self, void (*slot)(void*, void*)) {
    QsciPrinter_OnSetPageRanges((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPainter* painter ```
void q_sciprinter_init_painter(void* self, void* painter) {
    QsciPrinter_InitPainter((QsciPrinter*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPainter* painter ```
void q_sciprinter_qbase_init_painter(void* self, void* painter) {
    QsciPrinter_QBaseInitPainter((QsciPrinter*)self, (QPainter*)painter);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, QPainter*) ```
void q_sciprinter_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QsciPrinter_OnInitPainter((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPoint* offset ```
QPaintDevice* q_sciprinter_redirected(void* self, void* offset) {
    return QsciPrinter_Redirected((QsciPrinter*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPoint* offset ```
QPaintDevice* q_sciprinter_qbase_redirected(void* self, void* offset) {
    return QsciPrinter_QBaseRedirected((QsciPrinter*)self, (QPoint*)offset);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, QPaintDevice* (*slot)(QsciPrinter*, QPoint*) ```
void q_sciprinter_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QsciPrinter_OnRedirected((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self ```
QPainter* q_sciprinter_shared_painter(void* self) {
    return QsciPrinter_SharedPainter((QsciPrinter*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self ```
QPainter* q_sciprinter_qbase_shared_painter(void* self) {
    return QsciPrinter_QBaseSharedPainter((QsciPrinter*)self);
}

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, QPainter* (*slot)() ```
void q_sciprinter_on_shared_painter(void* self, QPainter* (*slot)()) {
    QsciPrinter_OnSharedPainter((QsciPrinter*)self, (intptr_t)slot);
}

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine ```
void q_sciprinter_set_engines(void* self, void* printEngine, void* paintEngine) {
    QsciPrinter_SetEngines((QsciPrinter*)self, (QPrintEngine*)printEngine, (QPaintEngine*)paintEngine);
}

/// Inherited from QPrinter
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine ```
void q_sciprinter_qbase_set_engines(void* self, void* printEngine, void* paintEngine) {
    QsciPrinter_QBaseSetEngines((QsciPrinter*)self, (QPrintEngine*)printEngine, (QPaintEngine*)paintEngine);
}

/// Inherited from QPrinter
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, QPrintEngine*, QPaintEngine*) ```
void q_sciprinter_on_set_engines(void* self, void (*slot)(void*, void*, void*)) {
    QsciPrinter_OnSetEngines((QsciPrinter*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QsciPrinter* self ```
void q_sciprinter_delete(void* self) {
    QsciPrinter_Delete((QsciPrinter*)(self));
}