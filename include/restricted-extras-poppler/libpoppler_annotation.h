#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_ANNOTATION_H
#define SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_ANNOTATION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Annotation*
///
const char* q_poppler__annotation_author(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param author const char*
///
void q_poppler__annotation_set_author(void* self, const char* author);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Annotation*
///
const char* q_poppler__annotation_contents(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param contents const char*
///
void q_poppler__annotation_set_contents(void* self, const char* contents);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Annotation*
///
const char* q_poppler__annotation_unique_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param uniqueName const char*
///
void q_poppler__annotation_set_unique_name(void* self, const char* uniqueName);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
QDateTime* q_poppler__annotation_modification_date(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param date QDateTime*
///
void q_poppler__annotation_set_modification_date(void* self, void* date);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
QDateTime* q_poppler__annotation_creation_date(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param date QDateTime*
///
void q_poppler__annotation_set_creation_date(void* self, void* date);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__annotation_flags(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__annotation_set_flags(void* self, int32_t flags);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
QRectF* q_poppler__annotation_boundary(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param boundary QRectF*
///
void q_poppler__annotation_set_boundary(void* self, void* boundary);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
Poppler__Annotation__Style* q_poppler__annotation_style(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__annotation_set_style(void* self, void* style);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
Poppler__Annotation__Popup* q_poppler__annotation_popup(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__annotation_set_popup(void* self, void* popup);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__annotation_revision_scope(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__annotation_revision_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__annotation_revisions(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__annotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
///
Poppler__AnnotationAppearance* q_poppler__annotation_annotation_appearance(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// @param self Poppler__Annotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__annotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__Annotation*
///
void q_poppler__annotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)

/// q_poppler__textannotation_new constructs a new Poppler::TextAnnotation object.
///
/// @param type enum Poppler__TextAnnotation__TextType
///
Poppler__TextAnnotation* q_poppler__textannotation_new(int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__textannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__TextAnnotation*
/// @param callback int32_t func()
///
void q_poppler__textannotation_on_sub_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__textannotation_super_sub_type` instead
///
#define q_poppler__textannotation_qbase_sub_type q_poppler__textannotation_super_sub_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// Base class method implementation
///
/// @param self Poppler__TextAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__textannotation_super_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
/// @return enum Poppler__TextAnnotation__TextType
///
int32_t q_poppler__textannotation_text_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__TextAnnotation*
///
const char* q_poppler__textannotation_text_icon(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param icon const char*
///
void q_poppler__textannotation_set_text_icon(void* self, const char* icon);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
QFont* q_poppler__textannotation_text_font(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param font QFont*
///
void q_poppler__textannotation_set_text_font(void* self, void* font);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
QColor* q_poppler__textannotation_text_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param color QColor*
///
void q_poppler__textannotation_set_text_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
/// @return enum Poppler__TextAnnotation__InplaceAlignPosition
///
int32_t q_poppler__textannotation_inplace_align(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param align enum Poppler__TextAnnotation__InplaceAlignPosition
///
void q_poppler__textannotation_set_inplace_align(void* self, int32_t align);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param id int
///
QPointF* q_poppler__textannotation_callout_point(void* self, int id);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
/// @return libqt_list of QPointF*
///
libqt_list q_poppler__textannotation_callout_points(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param points libqt_list of QPointF*
///
void q_poppler__textannotation_set_callout_points(void* self, libqt_list points);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
/// @return enum Poppler__TextAnnotation__InplaceIntent
///
int32_t q_poppler__textannotation_inplace_intent(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param intent enum Poppler__TextAnnotation__InplaceIntent
///
void q_poppler__textannotation_set_inplace_intent(void* self, int32_t intent);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__TextAnnotation*
///
const char* q_poppler__textannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param author const char*
///
void q_poppler__textannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__TextAnnotation*
///
const char* q_poppler__textannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param contents const char*
///
void q_poppler__textannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__TextAnnotation*
///
const char* q_poppler__textannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param uniqueName const char*
///
void q_poppler__textannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
QDateTime* q_poppler__textannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param date QDateTime*
///
void q_poppler__textannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
QDateTime* q_poppler__textannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param date QDateTime*
///
void q_poppler__textannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__textannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__textannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
QRectF* q_poppler__textannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param boundary QRectF*
///
void q_poppler__textannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
Poppler__Annotation__Style* q_poppler__textannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__textannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
Poppler__Annotation__Popup* q_poppler__textannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__textannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__textannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__textannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__textannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__textannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// @param self Poppler__TextAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__textannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__TextAnnotation*
///
void q_poppler__textannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)

/// q_poppler__lineannotation_new constructs a new Poppler::LineAnnotation object.
///
/// @param type enum Poppler__LineAnnotation__LineType
///
Poppler__LineAnnotation* q_poppler__lineannotation_new(int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__lineannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__LineAnnotation*
/// @param callback int32_t func()
///
void q_poppler__lineannotation_on_sub_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__lineannotation_super_sub_type` instead
///
#define q_poppler__lineannotation_qbase_sub_type q_poppler__lineannotation_super_sub_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// Base class method implementation
///
/// @param self Poppler__LineAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__lineannotation_super_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return enum Poppler__LineAnnotation__LineType
///
int32_t q_poppler__lineannotation_line_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return libqt_list of QPointF*
///
libqt_list q_poppler__lineannotation_line_points(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param points libqt_list of QPointF*
///
void q_poppler__lineannotation_set_line_points(void* self, libqt_list points);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return enum Poppler__LineAnnotation__TermStyle
///
int32_t q_poppler__lineannotation_line_start_style(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param style enum Poppler__LineAnnotation__TermStyle
///
void q_poppler__lineannotation_set_line_start_style(void* self, int32_t style);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return enum Poppler__LineAnnotation__TermStyle
///
int32_t q_poppler__lineannotation_line_end_style(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param style enum Poppler__LineAnnotation__TermStyle
///
void q_poppler__lineannotation_set_line_end_style(void* self, int32_t style);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
bool q_poppler__lineannotation_is_line_closed(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param closed bool
///
void q_poppler__lineannotation_set_line_closed(void* self, bool closed);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
QColor* q_poppler__lineannotation_line_inner_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param color QColor*
///
void q_poppler__lineannotation_set_line_inner_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
double q_poppler__lineannotation_line_leading_forward_point(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param point double
///
void q_poppler__lineannotation_set_line_leading_forward_point(void* self, double point);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
double q_poppler__lineannotation_line_leading_back_point(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param point double
///
void q_poppler__lineannotation_set_line_leading_back_point(void* self, double point);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
bool q_poppler__lineannotation_line_show_caption(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param show bool
///
void q_poppler__lineannotation_set_line_show_caption(void* self, bool show);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return enum Poppler__LineAnnotation__LineIntent
///
int32_t q_poppler__lineannotation_line_intent(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param intent enum Poppler__LineAnnotation__LineIntent
///
void q_poppler__lineannotation_set_line_intent(void* self, int32_t intent);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LineAnnotation*
///
const char* q_poppler__lineannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param author const char*
///
void q_poppler__lineannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LineAnnotation*
///
const char* q_poppler__lineannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param contents const char*
///
void q_poppler__lineannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LineAnnotation*
///
const char* q_poppler__lineannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param uniqueName const char*
///
void q_poppler__lineannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
QDateTime* q_poppler__lineannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param date QDateTime*
///
void q_poppler__lineannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
QDateTime* q_poppler__lineannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param date QDateTime*
///
void q_poppler__lineannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__lineannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__lineannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
QRectF* q_poppler__lineannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param boundary QRectF*
///
void q_poppler__lineannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
Poppler__Annotation__Style* q_poppler__lineannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__lineannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
Poppler__Annotation__Popup* q_poppler__lineannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__lineannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__lineannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__lineannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__lineannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__lineannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// @param self Poppler__LineAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__lineannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LineAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LineAnnotation*
///
void q_poppler__lineannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)

/// q_poppler__geomannotation_new constructs a new Poppler::GeomAnnotation object.
///
Poppler__GeomAnnotation* q_poppler__geomannotation_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__geomannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__GeomAnnotation*
/// @param callback int32_t func()
///
void q_poppler__geomannotation_on_sub_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__geomannotation_super_sub_type` instead
///
#define q_poppler__geomannotation_qbase_sub_type q_poppler__geomannotation_super_sub_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// Base class method implementation
///
/// @param self Poppler__GeomAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__geomannotation_super_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
/// @return enum Poppler__GeomAnnotation__GeomType
///
int32_t q_poppler__geomannotation_geom_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param type enum Poppler__GeomAnnotation__GeomType
///
void q_poppler__geomannotation_set_geom_type(void* self, int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
QColor* q_poppler__geomannotation_geom_inner_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param color QColor*
///
void q_poppler__geomannotation_set_geom_inner_color(void* self, void* color);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__GeomAnnotation*
///
const char* q_poppler__geomannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param author const char*
///
void q_poppler__geomannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__GeomAnnotation*
///
const char* q_poppler__geomannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param contents const char*
///
void q_poppler__geomannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__GeomAnnotation*
///
const char* q_poppler__geomannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param uniqueName const char*
///
void q_poppler__geomannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
QDateTime* q_poppler__geomannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param date QDateTime*
///
void q_poppler__geomannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
QDateTime* q_poppler__geomannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param date QDateTime*
///
void q_poppler__geomannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__geomannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__geomannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
QRectF* q_poppler__geomannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param boundary QRectF*
///
void q_poppler__geomannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
Poppler__Annotation__Style* q_poppler__geomannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__geomannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
Poppler__Annotation__Popup* q_poppler__geomannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__geomannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__geomannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__geomannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__geomannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__geomannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// @param self Poppler__GeomAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__geomannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1GeomAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__GeomAnnotation*
///
void q_poppler__geomannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)

/// q_poppler__highlightannotation_new constructs a new Poppler::HighlightAnnotation object.
///
Poppler__HighlightAnnotation* q_poppler__highlightannotation_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__highlightannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__HighlightAnnotation*
/// @param callback int32_t func()
///
void q_poppler__highlightannotation_on_sub_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__highlightannotation_super_sub_type` instead
///
#define q_poppler__highlightannotation_qbase_sub_type q_poppler__highlightannotation_super_sub_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// Base class method implementation
///
/// @param self Poppler__HighlightAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__highlightannotation_super_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
/// @return enum Poppler__HighlightAnnotation__HighlightType
///
int32_t q_poppler__highlightannotation_highlight_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param type enum Poppler__HighlightAnnotation__HighlightType
///
void q_poppler__highlightannotation_set_highlight_type(void* self, int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
/// @return libqt_list of Poppler__HighlightAnnotation__Quad*
///
libqt_list q_poppler__highlightannotation_highlight_quads(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param quads libqt_list of Poppler__HighlightAnnotation__Quad*
///
void q_poppler__highlightannotation_set_highlight_quads(void* self, libqt_list quads);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__HighlightAnnotation*
///
const char* q_poppler__highlightannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param author const char*
///
void q_poppler__highlightannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__HighlightAnnotation*
///
const char* q_poppler__highlightannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param contents const char*
///
void q_poppler__highlightannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__HighlightAnnotation*
///
const char* q_poppler__highlightannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param uniqueName const char*
///
void q_poppler__highlightannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
QDateTime* q_poppler__highlightannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param date QDateTime*
///
void q_poppler__highlightannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
QDateTime* q_poppler__highlightannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param date QDateTime*
///
void q_poppler__highlightannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__highlightannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__highlightannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
QRectF* q_poppler__highlightannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param boundary QRectF*
///
void q_poppler__highlightannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
Poppler__Annotation__Style* q_poppler__highlightannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__highlightannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
Poppler__Annotation__Popup* q_poppler__highlightannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__highlightannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__highlightannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__highlightannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__highlightannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__highlightannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// @param self Poppler__HighlightAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__highlightannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1HighlightAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__HighlightAnnotation*
///
void q_poppler__highlightannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)

/// q_poppler__stampannotation_new constructs a new Poppler::StampAnnotation object.
///
Poppler__StampAnnotation* q_poppler__stampannotation_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__stampannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__StampAnnotation*
/// @param callback int32_t func()
///
void q_poppler__stampannotation_on_sub_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__stampannotation_super_sub_type` instead
///
#define q_poppler__stampannotation_qbase_sub_type q_poppler__stampannotation_super_sub_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// Base class method implementation
///
/// @param self Poppler__StampAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__stampannotation_super_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__StampAnnotation*
///
const char* q_poppler__stampannotation_stamp_icon_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param name const char*
///
void q_poppler__stampannotation_set_stamp_icon_name(void* self, const char* name);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param image QImage*
///
void q_poppler__stampannotation_set_stamp_custom_image(void* self, void* image);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__StampAnnotation*
///
const char* q_poppler__stampannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param author const char*
///
void q_poppler__stampannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__StampAnnotation*
///
const char* q_poppler__stampannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param contents const char*
///
void q_poppler__stampannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__StampAnnotation*
///
const char* q_poppler__stampannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param uniqueName const char*
///
void q_poppler__stampannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
QDateTime* q_poppler__stampannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param date QDateTime*
///
void q_poppler__stampannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
QDateTime* q_poppler__stampannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param date QDateTime*
///
void q_poppler__stampannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__stampannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__stampannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
QRectF* q_poppler__stampannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param boundary QRectF*
///
void q_poppler__stampannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
Poppler__Annotation__Style* q_poppler__stampannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__stampannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
Poppler__Annotation__Popup* q_poppler__stampannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__stampannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__stampannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__stampannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__stampannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__stampannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// @param self Poppler__StampAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__stampannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1StampAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__StampAnnotation*
///
void q_poppler__stampannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)

/// q_poppler__signatureannotation_new constructs a new Poppler::SignatureAnnotation object.
///
Poppler__SignatureAnnotation* q_poppler__signatureannotation_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__signatureannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__SignatureAnnotation*
/// @param callback int32_t func()
///
void q_poppler__signatureannotation_on_sub_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__signatureannotation_super_sub_type` instead
///
#define q_poppler__signatureannotation_qbase_sub_type q_poppler__signatureannotation_super_sub_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// Base class method implementation
///
/// @param self Poppler__SignatureAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__signatureannotation_super_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param text const char*
///
void q_poppler__signatureannotation_set_text(void* self, const char* text);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param text const char*
///
void q_poppler__signatureannotation_set_left_text(void* self, const char* text);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
double q_poppler__signatureannotation_font_size(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param fontSize double
///
void q_poppler__signatureannotation_set_font_size(void* self, double fontSize);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
double q_poppler__signatureannotation_left_font_size(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param fontSize double
///
void q_poppler__signatureannotation_set_left_font_size(void* self, double fontSize);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
QColor* q_poppler__signatureannotation_font_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param color QColor*
///
void q_poppler__signatureannotation_set_font_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
QColor* q_poppler__signatureannotation_border_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param color QColor*
///
void q_poppler__signatureannotation_set_border_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
double q_poppler__signatureannotation_border_width(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param width double
///
void q_poppler__signatureannotation_set_border_width(void* self, double width);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
QColor* q_poppler__signatureannotation_background_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param color QColor*
///
void q_poppler__signatureannotation_set_background_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SignatureAnnotation*
///
const char* q_poppler__signatureannotation_image_path(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param imagePath const char*
///
void q_poppler__signatureannotation_set_image_path(void* self, const char* imagePath);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SignatureAnnotation*
///
const char* q_poppler__signatureannotation_field_partial_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param fieldPartialName const char*
///
void q_poppler__signatureannotation_set_field_partial_name(void* self, const char* fieldPartialName);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param outputFileName const char*
/// @param data Poppler__PDFConverter__NewSignatureData*
///
/// @return enum Poppler__SignatureAnnotation__SigningResult
///
int32_t q_poppler__signatureannotation_sign(void* self, const char* outputFileName, void* data);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SignatureAnnotation*
///
const char* q_poppler__signatureannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param author const char*
///
void q_poppler__signatureannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SignatureAnnotation*
///
const char* q_poppler__signatureannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param contents const char*
///
void q_poppler__signatureannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SignatureAnnotation*
///
const char* q_poppler__signatureannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param uniqueName const char*
///
void q_poppler__signatureannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
QDateTime* q_poppler__signatureannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param date QDateTime*
///
void q_poppler__signatureannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
QDateTime* q_poppler__signatureannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param date QDateTime*
///
void q_poppler__signatureannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__signatureannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__signatureannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
QRectF* q_poppler__signatureannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param boundary QRectF*
///
void q_poppler__signatureannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
Poppler__Annotation__Style* q_poppler__signatureannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__signatureannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
Poppler__Annotation__Popup* q_poppler__signatureannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__signatureannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__signatureannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__signatureannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__signatureannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__signatureannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// @param self Poppler__SignatureAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__signatureannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SignatureAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__SignatureAnnotation*
///
void q_poppler__signatureannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)

/// q_poppler__inkannotation_new constructs a new Poppler::InkAnnotation object.
///
Poppler__InkAnnotation* q_poppler__inkannotation_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__inkannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__InkAnnotation*
/// @param callback int32_t func()
///
void q_poppler__inkannotation_on_sub_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__inkannotation_super_sub_type` instead
///
#define q_poppler__inkannotation_qbase_sub_type q_poppler__inkannotation_super_sub_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// Base class method implementation
///
/// @param self Poppler__InkAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__inkannotation_super_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
/// @return libqt_list of libqt_list of QPointF*
///
libqt_list q_poppler__inkannotation_ink_paths(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param paths libqt_list of libqt_list of QPointF*
///
void q_poppler__inkannotation_set_ink_paths(void* self, libqt_list paths);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__InkAnnotation*
///
const char* q_poppler__inkannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param author const char*
///
void q_poppler__inkannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__InkAnnotation*
///
const char* q_poppler__inkannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param contents const char*
///
void q_poppler__inkannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__InkAnnotation*
///
const char* q_poppler__inkannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param uniqueName const char*
///
void q_poppler__inkannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
QDateTime* q_poppler__inkannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param date QDateTime*
///
void q_poppler__inkannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
QDateTime* q_poppler__inkannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param date QDateTime*
///
void q_poppler__inkannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__inkannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__inkannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
QRectF* q_poppler__inkannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param boundary QRectF*
///
void q_poppler__inkannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
Poppler__Annotation__Style* q_poppler__inkannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__inkannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
Poppler__Annotation__Popup* q_poppler__inkannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__inkannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__inkannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__inkannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__inkannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__inkannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// @param self Poppler__InkAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__inkannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1InkAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__InkAnnotation*
///
void q_poppler__inkannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__linkannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
Poppler__Link* q_poppler__linkannotation_link_destination(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
/// @return enum Poppler__LinkAnnotation__HighlightMode
///
int32_t q_poppler__linkannotation_link_highlight_mode(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param mode enum Poppler__LinkAnnotation__HighlightMode
///
void q_poppler__linkannotation_set_link_highlight_mode(void* self, int32_t mode);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param id int
///
QPointF* q_poppler__linkannotation_link_region_point(void* self, int id);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param id int
/// @param point QPointF*
///
void q_poppler__linkannotation_set_link_region_point(void* self, int id, void* point);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkAnnotation*
///
const char* q_poppler__linkannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param author const char*
///
void q_poppler__linkannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkAnnotation*
///
const char* q_poppler__linkannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param contents const char*
///
void q_poppler__linkannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__LinkAnnotation*
///
const char* q_poppler__linkannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param uniqueName const char*
///
void q_poppler__linkannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
QDateTime* q_poppler__linkannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param date QDateTime*
///
void q_poppler__linkannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
QDateTime* q_poppler__linkannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param date QDateTime*
///
void q_poppler__linkannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__linkannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__linkannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
QRectF* q_poppler__linkannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param boundary QRectF*
///
void q_poppler__linkannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
Poppler__Annotation__Style* q_poppler__linkannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__linkannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
Poppler__Annotation__Popup* q_poppler__linkannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__linkannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__linkannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__linkannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__linkannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__linkannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// @param self Poppler__LinkAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__linkannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1LinkAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__LinkAnnotation*
///
void q_poppler__linkannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)

/// q_poppler__caretannotation_new constructs a new Poppler::CaretAnnotation object.
///
Poppler__CaretAnnotation* q_poppler__caretannotation_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__caretannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// Allows for overriding the related default method
///
/// @param self Poppler__CaretAnnotation*
/// @param callback int32_t func()
///
void q_poppler__caretannotation_on_sub_type(void* self, int32_t (*callback)());

/// @warning DEPRECATED: Use `q_poppler__caretannotation_super_sub_type` instead
///
#define q_poppler__caretannotation_qbase_sub_type q_poppler__caretannotation_super_sub_type

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// Base class method implementation
///
/// @param self Poppler__CaretAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__caretannotation_super_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
/// @return enum Poppler__CaretAnnotation__CaretSymbol
///
int32_t q_poppler__caretannotation_caret_symbol(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param symbol enum Poppler__CaretAnnotation__CaretSymbol
///
void q_poppler__caretannotation_set_caret_symbol(void* self, int32_t symbol);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__CaretAnnotation*
///
const char* q_poppler__caretannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param author const char*
///
void q_poppler__caretannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__CaretAnnotation*
///
const char* q_poppler__caretannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param contents const char*
///
void q_poppler__caretannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__CaretAnnotation*
///
const char* q_poppler__caretannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param uniqueName const char*
///
void q_poppler__caretannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
QDateTime* q_poppler__caretannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param date QDateTime*
///
void q_poppler__caretannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
QDateTime* q_poppler__caretannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param date QDateTime*
///
void q_poppler__caretannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__caretannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__caretannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
QRectF* q_poppler__caretannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param boundary QRectF*
///
void q_poppler__caretannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
Poppler__Annotation__Style* q_poppler__caretannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__caretannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
Poppler__Annotation__Popup* q_poppler__caretannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__caretannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__caretannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__caretannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__caretannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__caretannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// @param self Poppler__CaretAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__caretannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1CaretAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__CaretAnnotation*
///
void q_poppler__caretannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__fileattachmentannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__FileAttachmentAnnotation*
///
const char* q_poppler__fileattachmentannotation_file_icon_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param icon const char*
///
void q_poppler__fileattachmentannotation_set_file_icon_name(void* self, const char* icon);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
Poppler__EmbeddedFile* q_poppler__fileattachmentannotation_embedded_file(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param ef Poppler__EmbeddedFile*
///
void q_poppler__fileattachmentannotation_set_embedded_file(void* self, void* ef);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__FileAttachmentAnnotation*
///
const char* q_poppler__fileattachmentannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param author const char*
///
void q_poppler__fileattachmentannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__FileAttachmentAnnotation*
///
const char* q_poppler__fileattachmentannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param contents const char*
///
void q_poppler__fileattachmentannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__FileAttachmentAnnotation*
///
const char* q_poppler__fileattachmentannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param uniqueName const char*
///
void q_poppler__fileattachmentannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
QDateTime* q_poppler__fileattachmentannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param date QDateTime*
///
void q_poppler__fileattachmentannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
QDateTime* q_poppler__fileattachmentannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param date QDateTime*
///
void q_poppler__fileattachmentannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__fileattachmentannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__fileattachmentannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
QRectF* q_poppler__fileattachmentannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param boundary QRectF*
///
void q_poppler__fileattachmentannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
Poppler__Annotation__Style* q_poppler__fileattachmentannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__fileattachmentannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
Poppler__Annotation__Popup* q_poppler__fileattachmentannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__fileattachmentannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__fileattachmentannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__fileattachmentannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__fileattachmentannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__fileattachmentannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// @param self Poppler__FileAttachmentAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__fileattachmentannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FileAttachmentAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__FileAttachmentAnnotation*
///
void q_poppler__fileattachmentannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__soundannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SoundAnnotation*
///
const char* q_poppler__soundannotation_sound_icon_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param icon const char*
///
void q_poppler__soundannotation_set_sound_icon_name(void* self, const char* icon);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
Poppler__SoundObject* q_poppler__soundannotation_sound(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param s Poppler__SoundObject*
///
void q_poppler__soundannotation_set_sound(void* self, void* s);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SoundAnnotation*
///
const char* q_poppler__soundannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param author const char*
///
void q_poppler__soundannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SoundAnnotation*
///
const char* q_poppler__soundannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param contents const char*
///
void q_poppler__soundannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SoundAnnotation*
///
const char* q_poppler__soundannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param uniqueName const char*
///
void q_poppler__soundannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
QDateTime* q_poppler__soundannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param date QDateTime*
///
void q_poppler__soundannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
QDateTime* q_poppler__soundannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param date QDateTime*
///
void q_poppler__soundannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__soundannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__soundannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
QRectF* q_poppler__soundannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param boundary QRectF*
///
void q_poppler__soundannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
Poppler__Annotation__Style* q_poppler__soundannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__soundannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
Poppler__Annotation__Popup* q_poppler__soundannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__soundannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__soundannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__soundannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__soundannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__soundannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// @param self Poppler__SoundAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__soundannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__SoundAnnotation*
///
void q_poppler__soundannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__movieannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
Poppler__MovieObject* q_poppler__movieannotation_movie(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param movie Poppler__MovieObject*
///
void q_poppler__movieannotation_set_movie(void* self, void* movie);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__MovieAnnotation*
///
const char* q_poppler__movieannotation_movie_title(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param title const char*
///
void q_poppler__movieannotation_set_movie_title(void* self, const char* title);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__MovieAnnotation*
///
const char* q_poppler__movieannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param author const char*
///
void q_poppler__movieannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__MovieAnnotation*
///
const char* q_poppler__movieannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param contents const char*
///
void q_poppler__movieannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__MovieAnnotation*
///
const char* q_poppler__movieannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param uniqueName const char*
///
void q_poppler__movieannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
QDateTime* q_poppler__movieannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param date QDateTime*
///
void q_poppler__movieannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
QDateTime* q_poppler__movieannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param date QDateTime*
///
void q_poppler__movieannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__movieannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__movieannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
QRectF* q_poppler__movieannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param boundary QRectF*
///
void q_poppler__movieannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
Poppler__Annotation__Style* q_poppler__movieannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__movieannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
Poppler__Annotation__Popup* q_poppler__movieannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__movieannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__movieannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__movieannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__movieannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__movieannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// @param self Poppler__MovieAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__movieannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__MovieAnnotation*
///
void q_poppler__movieannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__screenannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
Poppler__LinkRendition* q_poppler__screenannotation_action(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param action Poppler__LinkRendition*
///
void q_poppler__screenannotation_set_action(void* self, void* action);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__ScreenAnnotation*
///
const char* q_poppler__screenannotation_screen_title(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param title const char*
///
void q_poppler__screenannotation_set_screen_title(void* self, const char* title);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param type enum Poppler__Annotation__AdditionalActionType
///
Poppler__Link* q_poppler__screenannotation_additional_action(void* self, int32_t type);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__ScreenAnnotation*
///
const char* q_poppler__screenannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param author const char*
///
void q_poppler__screenannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__ScreenAnnotation*
///
const char* q_poppler__screenannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param contents const char*
///
void q_poppler__screenannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__ScreenAnnotation*
///
const char* q_poppler__screenannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param uniqueName const char*
///
void q_poppler__screenannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
QDateTime* q_poppler__screenannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param date QDateTime*
///
void q_poppler__screenannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
QDateTime* q_poppler__screenannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param date QDateTime*
///
void q_poppler__screenannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__screenannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__screenannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
QRectF* q_poppler__screenannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param boundary QRectF*
///
void q_poppler__screenannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
Poppler__Annotation__Style* q_poppler__screenannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__screenannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
Poppler__Annotation__Popup* q_poppler__screenannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__screenannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__screenannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__screenannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__screenannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__screenannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// @param self Poppler__ScreenAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__screenannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1ScreenAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__ScreenAnnotation*
///
void q_poppler__screenannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__widgetannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param type enum Poppler__Annotation__AdditionalActionType
///
Poppler__Link* q_poppler__widgetannotation_additional_action(void* self, int32_t type);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__WidgetAnnotation*
///
const char* q_poppler__widgetannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param author const char*
///
void q_poppler__widgetannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__WidgetAnnotation*
///
const char* q_poppler__widgetannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param contents const char*
///
void q_poppler__widgetannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__WidgetAnnotation*
///
const char* q_poppler__widgetannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param uniqueName const char*
///
void q_poppler__widgetannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
QDateTime* q_poppler__widgetannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param date QDateTime*
///
void q_poppler__widgetannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
QDateTime* q_poppler__widgetannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param date QDateTime*
///
void q_poppler__widgetannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__widgetannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__widgetannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
QRectF* q_poppler__widgetannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param boundary QRectF*
///
void q_poppler__widgetannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
Poppler__Annotation__Style* q_poppler__widgetannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__widgetannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
Poppler__Annotation__Popup* q_poppler__widgetannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__widgetannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__widgetannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__widgetannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__widgetannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__widgetannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// @param self Poppler__WidgetAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__widgetannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1WidgetAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__WidgetAnnotation*
///
void q_poppler__widgetannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
/// @return enum Poppler__Annotation__SubType
///
int32_t q_poppler__richmediaannotation_sub_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
Poppler__RichMediaAnnotation__Settings* q_poppler__richmediaannotation_settings(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
Poppler__RichMediaAnnotation__Content* q_poppler__richmediaannotation_content(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__RichMediaAnnotation*
///
const char* q_poppler__richmediaannotation_author(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param author const char*
///
void q_poppler__richmediaannotation_set_author(void* self, const char* author);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__RichMediaAnnotation*
///
const char* q_poppler__richmediaannotation_contents(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param contents const char*
///
void q_poppler__richmediaannotation_set_contents(void* self, const char* contents);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__RichMediaAnnotation*
///
const char* q_poppler__richmediaannotation_unique_name(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param uniqueName const char*
///
void q_poppler__richmediaannotation_set_unique_name(void* self, const char* uniqueName);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
QDateTime* q_poppler__richmediaannotation_modification_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param date QDateTime*
///
void q_poppler__richmediaannotation_set_modification_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
QDateTime* q_poppler__richmediaannotation_creation_date(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param date QDateTime*
///
void q_poppler__richmediaannotation_set_creation_date(void* self, void* date);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
/// @return flag of enum Poppler__Annotation__Flag
///
int32_t q_poppler__richmediaannotation_flags(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param flags flag of enum Poppler__Annotation__Flag
///
void q_poppler__richmediaannotation_set_flags(void* self, int32_t flags);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
QRectF* q_poppler__richmediaannotation_boundary(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param boundary QRectF*
///
void q_poppler__richmediaannotation_set_boundary(void* self, void* boundary);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
Poppler__Annotation__Style* q_poppler__richmediaannotation_style(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param style Poppler__Annotation__Style*
///
void q_poppler__richmediaannotation_set_style(void* self, void* style);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
Poppler__Annotation__Popup* q_poppler__richmediaannotation_popup(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param popup Poppler__Annotation__Popup*
///
void q_poppler__richmediaannotation_set_popup(void* self, void* popup);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
/// @return enum Poppler__Annotation__RevScope
///
int32_t q_poppler__richmediaannotation_revision_scope(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
/// @return enum Poppler__Annotation__RevType
///
int32_t q_poppler__richmediaannotation_revision_type(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__richmediaannotation_revisions(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
///
Poppler__AnnotationAppearance* q_poppler__richmediaannotation_annotation_appearance(void* self);

/// Inherited from Poppler::Annotation
///
/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// @param self Poppler__RichMediaAnnotation*
/// @param annotationAppearance Poppler__AnnotationAppearance*
///
void q_poppler__richmediaannotation_set_annotation_appearance(void* self, void* annotationAppearance);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__RichMediaAnnotation*
///
void q_poppler__richmediaannotation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)

/// q_poppler__annotation__style_new constructs a new Poppler::Annotation::Style object.
///
Poppler__Annotation__Style* q_poppler__annotation__style_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)

/// q_poppler__annotation__style_new2 constructs a new Poppler::Annotation::Style object.
///
/// @param other Poppler__Annotation__Style*
///
Poppler__Annotation__Style* q_poppler__annotation__style_new2(void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param other Poppler__Annotation__Style*
///
void q_poppler__annotation__style_operator_assign(void* self, void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
///
QColor* q_poppler__annotation__style_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param color QColor*
///
void q_poppler__annotation__style_set_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
///
double q_poppler__annotation__style_opacity(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param opacity double
///
void q_poppler__annotation__style_set_opacity(void* self, double opacity);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
///
double q_poppler__annotation__style_width(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param width double
///
void q_poppler__annotation__style_set_width(void* self, double width);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
///
/// @return enum Poppler__Annotation__LineStyle
///
int32_t q_poppler__annotation__style_line_style(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param style enum Poppler__Annotation__LineStyle
///
void q_poppler__annotation__style_set_line_style(void* self, int32_t style);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
///
double q_poppler__annotation__style_x_corners(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param radius double
///
void q_poppler__annotation__style_set_x_corners(void* self, double radius);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
///
double q_poppler__annotation__style_y_corners(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param radius double
///
void q_poppler__annotation__style_set_y_corners(void* self, double radius);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
///
/// @return libqt_list of double
///
libqt_list q_poppler__annotation__style_dash_array(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param array libqt_list of double
///
void q_poppler__annotation__style_set_dash_array(void* self, libqt_list array);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
///
/// @return enum Poppler__Annotation__LineEffect
///
int32_t q_poppler__annotation__style_line_effect(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param effect enum Poppler__Annotation__LineEffect
///
void q_poppler__annotation__style_set_line_effect(void* self, int32_t effect);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
///
double q_poppler__annotation__style_effect_intensity(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// @param self Poppler__Annotation__Style*
/// @param intens double
///
void q_poppler__annotation__style_set_effect_intensity(void* self, double intens);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Style.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__Annotation__Style*
///
void q_poppler__annotation__style_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)

/// q_poppler__annotation__popup_new constructs a new Poppler::Annotation::Popup object.
///
Poppler__Annotation__Popup* q_poppler__annotation__popup_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)

/// q_poppler__annotation__popup_new2 constructs a new Poppler::Annotation::Popup object.
///
/// @param other Poppler__Annotation__Popup*
///
Poppler__Annotation__Popup* q_poppler__annotation__popup_new2(void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @param self Poppler__Annotation__Popup*
/// @param other Poppler__Annotation__Popup*
///
void q_poppler__annotation__popup_operator_assign(void* self, void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @param self Poppler__Annotation__Popup*
///
int32_t q_poppler__annotation__popup_flags(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @param self Poppler__Annotation__Popup*
/// @param flags int
///
void q_poppler__annotation__popup_set_flags(void* self, int flags);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @param self Poppler__Annotation__Popup*
///
QRectF* q_poppler__annotation__popup_geometry(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @param self Poppler__Annotation__Popup*
/// @param geom QRectF*
///
void q_poppler__annotation__popup_set_geometry(void* self, void* geom);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Annotation__Popup*
///
const char* q_poppler__annotation__popup_title(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @param self Poppler__Annotation__Popup*
/// @param title const char*
///
void q_poppler__annotation__popup_set_title(void* self, const char* title);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Annotation__Popup*
///
const char* q_poppler__annotation__popup_summary(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @param self Poppler__Annotation__Popup*
/// @param summary const char*
///
void q_poppler__annotation__popup_set_summary(void* self, const char* summary);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Annotation__Popup*
///
const char* q_poppler__annotation__popup_text(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// @param self Poppler__Annotation__Popup*
/// @param text const char*
///
void q_poppler__annotation__popup_set_text(void* self, const char* text);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Annotation_1_1Popup.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__Annotation__Popup*
///
void q_poppler__annotation__popup_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
///
/// @param self Poppler__HighlightAnnotation__Quad*
///
bool q_poppler__highlightannotation__quad_cap_start(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
///
/// @param self Poppler__HighlightAnnotation__Quad*
/// @param capStart bool
///
void q_poppler__highlightannotation__quad_set_cap_start(void* self, bool capStart);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
///
/// @param self Poppler__HighlightAnnotation__Quad*
///
bool q_poppler__highlightannotation__quad_cap_end(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
///
/// @param self Poppler__HighlightAnnotation__Quad*
/// @param capEnd bool
///
void q_poppler__highlightannotation__quad_set_cap_end(void* self, bool capEnd);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
///
/// @param self Poppler__HighlightAnnotation__Quad*
///
double q_poppler__highlightannotation__quad_feather(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
///
/// @param self Poppler__HighlightAnnotation__Quad*
/// @param feather double
///
void q_poppler__highlightannotation__quad_set_feather(void* self, double feather);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1HighlightAnnotation_1_1Quad.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__HighlightAnnotation__Quad*
///
void q_poppler__highlightannotation__quad_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)

/// q_poppler__richmediaannotation__params_new constructs a new Poppler::RichMediaAnnotation::Params object.
///
Poppler__RichMediaAnnotation__Params* q_poppler__richmediaannotation__params_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__RichMediaAnnotation__Params*
///
const char* q_poppler__richmediaannotation__params_flash_vars(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Params.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__RichMediaAnnotation__Params*
///
void q_poppler__richmediaannotation__params_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)

/// q_poppler__richmediaannotation__instance_new constructs a new Poppler::RichMediaAnnotation::Instance object.
///
Poppler__RichMediaAnnotation__Instance* q_poppler__richmediaannotation__instance_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
///
/// @param self Poppler__RichMediaAnnotation__Instance*
///
/// @return enum Poppler__RichMediaAnnotation__Instance__Type
///
int32_t q_poppler__richmediaannotation__instance_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
///
/// @param self Poppler__RichMediaAnnotation__Instance*
///
Poppler__RichMediaAnnotation__Params* q_poppler__richmediaannotation__instance_params(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Instance.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__RichMediaAnnotation__Instance*
///
void q_poppler__richmediaannotation__instance_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)

/// q_poppler__richmediaannotation__configuration_new constructs a new Poppler::RichMediaAnnotation::Configuration object.
///
Poppler__RichMediaAnnotation__Configuration* q_poppler__richmediaannotation__configuration_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
///
/// @param self Poppler__RichMediaAnnotation__Configuration*
///
/// @return enum Poppler__RichMediaAnnotation__Configuration__Type
///
int32_t q_poppler__richmediaannotation__configuration_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__RichMediaAnnotation__Configuration*
///
const char* q_poppler__richmediaannotation__configuration_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
///
/// @param self Poppler__RichMediaAnnotation__Configuration*
///
/// @return libqt_list of Poppler__RichMediaAnnotation__Instance*
///
libqt_list q_poppler__richmediaannotation__configuration_instances(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Configuration.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__RichMediaAnnotation__Configuration*
///
void q_poppler__richmediaannotation__configuration_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)

/// q_poppler__richmediaannotation__asset_new constructs a new Poppler::RichMediaAnnotation::Asset object.
///
Poppler__RichMediaAnnotation__Asset* q_poppler__richmediaannotation__asset_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__RichMediaAnnotation__Asset*
///
const char* q_poppler__richmediaannotation__asset_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
///
/// @param self Poppler__RichMediaAnnotation__Asset*
///
Poppler__EmbeddedFile* q_poppler__richmediaannotation__asset_embedded_file(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Asset.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__RichMediaAnnotation__Asset*
///
void q_poppler__richmediaannotation__asset_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)

/// q_poppler__richmediaannotation__content_new constructs a new Poppler::RichMediaAnnotation::Content object.
///
Poppler__RichMediaAnnotation__Content* q_poppler__richmediaannotation__content_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
///
/// @param self Poppler__RichMediaAnnotation__Content*
///
/// @return libqt_list of Poppler__RichMediaAnnotation__Configuration*
///
libqt_list q_poppler__richmediaannotation__content_configurations(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
///
/// @param self Poppler__RichMediaAnnotation__Content*
///
/// @return libqt_list of Poppler__RichMediaAnnotation__Asset*
///
libqt_list q_poppler__richmediaannotation__content_assets(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Content.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__RichMediaAnnotation__Content*
///
void q_poppler__richmediaannotation__content_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)

/// q_poppler__richmediaannotation__activation_new constructs a new Poppler::RichMediaAnnotation::Activation object.
///
Poppler__RichMediaAnnotation__Activation* q_poppler__richmediaannotation__activation_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)
///
/// @param self Poppler__RichMediaAnnotation__Activation*
///
/// @return enum Poppler__RichMediaAnnotation__Activation__Condition
///
int32_t q_poppler__richmediaannotation__activation_condition(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Activation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__RichMediaAnnotation__Activation*
///
void q_poppler__richmediaannotation__activation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)

/// q_poppler__richmediaannotation__deactivation_new constructs a new Poppler::RichMediaAnnotation::Deactivation object.
///
Poppler__RichMediaAnnotation__Deactivation* q_poppler__richmediaannotation__deactivation_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)
///
/// @param self Poppler__RichMediaAnnotation__Deactivation*
///
/// @return enum Poppler__RichMediaAnnotation__Deactivation__Condition
///
int32_t q_poppler__richmediaannotation__deactivation_condition(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Deactivation.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__RichMediaAnnotation__Deactivation*
///
void q_poppler__richmediaannotation__deactivation_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

/// q_poppler__richmediaannotation__settings_new constructs a new Poppler::RichMediaAnnotation::Settings object.
///
Poppler__RichMediaAnnotation__Settings* q_poppler__richmediaannotation__settings_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
///
/// @param self Poppler__RichMediaAnnotation__Settings*
///
Poppler__RichMediaAnnotation__Activation* q_poppler__richmediaannotation__settings_activation(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
///
/// @param self Poppler__RichMediaAnnotation__Settings*
///
Poppler__RichMediaAnnotation__Deactivation* q_poppler__richmediaannotation__settings_deactivation(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__RichMediaAnnotation__Settings*
///
void q_poppler__richmediaannotation__settings_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_ANNOTATION_SUBTYPE_ATEXT = 1,
    POPPLER_ANNOTATION_SUBTYPE_ALINE = 2,
    POPPLER_ANNOTATION_SUBTYPE_AGEOM = 3,
    POPPLER_ANNOTATION_SUBTYPE_AHIGHLIGHT = 4,
    POPPLER_ANNOTATION_SUBTYPE_ASTAMP = 5,
    POPPLER_ANNOTATION_SUBTYPE_AINK = 6,
    POPPLER_ANNOTATION_SUBTYPE_ALINK = 7,
    POPPLER_ANNOTATION_SUBTYPE_ACARET = 8,
    POPPLER_ANNOTATION_SUBTYPE_AFILEATTACHMENT = 9,
    POPPLER_ANNOTATION_SUBTYPE_ASOUND = 10,
    POPPLER_ANNOTATION_SUBTYPE_AMOVIE = 11,
    POPPLER_ANNOTATION_SUBTYPE_ASCREEN = 12,
    POPPLER_ANNOTATION_SUBTYPE_AWIDGET = 13,
    POPPLER_ANNOTATION_SUBTYPE_ARICHMEDIA = 14
} Poppler__Annotation__SubType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_ANNOTATION_FLAG_HIDDEN = 1,
    POPPLER_ANNOTATION_FLAG_FIXEDSIZE = 2,
    POPPLER_ANNOTATION_FLAG_FIXEDROTATION = 4,
    POPPLER_ANNOTATION_FLAG_DENYPRINT = 8,
    POPPLER_ANNOTATION_FLAG_DENYWRITE = 16,
    POPPLER_ANNOTATION_FLAG_DENYDELETE = 32,
    POPPLER_ANNOTATION_FLAG_TOGGLEHIDINGONMOUSE = 64,
    POPPLER_ANNOTATION_FLAG_EXTERNAL = 128
} Poppler__Annotation__Flag;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_ANNOTATION_LINESTYLE_SOLID = 1,
    POPPLER_ANNOTATION_LINESTYLE_DASHED = 2,
    POPPLER_ANNOTATION_LINESTYLE_BEVELED = 4,
    POPPLER_ANNOTATION_LINESTYLE_INSET = 8,
    POPPLER_ANNOTATION_LINESTYLE_UNDERLINE = 16
} Poppler__Annotation__LineStyle;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_ANNOTATION_LINEEFFECT_NOEFFECT = 1,
    POPPLER_ANNOTATION_LINEEFFECT_CLOUDY = 2
} Poppler__Annotation__LineEffect;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_ANNOTATION_REVSCOPE_ROOT = 0,
    POPPLER_ANNOTATION_REVSCOPE_REPLY = 1,
    POPPLER_ANNOTATION_REVSCOPE_GROUP = 2,
    POPPLER_ANNOTATION_REVSCOPE_DELETE = 4
} Poppler__Annotation__RevScope;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_ANNOTATION_REVTYPE_NONE = 1,
    POPPLER_ANNOTATION_REVTYPE_MARKED = 2,
    POPPLER_ANNOTATION_REVTYPE_UNMARKED = 4,
    POPPLER_ANNOTATION_REVTYPE_ACCEPTED = 8,
    POPPLER_ANNOTATION_REVTYPE_REJECTED = 16,
    POPPLER_ANNOTATION_REVTYPE_CANCELLED = 32,
    POPPLER_ANNOTATION_REVTYPE_COMPLETED = 64
} Poppler__Annotation__RevType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_CURSORENTERINGACTION = 0,
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_CURSORLEAVINGACTION = 1,
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_MOUSEPRESSEDACTION = 2,
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_MOUSERELEASEDACTION = 3,
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_FOCUSINACTION = 4,
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_FOCUSOUTACTION = 5,
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_PAGEOPENINGACTION = 6,
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_PAGECLOSINGACTION = 7,
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_PAGEVISIBLEACTION = 8,
    POPPLER_ANNOTATION_ADDITIONALACTIONTYPE_PAGEINVISIBLEACTION = 9
} Poppler__Annotation__AdditionalActionType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_TEXTANNOTATION_TEXTTYPE_LINKED = 0,
    POPPLER_TEXTANNOTATION_TEXTTYPE_INPLACE = 1
} Poppler__TextAnnotation__TextType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_TEXTANNOTATION_INPLACEINTENT_UNKNOWN = 0,
    POPPLER_TEXTANNOTATION_INPLACEINTENT_CALLOUT = 1,
    POPPLER_TEXTANNOTATION_INPLACEINTENT_TYPEWRITER = 2
} Poppler__TextAnnotation__InplaceIntent;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_TEXTANNOTATION_INPLACEALIGNPOSITION_INPLACEALIGNLEFT = 0,
    POPPLER_TEXTANNOTATION_INPLACEALIGNPOSITION_INPLACEALIGNCENTER = 1,
    POPPLER_TEXTANNOTATION_INPLACEALIGNPOSITION_INPLACEALIGNRIGHT = 2
} Poppler__TextAnnotation__InplaceAlignPosition;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_LINEANNOTATION_LINETYPE_STRAIGHTLINE = 0,
    POPPLER_LINEANNOTATION_LINETYPE_POLYLINE = 1
} Poppler__LineAnnotation__LineType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_LINEANNOTATION_TERMSTYLE_SQUARE = 0,
    POPPLER_LINEANNOTATION_TERMSTYLE_CIRCLE = 1,
    POPPLER_LINEANNOTATION_TERMSTYLE_DIAMOND = 2,
    POPPLER_LINEANNOTATION_TERMSTYLE_OPENARROW = 3,
    POPPLER_LINEANNOTATION_TERMSTYLE_CLOSEDARROW = 4,
    POPPLER_LINEANNOTATION_TERMSTYLE_NONE = 5,
    POPPLER_LINEANNOTATION_TERMSTYLE_BUTT = 6,
    POPPLER_LINEANNOTATION_TERMSTYLE_ROPENARROW = 7,
    POPPLER_LINEANNOTATION_TERMSTYLE_RCLOSEDARROW = 8,
    POPPLER_LINEANNOTATION_TERMSTYLE_SLASH = 9
} Poppler__LineAnnotation__TermStyle;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_LINEANNOTATION_LINEINTENT_UNKNOWN = 0,
    POPPLER_LINEANNOTATION_LINEINTENT_ARROW = 1,
    POPPLER_LINEANNOTATION_LINEINTENT_DIMENSION = 2,
    POPPLER_LINEANNOTATION_LINEINTENT_POLYGONCLOUD = 3
} Poppler__LineAnnotation__LineIntent;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_GEOMANNOTATION_GEOMTYPE_INSCRIBEDSQUARE = 0,
    POPPLER_GEOMANNOTATION_GEOMTYPE_INSCRIBEDCIRCLE = 1
} Poppler__GeomAnnotation__GeomType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_HIGHLIGHTANNOTATION_HIGHLIGHTTYPE_HIGHLIGHT = 0,
    POPPLER_HIGHLIGHTANNOTATION_HIGHLIGHTTYPE_SQUIGGLY = 1,
    POPPLER_HIGHLIGHTANNOTATION_HIGHLIGHTTYPE_UNDERLINE = 2,
    POPPLER_HIGHLIGHTANNOTATION_HIGHLIGHTTYPE_STRIKEOUT = 3
} Poppler__HighlightAnnotation__HighlightType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_SIGNATUREANNOTATION_SIGNINGRESULT_SIGNINGSUCCESS = 0,
    POPPLER_SIGNATUREANNOTATION_SIGNINGRESULT_FIELDALREADYSIGNED = 1,
    POPPLER_SIGNATUREANNOTATION_SIGNINGRESULT_GENERICSIGNINGERROR = 2,
    POPPLER_SIGNATUREANNOTATION_SIGNINGRESULT_INTERNALERROR = 3,
    POPPLER_SIGNATUREANNOTATION_SIGNINGRESULT_KEYMISSING = 4,
    POPPLER_SIGNATUREANNOTATION_SIGNINGRESULT_WRITEFAILED = 5,
    POPPLER_SIGNATUREANNOTATION_SIGNINGRESULT_USERCANCELLED = 6,
    POPPLER_SIGNATUREANNOTATION_SIGNINGRESULT_BADPASSPHRASE = 7
} Poppler__SignatureAnnotation__SigningResult;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_LINKANNOTATION_HIGHLIGHTMODE_NONE = 0,
    POPPLER_LINKANNOTATION_HIGHLIGHTMODE_INVERT = 1,
    POPPLER_LINKANNOTATION_HIGHLIGHTMODE_OUTLINE = 2,
    POPPLER_LINKANNOTATION_HIGHLIGHTMODE_PUSH = 3
} Poppler__LinkAnnotation__HighlightMode;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_CARETANNOTATION_CARETSYMBOL_NONE = 0,
    POPPLER_CARETANNOTATION_CARETSYMBOL_P = 1
} Poppler__CaretAnnotation__CaretSymbol;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_RICHMEDIAANNOTATION_INSTANCE_TYPE_TYPE3D = 0,
    POPPLER_RICHMEDIAANNOTATION_INSTANCE_TYPE_TYPEFLASH = 1,
    POPPLER_RICHMEDIAANNOTATION_INSTANCE_TYPE_TYPESOUND = 2,
    POPPLER_RICHMEDIAANNOTATION_INSTANCE_TYPE_TYPEVIDEO = 3
} Poppler__RichMediaAnnotation__Instance__Type;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_RICHMEDIAANNOTATION_CONFIGURATION_TYPE_TYPE3D = 0,
    POPPLER_RICHMEDIAANNOTATION_CONFIGURATION_TYPE_TYPEFLASH = 1,
    POPPLER_RICHMEDIAANNOTATION_CONFIGURATION_TYPE_TYPESOUND = 2,
    POPPLER_RICHMEDIAANNOTATION_CONFIGURATION_TYPE_TYPEVIDEO = 3
} Poppler__RichMediaAnnotation__Configuration__Type;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_RICHMEDIAANNOTATION_ACTIVATION_CONDITION_PAGEOPENED = 0,
    POPPLER_RICHMEDIAANNOTATION_ACTIVATION_CONDITION_PAGEVISIBLE = 1,
    POPPLER_RICHMEDIAANNOTATION_ACTIVATION_CONDITION_USERACTION = 2
} Poppler__RichMediaAnnotation__Activation__Condition;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1RichMediaAnnotation_1_1Settings.html)

typedef enum {
    POPPLER_RICHMEDIAANNOTATION_DEACTIVATION_CONDITION_PAGECLOSED = 0,
    POPPLER_RICHMEDIAANNOTATION_DEACTIVATION_CONDITION_PAGEINVISIBLE = 1,
    POPPLER_RICHMEDIAANNOTATION_DEACTIVATION_CONDITION_USERACTION = 2
} Poppler__RichMediaAnnotation__Deactivation__Condition;

#endif
