#pragma once
#ifndef SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKURLLABEL_H
#define SRC_EXTRAS_KWIDGETSADDONSQT6C_LIBKURLLABEL_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://api-staging.kde.org/kurllabel.html

/// k_urllabel_new constructs a new KUrlLabel object.
///
/// @param parent QWidget*
KUrlLabel* k_urllabel_new(void* parent);

/// k_urllabel_new2 constructs a new KUrlLabel object.
///
KUrlLabel* k_urllabel_new2();

/// k_urllabel_new3 constructs a new KUrlLabel object.
///
/// @param url const char*
KUrlLabel* k_urllabel_new3(const char* url);

/// k_urllabel_new4 constructs a new KUrlLabel object.
///
/// @param url const char*
/// @param text const char*
KUrlLabel* k_urllabel_new4(const char* url, const char* text);

/// k_urllabel_new5 constructs a new KUrlLabel object.
///
/// @param url const char*
/// @param text const char*
/// @param parent QWidget*
KUrlLabel* k_urllabel_new5(const char* url, const char* text, void* parent);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#metaObject)
///
/// @param self KUrlLabel*
const QMetaObject* k_urllabel_meta_object(void* self);

/// @param self KUrlLabel*
/// @param param1 const char*
void* k_urllabel_metacast(void* self, const char* param1);

/// @param self KUrlLabel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_urllabel_metacall(void* self, int32_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// @param self KUrlLabel*
/// @param callback int32_t func(KUrlLabel* self, enum QMetaObject__Call param1, int param2, void* param3)
void k_urllabel_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*));

