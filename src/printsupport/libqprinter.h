#pragma once
#ifndef SRC_PRINTSUPPORT_QT6C_LIBQPRINTER_H
#define SRC_PRINTSUPPORT_QT6C_LIBQPRINTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qprinter.html

/// q_printer_new constructs a new QPrinter object.
///
QPrinter* q_printer_new();

/// q_printer_new2 constructs a new QPrinter object.
///
/// @param printer QPrinterInfo*
QPrinter* q_printer_new2(void* printer);

/// q_printer_new3 constructs a new QPrinter object.
///
/// @param mode enum QPrinter__PrinterMode
QPrinter* q_printer_new3(int32_t mode);

/// q_printer_new4 constructs a new QPrinter object.
///
/// @param printer QPrinterInfo*
/// @param mode enum QPrinter__PrinterMode
QPrinter* q_printer_new4(void* printer, int32_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// @param self QPrinter*
int32_t q_printer_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// Allows for overriding the related default method
///
/// @param self QPrinter*
/// @param callback int32_t func()
void q_printer_on_dev_type(void* self, int32_t (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// Base class method implementation
///
/// @param self QPrinter*
int32_t q_printer_qbase_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
///
/// @param self QPrinter*
/// @param format enum QPrinter__OutputFormat
void q_printer_set_output_format(void* self, int32_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
///
/// @param self QPrinter*
///
/// @return enum QPrinter__OutputFormat
int32_t q_printer_output_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
///
/// @param self QPrinter*
/// @param version enum QPagedPaintDevice__PdfVersion
void q_printer_set_pdf_version(void* self, int32_t version);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
///
/// @param self QPrinter*
///
/// @return enum QPagedPaintDevice__PdfVersion
int32_t q_printer_pdf_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
///
/// @param self QPrinter*
/// @param printerName const char*
void q_printer_set_printer_name(void* self, const char* printerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinter*
const char* q_printer_printer_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#isValid)
///
/// @param self QPrinter*
bool q_printer_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
///
/// @param self QPrinter*
/// @param outputFileName const char*
void q_printer_set_output_file_name(void* self, const char* outputFileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinter*
const char* q_printer_output_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
///
/// @param self QPrinter*
/// @param printProgram const char*
void q_printer_set_print_program(void* self, const char* printProgram);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printProgram)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinter*
const char* q_printer_print_program(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDocName)
///
/// @param self QPrinter*
/// @param docName const char*
void q_printer_set_doc_name(void* self, const char* docName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#docName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinter*
const char* q_printer_doc_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCreator)
///
/// @param self QPrinter*
/// @param creator const char*
void q_printer_set_creator(void* self, const char* creator);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#creator)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinter*
const char* q_printer_creator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
///
/// @param self QPrinter*
/// @param pageOrder enum QPrinter__PageOrder
void q_printer_set_page_order(void* self, int32_t pageOrder);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
///
/// @param self QPrinter*
///
/// @return enum QPrinter__PageOrder
int32_t q_printer_page_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setResolution)
///
/// @param self QPrinter*
/// @param resolution int
void q_printer_set_resolution(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#resolution)
///
/// @param self QPrinter*
int32_t q_printer_resolution(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
///
/// @param self QPrinter*
/// @param colorMode enum QPrinter__ColorMode
void q_printer_set_color_mode(void* self, int32_t colorMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#colorMode)
///
/// @param self QPrinter*
///
/// @return enum QPrinter__ColorMode
int32_t q_printer_color_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
///
/// @param self QPrinter*
/// @param collate bool
void q_printer_set_collate_copies(void* self, bool collate);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
///
/// @param self QPrinter*
bool q_printer_collate_copies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
///
/// @param self QPrinter*
/// @param fullPage bool
void q_printer_set_full_page(void* self, bool fullPage);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fullPage)
///
/// @param self QPrinter*
bool q_printer_full_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
///
/// @param self QPrinter*
/// @param copyCount int
void q_printer_set_copy_count(void* self, int copyCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#copyCount)
///
/// @param self QPrinter*
int32_t q_printer_copy_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
///
/// @param self QPrinter*
bool q_printer_supports_multiple_copies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
///
/// @param self QPrinter*
/// @param paperSource enum QPrinter__PaperSource
void q_printer_set_paper_source(void* self, int32_t paperSource);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperSource)
///
/// @param self QPrinter*
///
/// @return enum QPrinter__PaperSource
int32_t q_printer_paper_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
///
/// @param self QPrinter*
/// @param duplex enum QPrinter__DuplexMode
void q_printer_set_duplex(void* self, int32_t duplex);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#duplex)
///
/// @param self QPrinter*
///
/// @return enum QPrinter__DuplexMode
int32_t q_printer_duplex(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
///
/// @param self QPrinter*
libqt_list /* of int */ q_printer_supported_resolutions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
///
/// @param self QPrinter*
/// @param enable bool
void q_printer_set_font_embedding_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
///
/// @param self QPrinter*
bool q_printer_font_embedding_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperRect)
///
/// @param self QPrinter*
/// @param param1 enum QPrinter__Unit
QRectF* q_printer_paper_rect(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageRect)
///
/// @param self QPrinter*
/// @param param1 enum QPrinter__Unit
QRectF* q_printer_page_rect(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinter*
const char* q_printer_printer_selection_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
///
/// @param self QPrinter*
/// @param printerSelectionOption const char*
void q_printer_set_printer_selection_option(void* self, const char* printerSelectionOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// @param self QPrinter*
bool q_printer_new_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// Allows for overriding the related default method
///
/// @param self QPrinter*
/// @param callback bool func()
void q_printer_on_new_page(void* self, bool (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// Base class method implementation
///
/// @param self QPrinter*
bool q_printer_qbase_new_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#abort)
///
/// @param self QPrinter*
bool q_printer_abort(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerState)
///
/// @param self QPrinter*
///
/// @return enum QPrinter__PrinterState
int32_t q_printer_printer_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// @param self QPrinter*
QPaintEngine* q_printer_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// Allows for overriding the related default method
///
/// @param self QPrinter*
/// @param callback QPaintEngine* func()
void q_printer_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// Base class method implementation
///
/// @param self QPrinter*
QPaintEngine* q_printer_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printEngine)
///
/// @param self QPrinter*
QPrintEngine* q_printer_print_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
///
/// @param self QPrinter*
/// @param fromPage int
/// @param toPage int
void q_printer_set_from_to(void* self, int fromPage, int toPage);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fromPage)
///
/// @param self QPrinter*
int32_t q_printer_from_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#toPage)
///
/// @param self QPrinter*
int32_t q_printer_to_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
///
/// @param self QPrinter*
/// @param range enum QPrinter__PrintRange
void q_printer_set_print_range(void* self, int32_t range);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printRange)
///
/// @param self QPrinter*
///
/// @return enum QPrinter__PrintRange
int32_t q_printer_print_range(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// @param self QPrinter*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_printer_metric(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// Allows for overriding the related default method
///
/// @param self QPrinter*
/// @param callback int32_t func(QPrinter* self, enum QPaintDevice__PaintDeviceMetric param1)
void q_printer_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// Base class method implementation
///
/// @param self QPrinter*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t q_printer_qbase_metric(void* self, int32_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// @param self QPrinter*
/// @param printEngine QPrintEngine*
/// @param paintEngine QPaintEngine*
void q_printer_set_engines(void* self, void* printEngine, void* paintEngine);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// Allows for overriding the related default method
///
/// @param self QPrinter*
/// @param callback void func(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine)
void q_printer_on_set_engines(void* self, void (*callback)(void*, void*, void*));

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// Base class method implementation
///
/// @param self QPrinter*
/// @param printEngine QPrintEngine*
/// @param paintEngine QPaintEngine*
void q_printer_qbase_set_engines(void* self, void* printEngine, void* paintEngine);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// @param self QPrinter*
QPageLayout* q_printer_page_layout(void* self);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// @param self QPrinter*
QPageRanges* q_printer_page_ranges(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self QPrinter*
bool q_printer_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// @param self QPrinter*
int32_t q_printer_width(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// @param self QPrinter*
int32_t q_printer_height(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self QPrinter*
int32_t q_printer_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self QPrinter*
int32_t q_printer_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self QPrinter*
int32_t q_printer_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self QPrinter*
int32_t q_printer_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self QPrinter*
int32_t q_printer_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self QPrinter*
int32_t q_printer_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self QPrinter*
double q_printer_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self QPrinter*
double q_printer_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self QPrinter*
int32_t q_printer_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self QPrinter*
int32_t q_printer_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double q_printer_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t q_printer_encode_metric_f(int32_t metric, double value);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrinter*
/// @param pageLayout QPageLayout*
bool q_printer_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrinter*
/// @param pageLayout QPageLayout*
bool q_printer_qbase_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrinter*
/// @param callback bool func(QPrinter* self, QPageLayout* pageLayout)
void q_printer_on_set_page_layout(void* self, bool (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrinter*
/// @param pageSize QPageSize*
bool q_printer_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrinter*
/// @param pageSize QPageSize*
bool q_printer_qbase_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrinter*
/// @param callback bool func(QPrinter* self, QPageSize* pageSize)
void q_printer_on_set_page_size(void* self, bool (*callback)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrinter*
/// @param orientation enum QPageLayout__Orientation
bool q_printer_set_page_orientation(void* self, int32_t orientation);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrinter*
/// @param orientation enum QPageLayout__Orientation
bool q_printer_qbase_set_page_orientation(void* self, int32_t orientation);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrinter*
/// @param callback bool func(QPrinter* self, enum QPageLayout__Orientation orientation)
void q_printer_on_set_page_orientation(void* self, bool (*callback)(void*, int32_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrinter*
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
bool q_printer_set_page_margins(void* self, void* margins, int32_t units);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrinter*
/// @param margins QMarginsF*
/// @param units enum QPageLayout__Unit
bool q_printer_qbase_set_page_margins(void* self, void* margins, int32_t units);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrinter*
/// @param callback bool func(QPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units)
void q_printer_on_set_page_margins(void* self, bool (*callback)(void*, void*, int32_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrinter*
/// @param ranges QPageRanges*
void q_printer_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrinter*
/// @param ranges QPageRanges*
void q_printer_qbase_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrinter*
/// @param callback void func(QPrinter* self, QPageRanges* ranges)
void q_printer_on_set_page_ranges(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrinter*
/// @param painter QPainter*
void q_printer_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrinter*
/// @param painter QPainter*
void q_printer_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrinter*
/// @param callback void func(QPrinter* self, QPainter* painter)
void q_printer_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrinter*
/// @param offset QPoint*
QPaintDevice* q_printer_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrinter*
/// @param offset QPoint*
QPaintDevice* q_printer_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrinter*
/// @param callback QPaintDevice* func(QPrinter* self, QPoint* offset)
void q_printer_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrinter*
QPainter* q_printer_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrinter*
QPainter* q_printer_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrinter*
/// @param callback QPainter* func()
void q_printer_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self QPrinter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_printer_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self QPrinter*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double q_printer_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self QPrinter*
/// @param callback double func(QPrinter* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void q_printer_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#dtor.QPrinter)
///
/// Delete this object from C++ memory.
///
/// @param self QPrinter*
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
