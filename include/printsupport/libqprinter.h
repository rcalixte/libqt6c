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

/// https://doc.qt.io/qt-6/qprinter.html

/// q_printer_new constructs a new QPrinter object.
///
///
QPrinter* q_printer_new();

/// q_printer_new2 constructs a new QPrinter object.
///
/// ``` QPrinterInfo* printer ```
QPrinter* q_printer_new2(void* printer);

/// q_printer_new3 constructs a new QPrinter object.
///
/// ``` enum QPrinter__PrinterMode mode ```
QPrinter* q_printer_new3(int64_t mode);

/// q_printer_new4 constructs a new QPrinter object.
///
/// ``` QPrinterInfo* printer, enum QPrinter__PrinterMode mode ```
QPrinter* q_printer_new4(void* printer, int64_t mode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#devType)
///
/// ``` QPrinter* self ```
int32_t q_printer_dev_type(void* self);

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, int32_t (*slot)() ```
void q_printer_on_dev_type(void* self, int32_t (*slot)());

/// Base class method implementation
///
/// ``` QPrinter* self ```
int32_t q_printer_qbase_dev_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFormat)
///
/// ``` QPrinter* self, enum QPrinter__OutputFormat format ```
void q_printer_set_output_format(void* self, int64_t format);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFormat)
///
/// ``` QPrinter* self ```
int64_t q_printer_output_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPdfVersion)
///
/// ``` QPrinter* self, enum QPagedPaintDevice__PdfVersion version ```
void q_printer_set_pdf_version(void* self, int64_t version);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pdfVersion)
///
/// ``` QPrinter* self ```
int64_t q_printer_pdf_version(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterName)
///
/// ``` QPrinter* self, const char* printerName ```
void q_printer_set_printer_name(void* self, const char* printerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerName)
///
/// ``` QPrinter* self ```
const char* q_printer_printer_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#isValid)
///
/// ``` QPrinter* self ```
bool q_printer_is_valid(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setOutputFileName)
///
/// ``` QPrinter* self, const char* outputFileName ```
void q_printer_set_output_file_name(void* self, const char* outputFileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#outputFileName)
///
/// ``` QPrinter* self ```
const char* q_printer_output_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintProgram)
///
/// ``` QPrinter* self, const char* printProgram ```
void q_printer_set_print_program(void* self, const char* printProgram);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printProgram)
///
/// ``` QPrinter* self ```
const char* q_printer_print_program(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDocName)
///
/// ``` QPrinter* self, const char* docName ```
void q_printer_set_doc_name(void* self, const char* docName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#docName)
///
/// ``` QPrinter* self ```
const char* q_printer_doc_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCreator)
///
/// ``` QPrinter* self, const char* creator ```
void q_printer_set_creator(void* self, const char* creator);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#creator)
///
/// ``` QPrinter* self ```
const char* q_printer_creator(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPageOrder)
///
/// ``` QPrinter* self, enum QPrinter__PageOrder pageOrder ```
void q_printer_set_page_order(void* self, int64_t pageOrder);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageOrder)
///
/// ``` QPrinter* self ```
int64_t q_printer_page_order(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setResolution)
///
/// ``` QPrinter* self, int resolution ```
void q_printer_set_resolution(void* self, int resolution);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#resolution)
///
/// ``` QPrinter* self ```
int32_t q_printer_resolution(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setColorMode)
///
/// ``` QPrinter* self, enum QPrinter__ColorMode colorMode ```
void q_printer_set_color_mode(void* self, int64_t colorMode);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#colorMode)
///
/// ``` QPrinter* self ```
int64_t q_printer_color_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCollateCopies)
///
/// ``` QPrinter* self, bool collate ```
void q_printer_set_collate_copies(void* self, bool collate);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#collateCopies)
///
/// ``` QPrinter* self ```
bool q_printer_collate_copies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFullPage)
///
/// ``` QPrinter* self, bool fullPage ```
void q_printer_set_full_page(void* self, bool fullPage);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fullPage)
///
/// ``` QPrinter* self ```
bool q_printer_full_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setCopyCount)
///
/// ``` QPrinter* self, int copyCount ```
void q_printer_set_copy_count(void* self, int copyCount);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#copyCount)
///
/// ``` QPrinter* self ```
int32_t q_printer_copy_count(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportsMultipleCopies)
///
/// ``` QPrinter* self ```
bool q_printer_supports_multiple_copies(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPaperSource)
///
/// ``` QPrinter* self, enum QPrinter__PaperSource paperSource ```
void q_printer_set_paper_source(void* self, int64_t paperSource);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperSource)
///
/// ``` QPrinter* self ```
int64_t q_printer_paper_source(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setDuplex)
///
/// ``` QPrinter* self, enum QPrinter__DuplexMode duplex ```
void q_printer_set_duplex(void* self, int64_t duplex);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#duplex)
///
/// ``` QPrinter* self ```
int64_t q_printer_duplex(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#supportedResolutions)
///
/// ``` QPrinter* self ```
libqt_list /* of int */ q_printer_supported_resolutions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFontEmbeddingEnabled)
///
/// ``` QPrinter* self, bool enable ```
void q_printer_set_font_embedding_enabled(void* self, bool enable);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fontEmbeddingEnabled)
///
/// ``` QPrinter* self ```
bool q_printer_font_embedding_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paperRect)
///
/// ``` QPrinter* self, enum QPrinter__Unit param1 ```
QRectF* q_printer_paper_rect(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#pageRect)
///
/// ``` QPrinter* self, enum QPrinter__Unit param1 ```
QRectF* q_printer_page_rect(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerSelectionOption)
///
/// ``` QPrinter* self ```
const char* q_printer_printer_selection_option(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrinterSelectionOption)
///
/// ``` QPrinter* self, const char* printerSelectionOption ```
void q_printer_set_printer_selection_option(void* self, const char* printerSelectionOption);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#newPage)
///
/// ``` QPrinter* self ```
bool q_printer_new_page(void* self);

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, bool (*slot)() ```
void q_printer_on_new_page(void* self, bool (*slot)());

/// Base class method implementation
///
/// ``` QPrinter* self ```
bool q_printer_qbase_new_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#abort)
///
/// ``` QPrinter* self ```
bool q_printer_abort(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printerState)
///
/// ``` QPrinter* self ```
int64_t q_printer_printer_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#paintEngine)
///
/// ``` QPrinter* self ```
QPaintEngine* q_printer_paint_engine(void* self);

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, QPaintEngine* (*slot)() ```
void q_printer_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Base class method implementation
///
/// ``` QPrinter* self ```
QPaintEngine* q_printer_qbase_paint_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printEngine)
///
/// ``` QPrinter* self ```
QPrintEngine* q_printer_print_engine(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setFromTo)
///
/// ``` QPrinter* self, int fromPage, int toPage ```
void q_printer_set_from_to(void* self, int fromPage, int toPage);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#fromPage)
///
/// ``` QPrinter* self ```
int32_t q_printer_from_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#toPage)
///
/// ``` QPrinter* self ```
int32_t q_printer_to_page(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setPrintRange)
///
/// ``` QPrinter* self, enum QPrinter__PrintRange range ```
void q_printer_set_print_range(void* self, int64_t range);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#printRange)
///
/// ``` QPrinter* self ```
int64_t q_printer_print_range(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#metric)
///
/// ``` QPrinter* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printer_metric(void* self, int64_t param1);

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, int32_t (*slot)(QPrinter*, enum QPaintDevice__PaintDeviceMetric) ```
void q_printer_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Base class method implementation
///
/// ``` QPrinter* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printer_qbase_metric(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinter.html#setEngines)
///
/// ``` QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine ```
void q_printer_set_engines(void* self, void* printEngine, void* paintEngine);

/// Allows for overriding the related default method
///
/// ``` QPrinter* self, void (*slot)(QPrinter*, QPrintEngine*, QPaintEngine*) ```
void q_printer_on_set_engines(void* self, void (*slot)(void*, void*, void*));

/// Base class method implementation
///
/// ``` QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine ```
void q_printer_qbase_set_engines(void* self, void* printEngine, void* paintEngine);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageLayout)
///
/// ``` QPrinter* self ```
QPageLayout* q_printer_page_layout(void* self);

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#pageRanges)
///
/// ``` QPrinter* self ```
QPageRanges* q_printer_page_ranges(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QPrinter* self ```
bool q_printer_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#width)
///
/// ``` QPrinter* self ```
int32_t q_printer_width(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#height)
///
/// ``` QPrinter* self ```
int32_t q_printer_height(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QPrinter* self ```
int32_t q_printer_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QPrinter* self ```
int32_t q_printer_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QPrinter* self ```
int32_t q_printer_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QPrinter* self ```
int32_t q_printer_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QPrinter* self ```
int32_t q_printer_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QPrinter* self ```
int32_t q_printer_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QPrinter* self ```
double q_printer_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QPrinter* self ```
double q_printer_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QPrinter* self ```
int32_t q_printer_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QPrinter* self ```
int32_t q_printer_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_printer_device_pixel_ratio_f_scale();

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageLayout)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPageLayout* pageLayout ```
bool q_printer_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPageLayout* pageLayout ```
bool q_printer_qbase_set_page_layout(void* self, void* pageLayout);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, bool (*slot)(QPrinter*, QPageLayout*) ```
void q_printer_on_set_page_layout(void* self, bool (*slot)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageSize)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPageSize* pageSize ```
bool q_printer_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPageSize* pageSize ```
bool q_printer_qbase_set_page_size(void* self, void* pageSize);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, bool (*slot)(QPrinter*, QPageSize*) ```
void q_printer_on_set_page_size(void* self, bool (*slot)(void*, void*));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageOrientation)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, enum QPageLayout__Orientation orientation ```
bool q_printer_set_page_orientation(void* self, int64_t orientation);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, enum QPageLayout__Orientation orientation ```
bool q_printer_qbase_set_page_orientation(void* self, int64_t orientation);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, bool (*slot)(QPrinter*, enum QPageLayout__Orientation) ```
void q_printer_on_set_page_orientation(void* self, bool (*slot)(void*, int64_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_printer_set_page_margins(void* self, void* margins, int64_t units);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QMarginsF* margins, enum QPageLayout__Unit units ```
bool q_printer_qbase_set_page_margins(void* self, void* margins, int64_t units);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, bool (*slot)(QPrinter*, QMarginsF*, enum QPageLayout__Unit) ```
void q_printer_on_set_page_margins(void* self, bool (*slot)(void*, void*, int64_t));

/// Inherited from QPagedPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpagedpaintdevice.html#setPageRanges)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPageRanges* ranges ```
void q_printer_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPageRanges* ranges ```
void q_printer_qbase_set_page_ranges(void* self, void* ranges);

/// Inherited from QPagedPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, void (*slot)(QPrinter*, QPageRanges*) ```
void q_printer_on_set_page_ranges(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPainter* painter ```
void q_printer_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPainter* painter ```
void q_printer_qbase_init_painter(void* self, void* painter);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, void (*slot)(QPrinter*, QPainter*) ```
void q_printer_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self, QPoint* offset ```
QPaintDevice* q_printer_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self, QPoint* offset ```
QPaintDevice* q_printer_qbase_redirected(void* self, void* offset);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, QPaintDevice* (*slot)(QPrinter*, QPoint*) ```
void q_printer_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPrinter* self ```
QPainter* q_printer_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPrinter* self ```
QPainter* q_printer_qbase_shared_painter(void* self);

/// Inherited from QPaintDevice
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPrinter* self, QPainter* (*slot)() ```
void q_printer_on_shared_painter(void* self, QPainter* (*slot)());

/// Delete this object from C++ memory.
///
/// ``` QPrinter* self ```
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
