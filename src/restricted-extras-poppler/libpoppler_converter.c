#include "../libqcolor.hpp"
#include "../libqiodevice.hpp"
#include "../libqrect.hpp"
#include "libpoppler_converter.hpp"
#include "libpoppler_converter.h"

void q_poppler__baseconverter_set_output_file_name(void* self, const char* outputFileName) {
    Poppler__BaseConverter_SetOutputFileName((Poppler__BaseConverter*)self, qstring(outputFileName));
}

void q_poppler__baseconverter_set_output_device(void* self, void* device) {
    Poppler__BaseConverter_SetOutputDevice((Poppler__BaseConverter*)self, (QIODevice*)device);
}

bool q_poppler__baseconverter_convert(void* self) {
    return Poppler__BaseConverter_Convert((Poppler__BaseConverter*)self);
}

int32_t q_poppler__baseconverter_last_error(void* self) {
    return Poppler__BaseConverter_LastError((Poppler__BaseConverter*)self);
}

void q_poppler__baseconverter_delete(void* self) {
    Poppler__BaseConverter_Delete((Poppler__BaseConverter*)(self));
}

void q_poppler__psconverter_set_page_list(void* self, libqt_list /* of int */ pageList) {
    Poppler__PSConverter_SetPageList((Poppler__PSConverter*)self, pageList);
}

void q_poppler__psconverter_set_title(void* self, const char* title) {
    Poppler__PSConverter_SetTitle((Poppler__PSConverter*)self, qstring(title));
}

void q_poppler__psconverter_set_h_d_p_i(void* self, double hDPI) {
    Poppler__PSConverter_SetHDPI((Poppler__PSConverter*)self, hDPI);
}

void q_poppler__psconverter_set_v_d_p_i(void* self, double vDPI) {
    Poppler__PSConverter_SetVDPI((Poppler__PSConverter*)self, vDPI);
}

void q_poppler__psconverter_set_rotate(void* self, int rotate) {
    Poppler__PSConverter_SetRotate((Poppler__PSConverter*)self, rotate);
}

void q_poppler__psconverter_set_paper_width(void* self, int paperWidth) {
    Poppler__PSConverter_SetPaperWidth((Poppler__PSConverter*)self, paperWidth);
}

void q_poppler__psconverter_set_paper_height(void* self, int paperHeight) {
    Poppler__PSConverter_SetPaperHeight((Poppler__PSConverter*)self, paperHeight);
}

void q_poppler__psconverter_set_right_margin(void* self, int marginRight) {
    Poppler__PSConverter_SetRightMargin((Poppler__PSConverter*)self, marginRight);
}

void q_poppler__psconverter_set_bottom_margin(void* self, int marginBottom) {
    Poppler__PSConverter_SetBottomMargin((Poppler__PSConverter*)self, marginBottom);
}

void q_poppler__psconverter_set_left_margin(void* self, int marginLeft) {
    Poppler__PSConverter_SetLeftMargin((Poppler__PSConverter*)self, marginLeft);
}

void q_poppler__psconverter_set_top_margin(void* self, int marginTop) {
    Poppler__PSConverter_SetTopMargin((Poppler__PSConverter*)self, marginTop);
}

void q_poppler__psconverter_set_strict_margins(void* self, bool strictMargins) {
    Poppler__PSConverter_SetStrictMargins((Poppler__PSConverter*)self, strictMargins);
}

void q_poppler__psconverter_set_force_overprint_preview(void* self, bool forceOverprintPreview) {
    Poppler__PSConverter_SetForceOverprintPreview((Poppler__PSConverter*)self, forceOverprintPreview);
}

void q_poppler__psconverter_set_force_rasterize(void* self, bool forceRasterize) {
    Poppler__PSConverter_SetForceRasterize((Poppler__PSConverter*)self, forceRasterize);
}

void q_poppler__psconverter_set_p_s_options(void* self, int32_t options) {
    Poppler__PSConverter_SetPSOptions((Poppler__PSConverter*)self, options);
}

int32_t q_poppler__psconverter_ps_options(void* self) {
    return Poppler__PSConverter_PsOptions((Poppler__PSConverter*)self);
}

bool q_poppler__psconverter_convert(void* self) {
    return Poppler__PSConverter_Convert((Poppler__PSConverter*)self);
}

void q_poppler__psconverter_set_output_file_name(void* self, const char* outputFileName) {
    Poppler__BaseConverter_SetOutputFileName((Poppler__BaseConverter*)self, qstring(outputFileName));
}

