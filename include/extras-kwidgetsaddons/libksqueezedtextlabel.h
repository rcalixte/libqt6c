#pragma once
#ifndef EXTRAS_KWIDGETSADDONS_LIBKSQUEEZEDTEXTLABEL_H
#define EXTRAS_KWIDGETSADDONS_LIBKSQUEEZEDTEXTLABEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html)

/// k_squeezedtextlabel_new constructs a new KSqueezedTextLabel object.
///
/// @param parent QWidget*
///
KSqueezedTextLabel* k_squeezedtextlabel_new(void* parent);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html)

/// k_squeezedtextlabel_new2 constructs a new KSqueezedTextLabel object.
///
KSqueezedTextLabel* k_squeezedtextlabel_new2();

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html)

/// k_squeezedtextlabel_new3 constructs a new KSqueezedTextLabel object.
///
/// @param text const char*
///
KSqueezedTextLabel* k_squeezedtextlabel_new3(const char* text);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html)

/// k_squeezedtextlabel_new4 constructs a new KSqueezedTextLabel object.
///
/// @param text const char*
/// @param parent QWidget*
///
KSqueezedTextLabel* k_squeezedtextlabel_new4(const char* text, void* parent);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// @param self const KSqueezedTextLabel*
///
const QMetaObject* k_squeezedtextlabel_meta_object(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Allows for overriding the related default method
///
/// @param self KSqueezedTextLabel*
/// @param callback const QMetaObject* func(const KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_meta_object(void* self, const QMetaObject* (*callback)(const void*));

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// Base class method implementation
///
/// @param self const KSqueezedTextLabel*
///
const QMetaObject* k_squeezedtextlabel_super_meta_object(const void* self);

/// @param self KSqueezedTextLabel*
/// @param param1 const char*
///
void* k_squeezedtextlabel_metacast(void* self, const char* param1);

/// Allows for overriding the related default method
///
/// @param self KSqueezedTextLabel*
/// @param callback void* func(KSqueezedTextLabel* self, const char* param1)
///
void k_squeezedtextlabel_on_metacast(void* self, void* (*callback)(void*, const char*));

/// Base class method implementation
///
/// @param self KSqueezedTextLabel*
/// @param param1 const char*
///
void* k_squeezedtextlabel_super_metacast(void* self, const char* param1);

/// @param self KSqueezedTextLabel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_squeezedtextlabel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KSqueezedTextLabel*
/// @param callback int32_t func(KSqueezedTextLabel* self, enum QMetaObject__Call param1, int param2, void* param3)
///
void k_squeezedtextlabel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KSqueezedTextLabel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
///
int32_t k_squeezedtextlabel_super_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
///
const char* k_squeezedtextlabel_tr(const char* s);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#minimumSizeHint)
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_minimum_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#minimumSizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KSqueezedTextLabel*
/// @param callback QSize* func(const KSqueezedTextLabel* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_squeezedtextlabel_on_minimum_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#minimumSizeHint)
///
/// Base class method implementation
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_super_minimum_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#sizeHint)
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#sizeHint)
///
/// Allows for overriding the related default method
///
/// @param self KSqueezedTextLabel*
/// @param callback QSize* func(const KSqueezedTextLabel* self)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_squeezedtextlabel_on_size_hint(void* self, QSize* (*callback)(const void*));

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#sizeHint)
///
/// Base class method implementation
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_super_size_hint(const void* self);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#setIndent)
///
/// @param self KSqueezedTextLabel*
/// @param indent int
///
void k_squeezedtextlabel_set_indent(void* self, int indent);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#setMargin)
///
/// @param self KSqueezedTextLabel*
/// @param margin int
///
void k_squeezedtextlabel_set_margin(void* self, int margin);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#setAlignment)
///
/// @param self KSqueezedTextLabel*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_squeezedtextlabel_set_alignment(void* self, int32_t alignment);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#setAlignment)
///
/// Allows for overriding the related default method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, flag of enum Qt__AlignmentFlag alignment)
///
void k_squeezedtextlabel_on_set_alignment(void* self, void (*callback)(void*, int32_t));

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#setAlignment)
///
/// Base class method implementation
///
/// @param self KSqueezedTextLabel*
/// @param alignment flag of enum Qt__AlignmentFlag
///
void k_squeezedtextlabel_super_set_alignment(void* self, int32_t alignment);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#textElideMode)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum Qt__TextElideMode
///
int32_t k_squeezedtextlabel_text_elide_mode(const void* self);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#setTextElideMode)
///
/// @param self KSqueezedTextLabel*
/// @param mode enum Qt__TextElideMode
///
void k_squeezedtextlabel_set_text_elide_mode(void* self, int32_t mode);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#fullText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_full_text(const void* self);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#isSqueezed)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_squeezed(const void* self);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#contentsRect)
///
/// @param self const KSqueezedTextLabel*
///
QRect* k_squeezedtextlabel_contents_rect(const void* self);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#setText)
///
/// @param self KSqueezedTextLabel*
/// @param text const char*
///
void k_squeezedtextlabel_set_text(void* self, const char* text);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#clear)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_clear(void* self);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#mouseReleaseEvent)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QMouseEvent*
///
void k_squeezedtextlabel_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QMouseEvent* param1)
///
void k_squeezedtextlabel_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self KSqueezedTextLabel*
/// @param param1 QMouseEvent*
///
void k_squeezedtextlabel_super_mouse_release_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#resizeEvent)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QResizeEvent*
///
void k_squeezedtextlabel_resize_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#resizeEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QResizeEvent* param1)
///
void k_squeezedtextlabel_on_resize_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#resizeEvent)
///
/// Base class method implementation
///
/// @param self KSqueezedTextLabel*
/// @param param1 QResizeEvent*
///
void k_squeezedtextlabel_super_resize_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#contextMenuEvent)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QContextMenuEvent*
///
void k_squeezedtextlabel_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#contextMenuEvent)
///
/// Allows for overriding the related default method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QContextMenuEvent* param1)
///
void k_squeezedtextlabel_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#contextMenuEvent)
///
/// Base class method implementation
///
/// @param self KSqueezedTextLabel*
/// @param param1 QContextMenuEvent*
///
void k_squeezedtextlabel_super_context_menu_event(void* self, void* param1);

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#squeezeTextToLabel)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_squeeze_text_to_label(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
///
const char* k_squeezedtextlabel_tr2(const char* s, const char* c);

