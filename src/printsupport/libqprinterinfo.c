#include "../libqpagesize.hpp"
#include "libqprinter.hpp"
#include <string.h>
#include "libqprinterinfo.hpp"
#include "libqprinterinfo.h"

/// https://doc.qt.io/qt-6/qprinterinfo.html

/// q_printerinfo_new constructs a new QPrinterInfo object.
///
///
QPrinterInfo* q_printerinfo_new() {
    return QPrinterInfo_new();
}

/// q_printerinfo_new2 constructs a new QPrinterInfo object.
///
/// ``` QPrinterInfo* other ```
QPrinterInfo* q_printerinfo_new2(void* other) {
    return QPrinterInfo_new2((QPrinterInfo*)other);
}

/// q_printerinfo_new3 constructs a new QPrinterInfo object.
///
/// ``` QPrinter* printer ```
QPrinterInfo* q_printerinfo_new3(void* printer) {
    return QPrinterInfo_new3((QPrinter*)printer);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#operator=)
///
/// ``` QPrinterInfo* self, QPrinterInfo* other ```
void q_printerinfo_operator_assign(void* self, void* other) {
    QPrinterInfo_OperatorAssign((QPrinterInfo*)self, (QPrinterInfo*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#printerName)
///
/// ``` QPrinterInfo* self ```
const char* q_printerinfo_printer_name(void* self) {
    libqt_string _str = QPrinterInfo_PrinterName((QPrinterInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#description)
///
/// ``` QPrinterInfo* self ```
const char* q_printerinfo_description(void* self) {
    libqt_string _str = QPrinterInfo_Description((QPrinterInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#location)
///
/// ``` QPrinterInfo* self ```
const char* q_printerinfo_location(void* self) {
    libqt_string _str = QPrinterInfo_Location((QPrinterInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#makeAndModel)
///
/// ``` QPrinterInfo* self ```
const char* q_printerinfo_make_and_model(void* self) {
    libqt_string _str = QPrinterInfo_MakeAndModel((QPrinterInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#isNull)
///
/// ``` QPrinterInfo* self ```
bool q_printerinfo_is_null(void* self) {
    return QPrinterInfo_IsNull((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#isDefault)
///
/// ``` QPrinterInfo* self ```
bool q_printerinfo_is_default(void* self) {
    return QPrinterInfo_IsDefault((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#isRemote)
///
/// ``` QPrinterInfo* self ```
bool q_printerinfo_is_remote(void* self) {
    return QPrinterInfo_IsRemote((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#state)
///
/// ``` QPrinterInfo* self ```
int64_t q_printerinfo_state(void* self) {
    return QPrinterInfo_State((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedPageSizes)
///
/// ``` QPrinterInfo* self ```
libqt_list /* of QPageSize* */ q_printerinfo_supported_page_sizes(void* self) {
    libqt_list _arr = QPrinterInfo_SupportedPageSizes((QPrinterInfo*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPageSize)
///
/// ``` QPrinterInfo* self ```
QPageSize* q_printerinfo_default_page_size(void* self) {
    return QPrinterInfo_DefaultPageSize((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportsCustomPageSizes)
///
/// ``` QPrinterInfo* self ```
bool q_printerinfo_supports_custom_page_sizes(void* self) {
    return QPrinterInfo_SupportsCustomPageSizes((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#minimumPhysicalPageSize)
///
/// ``` QPrinterInfo* self ```
QPageSize* q_printerinfo_minimum_physical_page_size(void* self) {
    return QPrinterInfo_MinimumPhysicalPageSize((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#maximumPhysicalPageSize)
///
/// ``` QPrinterInfo* self ```
QPageSize* q_printerinfo_maximum_physical_page_size(void* self) {
    return QPrinterInfo_MaximumPhysicalPageSize((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedResolutions)
///
/// ``` QPrinterInfo* self ```
libqt_list /* of int */ q_printerinfo_supported_resolutions(void* self) {
    libqt_list _arr = QPrinterInfo_SupportedResolutions((QPrinterInfo*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultDuplexMode)
///
/// ``` QPrinterInfo* self ```
int64_t q_printerinfo_default_duplex_mode(void* self) {
    return QPrinterInfo_DefaultDuplexMode((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedDuplexModes)
///
/// ``` QPrinterInfo* self ```
libqt_list /* of int64_t */ q_printerinfo_supported_duplex_modes(void* self) {
    libqt_list _arr = QPrinterInfo_SupportedDuplexModes((QPrinterInfo*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultColorMode)
///
/// ``` QPrinterInfo* self ```
int64_t q_printerinfo_default_color_mode(void* self) {
    return QPrinterInfo_DefaultColorMode((QPrinterInfo*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#supportedColorModes)
///
/// ``` QPrinterInfo* self ```
libqt_list /* of int64_t */ q_printerinfo_supported_color_modes(void* self) {
    libqt_list _arr = QPrinterInfo_SupportedColorModes((QPrinterInfo*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinterNames)
///
///
const char** q_printerinfo_available_printer_names() {
    libqt_list _arr = QPrinterInfo_AvailablePrinterNames();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#availablePrinters)
///
///
libqt_list /* of QPrinterInfo* */ q_printerinfo_available_printers() {
    libqt_list _arr = QPrinterInfo_AvailablePrinters();
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinterName)
///
///
const char* q_printerinfo_default_printer_name() {
    libqt_string _str = QPrinterInfo_DefaultPrinterName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#defaultPrinter)
///
///
QPrinterInfo* q_printerinfo_default_printer() {
    return QPrinterInfo_DefaultPrinter();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprinterinfo.html#printerInfo)
///
/// ``` const char* printerName ```
QPrinterInfo* q_printerinfo_printer_info(const char* printerName) {
    return QPrinterInfo_PrinterInfo(qstring(printerName));
}

/// Delete this object from C++ memory.
///
/// ``` QPrinterInfo* self ```
void q_printerinfo_delete(void* self) {
    QPrinterInfo_Delete((QPrinterInfo*)(self));
}