void q_poppler__psconverter_set_output_device(void* self, void* device) {
    Poppler__BaseConverter_SetOutputDevice((Poppler__BaseConverter*)self, (QIODevice*)device);
}

int32_t q_poppler__psconverter_last_error(void* self) {
    return Poppler__BaseConverter_LastError((Poppler__BaseConverter*)self);
}

void q_poppler__psconverter_delete(void* self) {
    Poppler__PSConverter_Delete((Poppler__PSConverter*)(self));
}

void q_poppler__pdfconverter_set_p_d_f_options(void* self, int32_t options) {
    Poppler__PDFConverter_SetPDFOptions((Poppler__PDFConverter*)self, options);
}

int32_t q_poppler__pdfconverter_pdf_options(void* self) {
    return Poppler__PDFConverter_PdfOptions((Poppler__PDFConverter*)self);
}

bool q_poppler__pdfconverter_sign(void* self, void* data) {
    return Poppler__PDFConverter_Sign((Poppler__PDFConverter*)self, (Poppler__PDFConverter__NewSignatureData*)data);
}

bool q_poppler__pdfconverter_convert(void* self) {
    return Poppler__PDFConverter_Convert((Poppler__PDFConverter*)self);
}

void q_poppler__pdfconverter_set_output_file_name(void* self, const char* outputFileName) {
    Poppler__BaseConverter_SetOutputFileName((Poppler__BaseConverter*)self, qstring(outputFileName));
}

void q_poppler__pdfconverter_set_output_device(void* self, void* device) {
    Poppler__BaseConverter_SetOutputDevice((Poppler__BaseConverter*)self, (QIODevice*)device);
}

int32_t q_poppler__pdfconverter_last_error(void* self) {
    return Poppler__BaseConverter_LastError((Poppler__BaseConverter*)self);
}

void q_poppler__pdfconverter_delete(void* self) {
    Poppler__PDFConverter_Delete((Poppler__PDFConverter*)(self));
}

Poppler__PDFConverter__NewSignatureData* q_poppler__pdfconverter__newsignaturedata_new() {
    return Poppler__PDFConverter__NewSignatureData_new();
}

