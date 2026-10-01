#pragma once
#ifndef PRINTSUPPORT_LIBQPRINTERINFO_H
#define PRINTSUPPORT_LIBQPRINTERINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html)

/// q_printerinfo_new constructs a new QPrinterInfo object.
///
QPrinterInfo* q_printerinfo_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html)

/// q_printerinfo_new2 constructs a new QPrinterInfo object.
///
/// @param other QPrinterInfo*
///
QPrinterInfo* q_printerinfo_new2(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html)

/// q_printerinfo_new3 constructs a new QPrinterInfo object.
///
/// @param printer QPrinter*
///
QPrinterInfo* q_printerinfo_new3(const void* printer);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#operator-eq)
///
/// @param self QPrinterInfo*
/// @param other QPrinterInfo*
///
void q_printerinfo_operator_assign(void* self, const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#printerName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPrinterInfo*
///
const char* q_printerinfo_printer_name(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#description)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPrinterInfo*
///
const char* q_printerinfo_description(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#location)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPrinterInfo*
///
const char* q_printerinfo_location(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#makeAndModel)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QPrinterInfo*
///
const char* q_printerinfo_make_and_model(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isNull)
///
/// @param self const QPrinterInfo*
///
bool q_printerinfo_is_null(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isDefault)
///
/// @param self const QPrinterInfo*
///
bool q_printerinfo_is_default(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isRemote)
///
/// @param self const QPrinterInfo*
///
bool q_printerinfo_is_remote(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#state)
///
/// @param self const QPrinterInfo*
///
/// @return enum QPrinter__PrinterState
///
int32_t q_printerinfo_state(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedPageSizes)
///
/// @param self const QPrinterInfo*
///
/// @return libqt_list of QPageSize*
///
libqt_list q_printerinfo_supported_page_sizes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPageSize)
///
/// @param self const QPrinterInfo*
///
QPageSize* q_printerinfo_default_page_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportsCustomPageSizes)
///
/// @param self const QPrinterInfo*
///
bool q_printerinfo_supports_custom_page_sizes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#minimumPhysicalPageSize)
///
/// @param self const QPrinterInfo*
///
QPageSize* q_printerinfo_minimum_physical_page_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#maximumPhysicalPageSize)
///
/// @param self const QPrinterInfo*
///
QPageSize* q_printerinfo_maximum_physical_page_size(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedResolutions)
///
/// @param self const QPrinterInfo*
///
/// @return libqt_list of int
///
libqt_list q_printerinfo_supported_resolutions(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultDuplexMode)
///
/// @param self const QPrinterInfo*
///
/// @return enum QPrinter__DuplexMode
///
int32_t q_printerinfo_default_duplex_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedDuplexModes)
///
/// @param self const QPrinterInfo*
///
/// @return libqt_list of enum QPrinter__DuplexMode
///
libqt_list q_printerinfo_supported_duplex_modes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultColorMode)
///
/// @param self const QPrinterInfo*
///
/// @return enum QPrinter__ColorMode
///
int32_t q_printerinfo_default_color_mode(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedColorModes)
///
/// @param self const QPrinterInfo*
///
/// @return libqt_list of enum QPrinter__ColorMode
///
libqt_list q_printerinfo_supported_color_modes(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinterNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_printerinfo_available_printer_names();

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinters)
///
/// @return libqt_list of QPrinterInfo*
///
libqt_list q_printerinfo_available_printers();

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinterName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
const char* q_printerinfo_default_printer_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinter)
///
QPrinterInfo* q_printerinfo_default_printer();

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#printerInfo)
///
/// @param printerName const char*
///
QPrinterInfo* q_printerinfo_printer_info(const char* printerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#dtor.QPrinterInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QPrinterInfo*
///
void q_printerinfo_delete(void* self);

#endif
