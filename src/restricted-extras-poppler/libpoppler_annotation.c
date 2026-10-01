#include "libpoppler_qt6.hpp"
#include "libpoppler_link.hpp"
#include "libpoppler_converter.hpp"
#include "../libqcolor.hpp"
#include "../libqdatetime.hpp"
#include "../libqfont.hpp"
#include "../libqimage.hpp"
#include "../libqpoint.hpp"
#include "../libqrect.hpp"
#include "libpoppler_annotation.hpp"
#include "libpoppler_annotation.h"

const char* q_poppler__annotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__annotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__annotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__annotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__annotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__annotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__annotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__annotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__annotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__annotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__annotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__annotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__annotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__annotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__annotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__annotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__annotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__annotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__annotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__annotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__annotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__annotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__annotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__annotation_delete(void* self) {
    Poppler__Annotation_Delete((Poppler__Annotation*)(self));
}

Poppler__TextAnnotation* q_poppler__textannotation_new(int32_t type) {
    return Poppler__TextAnnotation_New(type);
}

int32_t q_poppler__textannotation_sub_type(const void* self) {
    return Poppler__TextAnnotation_SubType((Poppler__TextAnnotation*)self);
}

void q_poppler__textannotation_on_sub_type(const void* self, int32_t (*callback)(const void*)) {
    Poppler__TextAnnotation_OnSubType((Poppler__TextAnnotation*)self, (intptr_t)callback);
}

int32_t q_poppler__textannotation_super_sub_type(const void* self) {
    return Poppler__TextAnnotation_SuperSubType((Poppler__TextAnnotation*)self);
}

int32_t q_poppler__textannotation_text_type(const void* self) {
    return Poppler__TextAnnotation_TextType((Poppler__TextAnnotation*)self);
}

