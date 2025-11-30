#pragma once
#ifndef SRC_PRINTSUPPORT_QT6C_LIBQPRINTERINFO_H
#define SRC_PRINTSUPPORT_QT6C_LIBQPRINTERINFO_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qprinterinfo.html

/// q_printerinfo_new constructs a new QPrinterInfo object.
///
QPrinterInfo* q_printerinfo_new();

/// q_printerinfo_new2 constructs a new QPrinterInfo object.
///
/// @param other QPrinterInfo*
QPrinterInfo* q_printerinfo_new2(void* other);

/// q_printerinfo_new3 constructs a new QPrinterInfo object.
///
/// @param printer QPrinter*
QPrinterInfo* q_printerinfo_new3(void* printer);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#operator-eq)
///
/// @param self QPrinterInfo*
/// @param other QPrinterInfo*
void q_printerinfo_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#printerName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinterInfo*
const char* q_printerinfo_printer_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#description)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinterInfo*
const char* q_printerinfo_description(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#location)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinterInfo*
const char* q_printerinfo_location(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#makeAndModel)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QPrinterInfo*
const char* q_printerinfo_make_and_model(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isNull)
///
/// @param self QPrinterInfo*
bool q_printerinfo_is_null(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isDefault)
///
/// @param self QPrinterInfo*
bool q_printerinfo_is_default(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#isRemote)
///
/// @param self QPrinterInfo*
bool q_printerinfo_is_remote(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#state)
///
/// @param self QPrinterInfo*
///
/// @return enum QPrinter__PrinterState
int32_t q_printerinfo_state(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedPageSizes)
///
/// @param self QPrinterInfo*
libqt_list /* of QPageSize* */ q_printerinfo_supported_page_sizes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPageSize)
///
/// @param self QPrinterInfo*
QPageSize* q_printerinfo_default_page_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportsCustomPageSizes)
///
/// @param self QPrinterInfo*
bool q_printerinfo_supports_custom_page_sizes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#minimumPhysicalPageSize)
///
/// @param self QPrinterInfo*
QPageSize* q_printerinfo_minimum_physical_page_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#maximumPhysicalPageSize)
///
/// @param self QPrinterInfo*
QPageSize* q_printerinfo_maximum_physical_page_size(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedResolutions)
///
/// @param self QPrinterInfo*
libqt_list /* of int */ q_printerinfo_supported_resolutions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultDuplexMode)
///
/// @param self QPrinterInfo*
///
/// @return enum QPrinter__DuplexMode
int32_t q_printerinfo_default_duplex_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedDuplexModes)
///
/// @param self QPrinterInfo*
///
/// @return libqt_list of enum QPrinter__DuplexMode
libqt_list /* of int32_t */ q_printerinfo_supported_duplex_modes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultColorMode)
///
/// @param self QPrinterInfo*
///
/// @return enum QPrinter__ColorMode
int32_t q_printerinfo_default_color_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#supportedColorModes)
///
/// @param self QPrinterInfo*
///
/// @return libqt_list of enum QPrinter__ColorMode
libqt_list /* of int32_t */ q_printerinfo_supported_color_modes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinterNames)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_printerinfo_available_printer_names();

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinters)
///
libqt_list /* of QPrinterInfo* */ q_printerinfo_available_printers();

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinterName)
///
/// Caller is responsible for freeing the returned memory
///
const char* q_printerinfo_default_printer_name();

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinter)
///
QPrinterInfo* q_printerinfo_default_printer();

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#printerInfo)
///
/// @param printerName const char*
QPrinterInfo* q_printerinfo_printer_info(const char* printerName);

/// [Upstream resources](https://doc.qt.io/qt-6/qprinterinfo.html#dtor.QPrinterInfo)
///
/// Delete this object from C++ memory.
///
/// @param self QPrinterInfo*
void q_printerinfo_delete(void* self);

#endif