/// Base class method implementation
///
/// @param self KUrlLabel*
/// @param param1 enum QMetaObject__Call
/// @param param2 int
/// @param param3 void*
int32_t k_urllabel_qbase_metacall(void* self, int32_t param1, int param2, void* param3);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
const char* k_urllabel_tr(const char* s);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#url)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#tipText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_tip_text(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#useTips)
///
/// @param self KUrlLabel*
bool k_urllabel_use_tips(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#useCursor)
///
/// @param self KUrlLabel*
bool k_urllabel_use_cursor(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#isGlowEnabled)
///
/// @param self KUrlLabel*
bool k_urllabel_is_glow_enabled(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#isFloatEnabled)
///
/// @param self KUrlLabel*
bool k_urllabel_is_float_enabled(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#alternatePixmap)
///
/// @param self KUrlLabel*
const QPixmap* k_urllabel_alternate_pixmap(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setUnderline)
///
/// @param self KUrlLabel*
void k_urllabel_set_underline(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setUrl)
///
/// @param self KUrlLabel*
/// @param url const char*
void k_urllabel_set_url(void* self, const char* url);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setFont)
///
/// @param self KUrlLabel*
/// @param font QFont*
void k_urllabel_set_font(void* self, void* font);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setFont)
///
/// Allows for overriding the related default method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QFont* font)
void k_urllabel_on_set_font(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setFont)
///
/// Base class method implementation
///
/// @param self KUrlLabel*
/// @param font QFont*
void k_urllabel_qbase_set_font(void* self, void* font);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setUseTips)
///
/// @param self KUrlLabel*
void k_urllabel_set_use_tips(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setTipText)
///
/// @param self KUrlLabel*
/// @param tip const char*
void k_urllabel_set_tip_text(void* self, const char* tip);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setHighlightedColor)
///
/// @param self KUrlLabel*
/// @param highcolor QColor*
void k_urllabel_set_highlighted_color(void* self, void* highcolor);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setHighlightedColor)
///
/// @param self KUrlLabel*
/// @param highcolor const char*
void k_urllabel_set_highlighted_color2(void* self, const char* highcolor);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setSelectedColor)
///
/// @param self KUrlLabel*
/// @param color QColor*
void k_urllabel_set_selected_color(void* self, void* color);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setSelectedColor)
///
/// @param self KUrlLabel*
/// @param color const char*
void k_urllabel_set_selected_color2(void* self, const char* color);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setUseCursor)
///
/// @param self KUrlLabel*
/// @param on bool
void k_urllabel_set_use_cursor(void* self, bool on);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setGlowEnabled)
///
/// @param self KUrlLabel*
void k_urllabel_set_glow_enabled(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setFloatEnabled)
///
/// @param self KUrlLabel*
void k_urllabel_set_float_enabled(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setAlternatePixmap)
///
/// @param self KUrlLabel*
/// @param pixmap QPixmap*
void k_urllabel_set_alternate_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#enteredUrl)
///
/// @param self KUrlLabel*
void k_urllabel_entered_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#enteredUrl)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self)
void k_urllabel_on_entered_url(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#leftUrl)
///
/// @param self KUrlLabel*
void k_urllabel_left_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#leftUrl)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self)
void k_urllabel_on_left_url(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#leftClickedUrl)
///
/// @param self KUrlLabel*
void k_urllabel_left_clicked_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#leftClickedUrl)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self)
void k_urllabel_on_left_clicked_url(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#rightClickedUrl)
///
/// @param self KUrlLabel*
void k_urllabel_right_clicked_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#rightClickedUrl)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self)
void k_urllabel_on_right_clicked_url(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#middleClickedUrl)
///
/// @param self KUrlLabel*
void k_urllabel_middle_clicked_url(void* self);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#middleClickedUrl)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self)
void k_urllabel_on_middle_clicked_url(void* self, void (*callback)(void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#mouseReleaseEvent)
///
/// @param self KUrlLabel*
/// @param param1 QMouseEvent*
void k_urllabel_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#mouseReleaseEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QMouseEvent* param1)
void k_urllabel_on_mouse_release_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#mouseReleaseEvent)
///
/// Base class method implementation
///
/// @param self KUrlLabel*
/// @param param1 QMouseEvent*
void k_urllabel_qbase_mouse_release_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#enterEvent)
///
/// @param self KUrlLabel*
/// @param event QEnterEvent*
void k_urllabel_enter_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#enterEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QEnterEvent* event)
void k_urllabel_on_enter_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#enterEvent)
///
/// Base class method implementation
///
/// @param self KUrlLabel*
/// @param event QEnterEvent*
void k_urllabel_qbase_enter_event(void* self, void* event);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#leaveEvent)
///
/// @param self KUrlLabel*
/// @param param1 QEvent*
void k_urllabel_leave_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#leaveEvent)
///
/// Allows for overriding the related default method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QEvent* param1)
void k_urllabel_on_leave_event(void* self, void (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#leaveEvent)
///
/// Base class method implementation
///
/// @param self KUrlLabel*
/// @param param1 QEvent*
void k_urllabel_qbase_leave_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#event)
///
/// @param self KUrlLabel*
/// @param param1 QEvent*
bool k_urllabel_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#event)
///
/// Allows for overriding the related default method
///
/// @param self KUrlLabel*
/// @param callback bool func(KUrlLabel* self, QEvent* param1)
void k_urllabel_on_event(void* self, bool (*callback)(void*, void*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#event)
///
/// Base class method implementation
///
/// @param self KUrlLabel*
/// @param param1 QEvent*
bool k_urllabel_qbase_event(void* self, void* param1);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
const char* k_urllabel_tr2(const char* s, const char* c);

/// [Qt documentation](https://api-staging.kde.org/qobject.html#tr)
///
/// Caller is responsible for freeing the returned memory
///
/// @param s const char*
/// @param c const char*
/// @param n int
const char* k_urllabel_tr3(const char* s, const char* c, int n);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setUnderline)
///
/// @param self KUrlLabel*
/// @param on bool
void k_urllabel_set_underline1(void* self, bool on);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setUseTips)
///
/// @param self KUrlLabel*
/// @param on bool
void k_urllabel_set_use_tips1(void* self, bool on);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setUseCursor)
///
/// @param self KUrlLabel*
/// @param on bool
/// @param cursor QCursor*
void k_urllabel_set_use_cursor2(void* self, bool on, void* cursor);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setGlowEnabled)
///
/// @param self KUrlLabel*
/// @param glow bool
void k_urllabel_set_glow_enabled1(void* self, bool glow);

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#setFloatEnabled)
///
/// @param self KUrlLabel*
/// @param do_float bool
void k_urllabel_set_float_enabled1(void* self, bool do_float);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#text)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_text(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#pixmap)
///
/// @param self KUrlLabel*
/// @param param1 enum Qt__ReturnByValueConstant
QPixmap* k_urllabel_pixmap(void* self, int32_t param1);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#pixmap)
///
/// @param self KUrlLabel*
QPixmap* k_urllabel_pixmap2(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#picture)
///
/// @param self KUrlLabel*
/// @param param1 enum Qt__ReturnByValueConstant
QPicture* k_urllabel_picture(void* self, int32_t param1);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#picture)
///
/// @param self KUrlLabel*
QPicture* k_urllabel_picture2(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#movie)
///
/// @param self KUrlLabel*
QMovie* k_urllabel_movie(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#textFormat)
///
/// @param self KUrlLabel*
///
/// @return enum Qt__TextFormat
int32_t k_urllabel_text_format(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setTextFormat)
///
/// @param self KUrlLabel*
/// @param textFormat enum Qt__TextFormat
void k_urllabel_set_text_format(void* self, int32_t textFormat);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#alignment)
///
/// @param self KUrlLabel*
///
/// @return flag of enum Qt__AlignmentFlag
int64_t k_urllabel_alignment(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setAlignment)
///
/// @param self KUrlLabel*
/// @param alignment flag of enum Qt__AlignmentFlag
void k_urllabel_set_alignment(void* self, int64_t alignment);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setWordWrap)
///
/// @param self KUrlLabel*
/// @param on bool
void k_urllabel_set_word_wrap(void* self, bool on);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#wordWrap)
///
/// @param self KUrlLabel*
bool k_urllabel_word_wrap(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#indent)
///
/// @param self KUrlLabel*
int32_t k_urllabel_indent(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setIndent)
///
/// @param self KUrlLabel*
/// @param indent int
void k_urllabel_set_indent(void* self, int indent);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#margin)
///
/// @param self KUrlLabel*
int32_t k_urllabel_margin(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setMargin)
///
/// @param self KUrlLabel*
/// @param margin int
void k_urllabel_set_margin(void* self, int margin);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#hasScaledContents)
///
/// @param self KUrlLabel*
bool k_urllabel_has_scaled_contents(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setScaledContents)
///
/// @param self KUrlLabel*
/// @param scaledContents bool
void k_urllabel_set_scaled_contents(void* self, bool scaledContents);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setBuddy)
///
/// @param self KUrlLabel*
/// @param buddy QWidget*
void k_urllabel_set_buddy(void* self, void* buddy);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#buddy)
///
/// @param self KUrlLabel*
QWidget* k_urllabel_buddy(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#openExternalLinks)
///
/// @param self KUrlLabel*
bool k_urllabel_open_external_links(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setOpenExternalLinks)
///
/// @param self KUrlLabel*
/// @param open bool
void k_urllabel_set_open_external_links(void* self, bool open);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setTextInteractionFlags)
///
/// @param self KUrlLabel*
/// @param flags flag of enum Qt__TextInteractionFlag
void k_urllabel_set_text_interaction_flags(void* self, int64_t flags);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#textInteractionFlags)
///
/// @param self KUrlLabel*
///
/// @return flag of enum Qt__TextInteractionFlag
int64_t k_urllabel_text_interaction_flags(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setSelection)
///
/// @param self KUrlLabel*
/// @param param1 int
/// @param param2 int
void k_urllabel_set_selection(void* self, int param1, int param2);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#hasSelectedText)
///
/// @param self KUrlLabel*
bool k_urllabel_has_selected_text(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#selectedText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_selected_text(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#selectionStart)
///
/// @param self KUrlLabel*
int32_t k_urllabel_selection_start(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setText)
///
/// @param self KUrlLabel*
/// @param text const char*
void k_urllabel_set_text(void* self, const char* text);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setPixmap)
///
/// @param self KUrlLabel*
/// @param pixmap QPixmap*
void k_urllabel_set_pixmap(void* self, void* pixmap);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setPicture)
///
/// @param self KUrlLabel*
/// @param picture QPicture*
void k_urllabel_set_picture(void* self, void* picture);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setMovie)
///
/// @param self KUrlLabel*
/// @param movie QMovie*
void k_urllabel_set_movie(void* self, void* movie);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setNum)
///
/// @param self KUrlLabel*
/// @param num int
void k_urllabel_set_num(void* self, int num);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setNum)
///
/// @param self KUrlLabel*
/// @param num double
void k_urllabel_set_num2(void* self, double num);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#clear)
///
/// @param self KUrlLabel*
void k_urllabel_clear(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#linkActivated)
///
/// @param self KUrlLabel*
/// @param link const char*
void k_urllabel_link_activated(void* self, const char* link);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#linkActivated)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, const char* link)
void k_urllabel_on_link_activated(void* self, void (*callback)(void*, const char*));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#linkHovered)
///
/// @param self KUrlLabel*
/// @param link const char*
void k_urllabel_link_hovered(void* self, const char* link);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#linkHovered)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, const char* link)
void k_urllabel_on_link_hovered(void* self, void (*callback)(void*, const char*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// @param self KUrlLabel*
int32_t k_urllabel_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// @param self KUrlLabel*
/// @param frameStyle int
void k_urllabel_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// @param self KUrlLabel*
int32_t k_urllabel_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// @param self KUrlLabel*
///
/// @return enum QFrame__Shape
int32_t k_urllabel_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// @param self KUrlLabel*
/// @param frameShape enum QFrame__Shape
void k_urllabel_set_frame_shape(void* self, int32_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// @param self KUrlLabel*
///
/// @return enum QFrame__Shadow
int32_t k_urllabel_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// @param self KUrlLabel*
/// @param frameShadow enum QFrame__Shadow
void k_urllabel_set_frame_shadow(void* self, int32_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// @param self KUrlLabel*
int32_t k_urllabel_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// @param self KUrlLabel*
/// @param lineWidth int
void k_urllabel_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// @param self KUrlLabel*
int32_t k_urllabel_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// @param self KUrlLabel*
/// @param midLineWidth int
void k_urllabel_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// @param self KUrlLabel*
QRect* k_urllabel_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// @param self KUrlLabel*
/// @param frameRect QRect*
void k_urllabel_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// @param self KUrlLabel*
uintptr_t k_urllabel_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// @param self KUrlLabel*
void k_urllabel_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// @param self KUrlLabel*
uintptr_t k_urllabel_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// @param self KUrlLabel*
uintptr_t k_urllabel_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// @param self KUrlLabel*
QStyle* k_urllabel_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// @param self KUrlLabel*
/// @param style QStyle*
void k_urllabel_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// @param self KUrlLabel*
bool k_urllabel_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// @param self KUrlLabel*
bool k_urllabel_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// @param self KUrlLabel*
bool k_urllabel_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// @param self KUrlLabel*
///
/// @return enum Qt__WindowModality
int32_t k_urllabel_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// @param self KUrlLabel*
/// @param windowModality enum Qt__WindowModality
void k_urllabel_set_window_modality(void* self, int32_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// @param self KUrlLabel*
bool k_urllabel_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// @param self KUrlLabel*
/// @param param1 QWidget*
bool k_urllabel_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// @param self KUrlLabel*
/// @param enabled bool
void k_urllabel_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// @param self KUrlLabel*
/// @param disabled bool
void k_urllabel_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// @param self KUrlLabel*
/// @param windowModified bool
void k_urllabel_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// @param self KUrlLabel*
QRect* k_urllabel_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// @param self KUrlLabel*
const QRect* k_urllabel_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// @param self KUrlLabel*
QRect* k_urllabel_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// @param self KUrlLabel*
int32_t k_urllabel_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// @param self KUrlLabel*
int32_t k_urllabel_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// @param self KUrlLabel*
QPoint* k_urllabel_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// @param self KUrlLabel*
QSize* k_urllabel_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// @param self KUrlLabel*
QSize* k_urllabel_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// @param self KUrlLabel*
int32_t k_urllabel_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// @param self KUrlLabel*
int32_t k_urllabel_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// @param self KUrlLabel*
QRect* k_urllabel_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// @param self KUrlLabel*
QRect* k_urllabel_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// @param self KUrlLabel*
QRegion* k_urllabel_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// @param self KUrlLabel*
QSize* k_urllabel_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// @param self KUrlLabel*
QSize* k_urllabel_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// @param self KUrlLabel*
int32_t k_urllabel_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// @param self KUrlLabel*
int32_t k_urllabel_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// @param self KUrlLabel*
int32_t k_urllabel_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// @param self KUrlLabel*
int32_t k_urllabel_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlLabel*
/// @param minimumSize QSize*
void k_urllabel_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// @param self KUrlLabel*
/// @param minw int
/// @param minh int
void k_urllabel_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlLabel*
/// @param maximumSize QSize*
void k_urllabel_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// @param self KUrlLabel*
/// @param maxw int
/// @param maxh int
void k_urllabel_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// @param self KUrlLabel*
/// @param minw int
void k_urllabel_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// @param self KUrlLabel*
/// @param minh int
void k_urllabel_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// @param self KUrlLabel*
/// @param maxw int
void k_urllabel_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// @param self KUrlLabel*
/// @param maxh int
void k_urllabel_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// @param self KUrlLabel*
QSize* k_urllabel_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlLabel*
/// @param sizeIncrement QSize*
void k_urllabel_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// @param self KUrlLabel*
/// @param w int
/// @param h int
void k_urllabel_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// @param self KUrlLabel*
QSize* k_urllabel_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlLabel*
/// @param baseSize QSize*
void k_urllabel_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// @param self KUrlLabel*
/// @param basew int
/// @param baseh int
void k_urllabel_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlLabel*
/// @param fixedSize QSize*
void k_urllabel_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// @param self KUrlLabel*
/// @param w int
/// @param h int
void k_urllabel_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// @param self KUrlLabel*
/// @param w int
void k_urllabel_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// @param self KUrlLabel*
/// @param h int
void k_urllabel_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlLabel*
/// @param param1 QPointF*
QPointF* k_urllabel_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// @param self KUrlLabel*
/// @param param1 QPoint*
QPoint* k_urllabel_map_to_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlLabel*
/// @param param1 QPointF*
QPointF* k_urllabel_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// @param self KUrlLabel*
/// @param param1 QPoint*
QPoint* k_urllabel_map_from_global2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlLabel*
/// @param param1 QPointF*
QPointF* k_urllabel_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// @param self KUrlLabel*
/// @param param1 QPoint*
QPoint* k_urllabel_map_to_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlLabel*
/// @param param1 QPointF*
QPointF* k_urllabel_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// @param self KUrlLabel*
/// @param param1 QPoint*
QPoint* k_urllabel_map_from_parent2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlLabel*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_urllabel_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// @param self KUrlLabel*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_urllabel_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlLabel*
/// @param param1 QWidget*
/// @param param2 QPointF*
QPointF* k_urllabel_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// @param self KUrlLabel*
/// @param param1 QWidget*
/// @param param2 QPoint*
QPoint* k_urllabel_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// @param self KUrlLabel*
QWidget* k_urllabel_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// @param self KUrlLabel*
QWidget* k_urllabel_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// @param self KUrlLabel*
QWidget* k_urllabel_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// @param self KUrlLabel*
const QPalette* k_urllabel_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// @param self KUrlLabel*
/// @param palette QPalette*
void k_urllabel_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// @param self KUrlLabel*
/// @param backgroundRole enum QPalette__ColorRole
void k_urllabel_set_background_role(void* self, int32_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// @param self KUrlLabel*
///
/// @return enum QPalette__ColorRole
int32_t k_urllabel_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// @param self KUrlLabel*
/// @param foregroundRole enum QPalette__ColorRole
void k_urllabel_set_foreground_role(void* self, int32_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// @param self KUrlLabel*
///
/// @return enum QPalette__ColorRole
int32_t k_urllabel_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// @param self KUrlLabel*
const QFont* k_urllabel_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// @param self KUrlLabel*
QFontMetrics* k_urllabel_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// @param self KUrlLabel*
QFontInfo* k_urllabel_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// @param self KUrlLabel*
QCursor* k_urllabel_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// @param self KUrlLabel*
/// @param cursor QCursor*
void k_urllabel_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// @param self KUrlLabel*
void k_urllabel_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// @param self KUrlLabel*
/// @param enable bool
void k_urllabel_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// @param self KUrlLabel*
bool k_urllabel_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// @param self KUrlLabel*
bool k_urllabel_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// @param self KUrlLabel*
/// @param enable bool
void k_urllabel_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// @param self KUrlLabel*
bool k_urllabel_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlLabel*
/// @param mask QBitmap*
void k_urllabel_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// @param self KUrlLabel*
/// @param mask QRegion*
void k_urllabel_set_mask2(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// @param self KUrlLabel*
QRegion* k_urllabel_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// @param self KUrlLabel*
void k_urllabel_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlLabel*
/// @param target QPaintDevice*
void k_urllabel_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlLabel*
/// @param painter QPainter*
void k_urllabel_render2(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlLabel*
QPixmap* k_urllabel_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// @param self KUrlLabel*
QGraphicsEffect* k_urllabel_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// @param self KUrlLabel*
/// @param effect QGraphicsEffect*
void k_urllabel_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlLabel*
/// @param typeVal enum Qt__GestureType
void k_urllabel_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// @param self KUrlLabel*
/// @param typeVal enum Qt__GestureType
void k_urllabel_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// @param self KUrlLabel*
/// @param windowTitle const char*
void k_urllabel_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// @param self KUrlLabel*
/// @param styleSheet const char*
void k_urllabel_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// @param self KUrlLabel*
/// @param icon QIcon*
void k_urllabel_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// @param self KUrlLabel*
QIcon* k_urllabel_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// @param self KUrlLabel*
/// @param windowIconText const char*
void k_urllabel_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// @param self KUrlLabel*
/// @param windowRole const char*
void k_urllabel_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// @param self KUrlLabel*
/// @param filePath const char*
void k_urllabel_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// @param self KUrlLabel*
/// @param level double
void k_urllabel_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// @param self KUrlLabel*
double k_urllabel_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// @param self KUrlLabel*
bool k_urllabel_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// @param self KUrlLabel*
/// @param toolTip const char*
void k_urllabel_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// @param self KUrlLabel*
/// @param msec int
void k_urllabel_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// @param self KUrlLabel*
int32_t k_urllabel_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// @param self KUrlLabel*
/// @param statusTip const char*
void k_urllabel_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// @param self KUrlLabel*
/// @param whatsThis const char*
void k_urllabel_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// @param self KUrlLabel*
/// @param name const char*
void k_urllabel_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// @param self KUrlLabel*
/// @param description const char*
void k_urllabel_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// @param self KUrlLabel*
/// @param direction enum Qt__LayoutDirection
void k_urllabel_set_layout_direction(void* self, int32_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// @param self KUrlLabel*
///
/// @return enum Qt__LayoutDirection
int32_t k_urllabel_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// @param self KUrlLabel*
void k_urllabel_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// @param self KUrlLabel*
/// @param locale QLocale*
void k_urllabel_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// @param self KUrlLabel*
QLocale* k_urllabel_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// @param self KUrlLabel*
void k_urllabel_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// @param self KUrlLabel*
bool k_urllabel_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// @param self KUrlLabel*
bool k_urllabel_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KUrlLabel*
void k_urllabel_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// @param self KUrlLabel*
bool k_urllabel_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// @param self KUrlLabel*
void k_urllabel_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// @param self KUrlLabel*
void k_urllabel_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// @param self KUrlLabel*
/// @param reason enum Qt__FocusReason
void k_urllabel_set_focus2(void* self, int32_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// @param self KUrlLabel*
///
/// @return enum Qt__FocusPolicy
int32_t k_urllabel_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// @param self KUrlLabel*
/// @param policy enum Qt__FocusPolicy
void k_urllabel_set_focus_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// @param self KUrlLabel*
bool k_urllabel_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// @param param1 QWidget*
/// @param param2 QWidget*
void k_urllabel_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// @param self KUrlLabel*
/// @param focusProxy QWidget*
void k_urllabel_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// @param self KUrlLabel*
QWidget* k_urllabel_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// @param self KUrlLabel*
///
/// @return enum Qt__ContextMenuPolicy
int32_t k_urllabel_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// @param self KUrlLabel*
/// @param policy enum Qt__ContextMenuPolicy
void k_urllabel_set_context_menu_policy(void* self, int32_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlLabel*
void k_urllabel_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// @param self KUrlLabel*
/// @param param1 QCursor*
void k_urllabel_grab_mouse2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// @param self KUrlLabel*
void k_urllabel_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// @param self KUrlLabel*
void k_urllabel_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// @param self KUrlLabel*
void k_urllabel_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlLabel*
/// @param key QKeySequence*
int32_t k_urllabel_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// @param self KUrlLabel*
/// @param id int
void k_urllabel_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlLabel*
/// @param id int
void k_urllabel_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlLabel*
/// @param id int
void k_urllabel_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
QWidget* k_urllabel_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
QWidget* k_urllabel_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// @param self KUrlLabel*
bool k_urllabel_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// @param self KUrlLabel*
/// @param enable bool
void k_urllabel_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// @param self KUrlLabel*
QGraphicsProxyWidget* k_urllabel_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlLabel*
void k_urllabel_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlLabel*
void k_urllabel_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlLabel*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_urllabel_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlLabel*
/// @param param1 QRect*
void k_urllabel_update3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// @param self KUrlLabel*
/// @param param1 QRegion*
void k_urllabel_update4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlLabel*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_urllabel_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlLabel*
/// @param param1 QRect*
void k_urllabel_repaint3(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// @param self KUrlLabel*
/// @param param1 QRegion*
void k_urllabel_repaint4(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// @param self KUrlLabel*
/// @param hidden bool
void k_urllabel_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// @param self KUrlLabel*
void k_urllabel_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// @param self KUrlLabel*
void k_urllabel_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// @param self KUrlLabel*
void k_urllabel_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// @param self KUrlLabel*
void k_urllabel_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// @param self KUrlLabel*
void k_urllabel_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// @param self KUrlLabel*
void k_urllabel_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// @param self KUrlLabel*
bool k_urllabel_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// @param self KUrlLabel*
void k_urllabel_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// @param self KUrlLabel*
void k_urllabel_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// @param self KUrlLabel*
/// @param param1 QWidget*
void k_urllabel_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlLabel*
/// @param x int
/// @param y int
void k_urllabel_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// @param self KUrlLabel*
/// @param param1 QPoint*
void k_urllabel_move2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlLabel*
/// @param w int
/// @param h int
void k_urllabel_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// @param self KUrlLabel*
/// @param param1 QSize*
void k_urllabel_resize2(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlLabel*
/// @param x int
/// @param y int
/// @param w int
/// @param h int
void k_urllabel_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// @param self KUrlLabel*
/// @param geometry QRect*
void k_urllabel_set_geometry2(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
char* k_urllabel_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// @param self KUrlLabel*
/// @param geometry const char*
bool k_urllabel_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// @param self KUrlLabel*
void k_urllabel_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// @param self KUrlLabel*
bool k_urllabel_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// @param self KUrlLabel*
/// @param param1 QWidget*
bool k_urllabel_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// @param self KUrlLabel*
bool k_urllabel_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// @param self KUrlLabel*
bool k_urllabel_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// @param self KUrlLabel*
bool k_urllabel_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// @param self KUrlLabel*
bool k_urllabel_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// @param self KUrlLabel*
///
/// @return flag of enum Qt__WindowState
int64_t k_urllabel_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// @param self KUrlLabel*
/// @param state flag of enum Qt__WindowState
void k_urllabel_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// @param self KUrlLabel*
/// @param state flag of enum Qt__WindowState
void k_urllabel_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// @param self KUrlLabel*
QSizePolicy* k_urllabel_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlLabel*
/// @param sizePolicy QSizePolicy*
void k_urllabel_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// @param self KUrlLabel*
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
void k_urllabel_set_size_policy2(void* self, int32_t horizontal, int32_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// @param self KUrlLabel*
QRegion* k_urllabel_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlLabel*
/// @param left int
/// @param top int
/// @param right int
/// @param bottom int
void k_urllabel_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// @param self KUrlLabel*
/// @param margins QMargins*
void k_urllabel_set_contents_margins2(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// @param self KUrlLabel*
QMargins* k_urllabel_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// @param self KUrlLabel*
QRect* k_urllabel_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// @param self KUrlLabel*
QLayout* k_urllabel_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// @param self KUrlLabel*
/// @param layout QLayout*
void k_urllabel_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// @param self KUrlLabel*
void k_urllabel_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlLabel*
/// @param parent QWidget*
void k_urllabel_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// @param self KUrlLabel*
/// @param parent QWidget*
/// @param f flag of enum Qt__WindowType
void k_urllabel_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlLabel*
/// @param dx int
/// @param dy int
void k_urllabel_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// @param self KUrlLabel*
/// @param dx int
/// @param dy int
/// @param param3 QRect*
void k_urllabel_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// @param self KUrlLabel*
QWidget* k_urllabel_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// @param self KUrlLabel*
QWidget* k_urllabel_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// @param self KUrlLabel*
QWidget* k_urllabel_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// @param self KUrlLabel*
bool k_urllabel_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// @param self KUrlLabel*
/// @param on bool
void k_urllabel_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlLabel*
/// @param action QAction*
void k_urllabel_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// @param self KUrlLabel*
/// @param actions libqt_list /* of QAction* */
void k_urllabel_add_actions(void* self, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// @param self KUrlLabel*
/// @param before QAction*
/// @param actions libqt_list /* of QAction* */
void k_urllabel_insert_actions(void* self, void* before, libqt_list actions);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// @param self KUrlLabel*
/// @param before QAction*
/// @param action QAction*
void k_urllabel_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// @param self KUrlLabel*
/// @param action QAction*
void k_urllabel_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// @param self KUrlLabel*
libqt_list /* of QAction* */ k_urllabel_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlLabel*
/// @param text const char*
QAction* k_urllabel_add_action2(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlLabel*
/// @param icon QIcon*
/// @param text const char*
QAction* k_urllabel_add_action3(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlLabel*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_urllabel_add_action4(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// @param self KUrlLabel*
/// @param icon QIcon*
/// @param text const char*
/// @param shortcut QKeySequence*
QAction* k_urllabel_add_action5(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// @param self KUrlLabel*
QWidget* k_urllabel_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// @param self KUrlLabel*
/// @param typeVal flag of enum Qt__WindowType
void k_urllabel_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// @param self KUrlLabel*
///
/// @return flag of enum Qt__WindowType
int64_t k_urllabel_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlLabel*
/// @param param1 enum Qt__WindowType
void k_urllabel_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// @param self KUrlLabel*
/// @param typeVal flag of enum Qt__WindowType
void k_urllabel_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// @param self KUrlLabel*
///
/// @return enum Qt__WindowType
int64_t k_urllabel_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// @param param1 uint64_t
QWidget* k_urllabel_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlLabel*
/// @param x int
/// @param y int
QWidget* k_urllabel_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlLabel*
/// @param p QPoint*
QWidget* k_urllabel_child_at2(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// @param self KUrlLabel*
/// @param p QPointF*
QWidget* k_urllabel_child_at3(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlLabel*
/// @param param1 enum Qt__WidgetAttribute
void k_urllabel_set_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// @param self KUrlLabel*
/// @param param1 enum Qt__WidgetAttribute
bool k_urllabel_test_attribute(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// @param self KUrlLabel*
void k_urllabel_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// @param self KUrlLabel*
/// @param child QWidget*
bool k_urllabel_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// @param self KUrlLabel*
bool k_urllabel_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// @param self KUrlLabel*
/// @param enabled bool
void k_urllabel_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// @param self KUrlLabel*
QBackingStore* k_urllabel_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// @param self KUrlLabel*
QWindow* k_urllabel_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// @param self KUrlLabel*
QScreen* k_urllabel_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// @param self KUrlLabel*
/// @param screen QScreen*
void k_urllabel_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
QWidget* k_urllabel_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlLabel*
/// @param title const char*
void k_urllabel_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, const char* title)
void k_urllabel_on_window_title_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlLabel*
/// @param icon QIcon*
void k_urllabel_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QIcon* icon)
void k_urllabel_on_window_icon_changed(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlLabel*
/// @param iconText const char*
void k_urllabel_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, const char* iconText)
void k_urllabel_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlLabel*
/// @param pos QPoint*
void k_urllabel_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QPoint* pos)
void k_urllabel_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// @param self KUrlLabel*
///
/// @return flag of enum Qt__InputMethodHint
int64_t k_urllabel_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// @param self KUrlLabel*
/// @param hints flag of enum Qt__InputMethodHint
void k_urllabel_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlLabel*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
void k_urllabel_render22(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlLabel*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_urllabel_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlLabel*
/// @param target QPaintDevice*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_urllabel_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlLabel*
/// @param painter QPainter*
/// @param targetOffset QPoint*
void k_urllabel_render23(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlLabel*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
void k_urllabel_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// @param self KUrlLabel*
/// @param painter QPainter*
/// @param targetOffset QPoint*
/// @param sourceRegion QRegion*
/// @param renderFlags flag of enum QWidget__RenderFlag
void k_urllabel_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// @param self KUrlLabel*
/// @param rectangle QRect*
QPixmap* k_urllabel_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// @param self KUrlLabel*
/// @param typeVal enum Qt__GestureType
/// @param flags flag of enum Qt__GestureFlag
void k_urllabel_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// @param self KUrlLabel*
/// @param key QKeySequence*
/// @param context enum Qt__ShortcutContext
int32_t k_urllabel_grab_shortcut2(void* self, void* key, int32_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// @param self KUrlLabel*
/// @param id int
/// @param enable bool
void k_urllabel_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// @param self KUrlLabel*
/// @param id int
/// @param enable bool
void k_urllabel_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// @param self KUrlLabel*
/// @param param1 enum Qt__WindowType
/// @param on bool
void k_urllabel_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// @param self KUrlLabel*
/// @param param1 enum Qt__WidgetAttribute
/// @param on bool
void k_urllabel_set_attribute2(void* self, int32_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
QWidget* k_urllabel_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// @param window QWindow*
/// @param parent QWidget*
/// @param flags flag of enum Qt__WindowType
QWidget* k_urllabel_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char* k_urllabel_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// @param self KUrlLabel*
/// @param name char*
void k_urllabel_set_object_name(void* self, char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// @param self KUrlLabel*
bool k_urllabel_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// @param self KUrlLabel*
bool k_urllabel_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// @param self KUrlLabel*
bool k_urllabel_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// @param self KUrlLabel*
bool k_urllabel_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// @param self KUrlLabel*
/// @param b bool
bool k_urllabel_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// @param self KUrlLabel*
QThread* k_urllabel_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlLabel*
/// @param thread QThread*
bool k_urllabel_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlLabel*
/// @param interval int
int32_t k_urllabel_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlLabel*
/// @param id int
void k_urllabel_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// @param self KUrlLabel*
/// @param id enum Qt__TimerId
void k_urllabel_kill_timer2(void* self, int32_t id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// @param self KUrlLabel*
libqt_list /* of QObject* */ k_urllabel_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// @param self KUrlLabel*
/// @param filterObj QObject*
void k_urllabel_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// @param self KUrlLabel*
/// @param obj QObject*
void k_urllabel_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
QMetaObject__Connection* k_urllabel_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlLabel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
QMetaObject__Connection* k_urllabel_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param member QMetaMethod*
bool k_urllabel_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// @param param1 QMetaObject__Connection*
bool k_urllabel_disconnect2(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// @param self KUrlLabel*
void k_urllabel_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// @param self KUrlLabel*
void k_urllabel_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// @param self KUrlLabel*
/// @param name const char*
/// @param value QVariant*
bool k_urllabel_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// @param self KUrlLabel*
/// @param name const char*
QVariant* k_urllabel_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self KUrlLabel*
const char** k_urllabel_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlLabel*
QBindingStorage* k_urllabel_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// @param self KUrlLabel*
const QBindingStorage* k_urllabel_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlLabel*
void k_urllabel_destroyed(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self)
void k_urllabel_on_destroyed(void* self, void (*callback)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// @param self KUrlLabel*
QObject* k_urllabel_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// @param self KUrlLabel*
/// @param classname const char*
bool k_urllabel_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// @param self KUrlLabel*
void k_urllabel_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// @param self KUrlLabel*
/// @param thread QThread*
/// @param param2 Disambiguated_t*
bool k_urllabel_move_to_thread2(void* self, void* thread, void* param2);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// @param self KUrlLabel*
/// @param interval int
/// @param timerType enum Qt__TimerType
int32_t k_urllabel_start_timer22(void* self, int interval, int32_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param sender QObject*
/// @param signal QMetaMethod*
/// @param receiver QObject*
/// @param method QMetaMethod*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_urllabel_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// @param self KUrlLabel*
/// @param sender QObject*
/// @param signal const char*
/// @param member const char*
/// @param typeVal enum Qt__ConnectionType
QMetaObject__Connection* k_urllabel_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlLabel*
/// @param param1 QObject*
void k_urllabel_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QObject* param1)
void k_urllabel_on_destroyed1(void* self, void (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// @param self KUrlLabel*
bool k_urllabel_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// @param self KUrlLabel*
int32_t k_urllabel_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// @param self KUrlLabel*
int32_t k_urllabel_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// @param self KUrlLabel*
int32_t k_urllabel_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// @param self KUrlLabel*
int32_t k_urllabel_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// @param self KUrlLabel*
int32_t k_urllabel_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// @param self KUrlLabel*
int32_t k_urllabel_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// @param self KUrlLabel*
double k_urllabel_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// @param self KUrlLabel*
double k_urllabel_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// @param self KUrlLabel*
int32_t k_urllabel_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// @param self KUrlLabel*
int32_t k_urllabel_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
double k_urllabel_device_pixel_ratio_f_scale();

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
///
/// @param metric enum QPaintDevice__PaintDeviceMetric
/// @param value double
int32_t k_urllabel_encode_metric_f(int32_t metric, double value);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
QSize* k_urllabel_size_hint(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#sizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
QSize* k_urllabel_qbase_size_hint(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#sizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback QSize* func()
void k_urllabel_on_size_hint(void* self, QSize* (*callback)());

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
QSize* k_urllabel_minimum_size_hint(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#minimumSizeHint)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
QSize* k_urllabel_qbase_minimum_size_hint(void* self);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#minimumSizeHint)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback QSize* func()
void k_urllabel_on_minimum_size_hint(void* self, QSize* (*callback)());

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 int
int32_t k_urllabel_height_for_width(void* self, int param1);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 int
int32_t k_urllabel_qbase_height_for_width(void* self, int param1);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback int32_t func(KUrlLabel* self, int param1)
void k_urllabel_on_height_for_width(void* self, int32_t (*callback)(void*, int));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QKeyEvent*
void k_urllabel_key_press_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QKeyEvent*
void k_urllabel_qbase_key_press_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QKeyEvent* ev)
void k_urllabel_on_key_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 QPaintEvent*
void k_urllabel_paint_event(void* self, void* param1);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 QPaintEvent*
void k_urllabel_qbase_paint_event(void* self, void* param1);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QPaintEvent* param1)
void k_urllabel_on_paint_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 QEvent*
void k_urllabel_change_event(void* self, void* param1);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 QEvent*
void k_urllabel_qbase_change_event(void* self, void* param1);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QEvent* param1)
void k_urllabel_on_change_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QMouseEvent*
void k_urllabel_mouse_press_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QMouseEvent*
void k_urllabel_qbase_mouse_press_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QMouseEvent* ev)
void k_urllabel_on_mouse_press_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QMouseEvent*
void k_urllabel_mouse_move_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QMouseEvent*
void k_urllabel_qbase_mouse_move_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QMouseEvent* ev)
void k_urllabel_on_mouse_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QContextMenuEvent*
void k_urllabel_context_menu_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#contextMenuEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QContextMenuEvent*
void k_urllabel_qbase_context_menu_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#contextMenuEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QContextMenuEvent* ev)
void k_urllabel_on_context_menu_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QFocusEvent*
void k_urllabel_focus_in_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QFocusEvent*
void k_urllabel_qbase_focus_in_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QFocusEvent* ev)
void k_urllabel_on_focus_in_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QFocusEvent*
void k_urllabel_focus_out_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param ev QFocusEvent*
void k_urllabel_qbase_focus_out_event(void* self, void* ev);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QFocusEvent* ev)
void k_urllabel_on_focus_out_event(void* self, void (*callback)(void*, void*));

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param next bool
bool k_urllabel_focus_next_prev_child(void* self, bool next);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param next bool
bool k_urllabel_qbase_focus_next_prev_child(void* self, bool next);

/// Inherited from QLabel
///
/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback bool func(KUrlLabel* self, bool next)
void k_urllabel_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param option QStyleOptionFrame*
void k_urllabel_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param option QStyleOptionFrame*
void k_urllabel_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QStyleOptionFrame* option)
void k_urllabel_on_init_style_option(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
int32_t k_urllabel_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
int32_t k_urllabel_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback int32_t func()
void k_urllabel_on_dev_type(void* self, int32_t (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param visible bool
void k_urllabel_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param visible bool
void k_urllabel_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, bool visible)
void k_urllabel_on_set_visible(void* self, void (*callback)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
bool k_urllabel_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
bool k_urllabel_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback bool func()
void k_urllabel_on_has_height_for_width(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
QPaintEngine* k_urllabel_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
QPaintEngine* k_urllabel_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback QPaintEngine* func()
void k_urllabel_on_paint_engine(void* self, QPaintEngine* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QMouseEvent*
void k_urllabel_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QMouseEvent*
void k_urllabel_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QMouseEvent* event)
void k_urllabel_on_mouse_double_click_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QWheelEvent*
void k_urllabel_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QWheelEvent*
void k_urllabel_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QWheelEvent* event)
void k_urllabel_on_wheel_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QKeyEvent*
void k_urllabel_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QKeyEvent*
void k_urllabel_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QKeyEvent* event)
void k_urllabel_on_key_release_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QMoveEvent*
void k_urllabel_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QMoveEvent*
void k_urllabel_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QMoveEvent* event)
void k_urllabel_on_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QResizeEvent*
void k_urllabel_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QResizeEvent*
void k_urllabel_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QResizeEvent* event)
void k_urllabel_on_resize_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QCloseEvent*
void k_urllabel_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QCloseEvent*
void k_urllabel_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QCloseEvent* event)
void k_urllabel_on_close_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QTabletEvent*
void k_urllabel_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QTabletEvent*
void k_urllabel_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QTabletEvent* event)
void k_urllabel_on_tablet_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QActionEvent*
void k_urllabel_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QActionEvent*
void k_urllabel_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QActionEvent* event)
void k_urllabel_on_action_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QDragEnterEvent*
void k_urllabel_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QDragEnterEvent*
void k_urllabel_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QDragEnterEvent* event)
void k_urllabel_on_drag_enter_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QDragMoveEvent*
void k_urllabel_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QDragMoveEvent*
void k_urllabel_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QDragMoveEvent* event)
void k_urllabel_on_drag_move_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QDragLeaveEvent*
void k_urllabel_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QDragLeaveEvent*
void k_urllabel_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QDragLeaveEvent* event)
void k_urllabel_on_drag_leave_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QDropEvent*
void k_urllabel_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QDropEvent*
void k_urllabel_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QDropEvent* event)
void k_urllabel_on_drop_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QShowEvent*
void k_urllabel_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QShowEvent*
void k_urllabel_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QShowEvent* event)
void k_urllabel_on_show_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QHideEvent*
void k_urllabel_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QHideEvent*
void k_urllabel_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QHideEvent* event)
void k_urllabel_on_hide_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_urllabel_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
bool k_urllabel_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback bool func(KUrlLabel* self, const char* eventType, void* message, intptr_t* result)
void k_urllabel_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_urllabel_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 enum QPaintDevice__PaintDeviceMetric
int32_t k_urllabel_qbase_metric(void* self, int32_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback int32_t func(KUrlLabel* self, enum QPaintDevice__PaintDeviceMetric param1)
void k_urllabel_on_metric(void* self, int32_t (*callback)(void*, int32_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param painter QPainter*
void k_urllabel_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param painter QPainter*
void k_urllabel_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QPainter* painter)
void k_urllabel_on_init_painter(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param offset QPoint*
QPaintDevice* k_urllabel_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param offset QPoint*
QPaintDevice* k_urllabel_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback QPaintDevice* func(KUrlLabel* self, QPoint* offset)
void k_urllabel_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
QPainter* k_urllabel_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
QPainter* k_urllabel_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback QPainter* func()
void k_urllabel_on_shared_painter(void* self, QPainter* (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 QInputMethodEvent*
void k_urllabel_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 QInputMethodEvent*
void k_urllabel_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QInputMethodEvent* param1)
void k_urllabel_on_input_method_event(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_urllabel_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 enum Qt__InputMethodQuery
QVariant* k_urllabel_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback QVariant* func(KUrlLabel* self, enum Qt__InputMethodQuery param1)
void k_urllabel_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param watched QObject*
/// @param event QEvent*
bool k_urllabel_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param watched QObject*
/// @param event QEvent*
bool k_urllabel_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback bool func(KUrlLabel* self, QObject* watched, QEvent* event)
void k_urllabel_on_event_filter(void* self, bool (*callback)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QTimerEvent*
void k_urllabel_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QTimerEvent*
void k_urllabel_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QTimerEvent* event)
void k_urllabel_on_timer_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QChildEvent*
void k_urllabel_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QChildEvent*
void k_urllabel_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QChildEvent* event)
void k_urllabel_on_child_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QEvent*
void k_urllabel_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param event QEvent*
void k_urllabel_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QEvent* event)
void k_urllabel_on_custom_event(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param signal QMetaMethod*
void k_urllabel_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param signal QMetaMethod*
void k_urllabel_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QMetaMethod* signal)
void k_urllabel_on_connect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param signal QMetaMethod*
void k_urllabel_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param signal QMetaMethod*
void k_urllabel_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QMetaMethod* signal)
void k_urllabel_on_disconnect_notify(void* self, void (*callback)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 QPainter*
void k_urllabel_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param param1 QPainter*
void k_urllabel_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, QPainter* param1)
void k_urllabel_on_draw_frame(void* self, void (*callback)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
void k_urllabel_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
void k_urllabel_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func()
void k_urllabel_on_update_micro_focus(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
void k_urllabel_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
void k_urllabel_qbase_create(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func()
void k_urllabel_on_create(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
void k_urllabel_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
void k_urllabel_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback void func()
void k_urllabel_on_destroy(void* self, void (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
bool k_urllabel_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
bool k_urllabel_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback bool func()
void k_urllabel_on_focus_next_child(void* self, bool (*callback)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
bool k_urllabel_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
bool k_urllabel_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback bool func()
void k_urllabel_on_focus_previous_child(void* self, bool (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
QObject* k_urllabel_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
QObject* k_urllabel_qbase_sender(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback QObject* func()
void k_urllabel_on_sender(void* self, QObject* (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
int32_t k_urllabel_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
int32_t k_urllabel_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback int32_t func()
void k_urllabel_on_sender_signal_index(void* self, int32_t (*callback)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param signal const char*
int32_t k_urllabel_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param signal const char*
int32_t k_urllabel_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback int32_t func(KUrlLabel* self, const char* signal)
void k_urllabel_on_receivers(void* self, int32_t (*callback)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param signal QMetaMethod*
bool k_urllabel_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param signal QMetaMethod*
bool k_urllabel_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback bool func(KUrlLabel* self, QMetaMethod* signal)
void k_urllabel_on_is_signal_connected(void* self, bool (*callback)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling virtual or protected method
///
/// @param self KUrlLabel*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_urllabel_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow calling base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param metricA enum QPaintDevice__PaintDeviceMetric
/// @param metricB enum QPaintDevice__PaintDeviceMetric
double k_urllabel_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// @param self KUrlLabel*
/// @param callback double func(KUrlLabel* self, enum QPaintDevice__PaintDeviceMetric metricA, enum QPaintDevice__PaintDeviceMetric metricB)
void k_urllabel_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
///
/// Wrapper to allow calling private signal
///
/// @param self KUrlLabel*
/// @param callback void func(KUrlLabel* self, const char* objectName)
void k_urllabel_on_object_name_changed(void* self, void (*callback)(void*, const char*));

/// [Qt documentation](https://api-staging.kde.org/kurllabel.html#dtor.KUrlLabel)
///
/// Delete this object from C++ memory.
///
/// @param self KUrlLabel*
void k_urllabel_delete(void* self);

#endif