const char* q_poppler__textannotation_text_icon(const void* self) {
    libqt_string _str = Poppler__TextAnnotation_TextIcon((Poppler__TextAnnotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__textannotation_set_text_icon(void* self, const char* icon) {
    Poppler__TextAnnotation_SetTextIcon((Poppler__TextAnnotation*)self, qstring(icon));
}

QFont* q_poppler__textannotation_text_font(const void* self) {
    return Poppler__TextAnnotation_TextFont((Poppler__TextAnnotation*)self);
}

void q_poppler__textannotation_set_text_font(void* self, const void* font) {
    Poppler__TextAnnotation_SetTextFont((Poppler__TextAnnotation*)self, (QFont*)font);
}

QColor* q_poppler__textannotation_text_color(const void* self) {
    return Poppler__TextAnnotation_TextColor((Poppler__TextAnnotation*)self);
}

void q_poppler__textannotation_set_text_color(void* self, const void* color) {
    Poppler__TextAnnotation_SetTextColor((Poppler__TextAnnotation*)self, (QColor*)color);
}

int32_t q_poppler__textannotation_inplace_align(const void* self) {
    return Poppler__TextAnnotation_InplaceAlign((Poppler__TextAnnotation*)self);
}

void q_poppler__textannotation_set_inplace_align(void* self, int32_t align) {
    Poppler__TextAnnotation_SetInplaceAlign((Poppler__TextAnnotation*)self, align);
}

QPointF* q_poppler__textannotation_callout_point(const void* self, int id) {
    return Poppler__TextAnnotation_CalloutPoint((Poppler__TextAnnotation*)self, id);
}

libqt_list /* of QPointF* */ q_poppler__textannotation_callout_points(const void* self) {
    libqt_list _arr = Poppler__TextAnnotation_CalloutPoints((Poppler__TextAnnotation*)self);
    return _arr;
}

void q_poppler__textannotation_set_callout_points(void* self, libqt_list /* of QPointF* */ points) {
    Poppler__TextAnnotation_SetCalloutPoints((Poppler__TextAnnotation*)self, points);
}

int32_t q_poppler__textannotation_inplace_intent(const void* self) {
    return Poppler__TextAnnotation_InplaceIntent((Poppler__TextAnnotation*)self);
}

void q_poppler__textannotation_set_inplace_intent(void* self, int32_t intent) {
    Poppler__TextAnnotation_SetInplaceIntent((Poppler__TextAnnotation*)self, intent);
}

const char* q_poppler__textannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__textannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__textannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__textannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__textannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__textannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__textannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__textannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__textannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__textannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__textannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__textannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__textannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__textannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__textannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__textannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__textannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__textannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__textannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__textannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__textannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__textannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__textannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__textannotation_delete(void* self) {
    Poppler__TextAnnotation_Delete((Poppler__TextAnnotation*)(self));
}

Poppler__LineAnnotation* q_poppler__lineannotation_new(int32_t type) {
    return Poppler__LineAnnotation_New(type);
}

int32_t q_poppler__lineannotation_sub_type(const void* self) {
    return Poppler__LineAnnotation_SubType((Poppler__LineAnnotation*)self);
}

void q_poppler__lineannotation_on_sub_type(const void* self, int32_t (*callback)(const void*)) {
    Poppler__LineAnnotation_OnSubType((Poppler__LineAnnotation*)self, (intptr_t)callback);
}

int32_t q_poppler__lineannotation_super_sub_type(const void* self) {
    return Poppler__LineAnnotation_SuperSubType((Poppler__LineAnnotation*)self);
}

int32_t q_poppler__lineannotation_line_type(const void* self) {
    return Poppler__LineAnnotation_LineType((Poppler__LineAnnotation*)self);
}

libqt_list /* of QPointF* */ q_poppler__lineannotation_line_points(const void* self) {
    libqt_list _arr = Poppler__LineAnnotation_LinePoints((Poppler__LineAnnotation*)self);
    return _arr;
}

void q_poppler__lineannotation_set_line_points(void* self, libqt_list /* of QPointF* */ points) {
    Poppler__LineAnnotation_SetLinePoints((Poppler__LineAnnotation*)self, points);
}

int32_t q_poppler__lineannotation_line_start_style(const void* self) {
    return Poppler__LineAnnotation_LineStartStyle((Poppler__LineAnnotation*)self);
}

void q_poppler__lineannotation_set_line_start_style(void* self, int32_t style) {
    Poppler__LineAnnotation_SetLineStartStyle((Poppler__LineAnnotation*)self, style);
}

int32_t q_poppler__lineannotation_line_end_style(const void* self) {
    return Poppler__LineAnnotation_LineEndStyle((Poppler__LineAnnotation*)self);
}

void q_poppler__lineannotation_set_line_end_style(void* self, int32_t style) {
    Poppler__LineAnnotation_SetLineEndStyle((Poppler__LineAnnotation*)self, style);
}

bool q_poppler__lineannotation_is_line_closed(const void* self) {
    return Poppler__LineAnnotation_IsLineClosed((Poppler__LineAnnotation*)self);
}

void q_poppler__lineannotation_set_line_closed(void* self, bool closed) {
    Poppler__LineAnnotation_SetLineClosed((Poppler__LineAnnotation*)self, closed);
}

QColor* q_poppler__lineannotation_line_inner_color(const void* self) {
    return Poppler__LineAnnotation_LineInnerColor((Poppler__LineAnnotation*)self);
}

void q_poppler__lineannotation_set_line_inner_color(void* self, const void* color) {
    Poppler__LineAnnotation_SetLineInnerColor((Poppler__LineAnnotation*)self, (QColor*)color);
}

double q_poppler__lineannotation_line_leading_forward_point(const void* self) {
    return Poppler__LineAnnotation_LineLeadingForwardPoint((Poppler__LineAnnotation*)self);
}

void q_poppler__lineannotation_set_line_leading_forward_point(void* self, double point) {
    Poppler__LineAnnotation_SetLineLeadingForwardPoint((Poppler__LineAnnotation*)self, point);
}

double q_poppler__lineannotation_line_leading_back_point(const void* self) {
    return Poppler__LineAnnotation_LineLeadingBackPoint((Poppler__LineAnnotation*)self);
}

void q_poppler__lineannotation_set_line_leading_back_point(void* self, double point) {
    Poppler__LineAnnotation_SetLineLeadingBackPoint((Poppler__LineAnnotation*)self, point);
}

bool q_poppler__lineannotation_line_show_caption(const void* self) {
    return Poppler__LineAnnotation_LineShowCaption((Poppler__LineAnnotation*)self);
}

void q_poppler__lineannotation_set_line_show_caption(void* self, bool show) {
    Poppler__LineAnnotation_SetLineShowCaption((Poppler__LineAnnotation*)self, show);
}

int32_t q_poppler__lineannotation_line_intent(const void* self) {
    return Poppler__LineAnnotation_LineIntent((Poppler__LineAnnotation*)self);
}

void q_poppler__lineannotation_set_line_intent(void* self, int32_t intent) {
    Poppler__LineAnnotation_SetLineIntent((Poppler__LineAnnotation*)self, intent);
}

const char* q_poppler__lineannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__lineannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__lineannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__lineannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__lineannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__lineannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__lineannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__lineannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__lineannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__lineannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__lineannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__lineannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__lineannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__lineannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__lineannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__lineannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__lineannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__lineannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__lineannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__lineannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__lineannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__lineannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__lineannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__lineannotation_delete(void* self) {
    Poppler__LineAnnotation_Delete((Poppler__LineAnnotation*)(self));
}

Poppler__GeomAnnotation* q_poppler__geomannotation_new() {
    return Poppler__GeomAnnotation_New();
}

int32_t q_poppler__geomannotation_sub_type(const void* self) {
    return Poppler__GeomAnnotation_SubType((Poppler__GeomAnnotation*)self);
}

void q_poppler__geomannotation_on_sub_type(const void* self, int32_t (*callback)(const void*)) {
    Poppler__GeomAnnotation_OnSubType((Poppler__GeomAnnotation*)self, (intptr_t)callback);
}

int32_t q_poppler__geomannotation_super_sub_type(const void* self) {
    return Poppler__GeomAnnotation_SuperSubType((Poppler__GeomAnnotation*)self);
}

int32_t q_poppler__geomannotation_geom_type(const void* self) {
    return Poppler__GeomAnnotation_GeomType((Poppler__GeomAnnotation*)self);
}

void q_poppler__geomannotation_set_geom_type(void* self, int32_t type) {
    Poppler__GeomAnnotation_SetGeomType((Poppler__GeomAnnotation*)self, type);
}

QColor* q_poppler__geomannotation_geom_inner_color(const void* self) {
    return Poppler__GeomAnnotation_GeomInnerColor((Poppler__GeomAnnotation*)self);
}

void q_poppler__geomannotation_set_geom_inner_color(void* self, const void* color) {
    Poppler__GeomAnnotation_SetGeomInnerColor((Poppler__GeomAnnotation*)self, (QColor*)color);
}

const char* q_poppler__geomannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__geomannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__geomannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__geomannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__geomannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__geomannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__geomannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__geomannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__geomannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__geomannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__geomannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__geomannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__geomannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__geomannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__geomannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__geomannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__geomannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__geomannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__geomannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__geomannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__geomannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__geomannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__geomannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__geomannotation_delete(void* self) {
    Poppler__GeomAnnotation_Delete((Poppler__GeomAnnotation*)(self));
}

Poppler__HighlightAnnotation* q_poppler__highlightannotation_new() {
    return Poppler__HighlightAnnotation_New();
}

int32_t q_poppler__highlightannotation_sub_type(const void* self) {
    return Poppler__HighlightAnnotation_SubType((Poppler__HighlightAnnotation*)self);
}

void q_poppler__highlightannotation_on_sub_type(const void* self, int32_t (*callback)(const void*)) {
    Poppler__HighlightAnnotation_OnSubType((Poppler__HighlightAnnotation*)self, (intptr_t)callback);
}

int32_t q_poppler__highlightannotation_super_sub_type(const void* self) {
    return Poppler__HighlightAnnotation_SuperSubType((Poppler__HighlightAnnotation*)self);
}

int32_t q_poppler__highlightannotation_highlight_type(const void* self) {
    return Poppler__HighlightAnnotation_HighlightType((Poppler__HighlightAnnotation*)self);
}

void q_poppler__highlightannotation_set_highlight_type(void* self, int32_t type) {
    Poppler__HighlightAnnotation_SetHighlightType((Poppler__HighlightAnnotation*)self, type);
}

libqt_list /* of Poppler__HighlightAnnotation__Quad* */ q_poppler__highlightannotation_highlight_quads(const void* self) {
    libqt_list _arr = Poppler__HighlightAnnotation_HighlightQuads((Poppler__HighlightAnnotation*)self);
    return _arr;
}

void q_poppler__highlightannotation_set_highlight_quads(void* self, libqt_list /* of Poppler__HighlightAnnotation__Quad* */ quads) {
    Poppler__HighlightAnnotation_SetHighlightQuads((Poppler__HighlightAnnotation*)self, quads);
}

const char* q_poppler__highlightannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__highlightannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__highlightannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__highlightannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__highlightannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__highlightannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__highlightannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__highlightannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__highlightannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__highlightannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__highlightannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__highlightannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__highlightannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__highlightannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__highlightannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__highlightannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__highlightannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__highlightannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__highlightannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__highlightannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__highlightannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__highlightannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__highlightannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__highlightannotation_delete(void* self) {
    Poppler__HighlightAnnotation_Delete((Poppler__HighlightAnnotation*)(self));
}

Poppler__StampAnnotation* q_poppler__stampannotation_new() {
    return Poppler__StampAnnotation_New();
}

int32_t q_poppler__stampannotation_sub_type(const void* self) {
    return Poppler__StampAnnotation_SubType((Poppler__StampAnnotation*)self);
}

void q_poppler__stampannotation_on_sub_type(const void* self, int32_t (*callback)(const void*)) {
    Poppler__StampAnnotation_OnSubType((Poppler__StampAnnotation*)self, (intptr_t)callback);
}

int32_t q_poppler__stampannotation_super_sub_type(const void* self) {
    return Poppler__StampAnnotation_SuperSubType((Poppler__StampAnnotation*)self);
}

const char* q_poppler__stampannotation_stamp_icon_name(const void* self) {
    libqt_string _str = Poppler__StampAnnotation_StampIconName((Poppler__StampAnnotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__stampannotation_set_stamp_icon_name(void* self, const char* name) {
    Poppler__StampAnnotation_SetStampIconName((Poppler__StampAnnotation*)self, qstring(name));
}

void q_poppler__stampannotation_set_stamp_custom_image(void* self, const void* image) {
    Poppler__StampAnnotation_SetStampCustomImage((Poppler__StampAnnotation*)self, (QImage*)image);
}

const char* q_poppler__stampannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__stampannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__stampannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__stampannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__stampannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__stampannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__stampannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__stampannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__stampannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__stampannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__stampannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__stampannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__stampannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__stampannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__stampannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__stampannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__stampannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__stampannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__stampannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__stampannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__stampannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__stampannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__stampannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__stampannotation_delete(void* self) {
    Poppler__StampAnnotation_Delete((Poppler__StampAnnotation*)(self));
}

Poppler__SignatureAnnotation* q_poppler__signatureannotation_new() {
    return Poppler__SignatureAnnotation_New();
}

int32_t q_poppler__signatureannotation_sub_type(const void* self) {
    return Poppler__SignatureAnnotation_SubType((Poppler__SignatureAnnotation*)self);
}

void q_poppler__signatureannotation_on_sub_type(const void* self, int32_t (*callback)(const void*)) {
    Poppler__SignatureAnnotation_OnSubType((Poppler__SignatureAnnotation*)self, (intptr_t)callback);
}

int32_t q_poppler__signatureannotation_super_sub_type(const void* self) {
    return Poppler__SignatureAnnotation_SuperSubType((Poppler__SignatureAnnotation*)self);
}

void q_poppler__signatureannotation_set_text(void* self, const char* text) {
    Poppler__SignatureAnnotation_SetText((Poppler__SignatureAnnotation*)self, qstring(text));
}

void q_poppler__signatureannotation_set_left_text(void* self, const char* text) {
    Poppler__SignatureAnnotation_SetLeftText((Poppler__SignatureAnnotation*)self, qstring(text));
}

double q_poppler__signatureannotation_font_size(const void* self) {
    return Poppler__SignatureAnnotation_FontSize((Poppler__SignatureAnnotation*)self);
}

void q_poppler__signatureannotation_set_font_size(void* self, double fontSize) {
    Poppler__SignatureAnnotation_SetFontSize((Poppler__SignatureAnnotation*)self, fontSize);
}

double q_poppler__signatureannotation_left_font_size(const void* self) {
    return Poppler__SignatureAnnotation_LeftFontSize((Poppler__SignatureAnnotation*)self);
}

void q_poppler__signatureannotation_set_left_font_size(void* self, double fontSize) {
    Poppler__SignatureAnnotation_SetLeftFontSize((Poppler__SignatureAnnotation*)self, fontSize);
}

QColor* q_poppler__signatureannotation_font_color(const void* self) {
    return Poppler__SignatureAnnotation_FontColor((Poppler__SignatureAnnotation*)self);
}

void q_poppler__signatureannotation_set_font_color(void* self, const void* color) {
    Poppler__SignatureAnnotation_SetFontColor((Poppler__SignatureAnnotation*)self, (QColor*)color);
}

QColor* q_poppler__signatureannotation_border_color(const void* self) {
    return Poppler__SignatureAnnotation_BorderColor((Poppler__SignatureAnnotation*)self);
}

void q_poppler__signatureannotation_set_border_color(void* self, const void* color) {
    Poppler__SignatureAnnotation_SetBorderColor((Poppler__SignatureAnnotation*)self, (QColor*)color);
}

double q_poppler__signatureannotation_border_width(const void* self) {
    return Poppler__SignatureAnnotation_BorderWidth((Poppler__SignatureAnnotation*)self);
}

void q_poppler__signatureannotation_set_border_width(void* self, double width) {
    Poppler__SignatureAnnotation_SetBorderWidth((Poppler__SignatureAnnotation*)self, width);
}

QColor* q_poppler__signatureannotation_background_color(const void* self) {
    return Poppler__SignatureAnnotation_BackgroundColor((Poppler__SignatureAnnotation*)self);
}

void q_poppler__signatureannotation_set_background_color(void* self, const void* color) {
    Poppler__SignatureAnnotation_SetBackgroundColor((Poppler__SignatureAnnotation*)self, (QColor*)color);
}

const char* q_poppler__signatureannotation_image_path(const void* self) {
    libqt_string _str = Poppler__SignatureAnnotation_ImagePath((Poppler__SignatureAnnotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__signatureannotation_set_image_path(void* self, const char* imagePath) {
    Poppler__SignatureAnnotation_SetImagePath((Poppler__SignatureAnnotation*)self, qstring(imagePath));
}

const char* q_poppler__signatureannotation_field_partial_name(const void* self) {
    libqt_string _str = Poppler__SignatureAnnotation_FieldPartialName((Poppler__SignatureAnnotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__signatureannotation_set_field_partial_name(void* self, const char* fieldPartialName) {
    Poppler__SignatureAnnotation_SetFieldPartialName((Poppler__SignatureAnnotation*)self, qstring(fieldPartialName));
}

int32_t q_poppler__signatureannotation_sign(void* self, const char* outputFileName, const void* data) {
    return Poppler__SignatureAnnotation_Sign((Poppler__SignatureAnnotation*)self, qstring(outputFileName), (Poppler__PDFConverter__NewSignatureData*)data);
}

const char* q_poppler__signatureannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__signatureannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__signatureannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__signatureannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__signatureannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__signatureannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__signatureannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__signatureannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__signatureannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__signatureannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__signatureannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__signatureannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__signatureannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__signatureannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__signatureannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__signatureannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__signatureannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__signatureannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__signatureannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__signatureannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__signatureannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__signatureannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__signatureannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__signatureannotation_delete(void* self) {
    Poppler__SignatureAnnotation_Delete((Poppler__SignatureAnnotation*)(self));
}

Poppler__InkAnnotation* q_poppler__inkannotation_new() {
    return Poppler__InkAnnotation_New();
}

int32_t q_poppler__inkannotation_sub_type(const void* self) {
    return Poppler__InkAnnotation_SubType((Poppler__InkAnnotation*)self);
}

void q_poppler__inkannotation_on_sub_type(const void* self, int32_t (*callback)(const void*)) {
    Poppler__InkAnnotation_OnSubType((Poppler__InkAnnotation*)self, (intptr_t)callback);
}

int32_t q_poppler__inkannotation_super_sub_type(const void* self) {
    return Poppler__InkAnnotation_SuperSubType((Poppler__InkAnnotation*)self);
}

libqt_list /* of libqt_list of QPointF* */ q_poppler__inkannotation_ink_paths(const void* self) {
    return Poppler__InkAnnotation_InkPaths((Poppler__InkAnnotation*)self);
}

void q_poppler__inkannotation_set_ink_paths(void* self, libqt_list /* of QPointF* */ paths) {
    Poppler__InkAnnotation_SetInkPaths((Poppler__InkAnnotation*)self, paths);
}

const char* q_poppler__inkannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__inkannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__inkannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__inkannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__inkannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__inkannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__inkannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__inkannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__inkannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__inkannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__inkannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__inkannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__inkannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__inkannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__inkannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__inkannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__inkannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__inkannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__inkannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__inkannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__inkannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__inkannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__inkannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__inkannotation_delete(void* self) {
    Poppler__InkAnnotation_Delete((Poppler__InkAnnotation*)(self));
}

int32_t q_poppler__linkannotation_sub_type(const void* self) {
    return Poppler__LinkAnnotation_SubType((Poppler__LinkAnnotation*)self);
}

Poppler__Link* q_poppler__linkannotation_link_destination(const void* self) {
    return Poppler__LinkAnnotation_LinkDestination((Poppler__LinkAnnotation*)self);
}

int32_t q_poppler__linkannotation_link_highlight_mode(const void* self) {
    return Poppler__LinkAnnotation_LinkHighlightMode((Poppler__LinkAnnotation*)self);
}

void q_poppler__linkannotation_set_link_highlight_mode(void* self, int32_t mode) {
    Poppler__LinkAnnotation_SetLinkHighlightMode((Poppler__LinkAnnotation*)self, mode);
}

QPointF* q_poppler__linkannotation_link_region_point(const void* self, int id) {
    return Poppler__LinkAnnotation_LinkRegionPoint((Poppler__LinkAnnotation*)self, id);
}

void q_poppler__linkannotation_set_link_region_point(void* self, int id, const void* point) {
    Poppler__LinkAnnotation_SetLinkRegionPoint((Poppler__LinkAnnotation*)self, id, (QPointF*)point);
}

const char* q_poppler__linkannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__linkannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__linkannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__linkannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__linkannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__linkannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__linkannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__linkannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__linkannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__linkannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__linkannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__linkannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__linkannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__linkannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__linkannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__linkannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__linkannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__linkannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__linkannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__linkannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__linkannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__linkannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__linkannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__linkannotation_delete(void* self) {
    Poppler__LinkAnnotation_Delete((Poppler__LinkAnnotation*)(self));
}

Poppler__CaretAnnotation* q_poppler__caretannotation_new() {
    return Poppler__CaretAnnotation_New();
}

int32_t q_poppler__caretannotation_sub_type(const void* self) {
    return Poppler__CaretAnnotation_SubType((Poppler__CaretAnnotation*)self);
}

void q_poppler__caretannotation_on_sub_type(const void* self, int32_t (*callback)(const void*)) {
    Poppler__CaretAnnotation_OnSubType((Poppler__CaretAnnotation*)self, (intptr_t)callback);
}

int32_t q_poppler__caretannotation_super_sub_type(const void* self) {
    return Poppler__CaretAnnotation_SuperSubType((Poppler__CaretAnnotation*)self);
}

int32_t q_poppler__caretannotation_caret_symbol(const void* self) {
    return Poppler__CaretAnnotation_CaretSymbol((Poppler__CaretAnnotation*)self);
}

void q_poppler__caretannotation_set_caret_symbol(void* self, int32_t symbol) {
    Poppler__CaretAnnotation_SetCaretSymbol((Poppler__CaretAnnotation*)self, symbol);
}

const char* q_poppler__caretannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__caretannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__caretannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__caretannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__caretannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__caretannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__caretannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__caretannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__caretannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__caretannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__caretannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__caretannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__caretannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__caretannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__caretannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__caretannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__caretannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__caretannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__caretannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__caretannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__caretannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__caretannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__caretannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__caretannotation_delete(void* self) {
    Poppler__CaretAnnotation_Delete((Poppler__CaretAnnotation*)(self));
}

int32_t q_poppler__fileattachmentannotation_sub_type(const void* self) {
    return Poppler__FileAttachmentAnnotation_SubType((Poppler__FileAttachmentAnnotation*)self);
}

const char* q_poppler__fileattachmentannotation_file_icon_name(const void* self) {
    libqt_string _str = Poppler__FileAttachmentAnnotation_FileIconName((Poppler__FileAttachmentAnnotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__fileattachmentannotation_set_file_icon_name(void* self, const char* icon) {
    Poppler__FileAttachmentAnnotation_SetFileIconName((Poppler__FileAttachmentAnnotation*)self, qstring(icon));
}

Poppler__EmbeddedFile* q_poppler__fileattachmentannotation_embedded_file(const void* self) {
    return Poppler__FileAttachmentAnnotation_EmbeddedFile((Poppler__FileAttachmentAnnotation*)self);
}

void q_poppler__fileattachmentannotation_set_embedded_file(void* self, void* ef) {
    Poppler__FileAttachmentAnnotation_SetEmbeddedFile((Poppler__FileAttachmentAnnotation*)self, (Poppler__EmbeddedFile*)ef);
}

const char* q_poppler__fileattachmentannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__fileattachmentannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__fileattachmentannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__fileattachmentannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__fileattachmentannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__fileattachmentannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__fileattachmentannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__fileattachmentannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__fileattachmentannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__fileattachmentannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__fileattachmentannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__fileattachmentannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__fileattachmentannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__fileattachmentannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__fileattachmentannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__fileattachmentannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__fileattachmentannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__fileattachmentannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__fileattachmentannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__fileattachmentannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__fileattachmentannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__fileattachmentannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__fileattachmentannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__fileattachmentannotation_delete(void* self) {
    Poppler__FileAttachmentAnnotation_Delete((Poppler__FileAttachmentAnnotation*)(self));
}

int32_t q_poppler__soundannotation_sub_type(const void* self) {
    return Poppler__SoundAnnotation_SubType((Poppler__SoundAnnotation*)self);
}

const char* q_poppler__soundannotation_sound_icon_name(const void* self) {
    libqt_string _str = Poppler__SoundAnnotation_SoundIconName((Poppler__SoundAnnotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__soundannotation_set_sound_icon_name(void* self, const char* icon) {
    Poppler__SoundAnnotation_SetSoundIconName((Poppler__SoundAnnotation*)self, qstring(icon));
}

Poppler__SoundObject* q_poppler__soundannotation_sound(const void* self) {
    return Poppler__SoundAnnotation_Sound((Poppler__SoundAnnotation*)self);
}

void q_poppler__soundannotation_set_sound(void* self, void* s) {
    Poppler__SoundAnnotation_SetSound((Poppler__SoundAnnotation*)self, (Poppler__SoundObject*)s);
}

const char* q_poppler__soundannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__soundannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__soundannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__soundannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__soundannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__soundannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__soundannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__soundannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__soundannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__soundannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__soundannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__soundannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__soundannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__soundannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__soundannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__soundannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__soundannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__soundannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__soundannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__soundannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__soundannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__soundannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__soundannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__soundannotation_delete(void* self) {
    Poppler__SoundAnnotation_Delete((Poppler__SoundAnnotation*)(self));
}

int32_t q_poppler__movieannotation_sub_type(const void* self) {
    return Poppler__MovieAnnotation_SubType((Poppler__MovieAnnotation*)self);
}

Poppler__MovieObject* q_poppler__movieannotation_movie(const void* self) {
    return Poppler__MovieAnnotation_Movie((Poppler__MovieAnnotation*)self);
}

void q_poppler__movieannotation_set_movie(void* self, void* movie) {
    Poppler__MovieAnnotation_SetMovie((Poppler__MovieAnnotation*)self, (Poppler__MovieObject*)movie);
}

const char* q_poppler__movieannotation_movie_title(const void* self) {
    libqt_string _str = Poppler__MovieAnnotation_MovieTitle((Poppler__MovieAnnotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__movieannotation_set_movie_title(void* self, const char* title) {
    Poppler__MovieAnnotation_SetMovieTitle((Poppler__MovieAnnotation*)self, qstring(title));
}

const char* q_poppler__movieannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__movieannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__movieannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__movieannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__movieannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__movieannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__movieannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__movieannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__movieannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__movieannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__movieannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__movieannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__movieannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__movieannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__movieannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__movieannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__movieannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__movieannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__movieannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__movieannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__movieannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__movieannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__movieannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__movieannotation_delete(void* self) {
    Poppler__MovieAnnotation_Delete((Poppler__MovieAnnotation*)(self));
}

int32_t q_poppler__screenannotation_sub_type(const void* self) {
    return Poppler__ScreenAnnotation_SubType((Poppler__ScreenAnnotation*)self);
}

Poppler__LinkRendition* q_poppler__screenannotation_action(const void* self) {
    return Poppler__ScreenAnnotation_Action((Poppler__ScreenAnnotation*)self);
}

void q_poppler__screenannotation_set_action(void* self, void* action) {
    Poppler__ScreenAnnotation_SetAction((Poppler__ScreenAnnotation*)self, (Poppler__LinkRendition*)action);
}

const char* q_poppler__screenannotation_screen_title(const void* self) {
    libqt_string _str = Poppler__ScreenAnnotation_ScreenTitle((Poppler__ScreenAnnotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__screenannotation_set_screen_title(void* self, const char* title) {
    Poppler__ScreenAnnotation_SetScreenTitle((Poppler__ScreenAnnotation*)self, qstring(title));
}

Poppler__Link* q_poppler__screenannotation_additional_action(const void* self, int32_t type) {
    return Poppler__ScreenAnnotation_AdditionalAction((Poppler__ScreenAnnotation*)self, type);
}

const char* q_poppler__screenannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__screenannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__screenannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__screenannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__screenannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__screenannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__screenannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__screenannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__screenannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__screenannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__screenannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__screenannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__screenannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__screenannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__screenannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__screenannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__screenannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__screenannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__screenannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__screenannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__screenannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__screenannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__screenannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__screenannotation_delete(void* self) {
    Poppler__ScreenAnnotation_Delete((Poppler__ScreenAnnotation*)(self));
}

int32_t q_poppler__widgetannotation_sub_type(const void* self) {
    return Poppler__WidgetAnnotation_SubType((Poppler__WidgetAnnotation*)self);
}

Poppler__Link* q_poppler__widgetannotation_additional_action(const void* self, int32_t type) {
    return Poppler__WidgetAnnotation_AdditionalAction((Poppler__WidgetAnnotation*)self, type);
}

const char* q_poppler__widgetannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__widgetannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__widgetannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__widgetannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__widgetannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__widgetannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__widgetannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__widgetannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__widgetannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__widgetannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__widgetannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__widgetannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__widgetannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__widgetannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__widgetannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__widgetannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__widgetannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__widgetannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__widgetannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__widgetannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__widgetannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__widgetannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__widgetannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__widgetannotation_delete(void* self) {
    Poppler__WidgetAnnotation_Delete((Poppler__WidgetAnnotation*)(self));
}

int32_t q_poppler__richmediaannotation_sub_type(const void* self) {
    return Poppler__RichMediaAnnotation_SubType((Poppler__RichMediaAnnotation*)self);
}

Poppler__RichMediaAnnotation__Settings* q_poppler__richmediaannotation_settings(const void* self) {
    return Poppler__RichMediaAnnotation_Settings((Poppler__RichMediaAnnotation*)self);
}

Poppler__RichMediaAnnotation__Content* q_poppler__richmediaannotation_content(const void* self) {
    return Poppler__RichMediaAnnotation_Content((Poppler__RichMediaAnnotation*)self);
}

const char* q_poppler__richmediaannotation_author(const void* self) {
    libqt_string _str = Poppler__Annotation_Author((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__richmediaannotation_set_author(void* self, const char* author) {
    Poppler__Annotation_SetAuthor((Poppler__Annotation*)self, qstring(author));
}

const char* q_poppler__richmediaannotation_contents(const void* self) {
    libqt_string _str = Poppler__Annotation_Contents((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__richmediaannotation_set_contents(void* self, const char* contents) {
    Poppler__Annotation_SetContents((Poppler__Annotation*)self, qstring(contents));
}

const char* q_poppler__richmediaannotation_unique_name(const void* self) {
    libqt_string _str = Poppler__Annotation_UniqueName((Poppler__Annotation*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__richmediaannotation_set_unique_name(void* self, const char* uniqueName) {
    Poppler__Annotation_SetUniqueName((Poppler__Annotation*)self, qstring(uniqueName));
}

QDateTime* q_poppler__richmediaannotation_modification_date(const void* self) {
    return Poppler__Annotation_ModificationDate((Poppler__Annotation*)self);
}

void q_poppler__richmediaannotation_set_modification_date(void* self, const void* date) {
    Poppler__Annotation_SetModificationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

QDateTime* q_poppler__richmediaannotation_creation_date(const void* self) {
    return Poppler__Annotation_CreationDate((Poppler__Annotation*)self);
}

void q_poppler__richmediaannotation_set_creation_date(void* self, const void* date) {
    Poppler__Annotation_SetCreationDate((Poppler__Annotation*)self, (QDateTime*)date);
}

int32_t q_poppler__richmediaannotation_flags(const void* self) {
    return Poppler__Annotation_Flags((Poppler__Annotation*)self);
}

void q_poppler__richmediaannotation_set_flags(void* self, int32_t flags) {
    Poppler__Annotation_SetFlags((Poppler__Annotation*)self, flags);
}

QRectF* q_poppler__richmediaannotation_boundary(const void* self) {
    return Poppler__Annotation_Boundary((Poppler__Annotation*)self);
}

void q_poppler__richmediaannotation_set_boundary(void* self, const void* boundary) {
    Poppler__Annotation_SetBoundary((Poppler__Annotation*)self, (QRectF*)boundary);
}

Poppler__Annotation__Style* q_poppler__richmediaannotation_style(const void* self) {
    return Poppler__Annotation_Style((Poppler__Annotation*)self);
}

void q_poppler__richmediaannotation_set_style(void* self, const void* style) {
    Poppler__Annotation_SetStyle((Poppler__Annotation*)self, (Poppler__Annotation__Style*)style);
}

Poppler__Annotation__Popup* q_poppler__richmediaannotation_popup(const void* self) {
    return Poppler__Annotation_Popup((Poppler__Annotation*)self);
}

void q_poppler__richmediaannotation_set_popup(void* self, const void* popup) {
    Poppler__Annotation_SetPopup((Poppler__Annotation*)self, (Poppler__Annotation__Popup*)popup);
}

int32_t q_poppler__richmediaannotation_revision_scope(const void* self) {
    return Poppler__Annotation_RevisionScope((Poppler__Annotation*)self);
}

int32_t q_poppler__richmediaannotation_revision_type(const void* self) {
    return Poppler__Annotation_RevisionType((Poppler__Annotation*)self);
}

libqt_list /* of Poppler__Annotation* */ q_poppler__richmediaannotation_revisions(const void* self) {
    libqt_list _arr = Poppler__Annotation_Revisions((Poppler__Annotation*)self);
    return _arr;
}

Poppler__AnnotationAppearance* q_poppler__richmediaannotation_annotation_appearance(const void* self) {
    return Poppler__Annotation_AnnotationAppearance((Poppler__Annotation*)self);
}

void q_poppler__richmediaannotation_set_annotation_appearance(void* self, const void* annotationAppearance) {
    Poppler__Annotation_SetAnnotationAppearance((Poppler__Annotation*)self, (Poppler__AnnotationAppearance*)annotationAppearance);
}

void q_poppler__richmediaannotation_delete(void* self) {
    Poppler__RichMediaAnnotation_Delete((Poppler__RichMediaAnnotation*)(self));
}

Poppler__Annotation__Style* q_poppler__annotation__style_new() {
    return Poppler__Annotation__Style_New();
}

Poppler__Annotation__Style* q_poppler__annotation__style_new2(const void* other) {
    return Poppler__Annotation__Style_New2((Poppler__Annotation__Style*)other);
}

void q_poppler__annotation__style_operator_assign(void* self, const void* other) {
    Poppler__Annotation__Style_OperatorAssign((Poppler__Annotation__Style*)self, (Poppler__Annotation__Style*)other);
}

QColor* q_poppler__annotation__style_color(const void* self) {
    return Poppler__Annotation__Style_Color((Poppler__Annotation__Style*)self);
}

void q_poppler__annotation__style_set_color(void* self, const void* color) {
    Poppler__Annotation__Style_SetColor((Poppler__Annotation__Style*)self, (QColor*)color);
}

double q_poppler__annotation__style_opacity(const void* self) {
    return Poppler__Annotation__Style_Opacity((Poppler__Annotation__Style*)self);
}

void q_poppler__annotation__style_set_opacity(void* self, double opacity) {
    Poppler__Annotation__Style_SetOpacity((Poppler__Annotation__Style*)self, opacity);
}

double q_poppler__annotation__style_width(const void* self) {
    return Poppler__Annotation__Style_Width((Poppler__Annotation__Style*)self);
}

void q_poppler__annotation__style_set_width(void* self, double width) {
    Poppler__Annotation__Style_SetWidth((Poppler__Annotation__Style*)self, width);
}

int32_t q_poppler__annotation__style_line_style(const void* self) {
    return Poppler__Annotation__Style_LineStyle((Poppler__Annotation__Style*)self);
}

void q_poppler__annotation__style_set_line_style(void* self, int32_t style) {
    Poppler__Annotation__Style_SetLineStyle((Poppler__Annotation__Style*)self, style);
}

double q_poppler__annotation__style_x_corners(const void* self) {
    return Poppler__Annotation__Style_XCorners((Poppler__Annotation__Style*)self);
}

void q_poppler__annotation__style_set_x_corners(void* self, double radius) {
    Poppler__Annotation__Style_SetXCorners((Poppler__Annotation__Style*)self, radius);
}

double q_poppler__annotation__style_y_corners(const void* self) {
    return Poppler__Annotation__Style_YCorners((Poppler__Annotation__Style*)self);
}

void q_poppler__annotation__style_set_y_corners(void* self, double radius) {
    Poppler__Annotation__Style_SetYCorners((Poppler__Annotation__Style*)self, radius);
}

libqt_list /* of double */ q_poppler__annotation__style_dash_array(const void* self) {
    libqt_list _arr = Poppler__Annotation__Style_DashArray((Poppler__Annotation__Style*)self);
    return _arr;
}

void q_poppler__annotation__style_set_dash_array(void* self, libqt_list /* of double */ array) {
    Poppler__Annotation__Style_SetDashArray((Poppler__Annotation__Style*)self, array);
}

int32_t q_poppler__annotation__style_line_effect(const void* self) {
    return Poppler__Annotation__Style_LineEffect((Poppler__Annotation__Style*)self);
}

void q_poppler__annotation__style_set_line_effect(void* self, int32_t effect) {
    Poppler__Annotation__Style_SetLineEffect((Poppler__Annotation__Style*)self, effect);
}

double q_poppler__annotation__style_effect_intensity(const void* self) {
    return Poppler__Annotation__Style_EffectIntensity((Poppler__Annotation__Style*)self);
}

void q_poppler__annotation__style_set_effect_intensity(void* self, double intens) {
    Poppler__Annotation__Style_SetEffectIntensity((Poppler__Annotation__Style*)self, intens);
}

void q_poppler__annotation__style_delete(void* self) {
    Poppler__Annotation__Style_Delete((Poppler__Annotation__Style*)(self));
}

Poppler__Annotation__Popup* q_poppler__annotation__popup_new() {
    return Poppler__Annotation__Popup_New();
}

Poppler__Annotation__Popup* q_poppler__annotation__popup_new2(const void* other) {
    return Poppler__Annotation__Popup_New2((Poppler__Annotation__Popup*)other);
}

void q_poppler__annotation__popup_operator_assign(void* self, const void* other) {
    Poppler__Annotation__Popup_OperatorAssign((Poppler__Annotation__Popup*)self, (Poppler__Annotation__Popup*)other);
}

int32_t q_poppler__annotation__popup_flags(const void* self) {
    return Poppler__Annotation__Popup_Flags((Poppler__Annotation__Popup*)self);
}

void q_poppler__annotation__popup_set_flags(void* self, int flags) {
    Poppler__Annotation__Popup_SetFlags((Poppler__Annotation__Popup*)self, flags);
}

QRectF* q_poppler__annotation__popup_geometry(const void* self) {
    return Poppler__Annotation__Popup_Geometry((Poppler__Annotation__Popup*)self);
}

void q_poppler__annotation__popup_set_geometry(void* self, const void* geom) {
    Poppler__Annotation__Popup_SetGeometry((Poppler__Annotation__Popup*)self, (QRectF*)geom);
}

const char* q_poppler__annotation__popup_title(const void* self) {
    libqt_string _str = Poppler__Annotation__Popup_Title((Poppler__Annotation__Popup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__annotation__popup_set_title(void* self, const char* title) {
    Poppler__Annotation__Popup_SetTitle((Poppler__Annotation__Popup*)self, qstring(title));
}

const char* q_poppler__annotation__popup_summary(const void* self) {
    libqt_string _str = Poppler__Annotation__Popup_Summary((Poppler__Annotation__Popup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__annotation__popup_set_summary(void* self, const char* summary) {
    Poppler__Annotation__Popup_SetSummary((Poppler__Annotation__Popup*)self, qstring(summary));
}

const char* q_poppler__annotation__popup_text(const void* self) {
    libqt_string _str = Poppler__Annotation__Popup_Text((Poppler__Annotation__Popup*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__annotation__popup_set_text(void* self, const char* text) {
    Poppler__Annotation__Popup_SetText((Poppler__Annotation__Popup*)self, qstring(text));
}

void q_poppler__annotation__popup_delete(void* self) {
    Poppler__Annotation__Popup_Delete((Poppler__Annotation__Popup*)(self));
}

Poppler__HighlightAnnotation__Quad* q_poppler__highlightannotation__quad_new() {
    return Poppler__HighlightAnnotation__Quad_New();
}

bool q_poppler__highlightannotation__quad_cap_start(const void* self) {
    return Poppler__HighlightAnnotation__Quad_CapStart((Poppler__HighlightAnnotation__Quad*)self);
}

void q_poppler__highlightannotation__quad_set_cap_start(void* self, bool capStart) {
    Poppler__HighlightAnnotation__Quad_SetCapStart((Poppler__HighlightAnnotation__Quad*)self, capStart);
}

bool q_poppler__highlightannotation__quad_cap_end(const void* self) {
    return Poppler__HighlightAnnotation__Quad_CapEnd((Poppler__HighlightAnnotation__Quad*)self);
}

void q_poppler__highlightannotation__quad_set_cap_end(void* self, bool capEnd) {
    Poppler__HighlightAnnotation__Quad_SetCapEnd((Poppler__HighlightAnnotation__Quad*)self, capEnd);
}

double q_poppler__highlightannotation__quad_feather(const void* self) {
    return Poppler__HighlightAnnotation__Quad_Feather((Poppler__HighlightAnnotation__Quad*)self);
}

void q_poppler__highlightannotation__quad_set_feather(void* self, double feather) {
    Poppler__HighlightAnnotation__Quad_SetFeather((Poppler__HighlightAnnotation__Quad*)self, feather);
}

void q_poppler__highlightannotation__quad_delete(void* self) {
    Poppler__HighlightAnnotation__Quad_Delete((Poppler__HighlightAnnotation__Quad*)(self));
}

Poppler__RichMediaAnnotation__Params* q_poppler__richmediaannotation__params_new() {
    return Poppler__RichMediaAnnotation__Params_New();
}

const char* q_poppler__richmediaannotation__params_flash_vars(const void* self) {
    libqt_string _str = Poppler__RichMediaAnnotation__Params_FlashVars((Poppler__RichMediaAnnotation__Params*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_poppler__richmediaannotation__params_delete(void* self) {
    Poppler__RichMediaAnnotation__Params_Delete((Poppler__RichMediaAnnotation__Params*)(self));
}

Poppler__RichMediaAnnotation__Instance* q_poppler__richmediaannotation__instance_new() {
    return Poppler__RichMediaAnnotation__Instance_New();
}

int32_t q_poppler__richmediaannotation__instance_type(const void* self) {
    return Poppler__RichMediaAnnotation__Instance_Type((Poppler__RichMediaAnnotation__Instance*)self);
}

Poppler__RichMediaAnnotation__Params* q_poppler__richmediaannotation__instance_params(const void* self) {
    return Poppler__RichMediaAnnotation__Instance_Params((Poppler__RichMediaAnnotation__Instance*)self);
}

void q_poppler__richmediaannotation__instance_delete(void* self) {
    Poppler__RichMediaAnnotation__Instance_Delete((Poppler__RichMediaAnnotation__Instance*)(self));
}

Poppler__RichMediaAnnotation__Configuration* q_poppler__richmediaannotation__configuration_new() {
    return Poppler__RichMediaAnnotation__Configuration_New();
}

int32_t q_poppler__richmediaannotation__configuration_type(const void* self) {
    return Poppler__RichMediaAnnotation__Configuration_Type((Poppler__RichMediaAnnotation__Configuration*)self);
}

const char* q_poppler__richmediaannotation__configuration_name(const void* self) {
    libqt_string _str = Poppler__RichMediaAnnotation__Configuration_Name((Poppler__RichMediaAnnotation__Configuration*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of Poppler__RichMediaAnnotation__Instance* */ q_poppler__richmediaannotation__configuration_instances(const void* self) {
    libqt_list _arr = Poppler__RichMediaAnnotation__Configuration_Instances((Poppler__RichMediaAnnotation__Configuration*)self);
    return _arr;
}

void q_poppler__richmediaannotation__configuration_delete(void* self) {
    Poppler__RichMediaAnnotation__Configuration_Delete((Poppler__RichMediaAnnotation__Configuration*)(self));
}

Poppler__RichMediaAnnotation__Asset* q_poppler__richmediaannotation__asset_new() {
    return Poppler__RichMediaAnnotation__Asset_New();
}

const char* q_poppler__richmediaannotation__asset_name(const void* self) {
    libqt_string _str = Poppler__RichMediaAnnotation__Asset_Name((Poppler__RichMediaAnnotation__Asset*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

Poppler__EmbeddedFile* q_poppler__richmediaannotation__asset_embedded_file(const void* self) {
    return Poppler__RichMediaAnnotation__Asset_EmbeddedFile((Poppler__RichMediaAnnotation__Asset*)self);
}

void q_poppler__richmediaannotation__asset_delete(void* self) {
    Poppler__RichMediaAnnotation__Asset_Delete((Poppler__RichMediaAnnotation__Asset*)(self));
}

Poppler__RichMediaAnnotation__Content* q_poppler__richmediaannotation__content_new() {
    return Poppler__RichMediaAnnotation__Content_New();
}

libqt_list /* of Poppler__RichMediaAnnotation__Configuration* */ q_poppler__richmediaannotation__content_configurations(const void* self) {
    libqt_list _arr = Poppler__RichMediaAnnotation__Content_Configurations((Poppler__RichMediaAnnotation__Content*)self);
    return _arr;
}

libqt_list /* of Poppler__RichMediaAnnotation__Asset* */ q_poppler__richmediaannotation__content_assets(const void* self) {
    libqt_list _arr = Poppler__RichMediaAnnotation__Content_Assets((Poppler__RichMediaAnnotation__Content*)self);
    return _arr;
}

void q_poppler__richmediaannotation__content_delete(void* self) {
    Poppler__RichMediaAnnotation__Content_Delete((Poppler__RichMediaAnnotation__Content*)(self));
}

Poppler__RichMediaAnnotation__Activation* q_poppler__richmediaannotation__activation_new() {
    return Poppler__RichMediaAnnotation__Activation_New();
}

int32_t q_poppler__richmediaannotation__activation_condition(const void* self) {
    return Poppler__RichMediaAnnotation__Activation_Condition((Poppler__RichMediaAnnotation__Activation*)self);
}

void q_poppler__richmediaannotation__activation_delete(void* self) {
    Poppler__RichMediaAnnotation__Activation_Delete((Poppler__RichMediaAnnotation__Activation*)(self));
}

Poppler__RichMediaAnnotation__Deactivation* q_poppler__richmediaannotation__deactivation_new() {
    return Poppler__RichMediaAnnotation__Deactivation_New();
}

int32_t q_poppler__richmediaannotation__deactivation_condition(const void* self) {
    return Poppler__RichMediaAnnotation__Deactivation_Condition((Poppler__RichMediaAnnotation__Deactivation*)self);
}

void q_poppler__richmediaannotation__deactivation_delete(void* self) {
    Poppler__RichMediaAnnotation__Deactivation_Delete((Poppler__RichMediaAnnotation__Deactivation*)(self));
}

Poppler__RichMediaAnnotation__Settings* q_poppler__richmediaannotation__settings_new() {
    return Poppler__RichMediaAnnotation__Settings_New();
}

Poppler__RichMediaAnnotation__Activation* q_poppler__richmediaannotation__settings_activation(const void* self) {
    return Poppler__RichMediaAnnotation__Settings_Activation((Poppler__RichMediaAnnotation__Settings*)self);
}

Poppler__RichMediaAnnotation__Deactivation* q_poppler__richmediaannotation__settings_deactivation(const void* self) {
    return Poppler__RichMediaAnnotation__Settings_Deactivation((Poppler__RichMediaAnnotation__Settings*)self);
}

void q_poppler__richmediaannotation__settings_delete(void* self) {
    Poppler__RichMediaAnnotation__Settings_Delete((Poppler__RichMediaAnnotation__Settings*)(self));
}
