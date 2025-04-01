#pragma once
#ifndef SRCQT6C_LIBQLABEL_H
#define SRCQT6C_LIBQLABEL_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqaction.h"
#include "libqevent.h"
#include "libqanystringview.h"
#include "libqbackingstore.h"
#include "libqbindingstorage.h"
#include "libqbitmap.h"
#include "libqcursor.h"
#include "libqfont.h"
#include "libqfontinfo.h"
#include "libqfontmetrics.h"
#include "libqframe.h"
#include "libqgraphicseffect.h"
#include "libqgraphicsproxywidget.h"
#include "libqicon.h"
#include "libqkeysequence.h"
#include "libqlayout.h"
#include "libqlocale.h"
#include "libqmargins.h"
#include "libqmetaobject.h"
#include "libqmovie.h"
#include "libqobject.h"
#include "libqpaintdevice.h"
#include "libqpaintengine.h"
#include "libqpainter.h"
#include "libqpalette.h"
#include "libqpicture.h"
#include "libqpixmap.h"
#include "libqpoint.h"
#include "libqrect.h"
#include "libqregion.h"
#include "libqscreen.h"
#include "libqsize.h"
#include "libqsizepolicy.h"
#include <string.h>
#include "libqstyle.h"
#include "libqstyleoption.h"
#include "libqthread.h"
#include "libqvariant.h"
#include "libqwidget.h"
#include "libqwindow.h"

/// https://doc.qt.io/qt-6/qlabel.html

/// q_label_new constructs a new QLabel object.
///
/// ``` QWidget* parent ```
QLabel* q_label_new(void* parent);

/// q_label_new2 constructs a new QLabel object.
///
///
QLabel* q_label_new2();

/// q_label_new3 constructs a new QLabel object.
///
/// ``` const char* text ```
QLabel* q_label_new3(const char* text);

/// q_label_new4 constructs a new QLabel object.
///
/// ``` QWidget* parent, int f ```
QLabel* q_label_new4(void* parent, int64_t f);

/// q_label_new5 constructs a new QLabel object.
///
/// ``` const char* text, QWidget* parent ```
QLabel* q_label_new5(const char* text, void* parent);

