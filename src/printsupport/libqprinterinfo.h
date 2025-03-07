#pragma once
#ifndef SRC_PRINTSUPPORTQT6C_LIBQPRINTERINFO_H
#define SRC_PRINTSUPPORTQT6C_LIBQPRINTERINFO_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#include "../libqpagesize.h"
#include "libqprinter.h"
#include <string.h>

QPrinterInfo* q_printerinfo_new();
QPrinterInfo* q_printerinfo_new2(void* other);
QPrinterInfo* q_printerinfo_new3(void* printer);
void q_printerinfo_operator_assign(void* self, void* other);
const char* q_printerinfo_printer_name(void* self);
const char* q_printerinfo_description(void* self);
const char* q_printerinfo_location(void* self);
const char* q_printerinfo_make_and_model(void* self);
bool q_printerinfo_is_null(void* self);
bool q_printerinfo_is_default(void* self);
bool q_printerinfo_is_remote(void* self);
int64_t q_printerinfo_state(void* self);
libqt_list /* of QPageSize* */ q_printerinfo_supported_page_sizes(void* self);
QPageSize* q_printerinfo_default_page_size(void* self);
bool q_printerinfo_supports_custom_page_sizes(void* self);
QPageSize* q_printerinfo_minimum_physical_page_size(void* self);
QPageSize* q_printerinfo_maximum_physical_page_size(void* self);
libqt_list /* of int */ q_printerinfo_supported_resolutions(void* self);
int64_t q_printerinfo_default_duplex_mode(void* self);
libqt_list /* of int64_t */ q_printerinfo_supported_duplex_modes(void* self);
int64_t q_printerinfo_default_color_mode(void* self);
libqt_list /* of int64_t */ q_printerinfo_supported_color_modes(void* self);
const char** q_printerinfo_available_printer_names();
libqt_list /* of QPrinterInfo* */ q_printerinfo_available_printers();
const char* q_printerinfo_default_printer_name();
QPrinterInfo* q_printerinfo_default_printer();
QPrinterInfo* q_printerinfo_printer_info(const char* printerName);
void q_printerinfo_delete(void* self);

#endif
