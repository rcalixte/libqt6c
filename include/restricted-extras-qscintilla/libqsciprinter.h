#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIPRINTER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIPRINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html

/// q_sciprinter_new constructs a new QsciPrinter object.
///
///
QsciPrinter* q_sciprinter_new();

/// q_sciprinter_new2 constructs a new QsciPrinter object.
///
/// ``` enum QPrinter__PrinterMode mode ```
QsciPrinter* q_sciprinter_new2(int64_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// ``` QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr ```
void q_sciprinter_format_page(void* self, void* painter, bool drawing, void* area, int pagenr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, QPainter*, bool, QRect*, int) ```
void q_sciprinter_on_format_page(void* self, void (*slot)(void*, void*, bool, void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// ``` QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr ```
void q_sciprinter_qbase_format_page(void* self, void* painter, bool drawing, void* area, int pagenr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_magnification(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// ``` QsciPrinter* self, int magnification ```
void q_sciprinter_set_magnification(void* self, int magnification);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, int) ```
void q_sciprinter_on_set_magnification(void* self, void (*slot)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// ``` QsciPrinter* self, int magnification ```
void q_sciprinter_qbase_set_magnification(void* self, int magnification);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// ``` QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to ```
int32_t q_sciprinter_print_range(void* self, void* qsb, void* painter, int from, int to);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, int32_t (*slot)(QsciPrinter*, QsciScintillaBase*, QPainter*, int, int) ```
void q_sciprinter_on_print_range(void* self, int32_t (*slot)(void*, void*, void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// ``` QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to ```
int32_t q_sciprinter_qbase_print_range(void* self, void* qsb, void* painter, int from, int to);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// ``` QsciPrinter* self, QsciScintillaBase* qsb, int from, int to ```
int32_t q_sciprinter_print_range2(void* self, void* qsb, int from, int to);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, int32_t (*slot)(QsciPrinter*, QsciScintillaBase*, int, int) ```
void q_sciprinter_on_print_range2(void* self, int32_t (*slot)(void*, void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// ``` QsciPrinter* self, QsciScintillaBase* qsb, int from, int to ```
int32_t q_sciprinter_qbase_print_range2(void* self, void* qsb, int from, int to);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_wrap_mode(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// ``` QsciPrinter* self, enum QsciScintilla__WrapMode wmode ```
void q_sciprinter_set_wrap_mode(void* self, int64_t wmode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, enum QsciScintilla__WrapMode) ```
void q_sciprinter_on_set_wrap_mode(void* self, void (*slot)(void*, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// ``` QsciPrinter* self, enum QsciScintilla__WrapMode wmode ```
void q_sciprinter_qbase_set_wrap_mode(void* self, int64_t wmode);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
///
/// ``` QsciPrinter* self, enum QPrinter__OutputFormat format ```
void q_sciprinter_set_output_format(void* self, int64_t format);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_output_format(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
///
/// ``` QsciPrinter* self, enum QPagedPaintDevice__PdfVersion version ```
void q_sciprinter_set_pdf_version(void* self, int64_t version);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_pdf_version(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
///
/// ``` QsciPrinter* self, const char* printerName ```
void q_sciprinter_set_printer_name(void* self, const char* printerName);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerName)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_printer_name(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#isValid)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_is_valid(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
///
/// ``` QsciPrinter* self, const char* outputFileName ```
void q_sciprinter_set_output_file_name(void* self, const char* outputFileName);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_output_file_name(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
///
/// ``` QsciPrinter* self, const char* printProgram ```
void q_sciprinter_set_print_program(void* self, const char* printProgram);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printProgram)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_print_program(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDocName)
///
/// ``` QsciPrinter* self, const char* docName ```
void q_sciprinter_set_doc_name(void* self, const char* docName);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#docName)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_doc_name(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCreator)
///
/// ``` QsciPrinter* self, const char* creator ```
void q_sciprinter_set_creator(void* self, const char* creator);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#creator)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_creator(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
///
/// ``` QsciPrinter* self, enum QPrinter__PageOrder pageOrder ```
void q_sciprinter_set_page_order(void* self, int64_t pageOrder);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_page_order(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setResolution)
///
/// ``` QsciPrinter* self, int resolution ```
void q_sciprinter_set_resolution(void* self, int resolution);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#resolution)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_resolution(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
///
/// ``` QsciPrinter* self, enum QPrinter__ColorMode colorMode ```
void q_sciprinter_set_color_mode(void* self, int64_t colorMode);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#colorMode)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_color_mode(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
///
/// ``` QsciPrinter* self, bool collate ```
void q_sciprinter_set_collate_copies(void* self, bool collate);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_collate_copies(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
///
/// ``` QsciPrinter* self, bool fullPage ```
void q_sciprinter_set_full_page(void* self, bool fullPage);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fullPage)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_full_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
///
/// ``` QsciPrinter* self, int copyCount ```
void q_sciprinter_set_copy_count(void* self, int copyCount);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#copyCount)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_copy_count(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_supports_multiple_copies(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
///
/// ``` QsciPrinter* self, enum QPrinter__PaperSource paperSource ```
void q_sciprinter_set_paper_source(void* self, int64_t paperSource);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperSource)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_paper_source(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
///
/// ``` QsciPrinter* self, enum QPrinter__DuplexMode duplex ```
void q_sciprinter_set_duplex(void* self, int64_t duplex);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#duplex)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_duplex(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
///
/// ``` QsciPrinter* self ```
libqt_list /* of int */ q_sciprinter_supported_resolutions(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
///
/// ``` QsciPrinter* self, bool enable ```
void q_sciprinter_set_font_embedding_enabled(void* self, bool enable);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_font_embedding_enabled(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperRect)
///
/// ``` QsciPrinter* self, enum QPrinter__Unit param1 ```
QRectF* q_sciprinter_paper_rect(void* self, int64_t param1);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageRect)
///
/// ``` QsciPrinter* self, enum QPrinter__Unit param1 ```
QRectF* q_sciprinter_page_rect(void* self, int64_t param1);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
///
/// ``` QsciPrinter* self ```
const char* q_sciprinter_printer_selection_option(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
///
/// ``` QsciPrinter* self, const char* printerSelectionOption ```
void q_sciprinter_set_printer_selection_option(void* self, const char* printerSelectionOption);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#abort)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_abort(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerState)
///
/// ``` QsciPrinter* self ```
int64_t q_sciprinter_printer_state(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printEngine)
///
/// ``` QsciPrinter* self ```
QPrintEngine* q_sciprinter_print_engine(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
///
/// ``` QsciPrinter* self, int fromPage, int toPage ```
void q_sciprinter_set_from_to(void* self, int fromPage, int toPage);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fromPage)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_from_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#toPage)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_to_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
///
/// ``` QsciPrinter* self, enum QPrinter__PrintRange range ```
void q_sciprinter_set_print_range(void* self, int64_t range);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// ``` QsciPrinter* self ```
QPageLayout* q_sciprinter_page_layout(void* self);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// ``` QsciPrinter* self ```
QPageRanges* q_sciprinter_page_ranges(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_width(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_height(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QsciPrinter* self ```
double q_sciprinter_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QsciPrinter* self ```
double q_sciprinter_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_sciprinter_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// ``` enum QPaintDevice__PaintDeviceMetric metric, double value ```
int32_t q_sciprinter_encode_metric_f(int64_t metric, double value);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_dev_type(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self ```
int32_t q_sciprinter_qbase_dev_type(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, int32_t (*slot)() ```
void q_sciprinter_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_new_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self ```
bool q_sciprinter_qbase_new_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)() ```
void q_sciprinter_on_new_page(void* self, bool (*slot)());

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self ```
QPaintEngine* q_sciprinter_paint_engine(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self ```
QPaintEngine* q_sciprinter_qbase_paint_engine(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, QPaintEngine* (*slot)() ```
void q_sciprinter_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sciprinter_metric(void* self, int64_t param1);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_sciprinter_qbase_metric(void* self, int64_t param1);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, int32_t (*slot)(QsciPrinter*, enum QPaintDevice__PaintDeviceMetric) ```
void q_sciprinter_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPageLayout* pageLayout ```
bool q_sciprinter_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPageLayout* pageLayout ```
bool q_sciprinter_qbase_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)(QsciPrinter*, QPageLayout*) ```
void q_sciprinter_on_set_page_layout(void* self, bool (*slot)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPageSize* pageSize ```
bool q_sciprinter_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPageSize* pageSize ```
bool q_sciprinter_qbase_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)(QsciPrinter*, QPageSize*) ```
void q_sciprinter_on_set_page_size(void* self, bool (*slot)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, enum QPageLayout__Orientation orientation ```
bool q_sciprinter_set_page_orientation(void* self, int64_t orientation);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, enum QPageLayout__Orientation orientation ```
bool q_sciprinter_qbase_set_page_orientation(void* self, int64_t orientation);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)(QsciPrinter*, enum QPageLayout__Orientation) ```
void q_sciprinter_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_sciprinter_set_page_margins(void* self, void* margins, int64_t units);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_sciprinter_qbase_set_page_margins(void* self, void* margins, int64_t units);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, bool (*slot)(QsciPrinter*, QMarginsF*, enum QPageLayout__Unit) ```
void q_sciprinter_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPageRanges* ranges ```
void q_sciprinter_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPageRanges* ranges ```
void q_sciprinter_qbase_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, QPageRanges*) ```
void q_sciprinter_on_set_page_ranges(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPainter* painter ```
void q_sciprinter_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPainter* painter ```
void q_sciprinter_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, QPainter*) ```
void q_sciprinter_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPoint* offset ```
QPaintDevice* q_sciprinter_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPoint* offset ```
QPaintDevice* q_sciprinter_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, QPaintDevice* (*slot)(QsciPrinter*, QPoint*) ```
void q_sciprinter_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self ```
QPainter* q_sciprinter_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self ```
QPainter* q_sciprinter_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, QPainter* (*slot)() ```
void q_sciprinter_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine ```
void q_sciprinter_set_engines(void* self, void* printEngine, void* paintEngine);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine ```
void q_sciprinter_qbase_set_engines(void* self, void* printEngine, void* paintEngine);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, void (*slot)(QsciPrinter*, QPrintEngine*, QPaintEngine*) ```
void q_sciprinter_on_set_engines(void* self, void (*slot)(void*, void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QsciPrinter* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_sciprinter_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QsciPrinter* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB ```
double q_sciprinter_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QsciPrinter* self, double (*slot)(QsciPrinter*, enum QPaintDevice__PaintDeviceMetric, enum QPaintDevice__PaintDeviceMetric) ```
void q_sciprinter_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciPrinter* self ```
void q_sciprinter_delete(void* self);

#endif
