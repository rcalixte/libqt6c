#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqcursor.hpp"
#include "libqfont.hpp"
#include "libqfontinfo.hpp"
#include "libqfontmetrics.hpp"
#include "libqgraphicseffect.hpp"
#include "libqgraphicsproxywidget.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqlayout.hpp"
#include "libqlocale.hpp"
#include "libqmargins.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpalette.hpp"
#include "libqpixmap.hpp"
#include "libqpoint.hpp"
#include "libqrect.hpp"
#include "libqregion.hpp"
#include "libqscreen.hpp"
#include "libqsize.hpp"
#include "libqsizepolicy.hpp"
#include <string.h>
#include "libqstyle.hpp"
#include "libqstyleoption.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqprogressbar.hpp"
#include "libqprogressbar.h"

/// https://doc.qt.io/qt-6/qprogressbar.html

/// q_progressbar_new constructs a new QProgressBar object.
///
/// ``` QWidget* parent ```
QProgressBar* q_progressbar_new(void* parent) {
    return QProgressBar_new((QWidget*)parent);
}

/// q_progressbar_new2 constructs a new QProgressBar object.
///
///
QProgressBar* q_progressbar_new2() {
    return QProgressBar_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QProgressBar* self ```
QMetaObject* q_progressbar_meta_object(void* self) {
    return QProgressBar_MetaObject((QProgressBar*)self);
}

/// ``` QProgressBar* self, const char* param1 ```
void* q_progressbar_metacast(void* self, const char* param1) {
    return QProgressBar_Metacast((QProgressBar*)self, param1);
}

/// ``` QProgressBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_progressbar_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProgressBar_Metacall((QProgressBar*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QProgressBar* self, int32_t (*slot)(QProgressBar*, enum QMetaObject__Call, int, void*) ```
void q_progressbar_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QProgressBar_OnMetacall((QProgressBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressBar* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_progressbar_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QProgressBar_QBaseMetacall((QProgressBar*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_progressbar_tr(const char* s) {
    libqt_string _str = QProgressBar_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#minimum)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_minimum(void* self) {
    return QProgressBar_Minimum((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#maximum)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_maximum(void* self) {
    return QProgressBar_Maximum((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#value)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_value(void* self) {
    return QProgressBar_Value((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#text)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_text(void* self) {
    libqt_string _str = QProgressBar_Text((QProgressBar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Allows for overriding the related default method
///
/// ``` QProgressBar* self, const char* (*slot)() ```
void q_progressbar_on_text(void* self, const char* (*slot)()) {
    QProgressBar_OnText((QProgressBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressBar* self ```
const char* q_progressbar_qbase_text(void* self) {
    libqt_string _str = QProgressBar_QBaseText((QProgressBar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setTextVisible)
///
/// ``` QProgressBar* self, bool visible ```
void q_progressbar_set_text_visible(void* self, bool visible) {
    QProgressBar_SetTextVisible((QProgressBar*)self, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#isTextVisible)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_text_visible(void* self) {
    return QProgressBar_IsTextVisible((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#alignment)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_alignment(void* self) {
    return QProgressBar_Alignment((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setAlignment)
///
/// ``` QProgressBar* self, int alignment ```
void q_progressbar_set_alignment(void* self, int64_t alignment) {
    QProgressBar_SetAlignment((QProgressBar*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#sizeHint)
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_size_hint(void* self) {
    return QProgressBar_SizeHint((QProgressBar*)self);
}

/// Allows for overriding the related default method
///
/// ``` QProgressBar* self, QSize* (*slot)() ```
void q_progressbar_on_size_hint(void* self, QSize* (*slot)()) {
    QProgressBar_OnSizeHint((QProgressBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_qbase_size_hint(void* self) {
    return QProgressBar_QBaseSizeHint((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#minimumSizeHint)
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_minimum_size_hint(void* self) {
    return QProgressBar_MinimumSizeHint((QProgressBar*)self);
}

/// Allows for overriding the related default method
///
/// ``` QProgressBar* self, QSize* (*slot)() ```
void q_progressbar_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QProgressBar_OnMinimumSizeHint((QProgressBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_qbase_minimum_size_hint(void* self) {
    return QProgressBar_QBaseMinimumSizeHint((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#orientation)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_orientation(void* self) {
    return QProgressBar_Orientation((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setInvertedAppearance)
///
/// ``` QProgressBar* self, bool invert ```
void q_progressbar_set_inverted_appearance(void* self, bool invert) {
    QProgressBar_SetInvertedAppearance((QProgressBar*)self, invert);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#invertedAppearance)
///
/// ``` QProgressBar* self ```
bool q_progressbar_inverted_appearance(void* self) {
    return QProgressBar_InvertedAppearance((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setTextDirection)
///
/// ``` QProgressBar* self, enum QProgressBar__Direction textDirection ```
void q_progressbar_set_text_direction(void* self, int64_t textDirection) {
    QProgressBar_SetTextDirection((QProgressBar*)self, textDirection);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#textDirection)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_text_direction(void* self) {
    return QProgressBar_TextDirection((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setFormat)
///
/// ``` QProgressBar* self, const char* format ```
void q_progressbar_set_format(void* self, const char* format) {
    QProgressBar_SetFormat((QProgressBar*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#resetFormat)
///
/// ``` QProgressBar* self ```
void q_progressbar_reset_format(void* self) {
    QProgressBar_ResetFormat((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#format)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_format(void* self) {
    libqt_string _str = QProgressBar_Format((QProgressBar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#reset)
///
/// ``` QProgressBar* self ```
void q_progressbar_reset(void* self) {
    QProgressBar_Reset((QProgressBar*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setRange)
///
/// ``` QProgressBar* self, int minimum, int maximum ```
void q_progressbar_set_range(void* self, int minimum, int maximum) {
    QProgressBar_SetRange((QProgressBar*)self, minimum, maximum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setMinimum)
///
/// ``` QProgressBar* self, int minimum ```
void q_progressbar_set_minimum(void* self, int minimum) {
    QProgressBar_SetMinimum((QProgressBar*)self, minimum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setMaximum)
///
/// ``` QProgressBar* self, int maximum ```
void q_progressbar_set_maximum(void* self, int maximum) {
    QProgressBar_SetMaximum((QProgressBar*)self, maximum);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setValue)
///
/// ``` QProgressBar* self, int value ```
void q_progressbar_set_value(void* self, int value) {
    QProgressBar_SetValue((QProgressBar*)self, value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#setOrientation)
///
/// ``` QProgressBar* self, enum Qt__Orientation orientation ```
void q_progressbar_set_orientation(void* self, int64_t orientation) {
    QProgressBar_SetOrientation((QProgressBar*)self, orientation);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#valueChanged)
///
/// ``` QProgressBar* self, int value ```
void q_progressbar_value_changed(void* self, int value) {
    QProgressBar_ValueChanged((QProgressBar*)self, value);
}

/// ``` QProgressBar* self, void (*slot)(QProgressBar*, int) ```
void q_progressbar_on_value_changed(void* self, void (*slot)(void*, int)) {
    QProgressBar_Connect_ValueChanged((QProgressBar*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#event)
///
/// ``` QProgressBar* self, QEvent* e ```
bool q_progressbar_event(void* self, void* e) {
    return QProgressBar_Event((QProgressBar*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QProgressBar* self, bool (*slot)(QProgressBar*, QEvent*) ```
void q_progressbar_on_event(void* self, bool (*slot)(void*, void*)) {
    QProgressBar_OnEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressBar* self, QEvent* e ```
bool q_progressbar_qbase_event(void* self, void* e) {
    return QProgressBar_QBaseEvent((QProgressBar*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#paintEvent)
///
/// ``` QProgressBar* self, QPaintEvent* param1 ```
void q_progressbar_paint_event(void* self, void* param1) {
    QProgressBar_PaintEvent((QProgressBar*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QPaintEvent*) ```
void q_progressbar_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnPaintEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressBar* self, QPaintEvent* param1 ```
void q_progressbar_qbase_paint_event(void* self, void* param1) {
    QProgressBar_QBasePaintEvent((QProgressBar*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprogressbar.html#initStyleOption)
///
/// ``` QProgressBar* self, QStyleOptionProgressBar* option ```
void q_progressbar_init_style_option(void* self, void* option) {
    QProgressBar_InitStyleOption((QProgressBar*)self, (QStyleOptionProgressBar*)option);
}

/// Allows for overriding the related default method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QStyleOptionProgressBar*) ```
void q_progressbar_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnInitStyleOption((QProgressBar*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QProgressBar* self, QStyleOptionProgressBar* option ```
void q_progressbar_qbase_init_style_option(void* self, void* option) {
    QProgressBar_QBaseInitStyleOption((QProgressBar*)self, (QStyleOptionProgressBar*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_progressbar_tr2(const char* s, const char* c) {
    libqt_string _str = QProgressBar_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_progressbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QProgressBar_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QProgressBar* self ```
uintptr_t q_progressbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QProgressBar* self ```
void q_progressbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QProgressBar* self ```
uintptr_t q_progressbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QProgressBar* self ```
uintptr_t q_progressbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QProgressBar* self ```
QStyle* q_progressbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QProgressBar* self, QStyle* style ```
void q_progressbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QProgressBar* self, enum Qt__WindowModality windowModality ```
void q_progressbar_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QProgressBar* self, QWidget* param1 ```
bool q_progressbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QProgressBar* self, bool enabled ```
void q_progressbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QProgressBar* self, bool disabled ```
void q_progressbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QProgressBar* self, bool windowModified ```
void q_progressbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QProgressBar* self ```
QRect* q_progressbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QProgressBar* self ```
QRect* q_progressbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QProgressBar* self ```
QRect* q_progressbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QProgressBar* self ```
QPoint* q_progressbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QProgressBar* self ```
QRect* q_progressbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QProgressBar* self ```
QRect* q_progressbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QProgressBar* self ```
QRegion* q_progressbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QProgressBar* self, QSize* minimumSize ```
void q_progressbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QProgressBar* self, int minw, int minh ```
void q_progressbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QProgressBar* self, QSize* maximumSize ```
void q_progressbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QProgressBar* self, int maxw, int maxh ```
void q_progressbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QProgressBar* self, int minw ```
void q_progressbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QProgressBar* self, int minh ```
void q_progressbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QProgressBar* self, int maxw ```
void q_progressbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QProgressBar* self, int maxh ```
void q_progressbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QProgressBar* self, QSize* sizeIncrement ```
void q_progressbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QProgressBar* self, int w, int h ```
void q_progressbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QProgressBar* self ```
QSize* q_progressbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QProgressBar* self, QSize* baseSize ```
void q_progressbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QProgressBar* self, int basew, int baseh ```
void q_progressbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QProgressBar* self, QSize* fixedSize ```
void q_progressbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QProgressBar* self, int w, int h ```
void q_progressbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QProgressBar* self, int w ```
void q_progressbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QProgressBar* self, int h ```
void q_progressbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QProgressBar* self, QPointF* param1 ```
QPointF* q_progressbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QProgressBar* self, QPoint* param1 ```
QPoint* q_progressbar_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QProgressBar* self, QPointF* param1 ```
QPointF* q_progressbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QProgressBar* self, QPoint* param1 ```
QPoint* q_progressbar_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QProgressBar* self, QPointF* param1 ```
QPointF* q_progressbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QProgressBar* self, QPoint* param1 ```
QPoint* q_progressbar_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QProgressBar* self, QPointF* param1 ```
QPointF* q_progressbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QProgressBar* self, QPoint* param1 ```
QPoint* q_progressbar_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QProgressBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_progressbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QProgressBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_progressbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QProgressBar* self, QWidget* param1, QPointF* param2 ```
QPointF* q_progressbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QProgressBar* self, QWidget* param1, QPoint* param2 ```
QPoint* q_progressbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QProgressBar* self ```
QWidget* q_progressbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QProgressBar* self ```
QWidget* q_progressbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QProgressBar* self ```
QWidget* q_progressbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QProgressBar* self ```
QPalette* q_progressbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QProgressBar* self, QPalette* palette ```
void q_progressbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QProgressBar* self, enum QPalette__ColorRole backgroundRole ```
void q_progressbar_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QProgressBar* self, enum QPalette__ColorRole foregroundRole ```
void q_progressbar_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QProgressBar* self ```
QFont* q_progressbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QProgressBar* self, QFont* font ```
void q_progressbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QProgressBar* self ```
QFontMetrics* q_progressbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QProgressBar* self ```
QFontInfo* q_progressbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QProgressBar* self ```
QCursor* q_progressbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QProgressBar* self, QCursor* cursor ```
void q_progressbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QProgressBar* self ```
void q_progressbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QProgressBar* self, bool enable ```
void q_progressbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QProgressBar* self ```
bool q_progressbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QProgressBar* self ```
bool q_progressbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QProgressBar* self, bool enable ```
void q_progressbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QProgressBar* self ```
bool q_progressbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QProgressBar* self, QBitmap* mask ```
void q_progressbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QProgressBar* self, QRegion* mask ```
void q_progressbar_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QProgressBar* self ```
QRegion* q_progressbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QProgressBar* self ```
void q_progressbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressBar* self, QPaintDevice* target ```
void q_progressbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressBar* self, QPainter* painter ```
void q_progressbar_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QProgressBar* self ```
QPixmap* q_progressbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QProgressBar* self ```
QGraphicsEffect* q_progressbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QProgressBar* self, QGraphicsEffect* effect ```
void q_progressbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QProgressBar* self, enum Qt__GestureType typeVal ```
void q_progressbar_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QProgressBar* self, enum Qt__GestureType typeVal ```
void q_progressbar_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QProgressBar* self, const char* windowTitle ```
void q_progressbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QProgressBar* self, const char* styleSheet ```
void q_progressbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QProgressBar* self, QIcon* icon ```
void q_progressbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QProgressBar* self ```
QIcon* q_progressbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QProgressBar* self, const char* windowIconText ```
void q_progressbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QProgressBar* self, const char* windowRole ```
void q_progressbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QProgressBar* self, const char* filePath ```
void q_progressbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QProgressBar* self, double level ```
void q_progressbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QProgressBar* self ```
double q_progressbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QProgressBar* self, const char* toolTip ```
void q_progressbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QProgressBar* self, int msec ```
void q_progressbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QProgressBar* self, const char* statusTip ```
void q_progressbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QProgressBar* self, const char* whatsThis ```
void q_progressbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QProgressBar* self, const char* name ```
void q_progressbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QProgressBar* self, const char* description ```
void q_progressbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QProgressBar* self, enum Qt__LayoutDirection direction ```
void q_progressbar_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QProgressBar* self ```
void q_progressbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QProgressBar* self, QLocale* locale ```
void q_progressbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QProgressBar* self ```
QLocale* q_progressbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QProgressBar* self ```
void q_progressbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QProgressBar* self ```
void q_progressbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QProgressBar* self ```
void q_progressbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QProgressBar* self ```
void q_progressbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QProgressBar* self, enum Qt__FocusReason reason ```
void q_progressbar_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QProgressBar* self, enum Qt__FocusPolicy policy ```
void q_progressbar_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QProgressBar* self ```
bool q_progressbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_progressbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QProgressBar* self, QWidget* focusProxy ```
void q_progressbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QProgressBar* self ```
QWidget* q_progressbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QProgressBar* self, enum Qt__ContextMenuPolicy policy ```
void q_progressbar_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QProgressBar* self ```
void q_progressbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QProgressBar* self, QCursor* param1 ```
void q_progressbar_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QProgressBar* self ```
void q_progressbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QProgressBar* self ```
void q_progressbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QProgressBar* self ```
void q_progressbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QProgressBar* self, QKeySequence* key ```
int32_t q_progressbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QProgressBar* self, int id ```
void q_progressbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QProgressBar* self, int id ```
void q_progressbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QProgressBar* self, int id ```
void q_progressbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_progressbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_progressbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QProgressBar* self ```
bool q_progressbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QProgressBar* self, bool enable ```
void q_progressbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QProgressBar* self ```
QGraphicsProxyWidget* q_progressbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QProgressBar* self ```
void q_progressbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QProgressBar* self ```
void q_progressbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QProgressBar* self, int x, int y, int w, int h ```
void q_progressbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QProgressBar* self, QRect* param1 ```
void q_progressbar_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QProgressBar* self, QRegion* param1 ```
void q_progressbar_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QProgressBar* self, int x, int y, int w, int h ```
void q_progressbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QProgressBar* self, QRect* param1 ```
void q_progressbar_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QProgressBar* self, QRegion* param1 ```
void q_progressbar_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QProgressBar* self, bool hidden ```
void q_progressbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QProgressBar* self ```
void q_progressbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QProgressBar* self ```
void q_progressbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QProgressBar* self ```
void q_progressbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QProgressBar* self ```
void q_progressbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QProgressBar* self ```
void q_progressbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QProgressBar* self ```
void q_progressbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QProgressBar* self ```
bool q_progressbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QProgressBar* self ```
void q_progressbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QProgressBar* self ```
void q_progressbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QProgressBar* self, QWidget* param1 ```
void q_progressbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QProgressBar* self, int x, int y ```
void q_progressbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QProgressBar* self, QPoint* param1 ```
void q_progressbar_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QProgressBar* self, int w, int h ```
void q_progressbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QProgressBar* self, QSize* param1 ```
void q_progressbar_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QProgressBar* self, int x, int y, int w, int h ```
void q_progressbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QProgressBar* self, QRect* geometry ```
void q_progressbar_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QProgressBar* self ```
char* q_progressbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QProgressBar* self, const char* geometry ```
bool q_progressbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QProgressBar* self ```
void q_progressbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QProgressBar* self, QWidget* param1 ```
bool q_progressbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QProgressBar* self, int state ```
void q_progressbar_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QProgressBar* self, int state ```
void q_progressbar_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QProgressBar* self ```
QSizePolicy* q_progressbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QProgressBar* self, QSizePolicy* sizePolicy ```
void q_progressbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QProgressBar* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_progressbar_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QProgressBar* self ```
QRegion* q_progressbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QProgressBar* self, int left, int top, int right, int bottom ```
void q_progressbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QProgressBar* self, QMargins* margins ```
void q_progressbar_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QProgressBar* self ```
QMargins* q_progressbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QProgressBar* self ```
QRect* q_progressbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QProgressBar* self ```
QLayout* q_progressbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QProgressBar* self, QLayout* layout ```
void q_progressbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QProgressBar* self ```
void q_progressbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QProgressBar* self, QWidget* parent ```
void q_progressbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QProgressBar* self, QWidget* parent, int f ```
void q_progressbar_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QProgressBar* self, int dx, int dy ```
void q_progressbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QProgressBar* self, int dx, int dy, QRect* param3 ```
void q_progressbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QProgressBar* self ```
QWidget* q_progressbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QProgressBar* self ```
QWidget* q_progressbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QProgressBar* self ```
QWidget* q_progressbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QProgressBar* self ```
bool q_progressbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QProgressBar* self, bool on ```
void q_progressbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressBar* self, QAction* action ```
void q_progressbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QProgressBar* self, QAction* actions[] ```
void q_progressbar_add_actions(void* self, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_AddActions((QWidget*)self, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertActions)
///
/// ``` QProgressBar* self, QAction* before, QAction* actions[] ```
void q_progressbar_insert_actions(void* self, void* before, void* actions[]) {
    QAction** actions_arr = (QAction**)actions;
    size_t actions_len = 0;
    while (actions_arr[actions_len] != NULL) {
        actions_len++;
    }
    libqt_list actions_list = {
        .len = actions_len,
        .data = {(QAction*)actions},
    };
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions_list);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#insertAction)
///
/// ``` QProgressBar* self, QAction* before, QAction* action ```
void q_progressbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QProgressBar* self, QAction* action ```
void q_progressbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QProgressBar* self ```
libqt_list /* of QAction* */ q_progressbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressBar* self, const char* text ```
QAction* q_progressbar_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressBar* self, QIcon* icon, const char* text ```
QAction* q_progressbar_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressBar* self, const char* text, QKeySequence* shortcut ```
QAction* q_progressbar_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QProgressBar* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_progressbar_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QProgressBar* self ```
QWidget* q_progressbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QProgressBar* self, int typeVal ```
void q_progressbar_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QProgressBar* self, enum Qt__WindowType param1 ```
void q_progressbar_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QProgressBar* self, int typeVal ```
void q_progressbar_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_progressbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QProgressBar* self, int x, int y ```
QWidget* q_progressbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QProgressBar* self, QPoint* p ```
QWidget* q_progressbar_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QProgressBar* self, enum Qt__WidgetAttribute param1 ```
void q_progressbar_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QProgressBar* self, enum Qt__WidgetAttribute param1 ```
bool q_progressbar_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QProgressBar* self ```
void q_progressbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QProgressBar* self, QWidget* child ```
bool q_progressbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QProgressBar* self ```
bool q_progressbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QProgressBar* self, bool enabled ```
void q_progressbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QProgressBar* self ```
QBackingStore* q_progressbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QProgressBar* self ```
QWindow* q_progressbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QProgressBar* self ```
QScreen* q_progressbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QProgressBar* self, QScreen* screen ```
void q_progressbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_progressbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QProgressBar* self, const char* title ```
void q_progressbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QProgressBar* self, void (*slot)(QWidget*, const char*) ```
void q_progressbar_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QProgressBar* self, QIcon* icon ```
void q_progressbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QProgressBar* self, void (*slot)(QWidget*, QIcon*) ```
void q_progressbar_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QProgressBar* self, const char* iconText ```
void q_progressbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QProgressBar* self, void (*slot)(QWidget*, const char*) ```
void q_progressbar_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QProgressBar* self, QPoint* pos ```
void q_progressbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QProgressBar* self, void (*slot)(QWidget*, QPoint*) ```
void q_progressbar_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QProgressBar* self ```
int64_t q_progressbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QProgressBar* self, int hints ```
void q_progressbar_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressBar* self, QPaintDevice* target, QPoint* targetOffset ```
void q_progressbar_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_progressbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressBar* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_progressbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressBar* self, QPainter* painter, QPoint* targetOffset ```
void q_progressbar_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_progressbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QProgressBar* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_progressbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QProgressBar* self, QRect* rectangle ```
QPixmap* q_progressbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QProgressBar* self, enum Qt__GestureType typeVal, int flags ```
void q_progressbar_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QProgressBar* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_progressbar_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QProgressBar* self, int id, bool enable ```
void q_progressbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QProgressBar* self, int id, bool enable ```
void q_progressbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QProgressBar* self, enum Qt__WindowType param1, bool on ```
void q_progressbar_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QProgressBar* self, enum Qt__WidgetAttribute param1, bool on ```
void q_progressbar_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_progressbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_progressbar_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QProgressBar* self ```
const char* q_progressbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QProgressBar* self, const char* name ```
void q_progressbar_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QProgressBar* self ```
bool q_progressbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QProgressBar* self ```
bool q_progressbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QProgressBar* self, bool b ```
bool q_progressbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QProgressBar* self ```
QThread* q_progressbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QProgressBar* self, QThread* thread ```
void q_progressbar_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProgressBar* self, int interval ```
int32_t q_progressbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QProgressBar* self, int id ```
void q_progressbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QProgressBar* self ```
libqt_list /* of QObject* */ q_progressbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QProgressBar* self, QObject* filterObj ```
void q_progressbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QProgressBar* self, QObject* obj ```
void q_progressbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_progressbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProgressBar* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_progressbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_progressbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_progressbar_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QProgressBar* self ```
void q_progressbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QProgressBar* self ```
void q_progressbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QProgressBar* self, const char* name, QVariant* value ```
bool q_progressbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QProgressBar* self, const char* name ```
QVariant* q_progressbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QProgressBar* self ```
const char** q_progressbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProgressBar* self ```
QBindingStorage* q_progressbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QProgressBar* self ```
QBindingStorage* q_progressbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProgressBar* self ```
void q_progressbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QProgressBar* self, void (*slot)(QObject*) ```
void q_progressbar_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QProgressBar* self ```
QObject* q_progressbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QProgressBar* self, const char* classname ```
bool q_progressbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QProgressBar* self ```
void q_progressbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QProgressBar* self, int interval, enum Qt__TimerType timerType ```
int32_t q_progressbar_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_progressbar_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QProgressBar* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_progressbar_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QProgressBar* self, QObject* param1 ```
void q_progressbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QProgressBar* self, void (*slot)(QObject*, QObject*) ```
void q_progressbar_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QProgressBar* self ```
bool q_progressbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QProgressBar* self ```
double q_progressbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QProgressBar* self ```
double q_progressbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_progressbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_dev_type(void* self) {
    return QProgressBar_DevType((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_qbase_dev_type(void* self) {
    return QProgressBar_QBaseDevType((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, int32_t (*slot)() ```
void q_progressbar_on_dev_type(void* self, int32_t (*slot)()) {
    QProgressBar_OnDevType((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, bool visible ```
void q_progressbar_set_visible(void* self, bool visible) {
    QProgressBar_SetVisible((QProgressBar*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, bool visible ```
void q_progressbar_qbase_set_visible(void* self, bool visible) {
    QProgressBar_QBaseSetVisible((QProgressBar*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, bool) ```
void q_progressbar_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QProgressBar_OnSetVisible((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, int param1 ```
int32_t q_progressbar_height_for_width(void* self, int param1) {
    return QProgressBar_HeightForWidth((QProgressBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, int param1 ```
int32_t q_progressbar_qbase_height_for_width(void* self, int param1) {
    return QProgressBar_QBaseHeightForWidth((QProgressBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, int32_t (*slot)(QProgressBar*, int) ```
void q_progressbar_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QProgressBar_OnHeightForWidth((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
bool q_progressbar_has_height_for_width(void* self) {
    return QProgressBar_HasHeightForWidth((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
bool q_progressbar_qbase_has_height_for_width(void* self) {
    return QProgressBar_QBaseHasHeightForWidth((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, bool (*slot)() ```
void q_progressbar_on_has_height_for_width(void* self, bool (*slot)()) {
    QProgressBar_OnHasHeightForWidth((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
QPaintEngine* q_progressbar_paint_engine(void* self) {
    return QProgressBar_PaintEngine((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
QPaintEngine* q_progressbar_qbase_paint_engine(void* self) {
    return QProgressBar_QBasePaintEngine((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, QPaintEngine* (*slot)() ```
void q_progressbar_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QProgressBar_OnPaintEngine((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QMouseEvent* event ```
void q_progressbar_mouse_press_event(void* self, void* event) {
    QProgressBar_MousePressEvent((QProgressBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QMouseEvent* event ```
void q_progressbar_qbase_mouse_press_event(void* self, void* event) {
    QProgressBar_QBaseMousePressEvent((QProgressBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QMouseEvent*) ```
void q_progressbar_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnMousePressEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QMouseEvent* event ```
void q_progressbar_mouse_release_event(void* self, void* event) {
    QProgressBar_MouseReleaseEvent((QProgressBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QMouseEvent* event ```
void q_progressbar_qbase_mouse_release_event(void* self, void* event) {
    QProgressBar_QBaseMouseReleaseEvent((QProgressBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QMouseEvent*) ```
void q_progressbar_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnMouseReleaseEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QMouseEvent* event ```
void q_progressbar_mouse_double_click_event(void* self, void* event) {
    QProgressBar_MouseDoubleClickEvent((QProgressBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QMouseEvent* event ```
void q_progressbar_qbase_mouse_double_click_event(void* self, void* event) {
    QProgressBar_QBaseMouseDoubleClickEvent((QProgressBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QMouseEvent*) ```
void q_progressbar_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnMouseDoubleClickEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QMouseEvent* event ```
void q_progressbar_mouse_move_event(void* self, void* event) {
    QProgressBar_MouseMoveEvent((QProgressBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QMouseEvent* event ```
void q_progressbar_qbase_mouse_move_event(void* self, void* event) {
    QProgressBar_QBaseMouseMoveEvent((QProgressBar*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QMouseEvent*) ```
void q_progressbar_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnMouseMoveEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QWheelEvent* event ```
void q_progressbar_wheel_event(void* self, void* event) {
    QProgressBar_WheelEvent((QProgressBar*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QWheelEvent* event ```
void q_progressbar_qbase_wheel_event(void* self, void* event) {
    QProgressBar_QBaseWheelEvent((QProgressBar*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QWheelEvent*) ```
void q_progressbar_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnWheelEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QKeyEvent* event ```
void q_progressbar_key_press_event(void* self, void* event) {
    QProgressBar_KeyPressEvent((QProgressBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QKeyEvent* event ```
void q_progressbar_qbase_key_press_event(void* self, void* event) {
    QProgressBar_QBaseKeyPressEvent((QProgressBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QKeyEvent*) ```
void q_progressbar_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnKeyPressEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QKeyEvent* event ```
void q_progressbar_key_release_event(void* self, void* event) {
    QProgressBar_KeyReleaseEvent((QProgressBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QKeyEvent* event ```
void q_progressbar_qbase_key_release_event(void* self, void* event) {
    QProgressBar_QBaseKeyReleaseEvent((QProgressBar*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QKeyEvent*) ```
void q_progressbar_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnKeyReleaseEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QFocusEvent* event ```
void q_progressbar_focus_in_event(void* self, void* event) {
    QProgressBar_FocusInEvent((QProgressBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QFocusEvent* event ```
void q_progressbar_qbase_focus_in_event(void* self, void* event) {
    QProgressBar_QBaseFocusInEvent((QProgressBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QFocusEvent*) ```
void q_progressbar_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnFocusInEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QFocusEvent* event ```
void q_progressbar_focus_out_event(void* self, void* event) {
    QProgressBar_FocusOutEvent((QProgressBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QFocusEvent* event ```
void q_progressbar_qbase_focus_out_event(void* self, void* event) {
    QProgressBar_QBaseFocusOutEvent((QProgressBar*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QFocusEvent*) ```
void q_progressbar_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnFocusOutEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QEnterEvent* event ```
void q_progressbar_enter_event(void* self, void* event) {
    QProgressBar_EnterEvent((QProgressBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QEnterEvent* event ```
void q_progressbar_qbase_enter_event(void* self, void* event) {
    QProgressBar_QBaseEnterEvent((QProgressBar*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QEnterEvent*) ```
void q_progressbar_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnEnterEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QEvent* event ```
void q_progressbar_leave_event(void* self, void* event) {
    QProgressBar_LeaveEvent((QProgressBar*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QEvent* event ```
void q_progressbar_qbase_leave_event(void* self, void* event) {
    QProgressBar_QBaseLeaveEvent((QProgressBar*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QEvent*) ```
void q_progressbar_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnLeaveEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QMoveEvent* event ```
void q_progressbar_move_event(void* self, void* event) {
    QProgressBar_MoveEvent((QProgressBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QMoveEvent* event ```
void q_progressbar_qbase_move_event(void* self, void* event) {
    QProgressBar_QBaseMoveEvent((QProgressBar*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QMoveEvent*) ```
void q_progressbar_on_move_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnMoveEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QResizeEvent* event ```
void q_progressbar_resize_event(void* self, void* event) {
    QProgressBar_ResizeEvent((QProgressBar*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QResizeEvent* event ```
void q_progressbar_qbase_resize_event(void* self, void* event) {
    QProgressBar_QBaseResizeEvent((QProgressBar*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QResizeEvent*) ```
void q_progressbar_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnResizeEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QCloseEvent* event ```
void q_progressbar_close_event(void* self, void* event) {
    QProgressBar_CloseEvent((QProgressBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QCloseEvent* event ```
void q_progressbar_qbase_close_event(void* self, void* event) {
    QProgressBar_QBaseCloseEvent((QProgressBar*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QCloseEvent*) ```
void q_progressbar_on_close_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnCloseEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QContextMenuEvent* event ```
void q_progressbar_context_menu_event(void* self, void* event) {
    QProgressBar_ContextMenuEvent((QProgressBar*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QContextMenuEvent* event ```
void q_progressbar_qbase_context_menu_event(void* self, void* event) {
    QProgressBar_QBaseContextMenuEvent((QProgressBar*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QContextMenuEvent*) ```
void q_progressbar_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnContextMenuEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QTabletEvent* event ```
void q_progressbar_tablet_event(void* self, void* event) {
    QProgressBar_TabletEvent((QProgressBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QTabletEvent* event ```
void q_progressbar_qbase_tablet_event(void* self, void* event) {
    QProgressBar_QBaseTabletEvent((QProgressBar*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QTabletEvent*) ```
void q_progressbar_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnTabletEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QActionEvent* event ```
void q_progressbar_action_event(void* self, void* event) {
    QProgressBar_ActionEvent((QProgressBar*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QActionEvent* event ```
void q_progressbar_qbase_action_event(void* self, void* event) {
    QProgressBar_QBaseActionEvent((QProgressBar*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QActionEvent*) ```
void q_progressbar_on_action_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnActionEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QDragEnterEvent* event ```
void q_progressbar_drag_enter_event(void* self, void* event) {
    QProgressBar_DragEnterEvent((QProgressBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QDragEnterEvent* event ```
void q_progressbar_qbase_drag_enter_event(void* self, void* event) {
    QProgressBar_QBaseDragEnterEvent((QProgressBar*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QDragEnterEvent*) ```
void q_progressbar_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnDragEnterEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QDragMoveEvent* event ```
void q_progressbar_drag_move_event(void* self, void* event) {
    QProgressBar_DragMoveEvent((QProgressBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QDragMoveEvent* event ```
void q_progressbar_qbase_drag_move_event(void* self, void* event) {
    QProgressBar_QBaseDragMoveEvent((QProgressBar*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QDragMoveEvent*) ```
void q_progressbar_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnDragMoveEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QDragLeaveEvent* event ```
void q_progressbar_drag_leave_event(void* self, void* event) {
    QProgressBar_DragLeaveEvent((QProgressBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QDragLeaveEvent* event ```
void q_progressbar_qbase_drag_leave_event(void* self, void* event) {
    QProgressBar_QBaseDragLeaveEvent((QProgressBar*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QDragLeaveEvent*) ```
void q_progressbar_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnDragLeaveEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QDropEvent* event ```
void q_progressbar_drop_event(void* self, void* event) {
    QProgressBar_DropEvent((QProgressBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QDropEvent* event ```
void q_progressbar_qbase_drop_event(void* self, void* event) {
    QProgressBar_QBaseDropEvent((QProgressBar*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QDropEvent*) ```
void q_progressbar_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnDropEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QShowEvent* event ```
void q_progressbar_show_event(void* self, void* event) {
    QProgressBar_ShowEvent((QProgressBar*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QShowEvent* event ```
void q_progressbar_qbase_show_event(void* self, void* event) {
    QProgressBar_QBaseShowEvent((QProgressBar*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QShowEvent*) ```
void q_progressbar_on_show_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnShowEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QHideEvent* event ```
void q_progressbar_hide_event(void* self, void* event) {
    QProgressBar_HideEvent((QProgressBar*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QHideEvent* event ```
void q_progressbar_qbase_hide_event(void* self, void* event) {
    QProgressBar_QBaseHideEvent((QProgressBar*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QHideEvent*) ```
void q_progressbar_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnHideEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_progressbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QProgressBar_NativeEvent((QProgressBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, const char* eventType, void* message, intptr_t* result ```
bool q_progressbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QProgressBar_QBaseNativeEvent((QProgressBar*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, bool (*slot)(QProgressBar*, const char*, void*, intptr_t*) ```
void q_progressbar_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QProgressBar_OnNativeEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QEvent* param1 ```
void q_progressbar_change_event(void* self, void* param1) {
    QProgressBar_ChangeEvent((QProgressBar*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QEvent* param1 ```
void q_progressbar_qbase_change_event(void* self, void* param1) {
    QProgressBar_QBaseChangeEvent((QProgressBar*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QEvent*) ```
void q_progressbar_on_change_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnChangeEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_progressbar_metric(void* self, int64_t param1) {
    return QProgressBar_Metric((QProgressBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_progressbar_qbase_metric(void* self, int64_t param1) {
    return QProgressBar_QBaseMetric((QProgressBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, int32_t (*slot)(QProgressBar*, enum QPaintDevice__PaintDeviceMetric) ```
void q_progressbar_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QProgressBar_OnMetric((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QPainter* painter ```
void q_progressbar_init_painter(void* self, void* painter) {
    QProgressBar_InitPainter((QProgressBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QPainter* painter ```
void q_progressbar_qbase_init_painter(void* self, void* painter) {
    QProgressBar_QBaseInitPainter((QProgressBar*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QPainter*) ```
void q_progressbar_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnInitPainter((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QPoint* offset ```
QPaintDevice* q_progressbar_redirected(void* self, void* offset) {
    return QProgressBar_Redirected((QProgressBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QPoint* offset ```
QPaintDevice* q_progressbar_qbase_redirected(void* self, void* offset) {
    return QProgressBar_QBaseRedirected((QProgressBar*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, QPaintDevice* (*slot)(QProgressBar*, QPoint*) ```
void q_progressbar_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QProgressBar_OnRedirected((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
QPainter* q_progressbar_shared_painter(void* self) {
    return QProgressBar_SharedPainter((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
QPainter* q_progressbar_qbase_shared_painter(void* self) {
    return QProgressBar_QBaseSharedPainter((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, QPainter* (*slot)() ```
void q_progressbar_on_shared_painter(void* self, QPainter* (*slot)()) {
    QProgressBar_OnSharedPainter((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QInputMethodEvent* param1 ```
void q_progressbar_input_method_event(void* self, void* param1) {
    QProgressBar_InputMethodEvent((QProgressBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QInputMethodEvent* param1 ```
void q_progressbar_qbase_input_method_event(void* self, void* param1) {
    QProgressBar_QBaseInputMethodEvent((QProgressBar*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QInputMethodEvent*) ```
void q_progressbar_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnInputMethodEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_progressbar_input_method_query(void* self, int64_t param1) {
    return QProgressBar_InputMethodQuery((QProgressBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_progressbar_qbase_input_method_query(void* self, int64_t param1) {
    return QProgressBar_QBaseInputMethodQuery((QProgressBar*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, QVariant* (*slot)(QProgressBar*, enum Qt__InputMethodQuery) ```
void q_progressbar_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QProgressBar_OnInputMethodQuery((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, bool next ```
bool q_progressbar_focus_next_prev_child(void* self, bool next) {
    return QProgressBar_FocusNextPrevChild((QProgressBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, bool next ```
bool q_progressbar_qbase_focus_next_prev_child(void* self, bool next) {
    return QProgressBar_QBaseFocusNextPrevChild((QProgressBar*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, bool (*slot)(QProgressBar*, bool) ```
void q_progressbar_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QProgressBar_OnFocusNextPrevChild((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QObject* watched, QEvent* event ```
bool q_progressbar_event_filter(void* self, void* watched, void* event) {
    return QProgressBar_EventFilter((QProgressBar*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QObject* watched, QEvent* event ```
bool q_progressbar_qbase_event_filter(void* self, void* watched, void* event) {
    return QProgressBar_QBaseEventFilter((QProgressBar*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, bool (*slot)(QProgressBar*, QObject*, QEvent*) ```
void q_progressbar_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QProgressBar_OnEventFilter((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QTimerEvent* event ```
void q_progressbar_timer_event(void* self, void* event) {
    QProgressBar_TimerEvent((QProgressBar*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QTimerEvent* event ```
void q_progressbar_qbase_timer_event(void* self, void* event) {
    QProgressBar_QBaseTimerEvent((QProgressBar*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QTimerEvent*) ```
void q_progressbar_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnTimerEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QChildEvent* event ```
void q_progressbar_child_event(void* self, void* event) {
    QProgressBar_ChildEvent((QProgressBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QChildEvent* event ```
void q_progressbar_qbase_child_event(void* self, void* event) {
    QProgressBar_QBaseChildEvent((QProgressBar*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QChildEvent*) ```
void q_progressbar_on_child_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnChildEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QEvent* event ```
void q_progressbar_custom_event(void* self, void* event) {
    QProgressBar_CustomEvent((QProgressBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QEvent* event ```
void q_progressbar_qbase_custom_event(void* self, void* event) {
    QProgressBar_QBaseCustomEvent((QProgressBar*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QEvent*) ```
void q_progressbar_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnCustomEvent((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QMetaMethod* signal ```
void q_progressbar_connect_notify(void* self, void* signal) {
    QProgressBar_ConnectNotify((QProgressBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QMetaMethod* signal ```
void q_progressbar_qbase_connect_notify(void* self, void* signal) {
    QProgressBar_QBaseConnectNotify((QProgressBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QMetaMethod*) ```
void q_progressbar_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnConnectNotify((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QMetaMethod* signal ```
void q_progressbar_disconnect_notify(void* self, void* signal) {
    QProgressBar_DisconnectNotify((QProgressBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QMetaMethod* signal ```
void q_progressbar_qbase_disconnect_notify(void* self, void* signal) {
    QProgressBar_QBaseDisconnectNotify((QProgressBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)(QProgressBar*, QMetaMethod*) ```
void q_progressbar_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QProgressBar_OnDisconnectNotify((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
void q_progressbar_update_micro_focus(void* self) {
    QProgressBar_UpdateMicroFocus((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
void q_progressbar_qbase_update_micro_focus(void* self) {
    QProgressBar_QBaseUpdateMicroFocus((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)() ```
void q_progressbar_on_update_micro_focus(void* self, void (*slot)()) {
    QProgressBar_OnUpdateMicroFocus((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
void q_progressbar_create(void* self) {
    QProgressBar_Create((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
void q_progressbar_qbase_create(void* self) {
    QProgressBar_QBaseCreate((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)() ```
void q_progressbar_on_create(void* self, void (*slot)()) {
    QProgressBar_OnCreate((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
void q_progressbar_destroy(void* self) {
    QProgressBar_Destroy((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
void q_progressbar_qbase_destroy(void* self) {
    QProgressBar_QBaseDestroy((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, void (*slot)() ```
void q_progressbar_on_destroy(void* self, void (*slot)()) {
    QProgressBar_OnDestroy((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
bool q_progressbar_focus_next_child(void* self) {
    return QProgressBar_FocusNextChild((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
bool q_progressbar_qbase_focus_next_child(void* self) {
    return QProgressBar_QBaseFocusNextChild((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, bool (*slot)() ```
void q_progressbar_on_focus_next_child(void* self, bool (*slot)()) {
    QProgressBar_OnFocusNextChild((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
bool q_progressbar_focus_previous_child(void* self) {
    return QProgressBar_FocusPreviousChild((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
bool q_progressbar_qbase_focus_previous_child(void* self) {
    return QProgressBar_QBaseFocusPreviousChild((QProgressBar*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, bool (*slot)() ```
void q_progressbar_on_focus_previous_child(void* self, bool (*slot)()) {
    QProgressBar_OnFocusPreviousChild((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
QObject* q_progressbar_sender(void* self) {
    return QProgressBar_Sender((QProgressBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
QObject* q_progressbar_qbase_sender(void* self) {
    return QProgressBar_QBaseSender((QProgressBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, QObject* (*slot)() ```
void q_progressbar_on_sender(void* self, QObject* (*slot)()) {
    QProgressBar_OnSender((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_sender_signal_index(void* self) {
    return QProgressBar_SenderSignalIndex((QProgressBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self ```
int32_t q_progressbar_qbase_sender_signal_index(void* self) {
    return QProgressBar_QBaseSenderSignalIndex((QProgressBar*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, int32_t (*slot)() ```
void q_progressbar_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QProgressBar_OnSenderSignalIndex((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, const char* signal ```
int32_t q_progressbar_receivers(void* self, const char* signal) {
    return QProgressBar_Receivers((QProgressBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, const char* signal ```
int32_t q_progressbar_qbase_receivers(void* self, const char* signal) {
    return QProgressBar_QBaseReceivers((QProgressBar*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, int32_t (*slot)(QProgressBar*, const char*) ```
void q_progressbar_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QProgressBar_OnReceivers((QProgressBar*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QProgressBar* self, QMetaMethod* signal ```
bool q_progressbar_is_signal_connected(void* self, void* signal) {
    return QProgressBar_IsSignalConnected((QProgressBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QProgressBar* self, QMetaMethod* signal ```
bool q_progressbar_qbase_is_signal_connected(void* self, void* signal) {
    return QProgressBar_QBaseIsSignalConnected((QProgressBar*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QProgressBar* self, bool (*slot)(QProgressBar*, QMetaMethod*) ```
void q_progressbar_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QProgressBar_OnIsSignalConnected((QProgressBar*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QProgressBar* self ```
void q_progressbar_delete(void* self) {
    QProgressBar_Delete((QProgressBar*)(self));
}