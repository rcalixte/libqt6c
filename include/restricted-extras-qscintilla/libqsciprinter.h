#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCIPRINTER_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCIPRINTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html

/// q_sciprinter_new constructs a new QsciPrinter object.
///
QsciPrinter* q_sciprinter_new();

/// q_sciprinter_new2 constructs a new QsciPrinter object.
///
/// @param mode enum QPrinter__PrinterMode
QsciPrinter* q_sciprinter_new2(int32_t mode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// @param self QsciPrinter*
/// @param painter QPainter*
/// @param drawing bool
/// @param area QRect*
/// @param pagenr int
void q_sciprinter_format_page(void* self, void* painter, bool drawing, void* area, int pagenr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciPrinter*
/// @param callback void func(QsciPrinter* self, QPainter* painter, bool drawing, QRect* area, int pagenr)
void q_sciprinter_on_format_page(void* self, void (*callback)(void*, void*, bool, void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// @param self QsciPrinter*
/// @param painter QPainter*
/// @param drawing bool
/// @param area QRect*
/// @param pagenr int
void q_sciprinter_qbase_format_page(void* self, void* painter, bool drawing, void* area, int pagenr);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_magnification(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// @param self QsciPrinter*
/// @param magnification int
void q_sciprinter_set_magnification(void* self, int magnification);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciPrinter*
/// @param callback void func(QsciPrinter* self, int magnification)
void q_sciprinter_on_set_magnification(void* self, void (*callback)(void*, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// @param self QsciPrinter*
/// @param magnification int
void q_sciprinter_qbase_set_magnification(void* self, int magnification);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// @param self QsciPrinter*
/// @param qsb QsciScintillaBase*
/// @param painter QPainter*
/// @param from int
/// @param to int
int32_t q_sciprinter_print_range(void* self, void* qsb, void* painter, int from, int to);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciPrinter*
/// @param callback int32_t func(QsciPrinter* self, QsciScintillaBase* qsb, QPainter* painter, int from, int to)
void q_sciprinter_on_print_range(void* self, int32_t (*callback)(void*, void*, void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// @param self QsciPrinter*
/// @param qsb QsciScintillaBase*
/// @param painter QPainter*
/// @param from int
/// @param to int
int32_t q_sciprinter_qbase_print_range(void* self, void* qsb, void* painter, int from, int to);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// @param self QsciPrinter*
/// @param qsb QsciScintillaBase*
/// @param from int
/// @param to int
int32_t q_sciprinter_print_range2(void* self, void* qsb, int from, int to);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciPrinter*
/// @param callback int32_t func(QsciPrinter* self, QsciScintillaBase* qsb, int from, int to)
void q_sciprinter_on_print_range2(void* self, int32_t (*callback)(void*, void*, int, int));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// @param self QsciPrinter*
/// @param qsb QsciScintillaBase*
/// @param from int
/// @param to int
int32_t q_sciprinter_qbase_print_range2(void* self, void* qsb, int from, int to);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// @param self QsciPrinter*
///
/// @return enum QsciScintilla__WrapMode
int32_t q_sciprinter_wrap_mode(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// @param self QsciPrinter*
/// @param wmode enum QsciScintilla__WrapMode
void q_sciprinter_set_wrap_mode(void* self, int32_t wmode);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Allows for overriding the related default method
///
/// @param self QsciPrinter*
/// @param callback void func(QsciPrinter* self, enum QsciScintilla__WrapMode wmode)
void q_sciprinter_on_set_wrap_mode(void* self, void (*callback)(void*, int32_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Base class method implementation
///
/// @param self QsciPrinter*
/// @param wmode enum QsciScintilla__WrapMode
void q_sciprinter_qbase_set_wrap_mode(void* self, int32_t wmode);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
///
/// @param self QsciPrinter*
/// @param format enum QPrinter__OutputFormat
void q_sciprinter_set_output_format(void* self, int32_t format);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
///
/// @param self QsciPrinter*
///
/// @return enum QPrinter__OutputFormat
int32_t q_sciprinter_output_format(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
///
/// @param self QsciPrinter*
/// @param version enum QPagedPaintDevice__PdfVersion
void q_sciprinter_set_pdf_version(void* self, int32_t version);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
///
/// @param self QsciPrinter*
///
/// @return enum QPagedPaintDevice__PdfVersion
int32_t q_sciprinter_pdf_version(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
///
/// @param self QsciPrinter*
/// @param printerName const char*
void q_sciprinter_set_printer_name(void* self, const char* printerName);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciPrinter*
const char* q_sciprinter_printer_name(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#isValid)
///
/// @param self QsciPrinter*
bool q_sciprinter_is_valid(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
///
/// @param self QsciPrinter*
/// @param outputFileName const char*
void q_sciprinter_set_output_file_name(void* self, const char* outputFileName);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciPrinter*
const char* q_sciprinter_output_file_name(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
///
/// @param self QsciPrinter*
/// @param printProgram const char*
void q_sciprinter_set_print_program(void* self, const char* printProgram);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printProgram)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciPrinter*
const char* q_sciprinter_print_program(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDocName)
///
/// @param self QsciPrinter*
/// @param docName const char*
void q_sciprinter_set_doc_name(void* self, const char* docName);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#docName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciPrinter*
const char* q_sciprinter_doc_name(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCreator)
///
/// @param self QsciPrinter*
/// @param creator const char*
void q_sciprinter_set_creator(void* self, const char* creator);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#creator)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciPrinter*
const char* q_sciprinter_creator(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
///
/// @param self QsciPrinter*
/// @param pageOrder enum QPrinter__PageOrder
void q_sciprinter_set_page_order(void* self, int32_t pageOrder);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
///
/// @param self QsciPrinter*
///
/// @return enum QPrinter__PageOrder
int32_t q_sciprinter_page_order(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setResolution)
///
/// @param self QsciPrinter*
/// @param resolution int
void q_sciprinter_set_resolution(void* self, int resolution);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#resolution)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_resolution(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
///
/// @param self QsciPrinter*
/// @param colorMode enum QPrinter__ColorMode
void q_sciprinter_set_color_mode(void* self, int32_t colorMode);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#colorMode)
///
/// @param self QsciPrinter*
///
/// @return enum QPrinter__ColorMode
int32_t q_sciprinter_color_mode(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
///
/// @param self QsciPrinter*
/// @param collate bool
void q_sciprinter_set_collate_copies(void* self, bool collate);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
///
/// @param self QsciPrinter*
bool q_sciprinter_collate_copies(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
///
/// @param self QsciPrinter*
/// @param fullPage bool
void q_sciprinter_set_full_page(void* self, bool fullPage);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fullPage)
///
/// @param self QsciPrinter*
bool q_sciprinter_full_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
///
/// @param self QsciPrinter*
/// @param copyCount int
void q_sciprinter_set_copy_count(void* self, int copyCount);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#copyCount)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_copy_count(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
///
/// @param self QsciPrinter*
bool q_sciprinter_supports_multiple_copies(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
///
/// @param self QsciPrinter*
/// @param paperSource enum QPrinter__PaperSource
void q_sciprinter_set_paper_source(void* self, int32_t paperSource);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperSource)
///
/// @param self QsciPrinter*
///
/// @return enum QPrinter__PaperSource
int32_t q_sciprinter_paper_source(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
///
/// @param self QsciPrinter*
/// @param duplex enum QPrinter__DuplexMode
void q_sciprinter_set_duplex(void* self, int32_t duplex);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#duplex)
///
/// @param self QsciPrinter*
///
/// @return enum QPrinter__DuplexMode
int32_t q_sciprinter_duplex(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
///
/// @param self QsciPrinter*
libqt_list /* of int */ q_sciprinter_supported_resolutions(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
///
/// @param self QsciPrinter*
/// @param enable bool
void q_sciprinter_set_font_embedding_enabled(void* self, bool enable);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
///
/// @param self QsciPrinter*
bool q_sciprinter_font_embedding_enabled(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperRect)
///
/// @param self QsciPrinter*
/// @param param1 enum QPrinter__Unit
QRectF* q_sciprinter_paper_rect(void* self, int32_t param1);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageRect)
///
/// @param self QsciPrinter*
/// @param param1 enum QPrinter__Unit
QRectF* q_sciprinter_page_rect(void* self, int32_t param1);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciPrinter*
const char* q_sciprinter_printer_selection_option(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
///
/// @param self QsciPrinter*
/// @param printerSelectionOption const char*
void q_sciprinter_set_printer_selection_option(void* self, const char* printerSelectionOption);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#abort)
///
/// @param self QsciPrinter*
bool q_sciprinter_abort(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerState)
///
/// @param self QsciPrinter*
///
/// @return enum QPrinter__PrinterState
int32_t q_sciprinter_printer_state(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printEngine)
///
/// @param self QsciPrinter*
QPrintEngine* q_sciprinter_print_engine(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
///
/// @param self QsciPrinter*
/// @param fromPage int
/// @param toPage int
void q_sciprinter_set_from_to(void* self, int fromPage, int toPage);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fromPage)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_from_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#toPage)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_to_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
///
/// @param self QsciPrinter*
/// @param range enum QPrinter__PrintRange
void q_sciprinter_set_print_range(void* self, int32_t range);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// @param self QsciPrinter*
QPageLayout* q_sciprinter_page_layout(void* self);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// @param self QsciPrinter*
QPageRanges* q_sciprinter_page_ranges(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QsciPrinter*
bool q_sciprinter_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_width(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_height(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QsciPrinter*
double q_sciprinter_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QsciPrinter*
double q_sciprinter_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QsciPrinter*
int32_t q_sciprinter_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_sciprinter_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_sciprinter_encode_metric_f(int32_t metric, double value);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
int32_t q_sciprinter_dev_type(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
int32_t q_sciprinter_qbase_dev_type(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback int32_t func()
void q_sciprinter_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
bool q_sciprinter_new_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
bool q_sciprinter_qbase_new_page(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback bool func()
void q_sciprinter_on_new_page(void* self, bool (*callback)());

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
QPaintEngine* q_sciprinter_paint_engine(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
QPaintEngine* q_sciprinter_qbase_paint_engine(void* self);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback QPaintEngine* func()
void q_sciprinter_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_sciprinter_metric(void* self, int32_t param1);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_sciprinter_qbase_metric(void* self, int32_t param1);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback int32_t func(QsciPrinter* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_sciprinter_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param pageLayout QPageLayout*
bool q_sciprinter_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param pageLayout QPageLayout*
bool q_sciprinter_qbase_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback bool func(QsciPrinter* self, QPageLayout* pageLayout)
void q_sciprinter_on_set_page_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param pageSize QPageSize*
bool q_sciprinter_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param pageSize QPageSize*
bool q_sciprinter_qbase_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback bool func(QsciPrinter* self, QPageSize* pageSize)
void q_sciprinter_on_set_page_size(void* self, bool (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param orientation enum QPageLayout__Orientation
bool q_sciprinter_set_page_orientation(void* self, int32_t orientation);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param orientation enum QPageLayout__Orientation
bool q_sciprinter_qbase_set_page_orientation(void* self, int32_t orientation);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback bool func(QsciPrinter* self, enum QPageLayout__Orientation orientation)
void q_sciprinter_on_set_page_orientation(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
bool q_sciprinter_set_page_margins(void* self, void* margins, int32_t units);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
bool q_sciprinter_qbase_set_page_margins(void* self, void* margins, int32_t units);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback bool func(QsciPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units)
void q_sciprinter_on_set_page_margins(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param ranges QPageRanges*
void q_sciprinter_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param ranges QPageRanges*
void q_sciprinter_qbase_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback void func(QsciPrinter* self, QPageRanges* ranges)
void q_sciprinter_on_set_page_ranges(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param painter QPainter*
void q_sciprinter_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param painter QPainter*
void q_sciprinter_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback void func(QsciPrinter* self, QPainter* painter)
void q_sciprinter_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param offset QPoint*
QPaintDevice* q_sciprinter_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param offset QPoint*
QPaintDevice* q_sciprinter_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback QPaintDevice* func(QsciPrinter* self, QPoint* offset)
void q_sciprinter_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
QPainter* q_sciprinter_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
QPainter* q_sciprinter_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback QPainter* func()
void q_sciprinter_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param printEngine QPrintEngine*
/// @param paintEngine QPaintEngine*
void q_sciprinter_set_engines(void* self, void* printEngine, void* paintEngine);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param printEngine QPrintEngine*
/// @param paintEngine QPaintEngine*
void q_sciprinter_qbase_set_engines(void* self, void* printEngine, void* paintEngine);

/// Inherited from QPrinter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback void func(QsciPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine)
void q_sciprinter_on_set_engines(void* self, void (*callback)(void*, void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QsciPrinter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_sciprinter_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_sciprinter_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QsciPrinter*
/// @param callback double func(QsciPrinter* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_sciprinter_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciPrinter.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciPrinter*
void q_sciprinter_delete(void* self);

#endif
