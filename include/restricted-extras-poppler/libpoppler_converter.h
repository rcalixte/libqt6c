#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_CONVERTER_H
#define SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_CONVERTER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
///
/// @param self Poppler__BaseConverter*
/// @param outputFileName const char*
///
void q_poppler__baseconverter_set_output_file_name(void* self, const char* outputFileName);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
///
/// @param self Poppler__BaseConverter*
/// @param device QIODevice*
///
void q_poppler__baseconverter_set_output_device(void* self, void* device);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
///
/// @param self Poppler__BaseConverter*
///
bool q_poppler__baseconverter_convert(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
///
/// @param self Poppler__BaseConverter*
///
/// @return enum Poppler__BaseConverter__Error
///
int32_t q_poppler__baseconverter_last_error(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1BaseConverter.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__BaseConverter*
///
void q_poppler__baseconverter_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param pageList libqt_list of int
///
void q_poppler__psconverter_set_page_list(void* self, libqt_list pageList);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param title const char*
///
void q_poppler__psconverter_set_title(void* self, const char* title);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param hDPI double
///
void q_poppler__psconverter_set_h_d_p_i(void* self, double hDPI);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param vDPI double
///
void q_poppler__psconverter_set_v_d_p_i(void* self, double vDPI);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param rotate int
///
void q_poppler__psconverter_set_rotate(void* self, int rotate);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param paperWidth int
///
void q_poppler__psconverter_set_paper_width(void* self, int paperWidth);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param paperHeight int
///
void q_poppler__psconverter_set_paper_height(void* self, int paperHeight);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param marginRight int
///
void q_poppler__psconverter_set_right_margin(void* self, int marginRight);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param marginBottom int
///
void q_poppler__psconverter_set_bottom_margin(void* self, int marginBottom);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param marginLeft int
///
void q_poppler__psconverter_set_left_margin(void* self, int marginLeft);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param marginTop int
///
void q_poppler__psconverter_set_top_margin(void* self, int marginTop);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param strictMargins bool
///
void q_poppler__psconverter_set_strict_margins(void* self, bool strictMargins);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param forceOverprintPreview bool
///
void q_poppler__psconverter_set_force_overprint_preview(void* self, bool forceOverprintPreview);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param forceRasterize bool
///
void q_poppler__psconverter_set_force_rasterize(void* self, bool forceRasterize);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param options flag of enum Poppler__PSConverter__PSOption
///
void q_poppler__psconverter_set_p_s_options(void* self, int32_t options);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
///
/// @return flag of enum Poppler__PSConverter__PSOption
///
int32_t q_poppler__psconverter_ps_options(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
///
bool q_poppler__psconverter_convert(void* self);

/// Inherited from Poppler::BaseConverter
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param outputFileName const char*
///
void q_poppler__psconverter_set_output_file_name(void* self, const char* outputFileName);

/// Inherited from Poppler::BaseConverter
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
/// @param device QIODevice*
///
void q_poppler__psconverter_set_output_device(void* self, void* device);

/// Inherited from Poppler::BaseConverter
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// @param self Poppler__PSConverter*
///
/// @return enum Poppler__BaseConverter__Error
///
int32_t q_poppler__psconverter_last_error(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PSConverter.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__PSConverter*
///
void q_poppler__psconverter_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
///
/// @param self Poppler__PDFConverter*
/// @param options flag of enum Poppler__PDFConverter__PDFOption
///
void q_poppler__pdfconverter_set_p_d_f_options(void* self, int32_t options);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
///
/// @param self Poppler__PDFConverter*
///
/// @return flag of enum Poppler__PDFConverter__PDFOption
///
int32_t q_poppler__pdfconverter_pdf_options(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
///
/// @param self Poppler__PDFConverter*
/// @param data Poppler__PDFConverter__NewSignatureData*
///
bool q_poppler__pdfconverter_sign(void* self, void* data);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
///
/// @param self Poppler__PDFConverter*
///
bool q_poppler__pdfconverter_convert(void* self);

/// Inherited from Poppler::BaseConverter
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
///
/// @param self Poppler__PDFConverter*
/// @param outputFileName const char*
///
void q_poppler__pdfconverter_set_output_file_name(void* self, const char* outputFileName);

/// Inherited from Poppler::BaseConverter
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
///
/// @param self Poppler__PDFConverter*
/// @param device QIODevice*
///
void q_poppler__pdfconverter_set_output_device(void* self, void* device);

/// Inherited from Poppler::BaseConverter
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
///
/// @param self Poppler__PDFConverter*
///
/// @return enum Poppler__BaseConverter__Error
///
int32_t q_poppler__pdfconverter_last_error(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__PDFConverter*
///
void q_poppler__pdfconverter_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)

/// q_poppler__pdfconverter__newsignaturedata_new constructs a new Poppler::PDFConverter::NewSignatureData object.
///
Poppler__PDFConverter__NewSignatureData* q_poppler__pdfconverter__newsignaturedata_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
const char* q_poppler__pdfconverter__newsignaturedata_cert_nickname(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param certNickname const char*
///
void q_poppler__pdfconverter__newsignaturedata_set_cert_nickname(void* self, const char* certNickname);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
const char* q_poppler__pdfconverter__newsignaturedata_password(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param password const char*
///
void q_poppler__pdfconverter__newsignaturedata_set_password(void* self, const char* password);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
int32_t q_poppler__pdfconverter__newsignaturedata_page(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param page int
///
void q_poppler__pdfconverter__newsignaturedata_set_page(void* self, int page);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
QRectF* q_poppler__pdfconverter__newsignaturedata_bounding_rectangle(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param rect QRectF*
///
void q_poppler__pdfconverter__newsignaturedata_set_bounding_rectangle(void* self, void* rect);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
const char* q_poppler__pdfconverter__newsignaturedata_signature_text(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param text const char*
///
void q_poppler__pdfconverter__newsignaturedata_set_signature_text(void* self, const char* text);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
const char* q_poppler__pdfconverter__newsignaturedata_signature_left_text(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param text const char*
///
void q_poppler__pdfconverter__newsignaturedata_set_signature_left_text(void* self, const char* text);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
const char* q_poppler__pdfconverter__newsignaturedata_reason(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param reason const char*
///
void q_poppler__pdfconverter__newsignaturedata_set_reason(void* self, const char* reason);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
const char* q_poppler__pdfconverter__newsignaturedata_location(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param location const char*
///
void q_poppler__pdfconverter__newsignaturedata_set_location(void* self, const char* location);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
double q_poppler__pdfconverter__newsignaturedata_font_size(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param fontSize double
///
void q_poppler__pdfconverter__newsignaturedata_set_font_size(void* self, double fontSize);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
double q_poppler__pdfconverter__newsignaturedata_left_font_size(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param fontSize double
///
void q_poppler__pdfconverter__newsignaturedata_set_left_font_size(void* self, double fontSize);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
QColor* q_poppler__pdfconverter__newsignaturedata_font_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param color QColor*
///
void q_poppler__pdfconverter__newsignaturedata_set_font_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
QColor* q_poppler__pdfconverter__newsignaturedata_border_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param color QColor*
///
void q_poppler__pdfconverter__newsignaturedata_set_border_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
double q_poppler__pdfconverter__newsignaturedata_border_width(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param width double
///
void q_poppler__pdfconverter__newsignaturedata_set_border_width(void* self, double width);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
QColor* q_poppler__pdfconverter__newsignaturedata_background_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param color QColor*
///
void q_poppler__pdfconverter__newsignaturedata_set_background_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
const char* q_poppler__pdfconverter__newsignaturedata_field_partial_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param name const char*
///
void q_poppler__pdfconverter__newsignaturedata_set_field_partial_name(void* self, const char* name);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
char* q_poppler__pdfconverter__newsignaturedata_document_owner_password(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param password char*
///
void q_poppler__pdfconverter__newsignaturedata_set_document_owner_password(void* self, char* password);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
char* q_poppler__pdfconverter__newsignaturedata_document_user_password(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param password char*
///
void q_poppler__pdfconverter__newsignaturedata_set_document_user_password(void* self, char* password);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
const char* q_poppler__pdfconverter__newsignaturedata_image_path(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// @param self Poppler__PDFConverter__NewSignatureData*
/// @param path const char*
///
void q_poppler__pdfconverter__newsignaturedata_set_image_path(void* self, const char* path);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__PDFConverter__NewSignatureData*
///
void q_poppler__pdfconverter__newsignaturedata_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)

typedef enum {
    POPPLER_BASECONVERTER_ERROR_NOERROR = 0,
    POPPLER_BASECONVERTER_ERROR_FILELOCKEDERROR = 1,
    POPPLER_BASECONVERTER_ERROR_OPENOUTPUTERROR = 2,
    POPPLER_BASECONVERTER_ERROR_NOTSUPPORTEDINPUTFILEERROR = 3
} Poppler__BaseConverter__Error;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)

typedef enum {
    POPPLER_PSCONVERTER_PSOPTION_PRINTING = 1,
    POPPLER_PSCONVERTER_PSOPTION_STRICTMARGINS = 2,
    POPPLER_PSCONVERTER_PSOPTION_FORCERASTERIZATION = 4,
    POPPLER_PSCONVERTER_PSOPTION_PRINTTOEPS = 8,
    POPPLER_PSCONVERTER_PSOPTION_HIDEANNOTATIONS = 16,
    POPPLER_PSCONVERTER_PSOPTION_FORCEOVERPRINTPREVIEW = 32
} Poppler__PSConverter__PSOption;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PDFConverter_1_1NewSignatureData.html)

typedef enum {
    POPPLER_PDFCONVERTER_PDFOPTION_WITHCHANGES = 1
} Poppler__PDFConverter__PDFOption;

#endif