const char* q_poppler__pdfconverter__newsignaturedata_cert_nickname(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_CertNickname((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_cert_nickname(void* self, const char* certNickname) {
    Poppler__PDFConverter__NewSignatureData_SetCertNickname((Poppler__PDFConverter__NewSignatureData*)self, qstring(certNickname));
}

const char* q_poppler__pdfconverter__newsignaturedata_password(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_Password((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_password(void* self, const char* password) {
    Poppler__PDFConverter__NewSignatureData_SetPassword((Poppler__PDFConverter__NewSignatureData*)self, qstring(password));
}

int32_t q_poppler__pdfconverter__newsignaturedata_page(void* self) {
    return Poppler__PDFConverter__NewSignatureData_Page((Poppler__PDFConverter__NewSignatureData*)self);
}

void q_poppler__pdfconverter__newsignaturedata_set_page(void* self, int page) {
    Poppler__PDFConverter__NewSignatureData_SetPage((Poppler__PDFConverter__NewSignatureData*)self, page);
}

QRectF* q_poppler__pdfconverter__newsignaturedata_bounding_rectangle(void* self) {
    return Poppler__PDFConverter__NewSignatureData_BoundingRectangle((Poppler__PDFConverter__NewSignatureData*)self);
}

void q_poppler__pdfconverter__newsignaturedata_set_bounding_rectangle(void* self, void* rect) {
    Poppler__PDFConverter__NewSignatureData_SetBoundingRectangle((Poppler__PDFConverter__NewSignatureData*)self, (QRectF*)rect);
}

const char* q_poppler__pdfconverter__newsignaturedata_signature_text(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_SignatureText((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_signature_text(void* self, const char* text) {
    Poppler__PDFConverter__NewSignatureData_SetSignatureText((Poppler__PDFConverter__NewSignatureData*)self, qstring(text));
}

const char* q_poppler__pdfconverter__newsignaturedata_signature_left_text(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_SignatureLeftText((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_signature_left_text(void* self, const char* text) {
    Poppler__PDFConverter__NewSignatureData_SetSignatureLeftText((Poppler__PDFConverter__NewSignatureData*)self, qstring(text));
}

const char* q_poppler__pdfconverter__newsignaturedata_reason(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_Reason((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_reason(void* self, const char* reason) {
    Poppler__PDFConverter__NewSignatureData_SetReason((Poppler__PDFConverter__NewSignatureData*)self, qstring(reason));
}

const char* q_poppler__pdfconverter__newsignaturedata_location(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_Location((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_location(void* self, const char* location) {
    Poppler__PDFConverter__NewSignatureData_SetLocation((Poppler__PDFConverter__NewSignatureData*)self, qstring(location));
}

double q_poppler__pdfconverter__newsignaturedata_font_size(void* self) {
    return Poppler__PDFConverter__NewSignatureData_FontSize((Poppler__PDFConverter__NewSignatureData*)self);
}

void q_poppler__pdfconverter__newsignaturedata_set_font_size(void* self, double fontSize) {
    Poppler__PDFConverter__NewSignatureData_SetFontSize((Poppler__PDFConverter__NewSignatureData*)self, fontSize);
}

double q_poppler__pdfconverter__newsignaturedata_left_font_size(void* self) {
    return Poppler__PDFConverter__NewSignatureData_LeftFontSize((Poppler__PDFConverter__NewSignatureData*)self);
}

void q_poppler__pdfconverter__newsignaturedata_set_left_font_size(void* self, double fontSize) {
    Poppler__PDFConverter__NewSignatureData_SetLeftFontSize((Poppler__PDFConverter__NewSignatureData*)self, fontSize);
}

QColor* q_poppler__pdfconverter__newsignaturedata_font_color(void* self) {
    return Poppler__PDFConverter__NewSignatureData_FontColor((Poppler__PDFConverter__NewSignatureData*)self);
}

void q_poppler__pdfconverter__newsignaturedata_set_font_color(void* self, void* color) {
    Poppler__PDFConverter__NewSignatureData_SetFontColor((Poppler__PDFConverter__NewSignatureData*)self, (QColor*)color);
}

QColor* q_poppler__pdfconverter__newsignaturedata_border_color(void* self) {
    return Poppler__PDFConverter__NewSignatureData_BorderColor((Poppler__PDFConverter__NewSignatureData*)self);
}

void q_poppler__pdfconverter__newsignaturedata_set_border_color(void* self, void* color) {
    Poppler__PDFConverter__NewSignatureData_SetBorderColor((Poppler__PDFConverter__NewSignatureData*)self, (QColor*)color);
}

double q_poppler__pdfconverter__newsignaturedata_border_width(void* self) {
    return Poppler__PDFConverter__NewSignatureData_BorderWidth((Poppler__PDFConverter__NewSignatureData*)self);
}

void q_poppler__pdfconverter__newsignaturedata_set_border_width(void* self, double width) {
    Poppler__PDFConverter__NewSignatureData_SetBorderWidth((Poppler__PDFConverter__NewSignatureData*)self, width);
}

QColor* q_poppler__pdfconverter__newsignaturedata_background_color(void* self) {
    return Poppler__PDFConverter__NewSignatureData_BackgroundColor((Poppler__PDFConverter__NewSignatureData*)self);
}

void q_poppler__pdfconverter__newsignaturedata_set_background_color(void* self, void* color) {
    Poppler__PDFConverter__NewSignatureData_SetBackgroundColor((Poppler__PDFConverter__NewSignatureData*)self, (QColor*)color);
}

const char* q_poppler__pdfconverter__newsignaturedata_field_partial_name(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_FieldPartialName((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_field_partial_name(void* self, const char* name) {
    Poppler__PDFConverter__NewSignatureData_SetFieldPartialName((Poppler__PDFConverter__NewSignatureData*)self, qstring(name));
}

char* q_poppler__pdfconverter__newsignaturedata_document_owner_password(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_DocumentOwnerPassword((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_document_owner_password(void* self, char* password) {
    Poppler__PDFConverter__NewSignatureData_SetDocumentOwnerPassword((Poppler__PDFConverter__NewSignatureData*)self, qstring(password));
}

char* q_poppler__pdfconverter__newsignaturedata_document_user_password(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_DocumentUserPassword((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_document_user_password(void* self, char* password) {
    Poppler__PDFConverter__NewSignatureData_SetDocumentUserPassword((Poppler__PDFConverter__NewSignatureData*)self, qstring(password));
}

const char* q_poppler__pdfconverter__newsignaturedata_image_path(void* self) {
    libqt_string _str = Poppler__PDFConverter__NewSignatureData_ImagePath((Poppler__PDFConverter__NewSignatureData*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__pdfconverter__newsignaturedata_set_image_path(void* self, const char* path) {
    Poppler__PDFConverter__NewSignatureData_SetImagePath((Poppler__PDFConverter__NewSignatureData*)self, qstring(path));
}

void q_poppler__pdfconverter__newsignaturedata_delete(void* self) {
    Poppler__PDFConverter__NewSignatureData_Delete((Poppler__PDFConverter__NewSignatureData*)(self));
}