/// q_label_new6 constructs a new QLabel object.
///
/// ``` const char* text, QWidget* parent, int f ```
QLabel* q_label_new6(const char* text, void* parent, int64_t f);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLabel* self ```
QMetaObject* q_label_meta_object(void* self);

/// ``` QLabel* self, const char* param1 ```
void* q_label_metacast(void* self, const char* param1);

/// ``` QLabel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_label_metacall(void* self, int64_t param1, int param2, void* param3);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, int32_t (*slot)(QLabel*, enum QMetaObject__Call, int, void*) ```
void q_label_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*));

/// Base class method implementation
///
/// ``` QLabel* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_label_qbase_metacall(void* self, int64_t param1, int param2, void* param3);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_label_tr(const char* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#text)
///
/// ``` QLabel* self ```
const char* q_label_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#pixmap)
///
/// ``` QLabel* self, enum Qt__ReturnByValueConstant param1 ```
QPixmap* q_label_pixmap(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#pixmap)
///
/// ``` QLabel* self ```
QPixmap* q_label_pixmap2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#picture)
///
/// ``` QLabel* self, enum Qt__ReturnByValueConstant param1 ```
QPicture* q_label_picture(void* self, int64_t param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#picture)
///
/// ``` QLabel* self ```
QPicture* q_label_picture2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#movie)
///
/// ``` QLabel* self ```
QMovie* q_label_movie(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#textFormat)
///
/// ``` QLabel* self ```
int64_t q_label_text_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setTextFormat)
///
/// ``` QLabel* self, enum Qt__TextFormat textFormat ```
void q_label_set_text_format(void* self, int64_t textFormat);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#alignment)
///
/// ``` QLabel* self ```
int64_t q_label_alignment(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setAlignment)
///
/// ``` QLabel* self, int alignment ```
void q_label_set_alignment(void* self, int64_t alignment);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setWordWrap)
///
/// ``` QLabel* self, bool on ```
void q_label_set_word_wrap(void* self, bool on);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#wordWrap)
///
/// ``` QLabel* self ```
bool q_label_word_wrap(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#indent)
///
/// ``` QLabel* self ```
int32_t q_label_indent(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setIndent)
///
/// ``` QLabel* self, int indent ```
void q_label_set_indent(void* self, int indent);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#margin)
///
/// ``` QLabel* self ```
int32_t q_label_margin(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setMargin)
///
/// ``` QLabel* self, int margin ```
void q_label_set_margin(void* self, int margin);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#hasScaledContents)
///
/// ``` QLabel* self ```
bool q_label_has_scaled_contents(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setScaledContents)
///
/// ``` QLabel* self, bool scaledContents ```
void q_label_set_scaled_contents(void* self, bool scaledContents);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#sizeHint)
///
/// ``` QLabel* self ```
QSize* q_label_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, QSize* (*slot)() ```
void q_label_on_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QLabel* self ```
QSize* q_label_qbase_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#minimumSizeHint)
///
/// ``` QLabel* self ```
QSize* q_label_minimum_size_hint(void* self);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, QSize* (*slot)() ```
void q_label_on_minimum_size_hint(void* self, QSize* (*slot)());

/// Base class method implementation
///
/// ``` QLabel* self ```
QSize* q_label_qbase_minimum_size_hint(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setBuddy)
///
/// ``` QLabel* self, QWidget* buddy ```
void q_label_set_buddy(void* self, void* buddy);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#buddy)
///
/// ``` QLabel* self ```
QWidget* q_label_buddy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#heightForWidth)
///
/// ``` QLabel* self, int param1 ```
int32_t q_label_height_for_width(void* self, int param1);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, int32_t (*slot)(QLabel*, int) ```
void q_label_on_height_for_width(void* self, int32_t (*slot)(void*, int));

/// Base class method implementation
///
/// ``` QLabel* self, int param1 ```
int32_t q_label_qbase_height_for_width(void* self, int param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#openExternalLinks)
///
/// ``` QLabel* self ```
bool q_label_open_external_links(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setOpenExternalLinks)
///
/// ``` QLabel* self, bool open ```
void q_label_set_open_external_links(void* self, bool open);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setTextInteractionFlags)
///
/// ``` QLabel* self, int flags ```
void q_label_set_text_interaction_flags(void* self, int64_t flags);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#textInteractionFlags)
///
/// ``` QLabel* self ```
int64_t q_label_text_interaction_flags(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setSelection)
///
/// ``` QLabel* self, int param1, int param2 ```
void q_label_set_selection(void* self, int param1, int param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#hasSelectedText)
///
/// ``` QLabel* self ```
bool q_label_has_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#selectedText)
///
/// ``` QLabel* self ```
const char* q_label_selected_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#selectionStart)
///
/// ``` QLabel* self ```
int32_t q_label_selection_start(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setText)
///
/// ``` QLabel* self, const char* text ```
void q_label_set_text(void* self, const char* text);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setPixmap)
///
/// ``` QLabel* self, QPixmap* pixmap ```
void q_label_set_pixmap(void* self, void* pixmap);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setPicture)
///
/// ``` QLabel* self, QPicture* picture ```
void q_label_set_picture(void* self, void* picture);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setMovie)
///
/// ``` QLabel* self, QMovie* movie ```
void q_label_set_movie(void* self, void* movie);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setNum)
///
/// ``` QLabel* self, int num ```
void q_label_set_num(void* self, int num);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#setNum)
///
/// ``` QLabel* self, double num ```
void q_label_set_num_with_num(void* self, double num);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#clear)
///
/// ``` QLabel* self ```
void q_label_clear(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#linkActivated)
///
/// ``` QLabel* self, const char* link ```
void q_label_link_activated(void* self, const char* link);

/// ``` QLabel* self, void (*slot)(QLabel*, const char*) ```
void q_label_on_link_activated(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#linkHovered)
///
/// ``` QLabel* self, const char* link ```
void q_label_link_hovered(void* self, const char* link);

/// ``` QLabel* self, void (*slot)(QLabel*, const char*) ```
void q_label_on_link_hovered(void* self, void (*slot)(void*, const char*));

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#event)
///
/// ``` QLabel* self, QEvent* e ```
bool q_label_event(void* self, void* e);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, bool (*slot)(QLabel*, QEvent*) ```
void q_label_on_event(void* self, bool (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QEvent* e ```
bool q_label_qbase_event(void* self, void* e);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#keyPressEvent)
///
/// ``` QLabel* self, QKeyEvent* ev ```
void q_label_key_press_event(void* self, void* ev);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QKeyEvent*) ```
void q_label_on_key_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QKeyEvent* ev ```
void q_label_qbase_key_press_event(void* self, void* ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#paintEvent)
///
/// ``` QLabel* self, QPaintEvent* param1 ```
void q_label_paint_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QPaintEvent*) ```
void q_label_on_paint_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QPaintEvent* param1 ```
void q_label_qbase_paint_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#changeEvent)
///
/// ``` QLabel* self, QEvent* param1 ```
void q_label_change_event(void* self, void* param1);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QEvent*) ```
void q_label_on_change_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QEvent* param1 ```
void q_label_qbase_change_event(void* self, void* param1);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#mousePressEvent)
///
/// ``` QLabel* self, QMouseEvent* ev ```
void q_label_mouse_press_event(void* self, void* ev);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QMouseEvent*) ```
void q_label_on_mouse_press_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QMouseEvent* ev ```
void q_label_qbase_mouse_press_event(void* self, void* ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#mouseMoveEvent)
///
/// ``` QLabel* self, QMouseEvent* ev ```
void q_label_mouse_move_event(void* self, void* ev);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QMouseEvent*) ```
void q_label_on_mouse_move_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QMouseEvent* ev ```
void q_label_qbase_mouse_move_event(void* self, void* ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#mouseReleaseEvent)
///
/// ``` QLabel* self, QMouseEvent* ev ```
void q_label_mouse_release_event(void* self, void* ev);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QMouseEvent*) ```
void q_label_on_mouse_release_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QMouseEvent* ev ```
void q_label_qbase_mouse_release_event(void* self, void* ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#contextMenuEvent)
///
/// ``` QLabel* self, QContextMenuEvent* ev ```
void q_label_context_menu_event(void* self, void* ev);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QContextMenuEvent*) ```
void q_label_on_context_menu_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QContextMenuEvent* ev ```
void q_label_qbase_context_menu_event(void* self, void* ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusInEvent)
///
/// ``` QLabel* self, QFocusEvent* ev ```
void q_label_focus_in_event(void* self, void* ev);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QFocusEvent*) ```
void q_label_on_focus_in_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QFocusEvent* ev ```
void q_label_qbase_focus_in_event(void* self, void* ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusOutEvent)
///
/// ``` QLabel* self, QFocusEvent* ev ```
void q_label_focus_out_event(void* self, void* ev);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QFocusEvent*) ```
void q_label_on_focus_out_event(void* self, void (*slot)(void*, void*));

/// Base class method implementation
///
/// ``` QLabel* self, QFocusEvent* ev ```
void q_label_qbase_focus_out_event(void* self, void* ev);

/// [Qt documentation](https://doc.qt.io/qt-6/qlabel.html#focusNextPrevChild)
///
/// ``` QLabel* self, bool next ```
bool q_label_focus_next_prev_child(void* self, bool next);

/// Allows for overriding the related default method
///
/// ``` QLabel* self, bool (*slot)(QLabel*, bool) ```
void q_label_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool));

/// Base class method implementation
///
/// ``` QLabel* self, bool next ```
bool q_label_qbase_focus_next_prev_child(void* self, bool next);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_label_tr2(const char* s, const char* c);

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_label_tr3(const char* s, const char* c, int n);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QLabel* self ```
int32_t q_label_frame_style(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QLabel* self, int frameStyle ```
void q_label_set_frame_style(void* self, int frameStyle);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QLabel* self ```
int32_t q_label_frame_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QLabel* self ```
int64_t q_label_frame_shape(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QLabel* self, enum QFrame__Shape frameShape ```
void q_label_set_frame_shape(void* self, int64_t frameShape);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QLabel* self ```
int64_t q_label_frame_shadow(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QLabel* self, enum QFrame__Shadow frameShadow ```
void q_label_set_frame_shadow(void* self, int64_t frameShadow);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QLabel* self ```
int32_t q_label_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QLabel* self, int lineWidth ```
void q_label_set_line_width(void* self, int lineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QLabel* self ```
int32_t q_label_mid_line_width(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QLabel* self, int midLineWidth ```
void q_label_set_mid_line_width(void* self, int midLineWidth);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QLabel* self ```
QRect* q_label_frame_rect(void* self);

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QLabel* self, QRect* frameRect ```
void q_label_set_frame_rect(void* self, void* frameRect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QLabel* self ```
uintptr_t q_label_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QLabel* self ```
void q_label_create_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QLabel* self ```
uintptr_t q_label_internal_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QLabel* self ```
uintptr_t q_label_effective_win_id(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QLabel* self ```
QStyle* q_label_style(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QLabel* self, QStyle* style ```
void q_label_set_style(void* self, void* style);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QLabel* self ```
bool q_label_is_top_level(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QLabel* self ```
bool q_label_is_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QLabel* self ```
bool q_label_is_modal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QLabel* self ```
int64_t q_label_window_modality(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QLabel* self, enum Qt__WindowModality windowModality ```
void q_label_set_window_modality(void* self, int64_t windowModality);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QLabel* self ```
bool q_label_is_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QLabel* self, QWidget* param1 ```
bool q_label_is_enabled_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QLabel* self, bool enabled ```
void q_label_set_enabled(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QLabel* self, bool disabled ```
void q_label_set_disabled(void* self, bool disabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QLabel* self, bool windowModified ```
void q_label_set_window_modified(void* self, bool windowModified);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QLabel* self ```
QRect* q_label_frame_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QLabel* self ```
QRect* q_label_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QLabel* self ```
QRect* q_label_normal_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QLabel* self ```
int32_t q_label_x(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QLabel* self ```
int32_t q_label_y(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QLabel* self ```
QPoint* q_label_pos(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QLabel* self ```
QSize* q_label_frame_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QLabel* self ```
QSize* q_label_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QLabel* self ```
int32_t q_label_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QLabel* self ```
int32_t q_label_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QLabel* self ```
QRect* q_label_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QLabel* self ```
QRect* q_label_children_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QLabel* self ```
QRegion* q_label_children_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QLabel* self ```
QSize* q_label_minimum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QLabel* self ```
QSize* q_label_maximum_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QLabel* self ```
int32_t q_label_minimum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QLabel* self ```
int32_t q_label_minimum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QLabel* self ```
int32_t q_label_maximum_width(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QLabel* self ```
int32_t q_label_maximum_height(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QLabel* self, QSize* minimumSize ```
void q_label_set_minimum_size(void* self, void* minimumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QLabel* self, int minw, int minh ```
void q_label_set_minimum_size2(void* self, int minw, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QLabel* self, QSize* maximumSize ```
void q_label_set_maximum_size(void* self, void* maximumSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QLabel* self, int maxw, int maxh ```
void q_label_set_maximum_size2(void* self, int maxw, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QLabel* self, int minw ```
void q_label_set_minimum_width(void* self, int minw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QLabel* self, int minh ```
void q_label_set_minimum_height(void* self, int minh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QLabel* self, int maxw ```
void q_label_set_maximum_width(void* self, int maxw);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QLabel* self, int maxh ```
void q_label_set_maximum_height(void* self, int maxh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QLabel* self ```
QSize* q_label_size_increment(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QLabel* self, QSize* sizeIncrement ```
void q_label_set_size_increment(void* self, void* sizeIncrement);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QLabel* self, int w, int h ```
void q_label_set_size_increment2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QLabel* self ```
QSize* q_label_base_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QLabel* self, QSize* baseSize ```
void q_label_set_base_size(void* self, void* baseSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QLabel* self, int basew, int baseh ```
void q_label_set_base_size2(void* self, int basew, int baseh);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QLabel* self, QSize* fixedSize ```
void q_label_set_fixed_size(void* self, void* fixedSize);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QLabel* self, int w, int h ```
void q_label_set_fixed_size2(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QLabel* self, int w ```
void q_label_set_fixed_width(void* self, int w);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QLabel* self, int h ```
void q_label_set_fixed_height(void* self, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QLabel* self, QPointF* param1 ```
QPointF* q_label_map_to_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QLabel* self, QPoint* param1 ```
QPoint* q_label_map_to_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QLabel* self, QPointF* param1 ```
QPointF* q_label_map_from_global(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QLabel* self, QPoint* param1 ```
QPoint* q_label_map_from_global_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QLabel* self, QPointF* param1 ```
QPointF* q_label_map_to_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QLabel* self, QPoint* param1 ```
QPoint* q_label_map_to_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QLabel* self, QPointF* param1 ```
QPointF* q_label_map_from_parent(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QLabel* self, QPoint* param1 ```
QPoint* q_label_map_from_parent_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QLabel* self, QWidget* param1, QPointF* param2 ```
QPointF* q_label_map_to(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QLabel* self, QWidget* param1, QPoint* param2 ```
QPoint* q_label_map_to2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QLabel* self, QWidget* param1, QPointF* param2 ```
QPointF* q_label_map_from(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QLabel* self, QWidget* param1, QPoint* param2 ```
QPoint* q_label_map_from2(void* self, void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QLabel* self ```
QWidget* q_label_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QLabel* self ```
QWidget* q_label_native_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QLabel* self ```
QWidget* q_label_top_level_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QLabel* self ```
QPalette* q_label_palette(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QLabel* self, QPalette* palette ```
void q_label_set_palette(void* self, void* palette);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QLabel* self, enum QPalette__ColorRole backgroundRole ```
void q_label_set_background_role(void* self, int64_t backgroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QLabel* self ```
int64_t q_label_background_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QLabel* self, enum QPalette__ColorRole foregroundRole ```
void q_label_set_foreground_role(void* self, int64_t foregroundRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QLabel* self ```
int64_t q_label_foreground_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QLabel* self ```
QFont* q_label_font(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QLabel* self, QFont* font ```
void q_label_set_font(void* self, void* font);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QLabel* self ```
QFontMetrics* q_label_font_metrics(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QLabel* self ```
QFontInfo* q_label_font_info(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QLabel* self ```
QCursor* q_label_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QLabel* self, QCursor* cursor ```
void q_label_set_cursor(void* self, void* cursor);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QLabel* self ```
void q_label_unset_cursor(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QLabel* self, bool enable ```
void q_label_set_mouse_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QLabel* self ```
bool q_label_has_mouse_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QLabel* self ```
bool q_label_under_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QLabel* self, bool enable ```
void q_label_set_tablet_tracking(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QLabel* self ```
bool q_label_has_tablet_tracking(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QLabel* self, QBitmap* mask ```
void q_label_set_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QLabel* self, QRegion* mask ```
void q_label_set_mask_with_mask(void* self, void* mask);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QLabel* self ```
QRegion* q_label_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QLabel* self ```
void q_label_clear_mask(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLabel* self, QPaintDevice* target ```
void q_label_render(void* self, void* target);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLabel* self, QPainter* painter ```
void q_label_render_with_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QLabel* self ```
QPixmap* q_label_grab(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QLabel* self ```
QGraphicsEffect* q_label_graphics_effect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QLabel* self, QGraphicsEffect* effect ```
void q_label_set_graphics_effect(void* self, void* effect);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QLabel* self, enum Qt__GestureType typeVal ```
void q_label_grab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QLabel* self, enum Qt__GestureType typeVal ```
void q_label_ungrab_gesture(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QLabel* self, const char* windowTitle ```
void q_label_set_window_title(void* self, const char* windowTitle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QLabel* self, const char* styleSheet ```
void q_label_set_style_sheet(void* self, const char* styleSheet);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QLabel* self ```
const char* q_label_style_sheet(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QLabel* self ```
const char* q_label_window_title(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QLabel* self, QIcon* icon ```
void q_label_set_window_icon(void* self, void* icon);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QLabel* self ```
QIcon* q_label_window_icon(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QLabel* self, const char* windowIconText ```
void q_label_set_window_icon_text(void* self, const char* windowIconText);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QLabel* self ```
const char* q_label_window_icon_text(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QLabel* self, const char* windowRole ```
void q_label_set_window_role(void* self, const char* windowRole);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QLabel* self ```
const char* q_label_window_role(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QLabel* self, const char* filePath ```
void q_label_set_window_file_path(void* self, const char* filePath);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QLabel* self ```
const char* q_label_window_file_path(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QLabel* self, double level ```
void q_label_set_window_opacity(void* self, double level);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QLabel* self ```
double q_label_window_opacity(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QLabel* self ```
bool q_label_is_window_modified(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QLabel* self, const char* toolTip ```
void q_label_set_tool_tip(void* self, const char* toolTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QLabel* self ```
const char* q_label_tool_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QLabel* self, int msec ```
void q_label_set_tool_tip_duration(void* self, int msec);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QLabel* self ```
int32_t q_label_tool_tip_duration(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QLabel* self, const char* statusTip ```
void q_label_set_status_tip(void* self, const char* statusTip);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QLabel* self ```
const char* q_label_status_tip(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QLabel* self, const char* whatsThis ```
void q_label_set_whats_this(void* self, const char* whatsThis);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QLabel* self ```
const char* q_label_whats_this(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QLabel* self ```
const char* q_label_accessible_name(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QLabel* self, const char* name ```
void q_label_set_accessible_name(void* self, const char* name);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QLabel* self ```
const char* q_label_accessible_description(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QLabel* self, const char* description ```
void q_label_set_accessible_description(void* self, const char* description);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QLabel* self, enum Qt__LayoutDirection direction ```
void q_label_set_layout_direction(void* self, int64_t direction);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QLabel* self ```
int64_t q_label_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QLabel* self ```
void q_label_unset_layout_direction(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QLabel* self, QLocale* locale ```
void q_label_set_locale(void* self, void* locale);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QLabel* self ```
QLocale* q_label_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QLabel* self ```
void q_label_unset_locale(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QLabel* self ```
bool q_label_is_right_to_left(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QLabel* self ```
bool q_label_is_left_to_right(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QLabel* self ```
void q_label_set_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QLabel* self ```
bool q_label_is_active_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QLabel* self ```
void q_label_activate_window(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QLabel* self ```
void q_label_clear_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QLabel* self, enum Qt__FocusReason reason ```
void q_label_set_focus_with_reason(void* self, int64_t reason);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QLabel* self ```
int64_t q_label_focus_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QLabel* self, enum Qt__FocusPolicy policy ```
void q_label_set_focus_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QLabel* self ```
bool q_label_has_focus(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_label_set_tab_order(void* param1, void* param2);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QLabel* self, QWidget* focusProxy ```
void q_label_set_focus_proxy(void* self, void* focusProxy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QLabel* self ```
QWidget* q_label_focus_proxy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QLabel* self ```
int64_t q_label_context_menu_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QLabel* self, enum Qt__ContextMenuPolicy policy ```
void q_label_set_context_menu_policy(void* self, int64_t policy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QLabel* self ```
void q_label_grab_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QLabel* self, QCursor* param1 ```
void q_label_grab_mouse_with_q_cursor(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QLabel* self ```
void q_label_release_mouse(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QLabel* self ```
void q_label_grab_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QLabel* self ```
void q_label_release_keyboard(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QLabel* self, QKeySequence* key ```
int32_t q_label_grab_shortcut(void* self, void* key);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QLabel* self, int id ```
void q_label_release_shortcut(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QLabel* self, int id ```
void q_label_set_shortcut_enabled(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QLabel* self, int id ```
void q_label_set_shortcut_auto_repeat(void* self, int id);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_label_mouse_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_label_keyboard_grabber();

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QLabel* self ```
bool q_label_updates_enabled(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QLabel* self, bool enable ```
void q_label_set_updates_enabled(void* self, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QLabel* self ```
QGraphicsProxyWidget* q_label_graphics_proxy_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLabel* self ```
void q_label_update(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLabel* self ```
void q_label_repaint(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLabel* self, int x, int y, int w, int h ```
void q_label_update2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLabel* self, QRect* param1 ```
void q_label_update_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QLabel* self, QRegion* param1 ```
void q_label_update_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLabel* self, int x, int y, int w, int h ```
void q_label_repaint2(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLabel* self, QRect* param1 ```
void q_label_repaint_with_q_rect(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QLabel* self, QRegion* param1 ```
void q_label_repaint_with_q_region(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QLabel* self, bool hidden ```
void q_label_set_hidden(void* self, bool hidden);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QLabel* self ```
void q_label_show(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QLabel* self ```
void q_label_hide(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QLabel* self ```
void q_label_show_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QLabel* self ```
void q_label_show_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QLabel* self ```
void q_label_show_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QLabel* self ```
void q_label_show_normal(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QLabel* self ```
bool q_label_close(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QLabel* self ```
void q_label_raise(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QLabel* self ```
void q_label_lower(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QLabel* self, QWidget* param1 ```
void q_label_stack_under(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QLabel* self, int x, int y ```
void q_label_move(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QLabel* self, QPoint* param1 ```
void q_label_move_with_q_point(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QLabel* self, int w, int h ```
void q_label_resize(void* self, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QLabel* self, QSize* param1 ```
void q_label_resize_with_q_size(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QLabel* self, int x, int y, int w, int h ```
void q_label_set_geometry(void* self, int x, int y, int w, int h);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QLabel* self, QRect* geometry ```
void q_label_set_geometry_with_geometry(void* self, void* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QLabel* self ```
char* q_label_save_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QLabel* self, const char* geometry ```
bool q_label_restore_geometry(void* self, const char* geometry);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QLabel* self ```
void q_label_adjust_size(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QLabel* self ```
bool q_label_is_visible(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QLabel* self, QWidget* param1 ```
bool q_label_is_visible_to(void* self, void* param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QLabel* self ```
bool q_label_is_hidden(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QLabel* self ```
bool q_label_is_minimized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QLabel* self ```
bool q_label_is_maximized(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QLabel* self ```
bool q_label_is_full_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QLabel* self ```
int64_t q_label_window_state(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QLabel* self, int state ```
void q_label_set_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QLabel* self, int state ```
void q_label_override_window_state(void* self, int64_t state);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QLabel* self ```
QSizePolicy* q_label_size_policy(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QLabel* self, QSizePolicy* sizePolicy ```
void q_label_set_size_policy(void* self, void* sizePolicy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QLabel* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_label_set_size_policy2(void* self, int64_t horizontal, int64_t vertical);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QLabel* self ```
QRegion* q_label_visible_region(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QLabel* self, int left, int top, int right, int bottom ```
void q_label_set_contents_margins(void* self, int left, int top, int right, int bottom);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QLabel* self, QMargins* margins ```
void q_label_set_contents_margins_with_margins(void* self, void* margins);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QLabel* self ```
QMargins* q_label_contents_margins(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QLabel* self ```
QRect* q_label_contents_rect(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QLabel* self ```
QLayout* q_label_layout(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QLabel* self, QLayout* layout ```
void q_label_set_layout(void* self, void* layout);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QLabel* self ```
void q_label_update_geometry(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QLabel* self, QWidget* parent ```
void q_label_set_parent(void* self, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QLabel* self, QWidget* parent, int f ```
void q_label_set_parent2(void* self, void* parent, int64_t f);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QLabel* self, int dx, int dy ```
void q_label_scroll(void* self, int dx, int dy);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QLabel* self, int dx, int dy, QRect* param3 ```
void q_label_scroll2(void* self, int dx, int dy, void* param3);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QLabel* self ```
QWidget* q_label_focus_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QLabel* self ```
QWidget* q_label_next_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QLabel* self ```
QWidget* q_label_previous_in_focus_chain(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QLabel* self ```
bool q_label_accept_drops(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QLabel* self, bool on ```
void q_label_set_accept_drops(void* self, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLabel* self, QAction* action ```
void q_label_add_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QLabel* self, QAction* actions[] ```
void q_label_add_actions(void* self, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QLabel* self, QAction* before, QAction* actions[] ```
void q_label_insert_actions(void* self, void* before, void* actions[]);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QLabel* self, QAction* before, QAction* action ```
void q_label_insert_action(void* self, void* before, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QLabel* self, QAction* action ```
void q_label_remove_action(void* self, void* action);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QLabel* self ```
libqt_list /* of QAction* */ q_label_actions(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLabel* self, const char* text ```
QAction* q_label_add_action_with_text(void* self, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLabel* self, QIcon* icon, const char* text ```
QAction* q_label_add_action2(void* self, void* icon, const char* text);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLabel* self, const char* text, QKeySequence* shortcut ```
QAction* q_label_add_action3(void* self, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QLabel* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_label_add_action4(void* self, void* icon, const char* text, void* shortcut);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QLabel* self ```
QWidget* q_label_parent_widget(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QLabel* self, int typeVal ```
void q_label_set_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QLabel* self ```
int64_t q_label_window_flags(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QLabel* self, enum Qt__WindowType param1 ```
void q_label_set_window_flag(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QLabel* self, int typeVal ```
void q_label_override_window_flags(void* self, int64_t typeVal);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QLabel* self ```
int64_t q_label_window_type(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_label_find(uint64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QLabel* self, int x, int y ```
QWidget* q_label_child_at(void* self, int x, int y);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QLabel* self, QPoint* p ```
QWidget* q_label_child_at_with_q_point(void* self, void* p);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QLabel* self, enum Qt__WidgetAttribute param1 ```
void q_label_set_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QLabel* self, enum Qt__WidgetAttribute param1 ```
bool q_label_test_attribute(void* self, int64_t param1);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QLabel* self ```
void q_label_ensure_polished(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QLabel* self, QWidget* child ```
bool q_label_is_ancestor_of(void* self, void* child);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QLabel* self ```
bool q_label_auto_fill_background(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QLabel* self, bool enabled ```
void q_label_set_auto_fill_background(void* self, bool enabled);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QLabel* self ```
QBackingStore* q_label_backing_store(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QLabel* self ```
QWindow* q_label_window_handle(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QLabel* self ```
QScreen* q_label_screen(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QLabel* self, QScreen* screen ```
void q_label_set_screen(void* self, void* screen);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_label_create_window_container(void* window);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QLabel* self, const char* title ```
void q_label_window_title_changed(void* self, const char* title);

/// Inherited from QWidget
///
/// ``` QLabel* self, void (*slot)(QWidget*, const char*) ```
void q_label_on_window_title_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QLabel* self, QIcon* icon ```
void q_label_window_icon_changed(void* self, void* icon);

/// Inherited from QWidget
///
/// ``` QLabel* self, void (*slot)(QWidget*, QIcon*) ```
void q_label_on_window_icon_changed(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QLabel* self, const char* iconText ```
void q_label_window_icon_text_changed(void* self, const char* iconText);

/// Inherited from QWidget
///
/// ``` QLabel* self, void (*slot)(QWidget*, const char*) ```
void q_label_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QLabel* self, QPoint* pos ```
void q_label_custom_context_menu_requested(void* self, void* pos);

/// Inherited from QWidget
///
/// ``` QLabel* self, void (*slot)(QWidget*, QPoint*) ```
void q_label_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QLabel* self ```
int64_t q_label_input_method_hints(void* self);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QLabel* self, int hints ```
void q_label_set_input_method_hints(void* self, int64_t hints);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLabel* self, QPaintDevice* target, QPoint* targetOffset ```
void q_label_render2(void* self, void* target, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLabel* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_label_render3(void* self, void* target, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLabel* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_label_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLabel* self, QPainter* painter, QPoint* targetOffset ```
void q_label_render22(void* self, void* painter, void* targetOffset);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLabel* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_label_render32(void* self, void* painter, void* targetOffset, void* sourceRegion);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QLabel* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_label_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QLabel* self, QRect* rectangle ```
QPixmap* q_label_grab1(void* self, void* rectangle);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QLabel* self, enum Qt__GestureType typeVal, int flags ```
void q_label_grab_gesture2(void* self, int64_t typeVal, int64_t flags);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QLabel* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_label_grab_shortcut2(void* self, void* key, int64_t context);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QLabel* self, int id, bool enable ```
void q_label_set_shortcut_enabled2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QLabel* self, int id, bool enable ```
void q_label_set_shortcut_auto_repeat2(void* self, int id, bool enable);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QLabel* self, enum Qt__WindowType param1, bool on ```
void q_label_set_window_flag2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QLabel* self, enum Qt__WidgetAttribute param1, bool on ```
void q_label_set_attribute2(void* self, int64_t param1, bool on);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_label_create_window_container2(void* window, void* parent);

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_label_create_window_container3(void* window, void* parent, int64_t flags);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLabel* self ```
const char* q_label_object_name(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLabel* self, const char* name ```
void q_label_set_object_name(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLabel* self ```
bool q_label_is_widget_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLabel* self ```
bool q_label_is_window_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLabel* self ```
bool q_label_is_quick_item_type(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLabel* self ```
bool q_label_signals_blocked(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLabel* self, bool b ```
bool q_label_block_signals(void* self, bool b);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLabel* self ```
QThread* q_label_thread(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLabel* self, QThread* thread ```
void q_label_move_to_thread(void* self, void* thread);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLabel* self, int interval ```
int32_t q_label_start_timer(void* self, int interval);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLabel* self, int id ```
void q_label_kill_timer(void* self, int id);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLabel* self ```
libqt_list /* of QObject* */ q_label_children(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLabel* self, QObject* filterObj ```
void q_label_install_event_filter(void* self, void* filterObj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLabel* self, QObject* obj ```
void q_label_remove_event_filter(void* self, void* obj);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_label_connect(void* sender, void* signal, void* receiver, void* method);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLabel* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_label_connect2(void* self, void* sender, const char* signal, const char* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_label_disconnect(void* sender, void* signal, void* receiver, void* member);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_label_disconnect_with_q_meta_object_connection(void* param1);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLabel* self ```
void q_label_dump_object_tree(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLabel* self ```
void q_label_dump_object_info(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLabel* self, const char* name, QVariant* value ```
bool q_label_set_property(void* self, const char* name, void* value);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLabel* self, const char* name ```
QVariant* q_label_property(void* self, const char* name);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLabel* self ```
const char** q_label_dynamic_property_names(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLabel* self ```
QBindingStorage* q_label_binding_storage(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLabel* self ```
QBindingStorage* q_label_binding_storage2(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLabel* self ```
void q_label_destroyed(void* self);

/// Inherited from QObject
///
/// ``` QLabel* self, void (*slot)(QObject*) ```
void q_label_on_destroyed(void* self, void (*slot)(void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLabel* self ```
QObject* q_label_parent(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLabel* self, const char* classname ```
bool q_label_inherits(void* self, const char* classname);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLabel* self ```
void q_label_delete_later(void* self);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLabel* self, int interval, enum Qt__TimerType timerType ```
int32_t q_label_start_timer2(void* self, int interval, int64_t timerType);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_label_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLabel* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_label_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal);

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLabel* self, QObject* param1 ```
void q_label_destroyed1(void* self, void* param1);

/// Inherited from QObject
///
/// ``` QLabel* self, void (*slot)(QObject*, QObject*) ```
void q_label_on_destroyed1(void* self, void (*slot)(void*, void*));

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QLabel* self ```
bool q_label_painting_active(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QLabel* self ```
int32_t q_label_width_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QLabel* self ```
int32_t q_label_height_m_m(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QLabel* self ```
int32_t q_label_logical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QLabel* self ```
int32_t q_label_logical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QLabel* self ```
int32_t q_label_physical_dpi_x(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QLabel* self ```
int32_t q_label_physical_dpi_y(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QLabel* self ```
double q_label_device_pixel_ratio(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QLabel* self ```
double q_label_device_pixel_ratio_f(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QLabel* self ```
int32_t q_label_color_count(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QLabel* self ```
int32_t q_label_depth(void* self);

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_label_device_pixel_ratio_f_scale();

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QStyleOptionFrame* option ```
void q_label_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QStyleOptionFrame* option ```
void q_label_qbase_init_style_option(void* self, void* option);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QStyleOptionFrame*) ```
void q_label_on_init_style_option(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
int32_t q_label_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
int32_t q_label_qbase_dev_type(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, int32_t (*slot)() ```
void q_label_on_dev_type(void* self, int32_t (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, bool visible ```
void q_label_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, bool visible ```
void q_label_qbase_set_visible(void* self, bool visible);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, bool) ```
void q_label_on_set_visible(void* self, void (*slot)(void*, bool));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
bool q_label_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
bool q_label_qbase_has_height_for_width(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, bool (*slot)() ```
void q_label_on_has_height_for_width(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
QPaintEngine* q_label_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
QPaintEngine* q_label_qbase_paint_engine(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, QPaintEngine* (*slot)() ```
void q_label_on_paint_engine(void* self, QPaintEngine* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QMouseEvent* event ```
void q_label_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QMouseEvent* event ```
void q_label_qbase_mouse_double_click_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QMouseEvent*) ```
void q_label_on_mouse_double_click_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QWheelEvent* event ```
void q_label_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QWheelEvent* event ```
void q_label_qbase_wheel_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QWheelEvent*) ```
void q_label_on_wheel_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QKeyEvent* event ```
void q_label_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QKeyEvent* event ```
void q_label_qbase_key_release_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QKeyEvent*) ```
void q_label_on_key_release_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QEnterEvent* event ```
void q_label_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QEnterEvent* event ```
void q_label_qbase_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QEnterEvent*) ```
void q_label_on_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QEvent* event ```
void q_label_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QEvent* event ```
void q_label_qbase_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QEvent*) ```
void q_label_on_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QMoveEvent* event ```
void q_label_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QMoveEvent* event ```
void q_label_qbase_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QMoveEvent*) ```
void q_label_on_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QResizeEvent* event ```
void q_label_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QResizeEvent* event ```
void q_label_qbase_resize_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QResizeEvent*) ```
void q_label_on_resize_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QCloseEvent* event ```
void q_label_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QCloseEvent* event ```
void q_label_qbase_close_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QCloseEvent*) ```
void q_label_on_close_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QTabletEvent* event ```
void q_label_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QTabletEvent* event ```
void q_label_qbase_tablet_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QTabletEvent*) ```
void q_label_on_tablet_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QActionEvent* event ```
void q_label_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QActionEvent* event ```
void q_label_qbase_action_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QActionEvent*) ```
void q_label_on_action_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QDragEnterEvent* event ```
void q_label_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QDragEnterEvent* event ```
void q_label_qbase_drag_enter_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QDragEnterEvent*) ```
void q_label_on_drag_enter_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QDragMoveEvent* event ```
void q_label_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QDragMoveEvent* event ```
void q_label_qbase_drag_move_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QDragMoveEvent*) ```
void q_label_on_drag_move_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QDragLeaveEvent* event ```
void q_label_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QDragLeaveEvent* event ```
void q_label_qbase_drag_leave_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QDragLeaveEvent*) ```
void q_label_on_drag_leave_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QDropEvent* event ```
void q_label_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QDropEvent* event ```
void q_label_qbase_drop_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QDropEvent*) ```
void q_label_on_drop_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QShowEvent* event ```
void q_label_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QShowEvent* event ```
void q_label_qbase_show_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QShowEvent*) ```
void q_label_on_show_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QHideEvent* event ```
void q_label_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QHideEvent* event ```
void q_label_qbase_hide_event(void* self, void* event);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QHideEvent*) ```
void q_label_on_hide_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, const char* eventType, void* message, intptr_t* result ```
bool q_label_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, const char* eventType, void* message, intptr_t* result ```
bool q_label_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, bool (*slot)(QLabel*, const char*, void*, intptr_t*) ```
void q_label_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_label_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_label_qbase_metric(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, int32_t (*slot)(QLabel*, enum QPaintDevice__PaintDeviceMetric) ```
void q_label_on_metric(void* self, int32_t (*slot)(void*, int64_t));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QPainter* painter ```
void q_label_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QPainter* painter ```
void q_label_qbase_init_painter(void* self, void* painter);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QPainter*) ```
void q_label_on_init_painter(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QPoint* offset ```
QPaintDevice* q_label_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QPoint* offset ```
QPaintDevice* q_label_qbase_redirected(void* self, void* offset);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, QPaintDevice* (*slot)(QLabel*, QPoint*) ```
void q_label_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
QPainter* q_label_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
QPainter* q_label_qbase_shared_painter(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, QPainter* (*slot)() ```
void q_label_on_shared_painter(void* self, QPainter* (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QInputMethodEvent* param1 ```
void q_label_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QInputMethodEvent* param1 ```
void q_label_qbase_input_method_event(void* self, void* param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QInputMethodEvent*) ```
void q_label_on_input_method_event(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_label_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_label_qbase_input_method_query(void* self, int64_t param1);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, QVariant* (*slot)(QLabel*, enum Qt__InputMethodQuery) ```
void q_label_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QObject* watched, QEvent* event ```
bool q_label_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QObject* watched, QEvent* event ```
bool q_label_qbase_event_filter(void* self, void* watched, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, bool (*slot)(QLabel*, QObject*, QEvent*) ```
void q_label_on_event_filter(void* self, bool (*slot)(void*, void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QTimerEvent* event ```
void q_label_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QTimerEvent* event ```
void q_label_qbase_timer_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QTimerEvent*) ```
void q_label_on_timer_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QChildEvent* event ```
void q_label_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QChildEvent* event ```
void q_label_qbase_child_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QChildEvent*) ```
void q_label_on_child_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QEvent* event ```
void q_label_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QEvent* event ```
void q_label_qbase_custom_event(void* self, void* event);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QEvent*) ```
void q_label_on_custom_event(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QMetaMethod* signal ```
void q_label_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QMetaMethod* signal ```
void q_label_qbase_connect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QMetaMethod*) ```
void q_label_on_connect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QMetaMethod* signal ```
void q_label_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QMetaMethod* signal ```
void q_label_qbase_disconnect_notify(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QMetaMethod*) ```
void q_label_on_disconnect_notify(void* self, void (*slot)(void*, void*));

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QPainter* param1 ```
void q_label_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QPainter* param1 ```
void q_label_qbase_draw_frame(void* self, void* param1);

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)(QLabel*, QPainter*) ```
void q_label_on_draw_frame(void* self, void (*slot)(void*, void*));

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
void q_label_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
void q_label_qbase_update_micro_focus(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)() ```
void q_label_on_update_micro_focus(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
void q_label_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
void q_label_qbase_create(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)() ```
void q_label_on_create(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
void q_label_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
void q_label_qbase_destroy(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, void (*slot)() ```
void q_label_on_destroy(void* self, void (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
bool q_label_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
bool q_label_qbase_focus_next_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, bool (*slot)() ```
void q_label_on_focus_next_child(void* self, bool (*slot)());

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
bool q_label_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
bool q_label_qbase_focus_previous_child(void* self);

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, bool (*slot)() ```
void q_label_on_focus_previous_child(void* self, bool (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
QObject* q_label_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
QObject* q_label_qbase_sender(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, QObject* (*slot)() ```
void q_label_on_sender(void* self, QObject* (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self ```
int32_t q_label_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self ```
int32_t q_label_qbase_sender_signal_index(void* self);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, int32_t (*slot)() ```
void q_label_on_sender_signal_index(void* self, int32_t (*slot)());

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, const char* signal ```
int32_t q_label_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, const char* signal ```
int32_t q_label_qbase_receivers(void* self, const char* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, int32_t (*slot)(QLabel*, const char*) ```
void q_label_on_receivers(void* self, int32_t (*slot)(void*, const char*));

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLabel* self, QMetaMethod* signal ```
bool q_label_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLabel* self, QMetaMethod* signal ```
bool q_label_qbase_is_signal_connected(void* self, void* signal);

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLabel* self, bool (*slot)(QLabel*, QMetaMethod*) ```
void q_label_on_is_signal_connected(void* self, bool (*slot)(void*, void*));

/// Delete this object from C++ memory.
///
/// ``` QLabel* self ```
void q_label_delete(void* self);

#endif
