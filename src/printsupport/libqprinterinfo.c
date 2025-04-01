#include "../libqpagesize.hpp"
#include "libqprinter.hpp"
#include <string.h>
#include "libqprinterinfo.hpp"
#include "libqprinterinfo.h"

QPrinterInfo* q_printerinfo_new() {
    return QPrinterInfo_new();
}

QPrinterInfo* q_printerinfo_new2(void* other) {
    return QPrinterInfo_new2((QPrinterInfo*)other);
}

QPrinterInfo* q_printerinfo_new3(void* printer) {
    return QPrinterInfo_new3((QPrinter*)printer);
}

void q_printerinfo_operator_assign(void* self, void* other) {
    QPrinterInfo_OperatorAssign((QPrinterInfo*)self, (QPrinterInfo*)other);
}

const char* q_printerinfo_printer_name(void* self) {
    libqt_string _str = QPrinterInfo_PrinterName((QPrinterInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printerinfo_description(void* self) {
    libqt_string _str = QPrinterInfo_Description((QPrinterInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printerinfo_location(void* self) {
    libqt_string _str = QPrinterInfo_Location((QPrinterInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_printerinfo_make_and_model(void* self) {
    libqt_string _str = QPrinterInfo_MakeAndModel((QPrinterInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_printerinfo_is_null(void* self) {
    return QPrinterInfo_IsNull((QPrinterInfo*)self);
}

bool q_printerinfo_is_default(void* self) {
    return QPrinterInfo_IsDefault((QPrinterInfo*)self);
}

bool q_printerinfo_is_remote(void* self) {
    return QPrinterInfo_IsRemote((QPrinterInfo*)self);
}

int64_t q_printerinfo_state(void* self) {
    return QPrinterInfo_State((QPrinterInfo*)self);
}

libqt_list /* of QPageSize* */ q_printerinfo_supported_page_sizes(void* self) {
    libqt_list _arr = QPrinterInfo_SupportedPageSizes((QPrinterInfo*)self);
    return _arr;
}

QPageSize* q_printerinfo_default_page_size(void* self) {
    return QPrinterInfo_DefaultPageSize((QPrinterInfo*)self);
}

bool q_printerinfo_supports_custom_page_sizes(void* self) {
    return QPrinterInfo_SupportsCustomPageSizes((QPrinterInfo*)self);
}

QPageSize* q_printerinfo_minimum_physical_page_size(void* self) {
    return QPrinterInfo_MinimumPhysicalPageSize((QPrinterInfo*)self);
}

QPageSize* q_printerinfo_maximum_physical_page_size(void* self) {
    return QPrinterInfo_MaximumPhysicalPageSize((QPrinterInfo*)self);
}

libqt_list /* of int */ q_printerinfo_supported_resolutions(void* self) {
    libqt_list _arr = QPrinterInfo_SupportedResolutions((QPrinterInfo*)self);
    return _arr;
}

int64_t q_printerinfo_default_duplex_mode(void* self) {
    return QPrinterInfo_DefaultDuplexMode((QPrinterInfo*)self);
}

libqt_list /* of int64_t */ q_printerinfo_supported_duplex_modes(void* self) {
    libqt_list _arr = QPrinterInfo_SupportedDuplexModes((QPrinterInfo*)self);
    return _arr;
}

int64_t q_printerinfo_default_color_mode(void* self) {
    return QPrinterInfo_DefaultColorMode((QPrinterInfo*)self);
}

libqt_list /* of int64_t */ q_printerinfo_supported_color_modes(void* self) {
    libqt_list _arr = QPrinterInfo_SupportedColorModes((QPrinterInfo*)self);
    return _arr;
}

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

libqt_list /* of QPrinterInfo* */ q_printerinfo_available_printers() {
    libqt_list _arr = QPrinterInfo_AvailablePrinters();
    return _arr;
}

const char* q_printerinfo_default_printer_name() {
    libqt_string _str = QPrinterInfo_DefaultPrinterName();
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QPrinterInfo* q_printerinfo_default_printer() {
    return QPrinterInfo_DefaultPrinter();
}

QPrinterInfo* q_printerinfo_printer_info(const char* printerName) {
    return QPrinterInfo_PrinterInfo(qstring(printerName));
}

void q_printerinfo_delete(void* self) {
    QPrinterInfo_Delete((QPrinterInfo*)(self));
}
