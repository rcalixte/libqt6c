#include "libpoppler_annotation.hpp"
#include "libpoppler_form.hpp"
#include "libpoppler_link.hpp"
#include "libpoppler_optcontent.hpp"
#include "libpoppler_converter.hpp"
#include "libpoppler_page_transition.hpp"
#include "../libqcolor.hpp"
#include "../libqdatetime.hpp"
#include "../libqiodevice.hpp"
#include "../libqimage.hpp"
#include "../libqpainter.hpp"
#include "../libqrect.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "libpoppler_qt6.hpp"
#include "libpoppler_qt6.h"

QDateTime* q_poppler_convert_date(const char* param1) {
    return Poppler_ConvertDate(param1);
}

bool q_poppler_is_cms_available() {
    return Poppler_IsCmsAvailable();
}

bool q_poppler_is_overprint_preview_available() {
    return Poppler_IsOverprintPreviewAvailable();
}

Poppler__TextBox* q_poppler__textbox_new(const char* text, void* bBox) {
    return Poppler__TextBox_new(qstring(text), (QRectF*)bBox);
}

const char* q_poppler__textbox_text(void* self) {
    libqt_string _str = Poppler__TextBox_Text((Poppler__TextBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QRectF* q_poppler__textbox_bounding_box(void* self) {
    return Poppler__TextBox_BoundingBox((Poppler__TextBox*)self);
}

Poppler__TextBox* q_poppler__textbox_next_word(void* self) {
    return Poppler__TextBox_NextWord((Poppler__TextBox*)self);
}

QRectF* q_poppler__textbox_char_bounding_box(void* self, int i) {
    return Poppler__TextBox_CharBoundingBox((Poppler__TextBox*)self, i);
}

bool q_poppler__textbox_has_space_after(void* self) {
    return Poppler__TextBox_HasSpaceAfter((Poppler__TextBox*)self);
}

void q_poppler__textbox_delete(void* self) {
    Poppler__TextBox_Delete((Poppler__TextBox*)(self));
}

Poppler__FontInfo* q_poppler__fontinfo_new() {
    return Poppler__FontInfo_new();
}

Poppler__FontInfo* q_poppler__fontinfo_new2(void* fi) {
    return Poppler__FontInfo_new2((Poppler__FontInfo*)fi);
}

const char* q_poppler__fontinfo_name(void* self) {
    libqt_string _str = Poppler__FontInfo_Name((Poppler__FontInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__fontinfo_substitute_name(void* self) {
    libqt_string _str = Poppler__FontInfo_SubstituteName((Poppler__FontInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__fontinfo_file(void* self) {
    libqt_string _str = Poppler__FontInfo_File((Poppler__FontInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__fontinfo_is_embedded(void* self) {
    return Poppler__FontInfo_IsEmbedded((Poppler__FontInfo*)self);
}

bool q_poppler__fontinfo_is_subset(void* self) {
    return Poppler__FontInfo_IsSubset((Poppler__FontInfo*)self);
}

int32_t q_poppler__fontinfo_type(void* self) {
    return Poppler__FontInfo_Type((Poppler__FontInfo*)self);
}

const char* q_poppler__fontinfo_type_name(void* self) {
    libqt_string _str = Poppler__FontInfo_TypeName((Poppler__FontInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__fontinfo_operator_assign(void* self, void* fi) {
    Poppler__FontInfo_OperatorAssign((Poppler__FontInfo*)self, (Poppler__FontInfo*)fi);
}

void q_poppler__fontinfo_delete(void* self) {
    Poppler__FontInfo_Delete((Poppler__FontInfo*)(self));
}

libqt_list /* of Poppler__FontInfo* */ q_poppler__fontiterator_next(void* self) {
    libqt_list _arr = Poppler__FontIterator_Next((Poppler__FontIterator*)self);
    return _arr;
}

bool q_poppler__fontiterator_has_next(void* self) {
    return Poppler__FontIterator_HasNext((Poppler__FontIterator*)self);
}

int32_t q_poppler__fontiterator_current_page(void* self) {
    return Poppler__FontIterator_CurrentPage((Poppler__FontIterator*)self);
}

void q_poppler__fontiterator_delete(void* self) {
    Poppler__FontIterator_Delete((Poppler__FontIterator*)(self));
}

const char* q_poppler__embeddedfile_name(void* self) {
    libqt_string _str = Poppler__EmbeddedFile_Name((Poppler__EmbeddedFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__embeddedfile_description(void* self) {
    libqt_string _str = Poppler__EmbeddedFile_Description((Poppler__EmbeddedFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_poppler__embeddedfile_size(void* self) {
    return Poppler__EmbeddedFile_Size((Poppler__EmbeddedFile*)self);
}

QDateTime* q_poppler__embeddedfile_mod_date(void* self) {
    return Poppler__EmbeddedFile_ModDate((Poppler__EmbeddedFile*)self);
}

QDateTime* q_poppler__embeddedfile_create_date(void* self) {
    return Poppler__EmbeddedFile_CreateDate((Poppler__EmbeddedFile*)self);
}

char* q_poppler__embeddedfile_checksum(void* self) {
    libqt_string _str = Poppler__EmbeddedFile_Checksum((Poppler__EmbeddedFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__embeddedfile_mime_type(void* self) {
    libqt_string _str = Poppler__EmbeddedFile_MimeType((Poppler__EmbeddedFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_poppler__embeddedfile_data(void* self) {
    libqt_string _str = Poppler__EmbeddedFile_Data((Poppler__EmbeddedFile*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__embeddedfile_is_valid(void* self) {
    return Poppler__EmbeddedFile_IsValid((Poppler__EmbeddedFile*)self);
}

void q_poppler__embeddedfile_delete(void* self) {
    Poppler__EmbeddedFile_Delete((Poppler__EmbeddedFile*)(self));
}

QImage* q_poppler__page_render_to_image(void* self) {
    return Poppler__Page_RenderToImage((Poppler__Page*)self);
}

QImage* q_poppler__page_render_to_image2(void* self, double xres, double yres, int x, int y, int w, int h, int32_t rotate, void (*partialUpdateCallback)(void* funcparam1, void* funcparam2), bool (*shouldDoPartialUpdateCallback)(void* funcparam1), void* payload) {
    return Poppler__Page_RenderToImage2((Poppler__Page*)self, xres, yres, x, y, w, h, rotate, (intptr_t)partialUpdateCallback, (intptr_t)shouldDoPartialUpdateCallback, (QVariant*)payload);
}

QImage* q_poppler__page_render_to_image3(void* self, double xres, double yres, int x, int y, int w, int h, int32_t rotate, void (*partialUpdateCallback)(void* funcparam1, void* funcparam2), bool (*shouldDoPartialUpdateCallback)(void* funcparam1), bool (*shouldAbortRenderCallback)(void* funcparam1), void* payload) {
    return Poppler__Page_RenderToImage3((Poppler__Page*)self, xres, yres, x, y, w, h, rotate, (intptr_t)partialUpdateCallback, (intptr_t)shouldDoPartialUpdateCallback, (intptr_t)shouldAbortRenderCallback, (QVariant*)payload);
}

bool q_poppler__page_render_to_painter(void* self, void* painter) {
    return Poppler__Page_RenderToPainter((Poppler__Page*)self, (QPainter*)painter);
}

QImage* q_poppler__page_thumbnail(void* self) {
    return Poppler__Page_Thumbnail((Poppler__Page*)self);
}

const char* q_poppler__page_text(void* self, void* rect, int32_t textLayout) {
    libqt_string _str = Poppler__Page_Text((Poppler__Page*)self, (QRectF*)rect, textLayout);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__page_text2(void* self, void* rect) {
    libqt_string _str = Poppler__Page_Text2((Poppler__Page*)self, (QRectF*)rect);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__page_search(void* self, const char* text, double* sLeft, double* sTop, double* sRight, double* sBottom, int32_t direction) {
    return Poppler__Page_Search((Poppler__Page*)self, qstring(text), sLeft, sTop, sRight, sBottom, direction);
}

libqt_list /* of QRectF* */ q_poppler__page_search2(void* self, const char* text) {
    libqt_list _arr = Poppler__Page_Search2((Poppler__Page*)self, qstring(text));
    return _arr;
}

libqt_list /* of Poppler__TextBox* */ q_poppler__page_text_list(void* self) {
    libqt_list _arr = Poppler__Page_TextList((Poppler__Page*)self);
    return _arr;
}

libqt_list /* of Poppler__TextBox* */ q_poppler__page_text_list2(void* self, int32_t rotate, bool (*shouldAbortExtractionCallback)(void* funcparam1), void* closure) {
    libqt_list _arr = Poppler__Page_TextList2((Poppler__Page*)self, rotate, (intptr_t)shouldAbortExtractionCallback, (QVariant*)closure);
    return _arr;
}

QSizeF* q_poppler__page_page_size_f(void* self) {
    return Poppler__Page_PageSizeF((Poppler__Page*)self);
}

QSize* q_poppler__page_page_size(void* self) {
    return Poppler__Page_PageSize((Poppler__Page*)self);
}

Poppler__PageTransition* q_poppler__page_transition(void* self) {
    return Poppler__Page_Transition((Poppler__Page*)self);
}

Poppler__Link* q_poppler__page_action(void* self, int32_t act) {
    return Poppler__Page_Action((Poppler__Page*)self, act);
}

int32_t q_poppler__page_orientation(void* self) {
    return Poppler__Page_Orientation((Poppler__Page*)self);
}

void q_poppler__page_default_c_t_m(void* self, double* CTM, double dpiX, double dpiY, int rotate, bool upsideDown) {
    Poppler__Page_DefaultCTM((Poppler__Page*)self, CTM, dpiX, dpiY, rotate, upsideDown);
}

libqt_list /* of Poppler__Link* */ q_poppler__page_links(void* self) {
    libqt_list _arr = Poppler__Page_Links((Poppler__Page*)self);
    return _arr;
}

libqt_list /* of Poppler__Annotation* */ q_poppler__page_annotations(void* self) {
    libqt_list _arr = Poppler__Page_Annotations((Poppler__Page*)self);
    return _arr;
}

libqt_list /* of Poppler__Annotation* */ q_poppler__page_annotations2(void* self, libqt_list /* set of enum Poppler__Annotation__SubType */ subtypes) {
    libqt_list _arr = Poppler__Page_Annotations2((Poppler__Page*)self, subtypes);
    return _arr;
}

void q_poppler__page_add_annotation(void* self, void* ann) {
    Poppler__Page_AddAnnotation((Poppler__Page*)self, (Poppler__Annotation*)ann);
}

void q_poppler__page_remove_annotation(void* self, void* ann) {
    Poppler__Page_RemoveAnnotation((Poppler__Page*)self, (Poppler__Annotation*)ann);
}

libqt_list /* of Poppler__FormField* */ q_poppler__page_form_fields(void* self) {
    libqt_list _arr = Poppler__Page_FormFields((Poppler__Page*)self);
    return _arr;
}

double q_poppler__page_duration(void* self) {
    return Poppler__Page_Duration((Poppler__Page*)self);
}

const char* q_poppler__page_label(void* self) {
    libqt_string _str = Poppler__Page_Label((Poppler__Page*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_poppler__page_index(void* self) {
    return Poppler__Page_Index((Poppler__Page*)self);
}

QImage* q_poppler__page_render_to_image1(void* self, double xres) {
    return Poppler__Page_RenderToImage1((Poppler__Page*)self, xres);
}

QImage* q_poppler__page_render_to_image22(void* self, double xres, double yres) {
    return Poppler__Page_RenderToImage22((Poppler__Page*)self, xres, yres);
}

QImage* q_poppler__page_render_to_image32(void* self, double xres, double yres, int x) {
    return Poppler__Page_RenderToImage32((Poppler__Page*)self, xres, yres, x);
}

QImage* q_poppler__page_render_to_image4(void* self, double xres, double yres, int x, int y) {
    return Poppler__Page_RenderToImage4((Poppler__Page*)self, xres, yres, x, y);
}

QImage* q_poppler__page_render_to_image5(void* self, double xres, double yres, int x, int y, int w) {
    return Poppler__Page_RenderToImage5((Poppler__Page*)self, xres, yres, x, y, w);
}

QImage* q_poppler__page_render_to_image6(void* self, double xres, double yres, int x, int y, int w, int h) {
    return Poppler__Page_RenderToImage6((Poppler__Page*)self, xres, yres, x, y, w, h);
}

QImage* q_poppler__page_render_to_image7(void* self, double xres, double yres, int x, int y, int w, int h, int32_t rotate) {
    return Poppler__Page_RenderToImage7((Poppler__Page*)self, xres, yres, x, y, w, h, rotate);
}

bool q_poppler__page_render_to_painter2(void* self, void* painter, double xres) {
    return Poppler__Page_RenderToPainter2((Poppler__Page*)self, (QPainter*)painter, xres);
}

bool q_poppler__page_render_to_painter3(void* self, void* painter, double xres, double yres) {
    return Poppler__Page_RenderToPainter3((Poppler__Page*)self, (QPainter*)painter, xres, yres);
}

bool q_poppler__page_render_to_painter4(void* self, void* painter, double xres, double yres, int x) {
    return Poppler__Page_RenderToPainter4((Poppler__Page*)self, (QPainter*)painter, xres, yres, x);
}

bool q_poppler__page_render_to_painter5(void* self, void* painter, double xres, double yres, int x, int y) {
    return Poppler__Page_RenderToPainter5((Poppler__Page*)self, (QPainter*)painter, xres, yres, x, y);
}

bool q_poppler__page_render_to_painter6(void* self, void* painter, double xres, double yres, int x, int y, int w) {
    return Poppler__Page_RenderToPainter6((Poppler__Page*)self, (QPainter*)painter, xres, yres, x, y, w);
}

bool q_poppler__page_render_to_painter7(void* self, void* painter, double xres, double yres, int x, int y, int w, int h) {
    return Poppler__Page_RenderToPainter7((Poppler__Page*)self, (QPainter*)painter, xres, yres, x, y, w, h);
}

bool q_poppler__page_render_to_painter8(void* self, void* painter, double xres, double yres, int x, int y, int w, int h, int32_t rotate) {
    return Poppler__Page_RenderToPainter8((Poppler__Page*)self, (QPainter*)painter, xres, yres, x, y, w, h, rotate);
}

bool q_poppler__page_render_to_painter9(void* self, void* painter, double xres, double yres, int x, int y, int w, int h, int32_t rotate, int32_t flags) {
    return Poppler__Page_RenderToPainter9((Poppler__Page*)self, (QPainter*)painter, xres, yres, x, y, w, h, rotate, flags);
}

bool q_poppler__page_search7(void* self, const char* text, double* sLeft, double* sTop, double* sRight, double* sBottom, int32_t direction, int32_t flags) {
    return Poppler__Page_Search7((Poppler__Page*)self, qstring(text), sLeft, sTop, sRight, sBottom, direction, flags);
}

bool q_poppler__page_search8(void* self, const char* text, double* sLeft, double* sTop, double* sRight, double* sBottom, int32_t direction, int32_t flags, int32_t rotate) {
    return Poppler__Page_Search8((Poppler__Page*)self, qstring(text), sLeft, sTop, sRight, sBottom, direction, flags, rotate);
}

libqt_list /* of QRectF* */ q_poppler__page_search22(void* self, const char* text, int32_t flags) {
    libqt_list _arr = Poppler__Page_Search22((Poppler__Page*)self, qstring(text), flags);
    return _arr;
}

libqt_list /* of QRectF* */ q_poppler__page_search3(void* self, const char* text, int32_t flags, int32_t rotate) {
    libqt_list _arr = Poppler__Page_Search3((Poppler__Page*)self, qstring(text), flags, rotate);
    return _arr;
}

libqt_list /* of Poppler__TextBox* */ q_poppler__page_text_list1(void* self, int32_t rotate) {
    libqt_list _arr = Poppler__Page_TextList1((Poppler__Page*)self, rotate);
    return _arr;
}

void q_poppler__page_delete(void* self) {
    Poppler__Page_Delete((Poppler__Page*)(self));
}

Poppler__OutlineItem* q_poppler__outlineitem_new() {
    return Poppler__OutlineItem_new();
}

Poppler__OutlineItem* q_poppler__outlineitem_new2(void* other) {
    return Poppler__OutlineItem_new2((Poppler__OutlineItem*)other);
}

void q_poppler__outlineitem_operator_assign(void* self, void* other) {
    Poppler__OutlineItem_OperatorAssign((Poppler__OutlineItem*)self, (Poppler__OutlineItem*)other);
}

bool q_poppler__outlineitem_is_null(void* self) {
    return Poppler__OutlineItem_IsNull((Poppler__OutlineItem*)self);
}

const char* q_poppler__outlineitem_name(void* self) {
    libqt_string _str = Poppler__OutlineItem_Name((Poppler__OutlineItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__outlineitem_is_open(void* self) {
    return Poppler__OutlineItem_IsOpen((Poppler__OutlineItem*)self);
}

const char* q_poppler__outlineitem_external_file_name(void* self) {
    libqt_string _str = Poppler__OutlineItem_ExternalFileName((Poppler__OutlineItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_poppler__outlineitem_uri(void* self) {
    libqt_string _str = Poppler__OutlineItem_Uri((Poppler__OutlineItem*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__outlineitem_has_children(void* self) {
    return Poppler__OutlineItem_HasChildren((Poppler__OutlineItem*)self);
}

libqt_list /* of Poppler__OutlineItem* */ q_poppler__outlineitem_children(void* self) {
    libqt_list _arr = Poppler__OutlineItem_Children((Poppler__OutlineItem*)self);
    return _arr;
}

void q_poppler__outlineitem_delete(void* self) {
    Poppler__OutlineItem_Delete((Poppler__OutlineItem*)(self));
}

void q_poppler__document_set_color_display_profile(void* self, void* outputProfileA) {
    Poppler__Document_SetColorDisplayProfile((Poppler__Document*)self, outputProfileA);
}

void q_poppler__document_set_color_display_profile_name(void* self, const char* name) {
    Poppler__Document_SetColorDisplayProfileName((Poppler__Document*)self, qstring(name));
}

void* q_poppler__document_color_rgb_profile(void* self) {
    return Poppler__Document_ColorRgbProfile((Poppler__Document*)self);
}

void* q_poppler__document_color_display_profile(void* self) {
    return Poppler__Document_ColorDisplayProfile((Poppler__Document*)self);
}

Poppler__Document* q_poppler__document_load(const char* filePath) {
    return Poppler__Document_Load(qstring(filePath));
}

Poppler__Document* q_poppler__document_load2(void* device) {
    return Poppler__Document_Load2((QIODevice*)device);
}

Poppler__Document* q_poppler__document_load_from_data(char* fileContents) {
    return Poppler__Document_LoadFromData(qstring(fileContents));
}

Poppler__Page* q_poppler__document_page(void* self, int index) {
    return Poppler__Document_Page((Poppler__Document*)self, index);
}

Poppler__Page* q_poppler__document_page2(void* self, const char* label) {
    return Poppler__Document_Page2((Poppler__Document*)self, qstring(label));
}

int32_t q_poppler__document_num_pages(void* self) {
    return Poppler__Document_NumPages((Poppler__Document*)self);
}

int32_t q_poppler__document_page_mode(void* self) {
    return Poppler__Document_PageMode((Poppler__Document*)self);
}

int32_t q_poppler__document_page_layout(void* self) {
    return Poppler__Document_PageLayout((Poppler__Document*)self);
}

int32_t q_poppler__document_text_direction(void* self) {
    return Poppler__Document_TextDirection((Poppler__Document*)self);
}

bool q_poppler__document_unlock(void* self, char* ownerPassword, char* userPassword) {
    return Poppler__Document_Unlock((Poppler__Document*)self, qstring(ownerPassword), qstring(userPassword));
}

bool q_poppler__document_is_locked(void* self) {
    return Poppler__Document_IsLocked((Poppler__Document*)self);
}

QDateTime* q_poppler__document_date(void* self, const char* type) {
    return Poppler__Document_Date((Poppler__Document*)self, qstring(type));
}

bool q_poppler__document_set_date(void* self, const char* key, void* val) {
    return Poppler__Document_SetDate((Poppler__Document*)self, qstring(key), (QDateTime*)val);
}

QDateTime* q_poppler__document_creation_date(void* self) {
    return Poppler__Document_CreationDate((Poppler__Document*)self);
}

bool q_poppler__document_set_creation_date(void* self, void* val) {
    return Poppler__Document_SetCreationDate((Poppler__Document*)self, (QDateTime*)val);
}

QDateTime* q_poppler__document_modification_date(void* self) {
    return Poppler__Document_ModificationDate((Poppler__Document*)self);
}

bool q_poppler__document_set_modification_date(void* self, void* val) {
    return Poppler__Document_SetModificationDate((Poppler__Document*)self, (QDateTime*)val);
}

const char* q_poppler__document_info(void* self, const char* type) {
    libqt_string _str = Poppler__Document_Info((Poppler__Document*)self, qstring(type));
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__document_set_info(void* self, const char* key, const char* val) {
    return Poppler__Document_SetInfo((Poppler__Document*)self, qstring(key), qstring(val));
}

const char* q_poppler__document_title(void* self) {
    libqt_string _str = Poppler__Document_Title((Poppler__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__document_set_title(void* self, const char* val) {
    return Poppler__Document_SetTitle((Poppler__Document*)self, qstring(val));
}

const char* q_poppler__document_author(void* self) {
    libqt_string _str = Poppler__Document_Author((Poppler__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__document_set_author(void* self, const char* val) {
    return Poppler__Document_SetAuthor((Poppler__Document*)self, qstring(val));
}

const char* q_poppler__document_subject(void* self) {
    libqt_string _str = Poppler__Document_Subject((Poppler__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__document_set_subject(void* self, const char* val) {
    return Poppler__Document_SetSubject((Poppler__Document*)self, qstring(val));
}

const char* q_poppler__document_keywords(void* self) {
    libqt_string _str = Poppler__Document_Keywords((Poppler__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__document_set_keywords(void* self, const char* val) {
    return Poppler__Document_SetKeywords((Poppler__Document*)self, qstring(val));
}

const char* q_poppler__document_creator(void* self) {
    libqt_string _str = Poppler__Document_Creator((Poppler__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__document_set_creator(void* self, const char* val) {
    return Poppler__Document_SetCreator((Poppler__Document*)self, qstring(val));
}

const char* q_poppler__document_producer(void* self) {
    libqt_string _str = Poppler__Document_Producer((Poppler__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__document_set_producer(void* self, const char* val) {
    return Poppler__Document_SetProducer((Poppler__Document*)self, qstring(val));
}

bool q_poppler__document_remove_info(void* self) {
    return Poppler__Document_RemoveInfo((Poppler__Document*)self);
}

const char** q_poppler__document_info_keys(void* self) {
    libqt_list _arr = Poppler__Document_InfoKeys((Poppler__Document*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_poppler__document_info_keys\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

bool q_poppler__document_is_encrypted(void* self) {
    return Poppler__Document_IsEncrypted((Poppler__Document*)self);
}

bool q_poppler__document_is_linearized(void* self) {
    return Poppler__Document_IsLinearized((Poppler__Document*)self);
}

bool q_poppler__document_ok_to_print(void* self) {
    return Poppler__Document_OkToPrint((Poppler__Document*)self);
}

bool q_poppler__document_ok_to_print_high_res(void* self) {
    return Poppler__Document_OkToPrintHighRes((Poppler__Document*)self);
}

bool q_poppler__document_ok_to_change(void* self) {
    return Poppler__Document_OkToChange((Poppler__Document*)self);
}

bool q_poppler__document_ok_to_copy(void* self) {
    return Poppler__Document_OkToCopy((Poppler__Document*)self);
}

bool q_poppler__document_ok_to_add_notes(void* self) {
    return Poppler__Document_OkToAddNotes((Poppler__Document*)self);
}

bool q_poppler__document_ok_to_fill_form(void* self) {
    return Poppler__Document_OkToFillForm((Poppler__Document*)self);
}

bool q_poppler__document_ok_to_create_form_fields(void* self) {
    return Poppler__Document_OkToCreateFormFields((Poppler__Document*)self);
}

bool q_poppler__document_ok_to_extract_for_accessibility(void* self) {
    return Poppler__Document_OkToExtractForAccessibility((Poppler__Document*)self);
}

bool q_poppler__document_ok_to_assemble(void* self) {
    return Poppler__Document_OkToAssemble((Poppler__Document*)self);
}

Poppler__Document__PdfVersion* q_poppler__document_get_pdf_version(void* self) {
    return Poppler__Document_GetPdfVersion((Poppler__Document*)self);
}

libqt_list /* of Poppler__FontInfo* */ q_poppler__document_fonts(void* self) {
    libqt_list _arr = Poppler__Document_Fonts((Poppler__Document*)self);
    return _arr;
}

Poppler__FontIterator* q_poppler__document_new_font_iterator(void* self) {
    return Poppler__Document_NewFontIterator((Poppler__Document*)self);
}

char* q_poppler__document_font_data(void* self, void* fi) {
    libqt_string _str = Poppler__Document_FontData((Poppler__Document*)self, (Poppler__FontInfo*)fi);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of Poppler__EmbeddedFile* */ q_poppler__document_embedded_files(void* self) {
    libqt_list _arr = Poppler__Document_EmbeddedFiles((Poppler__Document*)self);
    return _arr;
}

bool q_poppler__document_has_embedded_files(void* self) {
    return Poppler__Document_HasEmbeddedFiles((Poppler__Document*)self);
}

libqt_list /* of Poppler__OutlineItem* */ q_poppler__document_outline(void* self) {
    libqt_list _arr = Poppler__Document_Outline((Poppler__Document*)self);
    return _arr;
}

Poppler__LinkDestination* q_poppler__document_link_destination(void* self, const char* name) {
    return Poppler__Document_LinkDestination((Poppler__Document*)self, qstring(name));
}

void q_poppler__document_set_paper_color(void* self, void* color) {
    Poppler__Document_SetPaperColor((Poppler__Document*)self, (QColor*)color);
}

QColor* q_poppler__document_paper_color(void* self) {
    return Poppler__Document_PaperColor((Poppler__Document*)self);
}

void q_poppler__document_set_render_backend(void* self, int32_t backend) {
    Poppler__Document_SetRenderBackend((Poppler__Document*)self, backend);
}

int32_t q_poppler__document_render_backend(void* self) {
    return Poppler__Document_RenderBackend((Poppler__Document*)self);
}

libqt_list /* set of enum Poppler__Document__RenderBackend */ q_poppler__document_available_render_backends() {
    return Poppler__Document_AvailableRenderBackends();
}

void q_poppler__document_set_render_hint(void* self, int32_t hint) {
    Poppler__Document_SetRenderHint((Poppler__Document*)self, hint);
}

int32_t q_poppler__document_render_hints(void* self) {
    return Poppler__Document_RenderHints((Poppler__Document*)self);
}

Poppler__PSConverter* q_poppler__document_ps_converter(void* self) {
    return Poppler__Document_PsConverter((Poppler__Document*)self);
}

Poppler__PDFConverter* q_poppler__document_pdf_converter(void* self) {
    return Poppler__Document_PdfConverter((Poppler__Document*)self);
}

const char* q_poppler__document_metadata(void* self) {
    libqt_string _str = Poppler__Document_Metadata((Poppler__Document*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_poppler__document_has_optional_content(void* self) {
    return Poppler__Document_HasOptionalContent((Poppler__Document*)self);
}

Poppler__OptContentModel* q_poppler__document_optional_content_model(void* self) {
    return Poppler__Document_OptionalContentModel((Poppler__Document*)self);
}

void q_poppler__document_apply_reset_forms_link(void* self, void* link) {
    Poppler__Document_ApplyResetFormsLink((Poppler__Document*)self, (Poppler__LinkResetForm*)link);
}

const char** q_poppler__document_scripts(void* self) {
    libqt_list _arr = Poppler__Document_Scripts((Poppler__Document*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_poppler__document_scripts\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

Poppler__Link* q_poppler__document_additional_action(void* self, int32_t type) {
    return Poppler__Document_AdditionalAction((Poppler__Document*)self, type);
}

int32_t q_poppler__document_form_type(void* self) {
    return Poppler__Document_FormType((Poppler__Document*)self);
}

libqt_list /* of int */ q_poppler__document_form_calculate_order(void* self) {
    libqt_list _arr = Poppler__Document_FormCalculateOrder((Poppler__Document*)self);
    return _arr;
}

libqt_list /* of Poppler__FormFieldSignature* */ q_poppler__document_signatures(void* self) {
    libqt_list _arr = Poppler__Document_Signatures((Poppler__Document*)self);
    return _arr;
}

bool q_poppler__document_xref_was_reconstructed(void* self) {
    return Poppler__Document_XrefWasReconstructed((Poppler__Document*)self);
}

void q_poppler__document_set_x_ref_reconstructed_callback(void* self, void (*callback)()) {
    Poppler__Document_SetXRefReconstructedCallback((Poppler__Document*)self, (intptr_t)callback);
}

Poppler__Document* q_poppler__document_load22(const char* filePath, char* ownerPassword) {
    return Poppler__Document_Load22(qstring(filePath), qstring(ownerPassword));
}

Poppler__Document* q_poppler__document_load3(const char* filePath, char* ownerPassword, char* userPassword) {
    return Poppler__Document_Load3(qstring(filePath), qstring(ownerPassword), qstring(userPassword));
}

Poppler__Document* q_poppler__document_load23(void* device, char* ownerPassword) {
    return Poppler__Document_Load23((QIODevice*)device, qstring(ownerPassword));
}

Poppler__Document* q_poppler__document_load32(void* device, char* ownerPassword, char* userPassword) {
    return Poppler__Document_Load32((QIODevice*)device, qstring(ownerPassword), qstring(userPassword));
}

Poppler__Document* q_poppler__document_load_from_data2(char* fileContents, char* ownerPassword) {
    return Poppler__Document_LoadFromData2(qstring(fileContents), qstring(ownerPassword));
}

Poppler__Document* q_poppler__document_load_from_data3(char* fileContents, char* ownerPassword, char* userPassword) {
    return Poppler__Document_LoadFromData3(qstring(fileContents), qstring(ownerPassword), qstring(userPassword));
}

Poppler__FontIterator* q_poppler__document_new_font_iterator1(void* self, int startPage) {
    return Poppler__Document_NewFontIterator1((Poppler__Document*)self, startPage);
}

void q_poppler__document_set_render_hint2(void* self, int32_t hint, bool on) {
    Poppler__Document_SetRenderHint2((Poppler__Document*)self, hint, on);
}

void q_poppler__document_delete(void* self) {
    Poppler__Document_Delete((Poppler__Document*)(self));
}

int32_t q_poppler__soundobject_sound_type(void* self) {
    return Poppler__SoundObject_SoundType((Poppler__SoundObject*)self);
}

const char* q_poppler__soundobject_url(void* self) {
    libqt_string _str = Poppler__SoundObject_Url((Poppler__SoundObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_poppler__soundobject_data(void* self) {
    libqt_string _str = Poppler__SoundObject_Data((Poppler__SoundObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_poppler__soundobject_sampling_rate(void* self) {
    return Poppler__SoundObject_SamplingRate((Poppler__SoundObject*)self);
}

int32_t q_poppler__soundobject_channels(void* self) {
    return Poppler__SoundObject_Channels((Poppler__SoundObject*)self);
}

int32_t q_poppler__soundobject_bits_per_sample(void* self) {
    return Poppler__SoundObject_BitsPerSample((Poppler__SoundObject*)self);
}

int32_t q_poppler__soundobject_sound_encoding(void* self) {
    return Poppler__SoundObject_SoundEncoding((Poppler__SoundObject*)self);
}

void q_poppler__soundobject_delete(void* self) {
    Poppler__SoundObject_Delete((Poppler__SoundObject*)(self));
}

const char* q_poppler__movieobject_url(void* self) {
    libqt_string _str = Poppler__MovieObject_Url((Poppler__MovieObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_poppler__movieobject_size(void* self) {
    return Poppler__MovieObject_Size((Poppler__MovieObject*)self);
}

int32_t q_poppler__movieobject_rotation(void* self) {
    return Poppler__MovieObject_Rotation((Poppler__MovieObject*)self);
}

bool q_poppler__movieobject_show_controls(void* self) {
    return Poppler__MovieObject_ShowControls((Poppler__MovieObject*)self);
}

int32_t q_poppler__movieobject_play_mode(void* self) {
    return Poppler__MovieObject_PlayMode((Poppler__MovieObject*)self);
}

bool q_poppler__movieobject_show_poster_image(void* self) {
    return Poppler__MovieObject_ShowPosterImage((Poppler__MovieObject*)self);
}

QImage* q_poppler__movieobject_poster_image(void* self) {
    return Poppler__MovieObject_PosterImage((Poppler__MovieObject*)self);
}

void q_poppler__movieobject_delete(void* self) {
    Poppler__MovieObject_Delete((Poppler__MovieObject*)(self));
}

int32_t q_poppler__document__pdfversion_major(void* self) {
    return Poppler__Document__PdfVersion_Major((Poppler__Document__PdfVersion*)self);
}

void q_poppler__document__pdfversion_set_major(void* self, int major) {
    Poppler__Document__PdfVersion_SetMajor((Poppler__Document__PdfVersion*)self, major);
}

int32_t q_poppler__document__pdfversion_minor(void* self) {
    return Poppler__Document__PdfVersion_Minor((Poppler__Document__PdfVersion*)self);
}

void q_poppler__document__pdfversion_set_minor(void* self, int minor) {
    Poppler__Document__PdfVersion_SetMinor((Poppler__Document__PdfVersion*)self, minor);
}

void q_poppler__document__pdfversion_delete(void* self) {
    Poppler__Document__PdfVersion_Delete((Poppler__Document__PdfVersion*)(self));
}
