#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_QT6_H
#define SRC_RESTRICTED_EXTRAS_POPPLER_QT6C_LIBPOPPLER_QT6_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
/// @param param1 const char*
///
QDateTime* q_poppler_convert_date(const char* param1);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
bool q_poppler_is_cms_available();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/namespacePoppler.html)
///
bool q_poppler_is_overprint_preview_available();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)

/// q_poppler__textbox_new constructs a new Poppler::TextBox object.
///
/// @param text const char*
/// @param bBox QRectF*
///
Poppler__TextBox* q_poppler__textbox_new(const char* text, void* bBox);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__TextBox*
///
const char* q_poppler__textbox_text(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
///
/// @param self Poppler__TextBox*
///
QRectF* q_poppler__textbox_bounding_box(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
///
/// @param self Poppler__TextBox*
///
Poppler__TextBox* q_poppler__textbox_next_word(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
///
/// @param self Poppler__TextBox*
/// @param i int
///
QRectF* q_poppler__textbox_char_bounding_box(void* self, int i);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
///
/// @param self Poppler__TextBox*
///
bool q_poppler__textbox_has_space_after(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1TextBox.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__TextBox*
///
void q_poppler__textbox_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)

/// q_poppler__fontinfo_new constructs a new Poppler::FontInfo object.
///
Poppler__FontInfo* q_poppler__fontinfo_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)

/// q_poppler__fontinfo_new2 constructs a new Poppler::FontInfo object.
///
/// @param fi Poppler__FontInfo*
///
Poppler__FontInfo* q_poppler__fontinfo_new2(void* fi);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__FontInfo*
///
const char* q_poppler__fontinfo_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__FontInfo*
///
const char* q_poppler__fontinfo_substitute_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__FontInfo*
///
const char* q_poppler__fontinfo_file(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
///
/// @param self Poppler__FontInfo*
///
bool q_poppler__fontinfo_is_embedded(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
///
/// @param self Poppler__FontInfo*
///
bool q_poppler__fontinfo_is_subset(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
///
/// @param self Poppler__FontInfo*
///
/// @return enum Poppler__FontInfo__Type
///
int32_t q_poppler__fontinfo_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__FontInfo*
///
const char* q_poppler__fontinfo_type_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
///
/// @param self Poppler__FontInfo*
/// @param fi Poppler__FontInfo*
///
void q_poppler__fontinfo_operator_assign(void* self, void* fi);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontInfo.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__FontInfo*
///
void q_poppler__fontinfo_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
///
/// @param self Poppler__FontIterator*
///
/// @return libqt_list of Poppler__FontInfo*
///
libqt_list q_poppler__fontiterator_next(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
///
/// @param self Poppler__FontIterator*
///
bool q_poppler__fontiterator_has_next(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
///
/// @param self Poppler__FontIterator*
///
int32_t q_poppler__fontiterator_current_page(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1FontIterator.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__FontIterator*
///
void q_poppler__fontiterator_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__EmbeddedFile*
///
const char* q_poppler__embeddedfile_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__EmbeddedFile*
///
const char* q_poppler__embeddedfile_description(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// @param self Poppler__EmbeddedFile*
///
int32_t q_poppler__embeddedfile_size(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// @param self Poppler__EmbeddedFile*
///
QDateTime* q_poppler__embeddedfile_mod_date(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// @param self Poppler__EmbeddedFile*
///
QDateTime* q_poppler__embeddedfile_create_date(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__EmbeddedFile*
///
char* q_poppler__embeddedfile_checksum(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__EmbeddedFile*
///
const char* q_poppler__embeddedfile_mime_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__EmbeddedFile*
///
char* q_poppler__embeddedfile_data(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// @param self Poppler__EmbeddedFile*
///
bool q_poppler__embeddedfile_is_valid(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1EmbeddedFile.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__EmbeddedFile*
///
void q_poppler__embeddedfile_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
QImage* q_poppler__page_render_to_image(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param rotate enum Poppler__Page__Rotation
/// @param partialUpdateCallback void func(QImage* param1, QVariant* param2)
/// @param shouldDoPartialUpdateCallback bool func(QVariant* param1)
/// @param payload QVariant*
///
QImage* q_poppler__page_render_to_image2(void* self, double xres, double yres, int x, int y, int w, int h, int32_t rotate, void (*partialUpdateCallback)(void* funcparam1, void* funcparam2), bool (*shouldDoPartialUpdateCallback)(void* funcparam1), void* payload);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param rotate enum Poppler__Page__Rotation
/// @param partialUpdateCallback void func(QImage* param1, QVariant* param2)
/// @param shouldDoPartialUpdateCallback bool func(QVariant* param1)
/// @param shouldAbortRenderCallback bool func(QVariant* param1)
/// @param payload QVariant*
///
QImage* q_poppler__page_render_to_image3(void* self, double xres, double yres, int x, int y, int w, int h, int32_t rotate, void (*partialUpdateCallback)(void* funcparam1, void* funcparam2), bool (*shouldDoPartialUpdateCallback)(void* funcparam1), bool (*shouldAbortRenderCallback)(void* funcparam1), void* payload);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param painter QPainter*
///
bool q_poppler__page_render_to_painter(void* self, void* painter);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
QImage* q_poppler__page_thumbnail(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Page*
/// @param rect QRectF*
/// @param textLayout enum Poppler__Page__TextLayout
///
const char* q_poppler__page_text(void* self, void* rect, int32_t textLayout);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Page*
/// @param rect QRectF*
///
const char* q_poppler__page_text2(void* self, void* rect);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param text const char*
/// @param sLeft double*
/// @param sTop double*
/// @param sRight double*
/// @param sBottom double*
/// @param direction enum Poppler__Page__SearchDirection
///
bool q_poppler__page_search(void* self, const char* text, double* sLeft, double* sTop, double* sRight, double* sBottom, int32_t direction);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param text const char*
///
/// @return libqt_list of QRectF*
///
libqt_list q_poppler__page_search2(void* self, const char* text);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
/// @return libqt_list of Poppler__TextBox*
///
libqt_list q_poppler__page_text_list(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param rotate enum Poppler__Page__Rotation
/// @param shouldAbortExtractionCallback bool func(QVariant* param1)
/// @param closure QVariant*
///
/// @return libqt_list of Poppler__TextBox*
///
libqt_list q_poppler__page_text_list2(void* self, int32_t rotate, bool (*shouldAbortExtractionCallback)(void* funcparam1), void* closure);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
QSizeF* q_poppler__page_page_size_f(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
QSize* q_poppler__page_page_size(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
Poppler__PageTransition* q_poppler__page_transition(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param act enum Poppler__Page__PageAction
///
Poppler__Link* q_poppler__page_action(void* self, int32_t act);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
/// @return enum Poppler__Page__Orientation
///
int32_t q_poppler__page_orientation(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param CTM double*
/// @param dpiX double
/// @param dpiY double
/// @param rotate int
/// @param upsideDown bool
///
void q_poppler__page_default_c_t_m(void* self, double* CTM, double dpiX, double dpiY, int rotate, bool upsideDown);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
/// @return libqt_list of Poppler__Link*
///
libqt_list q_poppler__page_links(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__page_annotations(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param subtypes libqt_list /* set of enum Poppler__Annotation__SubType */ subtypes
///
/// @return libqt_list of Poppler__Annotation*
///
libqt_list q_poppler__page_annotations2(void* self, libqt_list subtypes);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param ann Poppler__Annotation*
///
void q_poppler__page_add_annotation(void* self, void* ann);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param ann Poppler__Annotation*
///
void q_poppler__page_remove_annotation(void* self, void* ann);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
/// @return libqt_list of Poppler__FormField*
///
libqt_list q_poppler__page_form_fields(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
double q_poppler__page_duration(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Page*
///
const char* q_poppler__page_label(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
///
int32_t q_poppler__page_index(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param xres double
///
QImage* q_poppler__page_render_to_image1(void* self, double xres);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param xres double
/// @param yres double
///
QImage* q_poppler__page_render_to_image22(void* self, double xres, double yres);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param xres double
/// @param yres double
/// @param x int
///
QImage* q_poppler__page_render_to_image32(void* self, double xres, double yres, int x);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
///
QImage* q_poppler__page_render_to_image4(void* self, double xres, double yres, int x, int y);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
/// @param w int
///
QImage* q_poppler__page_render_to_image5(void* self, double xres, double yres, int x, int y, int w);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
QImage* q_poppler__page_render_to_image6(void* self, double xres, double yres, int x, int y, int w, int h);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param rotate enum Poppler__Page__Rotation
///
QImage* q_poppler__page_render_to_image7(void* self, double xres, double yres, int x, int y, int w, int h, int32_t rotate);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param painter QPainter*
/// @param xres double
///
bool q_poppler__page_render_to_painter2(void* self, void* painter, double xres);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param painter QPainter*
/// @param xres double
/// @param yres double
///
bool q_poppler__page_render_to_painter3(void* self, void* painter, double xres, double yres);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param painter QPainter*
/// @param xres double
/// @param yres double
/// @param x int
///
bool q_poppler__page_render_to_painter4(void* self, void* painter, double xres, double yres, int x);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param painter QPainter*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
///
bool q_poppler__page_render_to_painter5(void* self, void* painter, double xres, double yres, int x, int y);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param painter QPainter*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
/// @param w int
///
bool q_poppler__page_render_to_painter6(void* self, void* painter, double xres, double yres, int x, int y, int w);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param painter QPainter*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
bool q_poppler__page_render_to_painter7(void* self, void* painter, double xres, double yres, int x, int y, int w, int h);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param painter QPainter*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param rotate enum Poppler__Page__Rotation
///
bool q_poppler__page_render_to_painter8(void* self, void* painter, double xres, double yres, int x, int y, int w, int h, int32_t rotate);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param painter QPainter*
/// @param xres double
/// @param yres double
/// @param x int
/// @param y int
/// @param w int
/// @param h int
/// @param rotate enum Poppler__Page__Rotation
/// @param flags flag of enum Poppler__Page__PainterFlag
///
bool q_poppler__page_render_to_painter9(void* self, void* painter, double xres, double yres, int x, int y, int w, int h, int32_t rotate, int32_t flags);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param text const char*
/// @param sLeft double*
/// @param sTop double*
/// @param sRight double*
/// @param sBottom double*
/// @param direction enum Poppler__Page__SearchDirection
/// @param flags flag of enum Poppler__Page__SearchFlag
///
bool q_poppler__page_search7(void* self, const char* text, double* sLeft, double* sTop, double* sRight, double* sBottom, int32_t direction, int32_t flags);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param text const char*
/// @param sLeft double*
/// @param sTop double*
/// @param sRight double*
/// @param sBottom double*
/// @param direction enum Poppler__Page__SearchDirection
/// @param flags flag of enum Poppler__Page__SearchFlag
/// @param rotate enum Poppler__Page__Rotation
///
bool q_poppler__page_search8(void* self, const char* text, double* sLeft, double* sTop, double* sRight, double* sBottom, int32_t direction, int32_t flags, int32_t rotate);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param text const char*
/// @param flags flag of enum Poppler__Page__SearchFlag
///
/// @return libqt_list of QRectF*
///
libqt_list q_poppler__page_search22(void* self, const char* text, int32_t flags);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param text const char*
/// @param flags flag of enum Poppler__Page__SearchFlag
/// @param rotate enum Poppler__Page__Rotation
///
/// @return libqt_list of QRectF*
///
libqt_list q_poppler__page_search3(void* self, const char* text, int32_t flags, int32_t rotate);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// @param self Poppler__Page*
/// @param rotate enum Poppler__Page__Rotation
///
/// @return libqt_list of Poppler__TextBox*
///
libqt_list q_poppler__page_text_list1(void* self, int32_t rotate);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Page.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__Page*
///
void q_poppler__page_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)

/// q_poppler__outlineitem_new constructs a new Poppler::OutlineItem object.
///
Poppler__OutlineItem* q_poppler__outlineitem_new();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)

/// q_poppler__outlineitem_new2 constructs a new Poppler::OutlineItem object.
///
/// @param other Poppler__OutlineItem*
///
Poppler__OutlineItem* q_poppler__outlineitem_new2(void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
///
/// @param self Poppler__OutlineItem*
/// @param other Poppler__OutlineItem*
///
void q_poppler__outlineitem_operator_assign(void* self, void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
///
/// @param self Poppler__OutlineItem*
///
bool q_poppler__outlineitem_is_null(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__OutlineItem*
///
const char* q_poppler__outlineitem_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
///
/// @param self Poppler__OutlineItem*
///
bool q_poppler__outlineitem_is_open(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__OutlineItem*
///
const char* q_poppler__outlineitem_external_file_name(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__OutlineItem*
///
const char* q_poppler__outlineitem_uri(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
///
/// @param self Poppler__OutlineItem*
///
bool q_poppler__outlineitem_has_children(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
///
/// @param self Poppler__OutlineItem*
///
/// @return libqt_list of Poppler__OutlineItem*
///
libqt_list q_poppler__outlineitem_children(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1OutlineItem.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__OutlineItem*
///
void q_poppler__outlineitem_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param outputProfileA void*
///
void q_poppler__document_set_color_display_profile(void* self, void* outputProfileA);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param name const char*
///
void q_poppler__document_set_color_display_profile_name(void* self, const char* name);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
void* q_poppler__document_color_rgb_profile(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
void* q_poppler__document_color_display_profile(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param filePath const char*
///
Poppler__Document* q_poppler__document_load(const char* filePath);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param device QIODevice*
///
Poppler__Document* q_poppler__document_load2(void* device);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param fileContents char*
///
Poppler__Document* q_poppler__document_load_from_data(char* fileContents);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param index int
///
Poppler__Page* q_poppler__document_page(void* self, int index);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param label const char*
///
Poppler__Page* q_poppler__document_page2(void* self, const char* label);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
int32_t q_poppler__document_num_pages(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return enum Poppler__Document__PageMode
///
int32_t q_poppler__document_page_mode(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return enum Poppler__Document__PageLayout
///
int32_t q_poppler__document_page_layout(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return enum Qt__LayoutDirection
///
int32_t q_poppler__document_text_direction(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param ownerPassword char*
/// @param userPassword char*
///
bool q_poppler__document_unlock(void* self, char* ownerPassword, char* userPassword);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_is_locked(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param type const char*
///
QDateTime* q_poppler__document_date(void* self, const char* type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param key const char*
/// @param val QDateTime*
///
bool q_poppler__document_set_date(void* self, const char* key, void* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
QDateTime* q_poppler__document_creation_date(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param val QDateTime*
///
bool q_poppler__document_set_creation_date(void* self, void* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
QDateTime* q_poppler__document_modification_date(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param val QDateTime*
///
bool q_poppler__document_set_modification_date(void* self, void* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Document*
/// @param type const char*
///
const char* q_poppler__document_info(void* self, const char* type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param key const char*
/// @param val const char*
///
bool q_poppler__document_set_info(void* self, const char* key, const char* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Document*
///
const char* q_poppler__document_title(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param val const char*
///
bool q_poppler__document_set_title(void* self, const char* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Document*
///
const char* q_poppler__document_author(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param val const char*
///
bool q_poppler__document_set_author(void* self, const char* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Document*
///
const char* q_poppler__document_subject(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param val const char*
///
bool q_poppler__document_set_subject(void* self, const char* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Document*
///
const char* q_poppler__document_keywords(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param val const char*
///
bool q_poppler__document_set_keywords(void* self, const char* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Document*
///
const char* q_poppler__document_creator(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param val const char*
///
bool q_poppler__document_set_creator(void* self, const char* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Document*
///
const char* q_poppler__document_producer(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param val const char*
///
bool q_poppler__document_set_producer(void* self, const char* val);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_remove_info(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__Document*
///
const char** q_poppler__document_info_keys(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_is_encrypted(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_is_linearized(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_ok_to_print(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_ok_to_print_high_res(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_ok_to_change(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_ok_to_copy(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_ok_to_add_notes(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_ok_to_fill_form(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_ok_to_create_form_fields(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_ok_to_extract_for_accessibility(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_ok_to_assemble(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
Poppler__Document__PdfVersion* q_poppler__document_get_pdf_version(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return libqt_list of Poppler__FontInfo*
///
libqt_list q_poppler__document_fonts(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
Poppler__FontIterator* q_poppler__document_new_font_iterator(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__Document*
/// @param fi Poppler__FontInfo*
///
char* q_poppler__document_font_data(void* self, void* fi);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return libqt_list of Poppler__EmbeddedFile*
///
libqt_list q_poppler__document_embedded_files(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_has_embedded_files(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return libqt_list of Poppler__OutlineItem*
///
libqt_list q_poppler__document_outline(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param name const char*
///
Poppler__LinkDestination* q_poppler__document_link_destination(void* self, const char* name);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param color QColor*
///
void q_poppler__document_set_paper_color(void* self, void* color);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
QColor* q_poppler__document_paper_color(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param backend enum Poppler__Document__RenderBackend
///
void q_poppler__document_set_render_backend(void* self, int32_t backend);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return enum Poppler__Document__RenderBackend
///
int32_t q_poppler__document_render_backend(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @return libqt_list set of enum Poppler__Document__RenderBackend
///
libqt_list q_poppler__document_available_render_backends();

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param hint enum Poppler__Document__RenderHint
///
void q_poppler__document_set_render_hint(void* self, int32_t hint);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return flag of enum Poppler__Document__RenderHint
///
int32_t q_poppler__document_render_hints(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
Poppler__PSConverter* q_poppler__document_ps_converter(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
Poppler__PDFConverter* q_poppler__document_pdf_converter(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__Document*
///
const char* q_poppler__document_metadata(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_has_optional_content(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
Poppler__OptContentModel* q_poppler__document_optional_content_model(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param link Poppler__LinkResetForm*
///
void q_poppler__document_apply_reset_forms_link(void* self, void* link);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__Document*
///
const char** q_poppler__document_scripts(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param type enum Poppler__Document__DocumentAdditionalActionsType
///
Poppler__Link* q_poppler__document_additional_action(void* self, int32_t type);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return enum Poppler__Document__FormType
///
int32_t q_poppler__document_form_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return libqt_list of int
///
libqt_list q_poppler__document_form_calculate_order(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
/// @return libqt_list of Poppler__FormFieldSignature*
///
libqt_list q_poppler__document_signatures(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
///
bool q_poppler__document_xref_was_reconstructed(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param callback void func()
///
void q_poppler__document_set_x_ref_reconstructed_callback(void* self, void (*callback)());

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param filePath const char*
/// @param ownerPassword char*
///
Poppler__Document* q_poppler__document_load22(const char* filePath, char* ownerPassword);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param filePath const char*
/// @param ownerPassword char*
/// @param userPassword char*
///
Poppler__Document* q_poppler__document_load3(const char* filePath, char* ownerPassword, char* userPassword);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param device QIODevice*
/// @param ownerPassword char*
///
Poppler__Document* q_poppler__document_load23(void* device, char* ownerPassword);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param device QIODevice*
/// @param ownerPassword char*
/// @param userPassword char*
///
Poppler__Document* q_poppler__document_load32(void* device, char* ownerPassword, char* userPassword);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param fileContents char*
/// @param ownerPassword char*
///
Poppler__Document* q_poppler__document_load_from_data2(char* fileContents, char* ownerPassword);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param fileContents char*
/// @param ownerPassword char*
/// @param userPassword char*
///
Poppler__Document* q_poppler__document_load_from_data3(char* fileContents, char* ownerPassword, char* userPassword);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param startPage int
///
Poppler__FontIterator* q_poppler__document_new_font_iterator1(void* self, int startPage);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// @param self Poppler__Document*
/// @param hint enum Poppler__Document__RenderHint
/// @param on bool
///
void q_poppler__document_set_render_hint2(void* self, int32_t hint, bool on);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1Document.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__Document*
///
void q_poppler__document_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
///
/// @param self Poppler__SoundObject*
///
/// @return enum Poppler__SoundObject__SoundType
///
int32_t q_poppler__soundobject_sound_type(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__SoundObject*
///
const char* q_poppler__soundobject_url(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self Poppler__SoundObject*
///
char* q_poppler__soundobject_data(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
///
/// @param self Poppler__SoundObject*
///
double q_poppler__soundobject_sampling_rate(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
///
/// @param self Poppler__SoundObject*
///
int32_t q_poppler__soundobject_channels(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
///
/// @param self Poppler__SoundObject*
///
int32_t q_poppler__soundobject_bits_per_sample(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
///
/// @param self Poppler__SoundObject*
///
/// @return enum Poppler__SoundObject__SoundEncoding
///
int32_t q_poppler__soundobject_sound_encoding(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1SoundObject.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__SoundObject*
///
void q_poppler__soundobject_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self Poppler__MovieObject*
///
const char* q_poppler__movieobject_url(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
///
/// @param self Poppler__MovieObject*
///
QSize* q_poppler__movieobject_size(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
///
/// @param self Poppler__MovieObject*
///
int32_t q_poppler__movieobject_rotation(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
///
/// @param self Poppler__MovieObject*
///
bool q_poppler__movieobject_show_controls(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
///
/// @param self Poppler__MovieObject*
///
/// @return enum Poppler__MovieObject__PlayMode
///
int32_t q_poppler__movieobject_play_mode(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
///
/// @param self Poppler__MovieObject*
///
bool q_poppler__movieobject_show_poster_image(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
///
/// @param self Poppler__MovieObject*
///
QImage* q_poppler__movieobject_poster_image(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1MovieObject.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__MovieObject*
///
void q_poppler__movieobject_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
///
/// @param self Poppler__Document__PdfVersion*
///
int32_t q_poppler__document__pdfversion_major(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
///
/// @param self Poppler__Document__PdfVersion*
/// @param major int
///
void q_poppler__document__pdfversion_set_major(void* self, int major);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
///
/// @param self Poppler__Document__PdfVersion*
///
int32_t q_poppler__document__pdfversion_minor(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
///
/// @param self Poppler__Document__PdfVersion*
/// @param minor int
///
void q_poppler__document__pdfversion_set_minor(void* self, int minor);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__Document__PdfVersion*
///
void q_poppler__document__pdfversion_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_FONTINFO_TYPE_UNKNOWN = 0,
    POPPLER_FONTINFO_TYPE_TYPE1 = 1,
    POPPLER_FONTINFO_TYPE_TYPE1C = 2,
    POPPLER_FONTINFO_TYPE_TYPE1COT = 3,
    POPPLER_FONTINFO_TYPE_TYPE3 = 4,
    POPPLER_FONTINFO_TYPE_TRUETYPE = 5,
    POPPLER_FONTINFO_TYPE_TRUETYPEOT = 6,
    POPPLER_FONTINFO_TYPE_CIDTYPE0 = 7,
    POPPLER_FONTINFO_TYPE_CIDTYPE0C = 8,
    POPPLER_FONTINFO_TYPE_CIDTYPE0COT = 9,
    POPPLER_FONTINFO_TYPE_CIDTRUETYPE = 10,
    POPPLER_FONTINFO_TYPE_CIDTRUETYPEOT = 11
} Poppler__FontInfo__Type;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_PAGE_ROTATION_ROTATE0 = 0,
    POPPLER_PAGE_ROTATION_ROTATE90 = 1,
    POPPLER_PAGE_ROTATION_ROTATE180 = 2,
    POPPLER_PAGE_ROTATION_ROTATE270 = 3
} Poppler__Page__Rotation;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_PAGE_PAGEACTION_OPENING = 0,
    POPPLER_PAGE_PAGEACTION_CLOSING = 1
} Poppler__Page__PageAction;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_PAGE_TEXTLAYOUT_PHYSICALLAYOUT = 0,
    POPPLER_PAGE_TEXTLAYOUT_RAWORDERLAYOUT = 1
} Poppler__Page__TextLayout;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_PAGE_PAINTERFLAG_NOPAINTERFLAGS = 0,
    POPPLER_PAGE_PAINTERFLAG_DONTSAVEANDRESTORE = 1
} Poppler__Page__PainterFlag;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_PAGE_SEARCHDIRECTION_FROMTOP = 0,
    POPPLER_PAGE_SEARCHDIRECTION_NEXTRESULT = 1,
    POPPLER_PAGE_SEARCHDIRECTION_PREVIOUSRESULT = 2
} Poppler__Page__SearchDirection;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_PAGE_SEARCHMODE_CASESENSITIVE = 0,
    POPPLER_PAGE_SEARCHMODE_CASEINSENSITIVE = 1
} Poppler__Page__SearchMode;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_PAGE_SEARCHFLAG_NOSEARCHFLAGS = 0,
    POPPLER_PAGE_SEARCHFLAG_IGNORECASE = 1,
    POPPLER_PAGE_SEARCHFLAG_WHOLEWORDS = 2,
    POPPLER_PAGE_SEARCHFLAG_IGNOREDIACRITICS = 4,
    POPPLER_PAGE_SEARCHFLAG_ACROSSLINES = 8
} Poppler__Page__SearchFlag;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_PAGE_ORIENTATION_LANDSCAPE = 0,
    POPPLER_PAGE_ORIENTATION_PORTRAIT = 1,
    POPPLER_PAGE_ORIENTATION_SEASCAPE = 2,
    POPPLER_PAGE_ORIENTATION_UPSIDEDOWN = 3
} Poppler__Page__Orientation;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_DOCUMENT_PAGEMODE_USENONE = 0,
    POPPLER_DOCUMENT_PAGEMODE_USEOUTLINES = 1,
    POPPLER_DOCUMENT_PAGEMODE_USETHUMBS = 2,
    POPPLER_DOCUMENT_PAGEMODE_FULLSCREEN = 3,
    POPPLER_DOCUMENT_PAGEMODE_USEOC = 4,
    POPPLER_DOCUMENT_PAGEMODE_USEATTACH = 5
} Poppler__Document__PageMode;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_DOCUMENT_PAGELAYOUT_NOLAYOUT = 0,
    POPPLER_DOCUMENT_PAGELAYOUT_SINGLEPAGE = 1,
    POPPLER_DOCUMENT_PAGELAYOUT_ONECOLUMN = 2,
    POPPLER_DOCUMENT_PAGELAYOUT_TWOCOLUMNLEFT = 3,
    POPPLER_DOCUMENT_PAGELAYOUT_TWOCOLUMNRIGHT = 4,
    POPPLER_DOCUMENT_PAGELAYOUT_TWOPAGELEFT = 5,
    POPPLER_DOCUMENT_PAGELAYOUT_TWOPAGERIGHT = 6
} Poppler__Document__PageLayout;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_DOCUMENT_RENDERBACKEND_SPLASHBACKEND = 0,
    POPPLER_DOCUMENT_RENDERBACKEND_QPAINTERBACKEND = 1
} Poppler__Document__RenderBackend;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_DOCUMENT_RENDERHINT_ANTIALIASING = 1,
    POPPLER_DOCUMENT_RENDERHINT_TEXTANTIALIASING = 2,
    POPPLER_DOCUMENT_RENDERHINT_TEXTHINTING = 4,
    POPPLER_DOCUMENT_RENDERHINT_TEXTSLIGHTHINTING = 8,
    POPPLER_DOCUMENT_RENDERHINT_OVERPRINTPREVIEW = 16,
    POPPLER_DOCUMENT_RENDERHINT_THINLINESOLID = 32,
    POPPLER_DOCUMENT_RENDERHINT_THINLINESHAPE = 64,
    POPPLER_DOCUMENT_RENDERHINT_IGNOREPAPERCOLOR = 128,
    POPPLER_DOCUMENT_RENDERHINT_HIDEANNOTATIONS = 256
} Poppler__Document__RenderHint;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_DOCUMENT_FORMTYPE_NOFORM = 0,
    POPPLER_DOCUMENT_FORMTYPE_ACROFORM = 1,
    POPPLER_DOCUMENT_FORMTYPE_XFAFORM = 2
} Poppler__Document__FormType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_DOCUMENT_DOCUMENTADDITIONALACTIONSTYPE_CLOSEDOCUMENT = 0,
    POPPLER_DOCUMENT_DOCUMENTADDITIONALACTIONSTYPE_SAVEDOCUMENTSTART = 1,
    POPPLER_DOCUMENT_DOCUMENTADDITIONALACTIONSTYPE_SAVEDOCUMENTFINISH = 2,
    POPPLER_DOCUMENT_DOCUMENTADDITIONALACTIONSTYPE_PRINTDOCUMENTSTART = 3,
    POPPLER_DOCUMENT_DOCUMENTADDITIONALACTIONSTYPE_PRINTDOCUMENTFINISH = 4
} Poppler__Document__DocumentAdditionalActionsType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_SOUNDOBJECT_SOUNDTYPE_EXTERNAL = 0,
    POPPLER_SOUNDOBJECT_SOUNDTYPE_EMBEDDED = 1
} Poppler__SoundObject__SoundType;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_SOUNDOBJECT_SOUNDENCODING_RAW = 0,
    POPPLER_SOUNDOBJECT_SOUNDENCODING_SIGNED = 1,
    POPPLER_SOUNDOBJECT_SOUNDENCODING_MULAW = 2,
    POPPLER_SOUNDOBJECT_SOUNDENCODING_ALAW = 3
} Poppler__SoundObject__SoundEncoding;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/structPoppler_1_1Document_1_1PdfVersion.html)

typedef enum {
    POPPLER_MOVIEOBJECT_PLAYMODE_PLAYONCE = 0,
    POPPLER_MOVIEOBJECT_PLAYMODE_PLAYOPEN = 1,
    POPPLER_MOVIEOBJECT_PLAYMODE_PLAYREPEAT = 2,
    POPPLER_MOVIEOBJECT_PLAYMODE_PLAYPALINDROME = 3
} Poppler__MovieObject__PlayMode;

#endif