/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param s const char*
/// @param c const char*
/// @param n int
///
const char* k_squeezedtextlabel_tr3(const char* s, const char* c, int n);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#text)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_text(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#pixmap)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 enum Qt__ReturnByValueConstant
///
QPixmap* k_squeezedtextlabel_pixmap(const void* self, int32_t param1);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#pixmap)
///
/// @param self const KSqueezedTextLabel*
///
QPixmap* k_squeezedtextlabel_pixmap2(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#picture)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 enum Qt__ReturnByValueConstant
///
QPicture* k_squeezedtextlabel_picture(const void* self, int32_t param1);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#picture)
///
/// @param self const KSqueezedTextLabel*
///
QPicture* k_squeezedtextlabel_picture2(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#movie)
///
/// @param self const KSqueezedTextLabel*
///
QMovie* k_squeezedtextlabel_movie(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#textFormat)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum Qt__TextFormat
///
int32_t k_squeezedtextlabel_text_format(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setTextFormat)
///
/// @param self KSqueezedTextLabel*
/// @param textFormat enum Qt__TextFormat
///
void k_squeezedtextlabel_set_text_format(void* self, int32_t textFormat);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setResourceProvider)
///
/// @param self KSqueezedTextLabel*
/// @param provider QVariant* func(QUrl* param1)
///
void k_squeezedtextlabel_set_resource_provider(void* self, QVariant* (*provider)(const void* funcparam1));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#alignment)
///
/// @param self const KSqueezedTextLabel*
///
/// @return flag of enum Qt__AlignmentFlag
///
int32_t k_squeezedtextlabel_alignment(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setWordWrap)
///
/// @param self KSqueezedTextLabel*
/// @param on bool
///
void k_squeezedtextlabel_set_word_wrap(void* self, bool on);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#wordWrap)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_word_wrap(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#indent)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_indent(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#margin)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_margin(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#hasScaledContents)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_has_scaled_contents(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setScaledContents)
///
/// @param self KSqueezedTextLabel*
/// @param scaledContents bool
///
void k_squeezedtextlabel_set_scaled_contents(void* self, bool scaledContents);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setBuddy)
///
/// @param self KSqueezedTextLabel*
/// @param buddy QWidget*
///
void k_squeezedtextlabel_set_buddy(void* self, void* buddy);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#buddy)
///
/// @param self const KSqueezedTextLabel*
///
QWidget* k_squeezedtextlabel_buddy(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#openExternalLinks)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_open_external_links(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setOpenExternalLinks)
///
/// @param self KSqueezedTextLabel*
/// @param open bool
///
void k_squeezedtextlabel_set_open_external_links(void* self, bool open);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setTextInteractionFlags)
///
/// @param self KSqueezedTextLabel*
/// @param flags flag of enum Qt__TextInteractionFlag
///
void k_squeezedtextlabel_set_text_interaction_flags(void* self, int32_t flags);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#textInteractionFlags)
///
/// @param self const KSqueezedTextLabel*
///
/// @return flag of enum Qt__TextInteractionFlag
///
int32_t k_squeezedtextlabel_text_interaction_flags(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setSelection)
///
/// @param self KSqueezedTextLabel*
/// @param param1 int
/// @param param2 int
///
void k_squeezedtextlabel_set_selection(void* self, int param1, int param2);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#hasSelectedText)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_has_selected_text(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#selectedText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_selected_text(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#selectionStart)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_selection_start(const void* self);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setPixmap)
///
/// @param self KSqueezedTextLabel*
/// @param pixmap QPixmap*
///
void k_squeezedtextlabel_set_pixmap(void* self, const void* pixmap);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setPicture)
///
/// @param self KSqueezedTextLabel*
/// @param picture QPicture*
///
void k_squeezedtextlabel_set_picture(void* self, const void* picture);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setMovie)
///
/// @param self KSqueezedTextLabel*
/// @param movie QMovie*
///
void k_squeezedtextlabel_set_movie(void* self, void* movie);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setNum)
///
/// @param self KSqueezedTextLabel*
/// @param num int
///
void k_squeezedtextlabel_set_num(void* self, int num);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#setNum)
///
/// @param self KSqueezedTextLabel*
/// @param num double
///
void k_squeezedtextlabel_set_num2(void* self, double num);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#linkActivated)
///
/// @param self KSqueezedTextLabel*
/// @param link const char*
///
void k_squeezedtextlabel_link_activated(void* self, const char* link);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#linkActivated)
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, const char* link)
///
void k_squeezedtextlabel_on_link_activated(void* self, void (*callback)(void*, const char*));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#linkHovered)
///
/// @param self KSqueezedTextLabel*
/// @param link const char*
///
void k_squeezedtextlabel_link_hovered(void* self, const char* link);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#linkHovered)
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, const char* link)
///
void k_squeezedtextlabel_on_link_hovered(void* self, void (*callback)(void*, const char*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_frame_style(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KSqueezedTextLabel*
/// @param frameStyle int
///
void k_squeezedtextlabel_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_frame_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum QFrame__Shape
///
int32_t k_squeezedtextlabel_frame_shape(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KSqueezedTextLabel*
/// @param frameShape enum QFrame__Shape
///
void k_squeezedtextlabel_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum QFrame__Shadow
///
int32_t k_squeezedtextlabel_frame_shadow(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KSqueezedTextLabel*
/// @param frameShadow enum QFrame__Shadow
///
void k_squeezedtextlabel_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KSqueezedTextLabel*
/// @param lineWidth int
///
void k_squeezedtextlabel_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_mid_line_width(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KSqueezedTextLabel*
/// @param midLineWidth int
///
void k_squeezedtextlabel_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self const KSqueezedTextLabel*
///
QRect* k_squeezedtextlabel_frame_rect(const void* self);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KSqueezedTextLabel*
/// @param frameRect QRect*
///
void k_squeezedtextlabel_set_frame_rect(void* self, const void* frameRect);

/// Inherited from QWidget
///
/// Upcasts to a QPaintDevice object
///
/// @param self const KSqueezedTextLabel*
///
QPaintDevice* k_squeezedtextlabel_as_q_paint_device(const void* self);

/// Inherited from QWidget
///
/// Downcasts to a KSqueezedTextLabel object
///
/// @param _qpaintdevice QPaintDevice*
///
KSqueezedTextLabel* k_squeezedtextlabel_from_q_paint_device(const void* _qpaintdevice);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self const KSqueezedTextLabel*
///
uintptr_t k_squeezedtextlabel_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self const KSqueezedTextLabel*
///
uintptr_t k_squeezedtextlabel_internal_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self const KSqueezedTextLabel*
///
uintptr_t k_squeezedtextlabel_effective_win_id(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self const KSqueezedTextLabel*
///
QStyle* k_squeezedtextlabel_style(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KSqueezedTextLabel*
/// @param style QStyle*
///
void k_squeezedtextlabel_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_top_level(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_modal(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum Qt__WindowModality
///
int32_t k_squeezedtextlabel_window_modality(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KSqueezedTextLabel*
/// @param windowModality enum Qt__WindowModality
///
void k_squeezedtextlabel_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QWidget*
///
bool k_squeezedtextlabel_is_enabled_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KSqueezedTextLabel*
/// @param enabled bool
///
void k_squeezedtextlabel_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KSqueezedTextLabel*
/// @param disabled bool
///
void k_squeezedtextlabel_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KSqueezedTextLabel*
/// @param windowModified bool
///
void k_squeezedtextlabel_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self const KSqueezedTextLabel*
///
QRect* k_squeezedtextlabel_frame_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self const KSqueezedTextLabel*
///
const QRect* k_squeezedtextlabel_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self const KSqueezedTextLabel*
///
QRect* k_squeezedtextlabel_normal_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_x(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_y(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self const KSqueezedTextLabel*
///
QPoint* k_squeezedtextlabel_pos(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_frame_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self const KSqueezedTextLabel*
///
QRect* k_squeezedtextlabel_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self const KSqueezedTextLabel*
///
QRect* k_squeezedtextlabel_children_rect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self const KSqueezedTextLabel*
///
QRegion* k_squeezedtextlabel_children_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_minimum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_maximum_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_minimum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_minimum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_maximum_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_maximum_height(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KSqueezedTextLabel*
/// @param minimumSize QSize*
///
void k_squeezedtextlabel_set_minimum_size(void* self, const void* minimumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KSqueezedTextLabel*
/// @param minw int
/// @param minh int
///
void k_squeezedtextlabel_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KSqueezedTextLabel*
/// @param maximumSize QSize*
///
void k_squeezedtextlabel_set_maximum_size(void* self, const void* maximumSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KSqueezedTextLabel*
/// @param maxw int
/// @param maxh int
///
void k_squeezedtextlabel_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KSqueezedTextLabel*
/// @param minw int
///
void k_squeezedtextlabel_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KSqueezedTextLabel*
/// @param minh int
///
void k_squeezedtextlabel_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KSqueezedTextLabel*
/// @param maxw int
///
void k_squeezedtextlabel_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KSqueezedTextLabel*
/// @param maxh int
///
void k_squeezedtextlabel_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_size_increment(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KSqueezedTextLabel*
/// @param sizeIncrement QSize*
///
void k_squeezedtextlabel_set_size_increment(void* self, const void* sizeIncrement);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KSqueezedTextLabel*
/// @param w int
/// @param h int
///
void k_squeezedtextlabel_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self const KSqueezedTextLabel*
///
QSize* k_squeezedtextlabel_base_size(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KSqueezedTextLabel*
/// @param baseSize QSize*
///
void k_squeezedtextlabel_set_base_size(void* self, const void* baseSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KSqueezedTextLabel*
/// @param basew int
/// @param baseh int
///
void k_squeezedtextlabel_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KSqueezedTextLabel*
/// @param fixedSize QSize*
///
void k_squeezedtextlabel_set_fixed_size(void* self, const void* fixedSize);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KSqueezedTextLabel*
/// @param w int
/// @param h int
///
void k_squeezedtextlabel_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KSqueezedTextLabel*
/// @param w int
///
void k_squeezedtextlabel_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KSqueezedTextLabel*
/// @param h int
///
void k_squeezedtextlabel_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QPointF*
///
QPointF* k_squeezedtextlabel_map_to_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QPoint*
///
QPoint* k_squeezedtextlabel_map_to_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QPointF*
///
QPointF* k_squeezedtextlabel_map_from_global(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QPoint*
///
QPoint* k_squeezedtextlabel_map_from_global2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QPointF*
///
QPointF* k_squeezedtextlabel_map_to_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QPoint*
///
QPoint* k_squeezedtextlabel_map_to_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QPointF*
///
QPointF* k_squeezedtextlabel_map_from_parent(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QPoint*
///
QPoint* k_squeezedtextlabel_map_from_parent2(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_squeezedtextlabel_map_to(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_squeezedtextlabel_map_to2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QWidget*
/// @param param2 QPointF*
///
QPointF* k_squeezedtextlabel_map_from(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QWidget*
/// @param param2 QPoint*
///
QPoint* k_squeezedtextlabel_map_from2(const void* self, const void* param1, const void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self const KSqueezedTextLabel*
///
QWidget* k_squeezedtextlabel_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self const KSqueezedTextLabel*
///
QWidget* k_squeezedtextlabel_native_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self const KSqueezedTextLabel*
///
QWidget* k_squeezedtextlabel_top_level_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self const KSqueezedTextLabel*
///
const QPalette* k_squeezedtextlabel_palette(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KSqueezedTextLabel*
/// @param palette QPalette*
///
void k_squeezedtextlabel_set_palette(void* self, const void* palette);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KSqueezedTextLabel*
/// @param backgroundRole enum QPalette__ColorRole
///
void k_squeezedtextlabel_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum QPalette__ColorRole
///
int32_t k_squeezedtextlabel_background_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KSqueezedTextLabel*
/// @param foregroundRole enum QPalette__ColorRole
///
void k_squeezedtextlabel_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum QPalette__ColorRole
///
int32_t k_squeezedtextlabel_foreground_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self const KSqueezedTextLabel*
///
const QFont* k_squeezedtextlabel_font(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// @param self KSqueezedTextLabel*
/// @param font QFont*
///
void k_squeezedtextlabel_set_font(void* self, const void* font);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self const KSqueezedTextLabel*
///
QFontMetrics* k_squeezedtextlabel_font_metrics(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self const KSqueezedTextLabel*
///
QFontInfo* k_squeezedtextlabel_font_info(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self const KSqueezedTextLabel*
///
QCursor* k_squeezedtextlabel_cursor(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KSqueezedTextLabel*
/// @param cursor QCursor*
///
void k_squeezedtextlabel_set_cursor(void* self, const void* cursor);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KSqueezedTextLabel*
/// @param enable bool
///
void k_squeezedtextlabel_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_has_mouse_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_under_mouse(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KSqueezedTextLabel*
/// @param enable bool
///
void k_squeezedtextlabel_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_has_tablet_tracking(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KSqueezedTextLabel*
/// @param mask QBitmap*
///
void k_squeezedtextlabel_set_mask(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KSqueezedTextLabel*
/// @param mask QRegion*
///
void k_squeezedtextlabel_set_mask2(void* self, const void* mask);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self const KSqueezedTextLabel*
///
QRegion* k_squeezedtextlabel_mask(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSqueezedTextLabel*
/// @param target QPaintDevice*
///
void k_squeezedtextlabel_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSqueezedTextLabel*
/// @param painter QPainter*
///
void k_squeezedtextlabel_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KSqueezedTextLabel*
///
QPixmap* k_squeezedtextlabel_grab(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self const KSqueezedTextLabel*
///
QGraphicsEffect* k_squeezedtextlabel_graphics_effect(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KSqueezedTextLabel*
/// @param effect QGraphicsEffect*
///
void k_squeezedtextlabel_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KSqueezedTextLabel*
/// @param type enum Qt__GestureType
///
void k_squeezedtextlabel_grab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KSqueezedTextLabel*
/// @param type enum Qt__GestureType
///
void k_squeezedtextlabel_ungrab_gesture(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KSqueezedTextLabel*
/// @param windowTitle const char*
///
void k_squeezedtextlabel_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KSqueezedTextLabel*
/// @param styleSheet const char*
///
void k_squeezedtextlabel_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_style_sheet(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_window_title(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KSqueezedTextLabel*
/// @param icon QIcon*
///
void k_squeezedtextlabel_set_window_icon(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self const KSqueezedTextLabel*
///
QIcon* k_squeezedtextlabel_window_icon(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KSqueezedTextLabel*
/// @param windowIconText const char*
///
void k_squeezedtextlabel_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_window_icon_text(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KSqueezedTextLabel*
/// @param windowRole const char*
///
void k_squeezedtextlabel_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_window_role(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KSqueezedTextLabel*
/// @param filePath const char*
///
void k_squeezedtextlabel_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_window_file_path(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KSqueezedTextLabel*
/// @param level double
///
void k_squeezedtextlabel_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self const KSqueezedTextLabel*
///
double k_squeezedtextlabel_window_opacity(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_window_modified(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KSqueezedTextLabel*
/// @param toolTip const char*
///
void k_squeezedtextlabel_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_tool_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KSqueezedTextLabel*
/// @param msec int
///
void k_squeezedtextlabel_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_tool_tip_duration(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KSqueezedTextLabel*
/// @param statusTip const char*
///
void k_squeezedtextlabel_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_status_tip(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KSqueezedTextLabel*
/// @param whatsThis const char*
///
void k_squeezedtextlabel_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_whats_this(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_accessible_name(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KSqueezedTextLabel*
/// @param name const char*
///
void k_squeezedtextlabel_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_accessible_description(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KSqueezedTextLabel*
/// @param description const char*
///
void k_squeezedtextlabel_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KSqueezedTextLabel*
/// @param direction enum Qt__LayoutDirection
///
void k_squeezedtextlabel_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum Qt__LayoutDirection
///
int32_t k_squeezedtextlabel_layout_direction(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KSqueezedTextLabel*
/// @param locale QLocale*
///
void k_squeezedtextlabel_set_locale(void* self, const void* locale);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self const KSqueezedTextLabel*
///
QLocale* k_squeezedtextlabel_locale(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_right_to_left(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_left_to_right(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_set_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_active_window(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_activate_window(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KSqueezedTextLabel*
/// @param reason enum Qt__FocusReason
///
void k_squeezedtextlabel_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum Qt__FocusPolicy
///
int32_t k_squeezedtextlabel_focus_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KSqueezedTextLabel*
/// @param policy enum Qt__FocusPolicy
///
void k_squeezedtextlabel_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_has_focus(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
///
void k_squeezedtextlabel_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KSqueezedTextLabel*
/// @param focusProxy QWidget*
///
void k_squeezedtextlabel_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self const KSqueezedTextLabel*
///
QWidget* k_squeezedtextlabel_focus_proxy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum Qt__ContextMenuPolicy
///
int32_t k_squeezedtextlabel_context_menu_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KSqueezedTextLabel*
/// @param policy enum Qt__ContextMenuPolicy
///
void k_squeezedtextlabel_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QCursor*
///
void k_squeezedtextlabel_grab_mouse2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KSqueezedTextLabel*
/// @param key QKeySequence*
///
int32_t k_squeezedtextlabel_grab_shortcut(void* self, const void* key);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KSqueezedTextLabel*
/// @param id int
///
void k_squeezedtextlabel_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KSqueezedTextLabel*
/// @param id int
///
void k_squeezedtextlabel_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KSqueezedTextLabel*
/// @param id int
///
void k_squeezedtextlabel_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_squeezedtextlabel_mouse_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_squeezedtextlabel_keyboard_grabber();

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_updates_enabled(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KSqueezedTextLabel*
/// @param enable bool
///
void k_squeezedtextlabel_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self const KSqueezedTextLabel*
///
QGraphicsProxyWidget* k_squeezedtextlabel_graphics_proxy_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_update(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_repaint(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSqueezedTextLabel*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_squeezedtextlabel_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QRect*
///
void k_squeezedtextlabel_update3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QRegion*
///
void k_squeezedtextlabel_update4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSqueezedTextLabel*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_squeezedtextlabel_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QRect*
///
void k_squeezedtextlabel_repaint3(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QRegion*
///
void k_squeezedtextlabel_repaint4(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KSqueezedTextLabel*
/// @param hidden bool
///
void k_squeezedtextlabel_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_show(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_hide(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_show_normal(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KSqueezedTextLabel*
///
bool k_squeezedtextlabel_close(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_raise(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_lower(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QWidget*
///
void k_squeezedtextlabel_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KSqueezedTextLabel*
/// @param x int
/// @param y int
///
void k_squeezedtextlabel_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QPoint*
///
void k_squeezedtextlabel_move2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KSqueezedTextLabel*
/// @param w int
/// @param h int
///
void k_squeezedtextlabel_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QSize*
///
void k_squeezedtextlabel_resize2(void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KSqueezedTextLabel*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
///
void k_squeezedtextlabel_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KSqueezedTextLabel*
/// @param geometry QRect*
///
void k_squeezedtextlabel_set_geometry2(void* self, const void* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSqueezedTextLabel*
///
char* k_squeezedtextlabel_save_geometry(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KSqueezedTextLabel*
/// @param geometry char*
///
bool k_squeezedtextlabel_restore_geometry(void* self, char* geometry);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_visible(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 QWidget*
///
bool k_squeezedtextlabel_is_visible_to(const void* self, const void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_hidden(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_minimized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_maximized(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_full_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self const KSqueezedTextLabel*
///
/// @return flag of enum Qt__WindowState
///
int32_t k_squeezedtextlabel_window_state(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KSqueezedTextLabel*
/// @param state flag of enum Qt__WindowState
///
void k_squeezedtextlabel_set_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KSqueezedTextLabel*
/// @param state flag of enum Qt__WindowState
///
void k_squeezedtextlabel_override_window_state(void* self, int32_t state);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self const KSqueezedTextLabel*
///
QSizePolicy* k_squeezedtextlabel_size_policy(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KSqueezedTextLabel*
/// @param sizePolicy QSizePolicy*
///
void k_squeezedtextlabel_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KSqueezedTextLabel*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
///
void k_squeezedtextlabel_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self const KSqueezedTextLabel*
///
QRegion* k_squeezedtextlabel_visible_region(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KSqueezedTextLabel*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
///
void k_squeezedtextlabel_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KSqueezedTextLabel*
/// @param margins QMargins*
///
void k_squeezedtextlabel_set_contents_margins2(void* self, const void* margins);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self const KSqueezedTextLabel*
///
QMargins* k_squeezedtextlabel_contents_margins(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self const KSqueezedTextLabel*
///
QLayout* k_squeezedtextlabel_layout(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KSqueezedTextLabel*
/// @param layout QLayout*
///
void k_squeezedtextlabel_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KSqueezedTextLabel*
/// @param parent QWidget*
///
void k_squeezedtextlabel_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KSqueezedTextLabel*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
///
void k_squeezedtextlabel_set_parent2(void* self, void* parent, int32_t f);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KSqueezedTextLabel*
/// @param dx int
/// @param dy int
///
void k_squeezedtextlabel_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KSqueezedTextLabel*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
///
void k_squeezedtextlabel_scroll2(void* self, int dx, int dy, const void* param3);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self const KSqueezedTextLabel*
///
QWidget* k_squeezedtextlabel_focus_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self const KSqueezedTextLabel*
///
QWidget* k_squeezedtextlabel_next_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self const KSqueezedTextLabel*
///
QWidget* k_squeezedtextlabel_previous_in_focus_chain(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_accept_drops(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KSqueezedTextLabel*
/// @param on bool
///
void k_squeezedtextlabel_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSqueezedTextLabel*
/// @param action QAction*
///
void k_squeezedtextlabel_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KSqueezedTextLabel*
/// @param actions libqt_list of QAction*
///
void k_squeezedtextlabel_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KSqueezedTextLabel*
/// @param before QAction*
/// @param actions libqt_list of QAction*
///
void k_squeezedtextlabel_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KSqueezedTextLabel*
/// @param before QAction*
/// @param action QAction*
///
void k_squeezedtextlabel_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KSqueezedTextLabel*
/// @param action QAction*
///
void k_squeezedtextlabel_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self const KSqueezedTextLabel*
///
/// @return libqt_list of QAction*
///
libqt_list k_squeezedtextlabel_actions(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSqueezedTextLabel*
/// @param text const char*
///
QAction* k_squeezedtextlabel_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSqueezedTextLabel*
/// @param icon QIcon*
/// @param text const char*
///
QAction* k_squeezedtextlabel_add_action3(void* self, const void* icon, const char* text);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSqueezedTextLabel*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_squeezedtextlabel_add_action4(void* self, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KSqueezedTextLabel*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
///
QAction* k_squeezedtextlabel_add_action5(void* self, const void* icon, const char* text, const void* shortcut);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self const KSqueezedTextLabel*
///
QWidget* k_squeezedtextlabel_parent_widget(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KSqueezedTextLabel*
/// @param type flag of enum Qt__WindowType
///
void k_squeezedtextlabel_set_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self const KSqueezedTextLabel*
///
/// @return flag of enum Qt__WindowType
///
int32_t k_squeezedtextlabel_window_flags(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KSqueezedTextLabel*
/// @param param1 enum Qt__WindowType
///
void k_squeezedtextlabel_set_window_flag(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KSqueezedTextLabel*
/// @param type flag of enum Qt__WindowType
///
void k_squeezedtextlabel_override_window_flags(void* self, int32_t type);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self const KSqueezedTextLabel*
///
/// @return enum Qt__WindowType
///
int32_t k_squeezedtextlabel_window_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uintptr_t
///
QWidget* k_squeezedtextlabel_find(uintptr_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KSqueezedTextLabel*
/// @param x int
/// @param y int
///
QWidget* k_squeezedtextlabel_child_at(const void* self, int x, int y);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KSqueezedTextLabel*
/// @param p QPoint*
///
QWidget* k_squeezedtextlabel_child_at2(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self const KSqueezedTextLabel*
/// @param p QPointF*
///
QWidget* k_squeezedtextlabel_child_at3(const void* self, const void* p);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KSqueezedTextLabel*
/// @param param1 enum Qt__WidgetAttribute
///
void k_squeezedtextlabel_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self const KSqueezedTextLabel*
/// @param param1 enum Qt__WidgetAttribute
///
bool k_squeezedtextlabel_test_attribute(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self const KSqueezedTextLabel*
///
void k_squeezedtextlabel_ensure_polished(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self const KSqueezedTextLabel*
/// @param child QWidget*
///
bool k_squeezedtextlabel_is_ancestor_of(const void* self, const void* child);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_auto_fill_background(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KSqueezedTextLabel*
/// @param enabled bool
///
void k_squeezedtextlabel_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self const KSqueezedTextLabel*
///
QBackingStore* k_squeezedtextlabel_backing_store(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self const KSqueezedTextLabel*
///
QWindow* k_squeezedtextlabel_window_handle(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self const KSqueezedTextLabel*
///
QScreen* k_squeezedtextlabel_screen(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KSqueezedTextLabel*
/// @param screen QScreen*
///
void k_squeezedtextlabel_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
///
QWidget* k_squeezedtextlabel_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KSqueezedTextLabel*
/// @param title const char*
///
void k_squeezedtextlabel_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, const char* title)
///
void k_squeezedtextlabel_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KSqueezedTextLabel*
/// @param icon QIcon*
///
void k_squeezedtextlabel_window_icon_changed(void* self, const void* icon);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QIcon* icon)
///
void k_squeezedtextlabel_on_window_icon_changed(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KSqueezedTextLabel*
/// @param iconText const char*
///
void k_squeezedtextlabel_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, const char* iconText)
///
void k_squeezedtextlabel_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KSqueezedTextLabel*
/// @param pos QPoint*
///
void k_squeezedtextlabel_custom_context_menu_requested(void* self, const void* pos);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QPoint* pos)
///
void k_squeezedtextlabel_on_custom_context_menu_requested(void* self, void (*callback)(void*, const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self const KSqueezedTextLabel*
///
/// @return flag of enum Qt__InputMethodHint
///
int32_t k_squeezedtextlabel_input_method_hints(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KSqueezedTextLabel*
/// @param hints flag of enum Qt__InputMethodHint
///
void k_squeezedtextlabel_set_input_method_hints(void* self, int32_t hints);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSqueezedTextLabel*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
///
void k_squeezedtextlabel_render22(void* self, void* target, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSqueezedTextLabel*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_squeezedtextlabel_render3(void* self, void* target, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSqueezedTextLabel*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_squeezedtextlabel_render4(void* self, void* target, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSqueezedTextLabel*
/// @param painter QPainter*
/// @param targetOffset QPoint*
///
void k_squeezedtextlabel_render23(void* self, void* painter, const void* targetOffset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSqueezedTextLabel*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
///
void k_squeezedtextlabel_render32(void* self, void* painter, const void* targetOffset, const void* sourceRegion);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KSqueezedTextLabel*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
///
void k_squeezedtextlabel_render42(void* self, void* painter, const void* targetOffset, const void* sourceRegion, int32_t renderFlags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KSqueezedTextLabel*
/// @param rectangle QRect*
///
QPixmap* k_squeezedtextlabel_grab1(void* self, const void* rectangle);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KSqueezedTextLabel*
/// @param type enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
///
void k_squeezedtextlabel_grab_gesture2(void* self, int32_t type, int32_t flags);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KSqueezedTextLabel*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
///
int32_t k_squeezedtextlabel_grab_shortcut2(void* self, const void* key, int32_t context);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KSqueezedTextLabel*
/// @param id int
/// @param enable bool
///
void k_squeezedtextlabel_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KSqueezedTextLabel*
/// @param id int
/// @param enable bool
///
void k_squeezedtextlabel_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KSqueezedTextLabel*
/// @param param1 enum Qt__WindowType
/// @param on bool
///
void k_squeezedtextlabel_set_window_flag2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KSqueezedTextLabel*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
///
void k_squeezedtextlabel_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
///
QWidget* k_squeezedtextlabel_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
///
QWidget* k_squeezedtextlabel_create_window_container3(void* window, void* parent, int32_t flags);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const KSqueezedTextLabel*
///
const char* k_squeezedtextlabel_object_name(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KSqueezedTextLabel*
/// @param name const char*
///
void k_squeezedtextlabel_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_widget_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_window_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_is_quick_item_type(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_signals_blocked(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KSqueezedTextLabel*
/// @param b bool
///
bool k_squeezedtextlabel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self const KSqueezedTextLabel*
///
QThread* k_squeezedtextlabel_thread(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KSqueezedTextLabel*
/// @param thread QThread*
///
bool k_squeezedtextlabel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSqueezedTextLabel*
/// @param interval int
///
int32_t k_squeezedtextlabel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSqueezedTextLabel*
/// @param time int64_t of nanoseconds
///
int32_t k_squeezedtextlabel_start_timer2(void* self, int64_t time);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSqueezedTextLabel*
/// @param id int
///
void k_squeezedtextlabel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KSqueezedTextLabel*
/// @param id enum Qt__TimerId
///
void k_squeezedtextlabel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self const KSqueezedTextLabel*
///
/// @return libqt_list of QObject*
///
libqt_list k_squeezedtextlabel_children(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KSqueezedTextLabel*
/// @param filterObj QObject*
///
void k_squeezedtextlabel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KSqueezedTextLabel*
/// @param obj QObject*
///
void k_squeezedtextlabel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
QMetaObject__Connection* k_squeezedtextlabel_connect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
///
QMetaObject__Connection* k_squeezedtextlabel_connect2(const void* sender, const void* signal, const void* receiver, const void* method);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KSqueezedTextLabel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
///
QMetaObject__Connection* k_squeezedtextlabel_connect3(const void* self, const void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_squeezedtextlabel_disconnect(const void* sender, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
///
bool k_squeezedtextlabel_disconnect2(const void* sender, const void* signal, const void* receiver, const void* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_disconnect3(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSqueezedTextLabel*
/// @param receiver QObject*
///
bool k_squeezedtextlabel_disconnect4(const void* self, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
///
bool k_squeezedtextlabel_disconnect5(const void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self const KSqueezedTextLabel*
///
void k_squeezedtextlabel_dump_object_tree(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self const KSqueezedTextLabel*
///
void k_squeezedtextlabel_dump_object_info(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KSqueezedTextLabel*
/// @param name const char*
/// @param value QVariant*
///
bool k_squeezedtextlabel_set_property(void* self, const char* name, const void* value);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self const KSqueezedTextLabel*
/// @param name const char*
///
QVariant* k_squeezedtextlabel_property(const void* self, const char* name);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self const KSqueezedTextLabel*
///
const char** k_squeezedtextlabel_dynamic_property_names(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KSqueezedTextLabel*
///
QBindingStorage* k_squeezedtextlabel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self const KSqueezedTextLabel*
///
const QBindingStorage* k_squeezedtextlabel_binding_storage2(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_destroyed(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self const KSqueezedTextLabel*
///
QObject* k_squeezedtextlabel_parent(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self const KSqueezedTextLabel*
/// @param classname const char*
///
bool k_squeezedtextlabel_inherits(const void* self, const char* classname);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_delete_later(void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSqueezedTextLabel*
/// @param interval int
/// @param timerType enum Qt__TimerType
///
int32_t k_squeezedtextlabel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KSqueezedTextLabel*
/// @param time int64_t of nanoseconds
/// @param timerType enum Qt__TimerType
///
int32_t k_squeezedtextlabel_start_timer23(void* self, int64_t time, int32_t timerType);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
/// @param param5 enum Qt__ConnectionType
///
QMetaObject__Connection* k_squeezedtextlabel_connect5(const void* sender, const char* signal, const void* receiver, const char* member, int32_t param5);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_squeezedtextlabel_connect52(const void* sender, const void* signal, const void* receiver, const void* method, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self const KSqueezedTextLabel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param type enum Qt__ConnectionType
///
QMetaObject__Connection* k_squeezedtextlabel_connect4(const void* self, const void* sender, const char* signal, const char* member, int32_t type);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSqueezedTextLabel*
/// @param signal const char*
///
bool k_squeezedtextlabel_disconnect1(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSqueezedTextLabel*
/// @param signal const char*
/// @param receiver QObject*
///
bool k_squeezedtextlabel_disconnect22(const void* self, const char* signal, const void* receiver);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSqueezedTextLabel*
/// @param signal const char*
/// @param receiver QObject*
/// @param member const char*
///
bool k_squeezedtextlabel_disconnect32(const void* self, const char* signal, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param self const KSqueezedTextLabel*
/// @param receiver QObject*
/// @param member const char*
///
bool k_squeezedtextlabel_disconnect23(const void* self, const void* receiver, const char* member);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSqueezedTextLabel*
/// @param param1 QObject*
///
void k_squeezedtextlabel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QObject* param1)
///
void k_squeezedtextlabel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_painting_active(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_width_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_height_m_m(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_logical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_logical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_physical_dpi_x(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_physical_dpi_y(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self const KSqueezedTextLabel*
///
double k_squeezedtextlabel_device_pixel_ratio(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self const KSqueezedTextLabel*
///
double k_squeezedtextlabel_device_pixel_ratio_f(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_color_count(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_depth(const void* self);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_squeezedtextlabel_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
///
int32_t k_squeezedtextlabel_encode_metric_f(int32_t metric, double value);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param param1 int
///
int32_t k_squeezedtextlabel_height_for_width(const void* self, int param1);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param param1 int
///
int32_t k_squeezedtextlabel_super_height_for_width(const void* self, int param1);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback int32_t func(KSqueezedTextLabel* self, int param1)
///
void k_squeezedtextlabel_on_height_for_width(void* self, int32_t (*callback)(const void*, int));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param e QEvent*
///
bool k_squeezedtextlabel_event(void* self, void* e);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#event)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param e QEvent*
///
bool k_squeezedtextlabel_super_event(void* self, void* e);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#event)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback bool func(KSqueezedTextLabel* self, QEvent* e)
///
void k_squeezedtextlabel_on_event(void* self, bool (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QKeyEvent*
///
void k_squeezedtextlabel_key_press_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QKeyEvent*
///
void k_squeezedtextlabel_super_key_press_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QKeyEvent* ev)
///
void k_squeezedtextlabel_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param param1 QPaintEvent*
///
void k_squeezedtextlabel_paint_event(void* self, void* param1);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param param1 QPaintEvent*
///
void k_squeezedtextlabel_super_paint_event(void* self, void* param1);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QPaintEvent* param1)
///
void k_squeezedtextlabel_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param param1 QEvent*
///
void k_squeezedtextlabel_change_event(void* self, void* param1);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param param1 QEvent*
///
void k_squeezedtextlabel_super_change_event(void* self, void* param1);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QEvent* param1)
///
void k_squeezedtextlabel_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QMouseEvent*
///
void k_squeezedtextlabel_mouse_press_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QMouseEvent*
///
void k_squeezedtextlabel_super_mouse_press_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QMouseEvent* ev)
///
void k_squeezedtextlabel_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QMouseEvent*
///
void k_squeezedtextlabel_mouse_move_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QMouseEvent*
///
void k_squeezedtextlabel_super_mouse_move_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QMouseEvent* ev)
///
void k_squeezedtextlabel_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QFocusEvent*
///
void k_squeezedtextlabel_focus_in_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QFocusEvent*
///
void k_squeezedtextlabel_super_focus_in_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QFocusEvent* ev)
///
void k_squeezedtextlabel_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QFocusEvent*
///
void k_squeezedtextlabel_focus_out_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param ev QFocusEvent*
///
void k_squeezedtextlabel_super_focus_out_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QFocusEvent* ev)
///
void k_squeezedtextlabel_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param next bool
///
bool k_squeezedtextlabel_focus_next_prev_child(void* self, bool next);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param next bool
///
bool k_squeezedtextlabel_super_focus_next_prev_child(void* self, bool next);

/// Inherited from QLabel
///
/// [Upstream resources](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback bool func(KSqueezedTextLabel* self, bool next)
///
void k_squeezedtextlabel_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param option QStyleOptionFrame*
///
void k_squeezedtextlabel_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param option QStyleOptionFrame*
///
void k_squeezedtextlabel_super_init_style_option(const void* self, void* option);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QStyleOptionFrame* option)
///
void k_squeezedtextlabel_on_init_style_option(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_super_dev_type(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback int32_t func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_dev_type(void* self, int32_t (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param visible bool
///
void k_squeezedtextlabel_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param visible bool
///
void k_squeezedtextlabel_super_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, bool visible)
///
void k_squeezedtextlabel_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
bool k_squeezedtextlabel_super_has_height_for_width(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback bool func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_has_height_for_width(void* self, bool (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
QPaintEngine* k_squeezedtextlabel_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
QPaintEngine* k_squeezedtextlabel_super_paint_engine(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback QPaintEngine* func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_paint_engine(void* self, QPaintEngine* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QMouseEvent*
///
void k_squeezedtextlabel_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QMouseEvent*
///
void k_squeezedtextlabel_super_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QMouseEvent* event)
///
void k_squeezedtextlabel_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QWheelEvent*
///
void k_squeezedtextlabel_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QWheelEvent*
///
void k_squeezedtextlabel_super_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QWheelEvent* event)
///
void k_squeezedtextlabel_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QKeyEvent*
///
void k_squeezedtextlabel_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QKeyEvent*
///
void k_squeezedtextlabel_super_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QKeyEvent* event)
///
void k_squeezedtextlabel_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QEnterEvent*
///
void k_squeezedtextlabel_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QEnterEvent*
///
void k_squeezedtextlabel_super_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QEnterEvent* event)
///
void k_squeezedtextlabel_on_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QEvent*
///
void k_squeezedtextlabel_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QEvent*
///
void k_squeezedtextlabel_super_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QEvent* event)
///
void k_squeezedtextlabel_on_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QMoveEvent*
///
void k_squeezedtextlabel_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QMoveEvent*
///
void k_squeezedtextlabel_super_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QMoveEvent* event)
///
void k_squeezedtextlabel_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QCloseEvent*
///
void k_squeezedtextlabel_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QCloseEvent*
///
void k_squeezedtextlabel_super_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QCloseEvent* event)
///
void k_squeezedtextlabel_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QTabletEvent*
///
void k_squeezedtextlabel_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QTabletEvent*
///
void k_squeezedtextlabel_super_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QTabletEvent* event)
///
void k_squeezedtextlabel_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QActionEvent*
///
void k_squeezedtextlabel_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QActionEvent*
///
void k_squeezedtextlabel_super_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QActionEvent* event)
///
void k_squeezedtextlabel_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QDragEnterEvent*
///
void k_squeezedtextlabel_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QDragEnterEvent*
///
void k_squeezedtextlabel_super_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QDragEnterEvent* event)
///
void k_squeezedtextlabel_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QDragMoveEvent*
///
void k_squeezedtextlabel_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QDragMoveEvent*
///
void k_squeezedtextlabel_super_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QDragMoveEvent* event)
///
void k_squeezedtextlabel_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QDragLeaveEvent*
///
void k_squeezedtextlabel_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QDragLeaveEvent*
///
void k_squeezedtextlabel_super_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QDragLeaveEvent* event)
///
void k_squeezedtextlabel_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QDropEvent*
///
void k_squeezedtextlabel_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QDropEvent*
///
void k_squeezedtextlabel_super_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QDropEvent* event)
///
void k_squeezedtextlabel_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QShowEvent*
///
void k_squeezedtextlabel_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QShowEvent*
///
void k_squeezedtextlabel_super_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QShowEvent* event)
///
void k_squeezedtextlabel_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QHideEvent*
///
void k_squeezedtextlabel_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QHideEvent*
///
void k_squeezedtextlabel_super_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QHideEvent* event)
///
void k_squeezedtextlabel_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_squeezedtextlabel_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param eventType char*
/// @param message void*
/// @param result intptr_t*
///
bool k_squeezedtextlabel_super_native_event(void* self, char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback bool func(KSqueezedTextLabel* self, libqt_string eventType, void* message, intptr_t* result)
///
void k_squeezedtextlabel_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_squeezedtextlabel_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
///
int32_t k_squeezedtextlabel_super_metric(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback int32_t func(KSqueezedTextLabel* self, enum QPaintDevice__PaintDeviceMetric param1)
///
void k_squeezedtextlabel_on_metric(void* self, int32_t (*callback)(const void*, int32_t));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param painter QPainter*
///
void k_squeezedtextlabel_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param painter QPainter*
///
void k_squeezedtextlabel_super_init_painter(const void* self, void* painter);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QPainter* painter)
///
void k_squeezedtextlabel_on_init_painter(void* self, void (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param offset QPoint*
///
QPaintDevice* k_squeezedtextlabel_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param offset QPoint*
///
QPaintDevice* k_squeezedtextlabel_super_redirected(const void* self, void* offset);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback QPaintDevice* func(KSqueezedTextLabel* self, QPoint* offset)
///
void k_squeezedtextlabel_on_redirected(void* self, QPaintDevice* (*callback)(const void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
QPainter* k_squeezedtextlabel_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
QPainter* k_squeezedtextlabel_super_shared_painter(const void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback QPainter* func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_shared_painter(void* self, QPainter* (*callback)(const void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param param1 QInputMethodEvent*
///
void k_squeezedtextlabel_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param param1 QInputMethodEvent*
///
void k_squeezedtextlabel_super_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QInputMethodEvent* param1)
///
void k_squeezedtextlabel_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_squeezedtextlabel_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param param1 enum Qt__InputMethodQuery
///
QVariant* k_squeezedtextlabel_super_input_method_query(const void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback QVariant* func(KSqueezedTextLabel* self, enum Qt__InputMethodQuery param1)
///
/// @warning Memory for the returned type of the callback is freed by the library.
///
void k_squeezedtextlabel_on_input_method_query(void* self, QVariant* (*callback)(const void*, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_squeezedtextlabel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param watched QObject*
/// @param event QEvent*
///
bool k_squeezedtextlabel_super_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback bool func(KSqueezedTextLabel* self, QObject* watched, QEvent* event)
///
void k_squeezedtextlabel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QTimerEvent*
///
void k_squeezedtextlabel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QTimerEvent*
///
void k_squeezedtextlabel_super_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QTimerEvent* event)
///
void k_squeezedtextlabel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QChildEvent*
///
void k_squeezedtextlabel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QChildEvent*
///
void k_squeezedtextlabel_super_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QChildEvent* event)
///
void k_squeezedtextlabel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QEvent*
///
void k_squeezedtextlabel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param event QEvent*
///
void k_squeezedtextlabel_super_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QEvent* event)
///
void k_squeezedtextlabel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param signal QMetaMethod*
///
void k_squeezedtextlabel_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param signal QMetaMethod*
///
void k_squeezedtextlabel_super_connect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QMetaMethod* signal)
///
void k_squeezedtextlabel_on_connect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param signal QMetaMethod*
///
void k_squeezedtextlabel_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param signal QMetaMethod*
///
void k_squeezedtextlabel_super_disconnect_notify(void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QMetaMethod* signal)
///
void k_squeezedtextlabel_on_disconnect_notify(void* self, void (*callback)(void*, const void*));

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param param1 QPainter*
///
void k_squeezedtextlabel_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param param1 QPainter*
///
void k_squeezedtextlabel_super_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, QPainter* param1)
///
void k_squeezedtextlabel_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_super_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_update_micro_focus(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_super_create(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_create(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_super_destroy(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_destroy(void* self, void (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
bool k_squeezedtextlabel_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
bool k_squeezedtextlabel_super_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback bool func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_focus_next_child(void* self, bool (*callback)(void*));

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
bool k_squeezedtextlabel_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
///
bool k_squeezedtextlabel_super_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback bool func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_focus_previous_child(void* self, bool (*callback)(void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
QObject* k_squeezedtextlabel_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
QObject* k_squeezedtextlabel_super_sender(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback QObject* func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_sender(void* self, QObject* (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
///
int32_t k_squeezedtextlabel_super_sender_signal_index(const void* self);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback int32_t func(KSqueezedTextLabel* self)
///
void k_squeezedtextlabel_on_sender_signal_index(void* self, int32_t (*callback)(const void*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param signal const char*
///
int32_t k_squeezedtextlabel_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param signal const char*
///
int32_t k_squeezedtextlabel_super_receivers(const void* self, const char* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback int32_t func(KSqueezedTextLabel* self, const char* signal)
///
void k_squeezedtextlabel_on_receivers(void* self, int32_t (*callback)(const void*, const char*));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param signal QMetaMethod*
///
bool k_squeezedtextlabel_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param signal QMetaMethod*
///
bool k_squeezedtextlabel_super_is_signal_connected(const void* self, const void* signal);

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback bool func(KSqueezedTextLabel* self, QMetaMethod* signal)
///
void k_squeezedtextlabel_on_is_signal_connected(void* self, bool (*callback)(const void*, const void*));

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_squeezedtextlabel_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self const KSqueezedTextLabel*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
///
double k_squeezedtextlabel_super_get_decoded_metric_f(const void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KSqueezedTextLabel*
/// @param callback double func(KSqueezedTextLabel* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
///
void k_squeezedtextlabel_on_get_decoded_metric_f(void* self, double (*callback)(const void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KSqueezedTextLabel*
/// @param callback void func(KSqueezedTextLabel* self, const char* objectName)
///
void k_squeezedtextlabel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Upstream resources](https://api.kde.org/ksqueezedtextlabel.html#dtor.KSqueezedTextLabel)
///
/// Delete this object from C++ memory.
///
/// @param self KSqueezedTextLabel*
///
void k_squeezedtextlabel_delete(void* self);

#endif
