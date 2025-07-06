#pragma once
#ifndef SRC_PRINTSUPPORTQT6C_LIBQPRINTERINFO_H
#define SRC_PRINTSUPPORTQT6C_LIBQPRINTERINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qprinterinfo.html

/// q_printerinfo_new constructs a new QPrinterInfo object.
///
///
QPrinterInfo* q_printerinfo_new();

/// q_printerinfo_new2 constructs a new QPrinterInfo object.
///
/// ``` QPrinterInfo* other ```
QPrinterInfo* q_printerinfo_new2(void* other);

/// q_printerinfo_new3 constructs a new QPrinterInfo object.
///
/// ``` QPrinter* printer ```
QPrinterInfo* q_printerinfo_new3(void* printer);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#operator=)
///
/// ``` QPrinterInfo* self, QPrinterInfo* other ```
void q_printerinfo_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#printerName)
///
/// ``` QPrinterInfo* self ```
const char* q_printerinfo_printer_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#description)
///
/// ``` QPrinterInfo* self ```
const char* q_printerinfo_description(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#location)
///
/// ``` QPrinterInfo* self ```
const char* q_printerinfo_location(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#makeAndModel)
///
/// ``` QPrinterInfo* self ```
const char* q_printerinfo_make_and_model(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#isNull)
///
/// ``` QPrinterInfo* self ```
bool q_printerinfo_is_null(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#isDefault)
///
/// ``` QPrinterInfo* self ```
bool q_printerinfo_is_default(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#isRemote)
///
/// ``` QPrinterInfo* self ```
bool q_printerinfo_is_remote(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#state)
///
/// ``` QPrinterInfo* self ```
int64_t q_printerinfo_state(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedPageSizes)
///
/// ``` QPrinterInfo* self ```
libqt_list /* of QPageSize* */ q_printerinfo_supported_page_sizes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPageSize)
///
/// ``` QPrinterInfo* self ```
QPageSize* q_printerinfo_default_page_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportsCustomPageSizes)
///
/// ``` QPrinterInfo* self ```
bool q_printerinfo_supports_custom_page_sizes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#minimumPhysicalPageSize)
///
/// ``` QPrinterInfo* self ```
QPageSize* q_printerinfo_minimum_physical_page_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#maximumPhysicalPageSize)
///
/// ``` QPrinterInfo* self ```
QPageSize* q_printerinfo_maximum_physical_page_size(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedResolutions)
///
/// ``` QPrinterInfo* self ```
libqt_list /* of int */ q_printerinfo_supported_resolutions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultDuplexMode)
///
/// ``` QPrinterInfo* self ```
int64_t q_printerinfo_default_duplex_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedDuplexModes)
///
/// ``` QPrinterInfo* self ```
libqt_list /* of int64_t */ q_printerinfo_supported_duplex_modes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultColorMode)
///
/// ``` QPrinterInfo* self ```
int64_t q_printerinfo_default_color_mode(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedColorModes)
///
/// ``` QPrinterInfo* self ```
libqt_list /* of int64_t */ q_printerinfo_supported_color_modes(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinterNames)
///
///
const char** q_printerinfo_available_printer_names();

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinters)
///
///
libqt_list /* of QPrinterInfo* */ q_printerinfo_available_printers();

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinterName)
///
///
const char* q_printerinfo_default_printer_name();

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinter)
///
///
QPrinterInfo* q_printerinfo_default_printer();

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#printerInfo)
///
/// ``` const char* printerName ```
QPrinterInfo* q_printerinfo_printer_info(const char* printerName);

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#dtor.QPrinterInfo)
///
/// Delete this object from C++ memory.
///
/// ``` QPrinterInfo* self ```
void q_printerinfo_delete(void* self);

#endif
