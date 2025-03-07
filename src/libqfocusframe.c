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
#include "libqfocusframe.hpp"
#include "libqfocusframe.h"

/// https://doc.qt.io/qt-6/qfocusframe.html

/// q_focusframe_new constructs a new QFocusFrame object.
///
/// ``` QWidget* parent ```
QFocusFrame* q_focusframe_new(void* parent) {
    return QFocusFrame_new((QWidget*)parent);
}

/// q_focusframe_new2 constructs a new QFocusFrame object.
///
///
QFocusFrame* q_focusframe_new2() {
    return QFocusFrame_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QFocusFrame* self ```
QMetaObject* q_focusframe_meta_object(void* self) {
    return QFocusFrame_MetaObject((QFocusFrame*)self);
}

/// ``` QFocusFrame* self, const char* param1 ```
void* q_focusframe_metacast(void* self, const char* param1) {
    return QFocusFrame_Metacast((QFocusFrame*)self, param1);
}

/// ``` QFocusFrame* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_focusframe_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFocusFrame_Metacall((QFocusFrame*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QFocusFrame* self, int32_t (*slot)(QFocusFrame*, enum QMetaObject__Call, int, void*) ```
void q_focusframe_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QFocusFrame_OnMetacall((QFocusFrame*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFocusFrame* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_focusframe_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QFocusFrame_QBaseMetacall((QFocusFrame*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_focusframe_tr(const char* s) {
    libqt_string _str = QFocusFrame_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusframe.html#setWidget)
///
/// ``` QFocusFrame* self, QWidget* widget ```
void q_focusframe_set_widget(void* self, void* widget) {
    QFocusFrame_SetWidget((QFocusFrame*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusframe.html#widget)
///
/// ``` QFocusFrame* self ```
QWidget* q_focusframe_widget(void* self) {
    return QFocusFrame_Widget((QFocusFrame*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusframe.html#event)
///
/// ``` QFocusFrame* self, QEvent* e ```
bool q_focusframe_event(void* self, void* e) {
    return QFocusFrame_Event((QFocusFrame*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QFocusFrame* self, bool (*slot)(QFocusFrame*, QEvent*) ```
void q_focusframe_on_event(void* self, bool (*slot)(void*, void*)) {
    QFocusFrame_OnEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFocusFrame* self, QEvent* e ```
bool q_focusframe_qbase_event(void* self, void* e) {
    return QFocusFrame_QBaseEvent((QFocusFrame*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusframe.html#eventFilter)
///
/// ``` QFocusFrame* self, QObject* param1, QEvent* param2 ```
bool q_focusframe_event_filter(void* self, void* param1, void* param2) {
    return QFocusFrame_EventFilter((QFocusFrame*)self, (QObject*)param1, (QEvent*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QFocusFrame* self, bool (*slot)(QFocusFrame*, QObject*, QEvent*) ```
void q_focusframe_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QFocusFrame_OnEventFilter((QFocusFrame*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFocusFrame* self, QObject* param1, QEvent* param2 ```
bool q_focusframe_qbase_event_filter(void* self, void* param1, void* param2) {
    return QFocusFrame_QBaseEventFilter((QFocusFrame*)self, (QObject*)param1, (QEvent*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusframe.html#paintEvent)
///
/// ``` QFocusFrame* self, QPaintEvent* param1 ```
void q_focusframe_paint_event(void* self, void* param1) {
    QFocusFrame_PaintEvent((QFocusFrame*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QPaintEvent*) ```
void q_focusframe_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnPaintEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFocusFrame* self, QPaintEvent* param1 ```
void q_focusframe_qbase_paint_event(void* self, void* param1) {
    QFocusFrame_QBasePaintEvent((QFocusFrame*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qfocusframe.html#initStyleOption)
///
/// ``` QFocusFrame* self, QStyleOption* option ```
void q_focusframe_init_style_option(void* self, void* option) {
    QFocusFrame_InitStyleOption((QFocusFrame*)self, (QStyleOption*)option);
}

/// Allows for overriding the related default method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QStyleOption*) ```
void q_focusframe_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnInitStyleOption((QFocusFrame*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QFocusFrame* self, QStyleOption* option ```
void q_focusframe_qbase_init_style_option(void* self, void* option) {
    QFocusFrame_QBaseInitStyleOption((QFocusFrame*)self, (QStyleOption*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_focusframe_tr2(const char* s, const char* c) {
    libqt_string _str = QFocusFrame_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_focusframe_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QFocusFrame_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QFocusFrame* self ```
uintptr_t q_focusframe_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QFocusFrame* self ```
void q_focusframe_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QFocusFrame* self ```
uintptr_t q_focusframe_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QFocusFrame* self ```
uintptr_t q_focusframe_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QFocusFrame* self ```
QStyle* q_focusframe_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QFocusFrame* self, QStyle* style ```
void q_focusframe_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QFocusFrame* self, enum Qt__WindowModality windowModality ```
void q_focusframe_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QFocusFrame* self, QWidget* param1 ```
bool q_focusframe_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QFocusFrame* self, bool enabled ```
void q_focusframe_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QFocusFrame* self, bool disabled ```
void q_focusframe_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QFocusFrame* self, bool windowModified ```
void q_focusframe_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QFocusFrame* self ```
QRect* q_focusframe_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QFocusFrame* self ```
QRect* q_focusframe_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QFocusFrame* self ```
QRect* q_focusframe_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QFocusFrame* self ```
QPoint* q_focusframe_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QFocusFrame* self ```
QRect* q_focusframe_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QFocusFrame* self ```
QRect* q_focusframe_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QFocusFrame* self ```
QRegion* q_focusframe_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFocusFrame* self, QSize* minimumSize ```
void q_focusframe_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QFocusFrame* self, int minw, int minh ```
void q_focusframe_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFocusFrame* self, QSize* maximumSize ```
void q_focusframe_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QFocusFrame* self, int maxw, int maxh ```
void q_focusframe_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QFocusFrame* self, int minw ```
void q_focusframe_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QFocusFrame* self, int minh ```
void q_focusframe_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QFocusFrame* self, int maxw ```
void q_focusframe_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QFocusFrame* self, int maxh ```
void q_focusframe_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFocusFrame* self, QSize* sizeIncrement ```
void q_focusframe_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QFocusFrame* self, int w, int h ```
void q_focusframe_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFocusFrame* self, QSize* baseSize ```
void q_focusframe_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QFocusFrame* self, int basew, int baseh ```
void q_focusframe_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFocusFrame* self, QSize* fixedSize ```
void q_focusframe_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QFocusFrame* self, int w, int h ```
void q_focusframe_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QFocusFrame* self, int w ```
void q_focusframe_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QFocusFrame* self, int h ```
void q_focusframe_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFocusFrame* self, QPointF* param1 ```
QPointF* q_focusframe_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QFocusFrame* self, QPoint* param1 ```
QPoint* q_focusframe_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFocusFrame* self, QPointF* param1 ```
QPointF* q_focusframe_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QFocusFrame* self, QPoint* param1 ```
QPoint* q_focusframe_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFocusFrame* self, QPointF* param1 ```
QPointF* q_focusframe_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QFocusFrame* self, QPoint* param1 ```
QPoint* q_focusframe_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFocusFrame* self, QPointF* param1 ```
QPointF* q_focusframe_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QFocusFrame* self, QPoint* param1 ```
QPoint* q_focusframe_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFocusFrame* self, QWidget* param1, QPointF* param2 ```
QPointF* q_focusframe_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QFocusFrame* self, QWidget* param1, QPoint* param2 ```
QPoint* q_focusframe_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFocusFrame* self, QWidget* param1, QPointF* param2 ```
QPointF* q_focusframe_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QFocusFrame* self, QWidget* param1, QPoint* param2 ```
QPoint* q_focusframe_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QFocusFrame* self ```
QWidget* q_focusframe_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QFocusFrame* self ```
QWidget* q_focusframe_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QFocusFrame* self ```
QWidget* q_focusframe_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QFocusFrame* self ```
QPalette* q_focusframe_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QFocusFrame* self, QPalette* palette ```
void q_focusframe_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QFocusFrame* self, enum QPalette__ColorRole backgroundRole ```
void q_focusframe_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QFocusFrame* self, enum QPalette__ColorRole foregroundRole ```
void q_focusframe_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QFocusFrame* self ```
QFont* q_focusframe_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QFocusFrame* self, QFont* font ```
void q_focusframe_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QFocusFrame* self ```
QFontMetrics* q_focusframe_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QFocusFrame* self ```
QFontInfo* q_focusframe_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QFocusFrame* self ```
QCursor* q_focusframe_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QFocusFrame* self, QCursor* cursor ```
void q_focusframe_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QFocusFrame* self ```
void q_focusframe_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QFocusFrame* self, bool enable ```
void q_focusframe_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QFocusFrame* self, bool enable ```
void q_focusframe_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFocusFrame* self, QBitmap* mask ```
void q_focusframe_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QFocusFrame* self, QRegion* mask ```
void q_focusframe_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QFocusFrame* self ```
QRegion* q_focusframe_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QFocusFrame* self ```
void q_focusframe_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFocusFrame* self, QPaintDevice* target ```
void q_focusframe_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFocusFrame* self, QPainter* painter ```
void q_focusframe_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFocusFrame* self ```
QPixmap* q_focusframe_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QFocusFrame* self ```
QGraphicsEffect* q_focusframe_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QFocusFrame* self, QGraphicsEffect* effect ```
void q_focusframe_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFocusFrame* self, enum Qt__GestureType typeVal ```
void q_focusframe_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QFocusFrame* self, enum Qt__GestureType typeVal ```
void q_focusframe_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QFocusFrame* self, const char* windowTitle ```
void q_focusframe_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QFocusFrame* self, const char* styleSheet ```
void q_focusframe_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QFocusFrame* self, QIcon* icon ```
void q_focusframe_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QFocusFrame* self ```
QIcon* q_focusframe_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QFocusFrame* self, const char* windowIconText ```
void q_focusframe_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QFocusFrame* self, const char* windowRole ```
void q_focusframe_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QFocusFrame* self, const char* filePath ```
void q_focusframe_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QFocusFrame* self, double level ```
void q_focusframe_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QFocusFrame* self ```
double q_focusframe_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QFocusFrame* self, const char* toolTip ```
void q_focusframe_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QFocusFrame* self, int msec ```
void q_focusframe_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QFocusFrame* self, const char* statusTip ```
void q_focusframe_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QFocusFrame* self, const char* whatsThis ```
void q_focusframe_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QFocusFrame* self, const char* name ```
void q_focusframe_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QFocusFrame* self, const char* description ```
void q_focusframe_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QFocusFrame* self, enum Qt__LayoutDirection direction ```
void q_focusframe_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QFocusFrame* self ```
void q_focusframe_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QFocusFrame* self, QLocale* locale ```
void q_focusframe_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QFocusFrame* self ```
QLocale* q_focusframe_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QFocusFrame* self ```
void q_focusframe_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFocusFrame* self ```
void q_focusframe_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QFocusFrame* self ```
void q_focusframe_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QFocusFrame* self ```
void q_focusframe_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QFocusFrame* self, enum Qt__FocusReason reason ```
void q_focusframe_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QFocusFrame* self, enum Qt__FocusPolicy policy ```
void q_focusframe_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_focusframe_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QFocusFrame* self, QWidget* focusProxy ```
void q_focusframe_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QFocusFrame* self ```
QWidget* q_focusframe_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QFocusFrame* self, enum Qt__ContextMenuPolicy policy ```
void q_focusframe_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFocusFrame* self ```
void q_focusframe_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QFocusFrame* self, QCursor* param1 ```
void q_focusframe_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QFocusFrame* self ```
void q_focusframe_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QFocusFrame* self ```
void q_focusframe_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QFocusFrame* self ```
void q_focusframe_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFocusFrame* self, QKeySequence* key ```
int32_t q_focusframe_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QFocusFrame* self, int id ```
void q_focusframe_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFocusFrame* self, int id ```
void q_focusframe_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFocusFrame* self, int id ```
void q_focusframe_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_focusframe_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_focusframe_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QFocusFrame* self, bool enable ```
void q_focusframe_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QFocusFrame* self ```
QGraphicsProxyWidget* q_focusframe_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFocusFrame* self ```
void q_focusframe_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFocusFrame* self ```
void q_focusframe_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFocusFrame* self, int x, int y, int w, int h ```
void q_focusframe_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFocusFrame* self, QRect* param1 ```
void q_focusframe_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QFocusFrame* self, QRegion* param1 ```
void q_focusframe_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFocusFrame* self, int x, int y, int w, int h ```
void q_focusframe_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFocusFrame* self, QRect* param1 ```
void q_focusframe_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QFocusFrame* self, QRegion* param1 ```
void q_focusframe_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QFocusFrame* self, bool hidden ```
void q_focusframe_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QFocusFrame* self ```
void q_focusframe_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QFocusFrame* self ```
void q_focusframe_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QFocusFrame* self ```
void q_focusframe_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QFocusFrame* self ```
void q_focusframe_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QFocusFrame* self ```
void q_focusframe_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QFocusFrame* self ```
void q_focusframe_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QFocusFrame* self ```
void q_focusframe_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QFocusFrame* self ```
void q_focusframe_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QFocusFrame* self, QWidget* param1 ```
void q_focusframe_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFocusFrame* self, int x, int y ```
void q_focusframe_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QFocusFrame* self, QPoint* param1 ```
void q_focusframe_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFocusFrame* self, int w, int h ```
void q_focusframe_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QFocusFrame* self, QSize* param1 ```
void q_focusframe_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFocusFrame* self, int x, int y, int w, int h ```
void q_focusframe_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QFocusFrame* self, QRect* geometry ```
void q_focusframe_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QFocusFrame* self ```
char* q_focusframe_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QFocusFrame* self, const char* geometry ```
bool q_focusframe_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QFocusFrame* self ```
void q_focusframe_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QFocusFrame* self, QWidget* param1 ```
bool q_focusframe_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QFocusFrame* self, int state ```
void q_focusframe_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QFocusFrame* self, int state ```
void q_focusframe_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QFocusFrame* self ```
QSizePolicy* q_focusframe_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFocusFrame* self, QSizePolicy* sizePolicy ```
void q_focusframe_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QFocusFrame* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_focusframe_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QFocusFrame* self ```
QRegion* q_focusframe_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFocusFrame* self, int left, int top, int right, int bottom ```
void q_focusframe_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QFocusFrame* self, QMargins* margins ```
void q_focusframe_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QFocusFrame* self ```
QMargins* q_focusframe_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QFocusFrame* self ```
QRect* q_focusframe_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QFocusFrame* self ```
QLayout* q_focusframe_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QFocusFrame* self, QLayout* layout ```
void q_focusframe_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QFocusFrame* self ```
void q_focusframe_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFocusFrame* self, QWidget* parent ```
void q_focusframe_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QFocusFrame* self, QWidget* parent, int f ```
void q_focusframe_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFocusFrame* self, int dx, int dy ```
void q_focusframe_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QFocusFrame* self, int dx, int dy, QRect* param3 ```
void q_focusframe_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QFocusFrame* self ```
QWidget* q_focusframe_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QFocusFrame* self ```
QWidget* q_focusframe_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QFocusFrame* self ```
QWidget* q_focusframe_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QFocusFrame* self, bool on ```
void q_focusframe_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFocusFrame* self, QAction* action ```
void q_focusframe_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QFocusFrame* self, QAction* actions[] ```
void q_focusframe_add_actions(void* self, void* actions[]) {
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
/// ``` QFocusFrame* self, QAction* before, QAction* actions[] ```
void q_focusframe_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QFocusFrame* self, QAction* before, QAction* action ```
void q_focusframe_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QFocusFrame* self, QAction* action ```
void q_focusframe_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QFocusFrame* self ```
libqt_list /* of QAction* */ q_focusframe_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFocusFrame* self, const char* text ```
QAction* q_focusframe_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFocusFrame* self, QIcon* icon, const char* text ```
QAction* q_focusframe_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFocusFrame* self, const char* text, QKeySequence* shortcut ```
QAction* q_focusframe_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QFocusFrame* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_focusframe_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QFocusFrame* self ```
QWidget* q_focusframe_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QFocusFrame* self, int typeVal ```
void q_focusframe_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFocusFrame* self, enum Qt__WindowType param1 ```
void q_focusframe_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QFocusFrame* self, int typeVal ```
void q_focusframe_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_focusframe_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFocusFrame* self, int x, int y ```
QWidget* q_focusframe_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QFocusFrame* self, QPoint* p ```
QWidget* q_focusframe_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFocusFrame* self, enum Qt__WidgetAttribute param1 ```
void q_focusframe_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QFocusFrame* self, enum Qt__WidgetAttribute param1 ```
bool q_focusframe_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QFocusFrame* self ```
void q_focusframe_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QFocusFrame* self, QWidget* child ```
bool q_focusframe_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QFocusFrame* self, bool enabled ```
void q_focusframe_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QFocusFrame* self ```
QBackingStore* q_focusframe_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QFocusFrame* self ```
QWindow* q_focusframe_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QFocusFrame* self ```
QScreen* q_focusframe_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QFocusFrame* self, QScreen* screen ```
void q_focusframe_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_focusframe_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QFocusFrame* self, const char* title ```
void q_focusframe_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QFocusFrame* self, void (*slot)(QWidget*, const char*) ```
void q_focusframe_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QFocusFrame* self, QIcon* icon ```
void q_focusframe_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QFocusFrame* self, void (*slot)(QWidget*, QIcon*) ```
void q_focusframe_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QFocusFrame* self, const char* iconText ```
void q_focusframe_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QFocusFrame* self, void (*slot)(QWidget*, const char*) ```
void q_focusframe_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QFocusFrame* self, QPoint* pos ```
void q_focusframe_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QFocusFrame* self, void (*slot)(QWidget*, QPoint*) ```
void q_focusframe_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QFocusFrame* self ```
int64_t q_focusframe_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QFocusFrame* self, int hints ```
void q_focusframe_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFocusFrame* self, QPaintDevice* target, QPoint* targetOffset ```
void q_focusframe_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFocusFrame* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_focusframe_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFocusFrame* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_focusframe_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFocusFrame* self, QPainter* painter, QPoint* targetOffset ```
void q_focusframe_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFocusFrame* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_focusframe_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QFocusFrame* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_focusframe_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QFocusFrame* self, QRect* rectangle ```
QPixmap* q_focusframe_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QFocusFrame* self, enum Qt__GestureType typeVal, int flags ```
void q_focusframe_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QFocusFrame* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_focusframe_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QFocusFrame* self, int id, bool enable ```
void q_focusframe_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QFocusFrame* self, int id, bool enable ```
void q_focusframe_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QFocusFrame* self, enum Qt__WindowType param1, bool on ```
void q_focusframe_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QFocusFrame* self, enum Qt__WidgetAttribute param1, bool on ```
void q_focusframe_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_focusframe_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_focusframe_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QFocusFrame* self ```
const char* q_focusframe_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QFocusFrame* self, const char* name ```
void q_focusframe_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QFocusFrame* self, bool b ```
bool q_focusframe_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QFocusFrame* self ```
QThread* q_focusframe_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QFocusFrame* self, QThread* thread ```
void q_focusframe_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFocusFrame* self, int interval ```
int32_t q_focusframe_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QFocusFrame* self, int id ```
void q_focusframe_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QFocusFrame* self ```
libqt_list /* of QObject* */ q_focusframe_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QFocusFrame* self, QObject* filterObj ```
void q_focusframe_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QFocusFrame* self, QObject* obj ```
void q_focusframe_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_focusframe_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFocusFrame* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_focusframe_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_focusframe_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_focusframe_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QFocusFrame* self ```
void q_focusframe_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QFocusFrame* self ```
void q_focusframe_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QFocusFrame* self, const char* name, QVariant* value ```
bool q_focusframe_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QFocusFrame* self, const char* name ```
QVariant* q_focusframe_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QFocusFrame* self ```
const char** q_focusframe_dynamic_property_names(void* self) {
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
/// ``` QFocusFrame* self ```
QBindingStorage* q_focusframe_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QFocusFrame* self ```
QBindingStorage* q_focusframe_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFocusFrame* self ```
void q_focusframe_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QFocusFrame* self, void (*slot)(QObject*) ```
void q_focusframe_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QFocusFrame* self ```
QObject* q_focusframe_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QFocusFrame* self, const char* classname ```
bool q_focusframe_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QFocusFrame* self ```
void q_focusframe_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QFocusFrame* self, int interval, enum Qt__TimerType timerType ```
int32_t q_focusframe_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_focusframe_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QFocusFrame* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_focusframe_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QFocusFrame* self, QObject* param1 ```
void q_focusframe_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QFocusFrame* self, void (*slot)(QObject*, QObject*) ```
void q_focusframe_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QFocusFrame* self ```
bool q_focusframe_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QFocusFrame* self ```
double q_focusframe_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QFocusFrame* self ```
double q_focusframe_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_focusframe_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_dev_type(void* self) {
    return QFocusFrame_DevType((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_qbase_dev_type(void* self) {
    return QFocusFrame_QBaseDevType((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, int32_t (*slot)() ```
void q_focusframe_on_dev_type(void* self, int32_t (*slot)()) {
    QFocusFrame_OnDevType((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, bool visible ```
void q_focusframe_set_visible(void* self, bool visible) {
    QFocusFrame_SetVisible((QFocusFrame*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, bool visible ```
void q_focusframe_qbase_set_visible(void* self, bool visible) {
    QFocusFrame_QBaseSetVisible((QFocusFrame*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, bool) ```
void q_focusframe_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QFocusFrame_OnSetVisible((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_size_hint(void* self) {
    return QFocusFrame_SizeHint((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_qbase_size_hint(void* self) {
    return QFocusFrame_QBaseSizeHint((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, QSize* (*slot)() ```
void q_focusframe_on_size_hint(void* self, QSize* (*slot)()) {
    QFocusFrame_OnSizeHint((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_minimum_size_hint(void* self) {
    return QFocusFrame_MinimumSizeHint((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
QSize* q_focusframe_qbase_minimum_size_hint(void* self) {
    return QFocusFrame_QBaseMinimumSizeHint((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, QSize* (*slot)() ```
void q_focusframe_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QFocusFrame_OnMinimumSizeHint((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, int param1 ```
int32_t q_focusframe_height_for_width(void* self, int param1) {
    return QFocusFrame_HeightForWidth((QFocusFrame*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, int param1 ```
int32_t q_focusframe_qbase_height_for_width(void* self, int param1) {
    return QFocusFrame_QBaseHeightForWidth((QFocusFrame*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, int32_t (*slot)(QFocusFrame*, int) ```
void q_focusframe_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QFocusFrame_OnHeightForWidth((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
bool q_focusframe_has_height_for_width(void* self) {
    return QFocusFrame_HasHeightForWidth((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
bool q_focusframe_qbase_has_height_for_width(void* self) {
    return QFocusFrame_QBaseHasHeightForWidth((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, bool (*slot)() ```
void q_focusframe_on_has_height_for_width(void* self, bool (*slot)()) {
    QFocusFrame_OnHasHeightForWidth((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
QPaintEngine* q_focusframe_paint_engine(void* self) {
    return QFocusFrame_PaintEngine((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
QPaintEngine* q_focusframe_qbase_paint_engine(void* self) {
    return QFocusFrame_QBasePaintEngine((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, QPaintEngine* (*slot)() ```
void q_focusframe_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QFocusFrame_OnPaintEngine((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QMouseEvent* event ```
void q_focusframe_mouse_press_event(void* self, void* event) {
    QFocusFrame_MousePressEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QMouseEvent* event ```
void q_focusframe_qbase_mouse_press_event(void* self, void* event) {
    QFocusFrame_QBaseMousePressEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QMouseEvent*) ```
void q_focusframe_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnMousePressEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QMouseEvent* event ```
void q_focusframe_mouse_release_event(void* self, void* event) {
    QFocusFrame_MouseReleaseEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QMouseEvent* event ```
void q_focusframe_qbase_mouse_release_event(void* self, void* event) {
    QFocusFrame_QBaseMouseReleaseEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QMouseEvent*) ```
void q_focusframe_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnMouseReleaseEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QMouseEvent* event ```
void q_focusframe_mouse_double_click_event(void* self, void* event) {
    QFocusFrame_MouseDoubleClickEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QMouseEvent* event ```
void q_focusframe_qbase_mouse_double_click_event(void* self, void* event) {
    QFocusFrame_QBaseMouseDoubleClickEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QMouseEvent*) ```
void q_focusframe_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnMouseDoubleClickEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QMouseEvent* event ```
void q_focusframe_mouse_move_event(void* self, void* event) {
    QFocusFrame_MouseMoveEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QMouseEvent* event ```
void q_focusframe_qbase_mouse_move_event(void* self, void* event) {
    QFocusFrame_QBaseMouseMoveEvent((QFocusFrame*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QMouseEvent*) ```
void q_focusframe_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnMouseMoveEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QWheelEvent* event ```
void q_focusframe_wheel_event(void* self, void* event) {
    QFocusFrame_WheelEvent((QFocusFrame*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QWheelEvent* event ```
void q_focusframe_qbase_wheel_event(void* self, void* event) {
    QFocusFrame_QBaseWheelEvent((QFocusFrame*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QWheelEvent*) ```
void q_focusframe_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnWheelEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QKeyEvent* event ```
void q_focusframe_key_press_event(void* self, void* event) {
    QFocusFrame_KeyPressEvent((QFocusFrame*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QKeyEvent* event ```
void q_focusframe_qbase_key_press_event(void* self, void* event) {
    QFocusFrame_QBaseKeyPressEvent((QFocusFrame*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QKeyEvent*) ```
void q_focusframe_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnKeyPressEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QKeyEvent* event ```
void q_focusframe_key_release_event(void* self, void* event) {
    QFocusFrame_KeyReleaseEvent((QFocusFrame*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QKeyEvent* event ```
void q_focusframe_qbase_key_release_event(void* self, void* event) {
    QFocusFrame_QBaseKeyReleaseEvent((QFocusFrame*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QKeyEvent*) ```
void q_focusframe_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnKeyReleaseEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QFocusEvent* event ```
void q_focusframe_focus_in_event(void* self, void* event) {
    QFocusFrame_FocusInEvent((QFocusFrame*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QFocusEvent* event ```
void q_focusframe_qbase_focus_in_event(void* self, void* event) {
    QFocusFrame_QBaseFocusInEvent((QFocusFrame*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QFocusEvent*) ```
void q_focusframe_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnFocusInEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QFocusEvent* event ```
void q_focusframe_focus_out_event(void* self, void* event) {
    QFocusFrame_FocusOutEvent((QFocusFrame*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QFocusEvent* event ```
void q_focusframe_qbase_focus_out_event(void* self, void* event) {
    QFocusFrame_QBaseFocusOutEvent((QFocusFrame*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QFocusEvent*) ```
void q_focusframe_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnFocusOutEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QEnterEvent* event ```
void q_focusframe_enter_event(void* self, void* event) {
    QFocusFrame_EnterEvent((QFocusFrame*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QEnterEvent* event ```
void q_focusframe_qbase_enter_event(void* self, void* event) {
    QFocusFrame_QBaseEnterEvent((QFocusFrame*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QEnterEvent*) ```
void q_focusframe_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnEnterEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QEvent* event ```
void q_focusframe_leave_event(void* self, void* event) {
    QFocusFrame_LeaveEvent((QFocusFrame*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QEvent* event ```
void q_focusframe_qbase_leave_event(void* self, void* event) {
    QFocusFrame_QBaseLeaveEvent((QFocusFrame*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QEvent*) ```
void q_focusframe_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnLeaveEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QMoveEvent* event ```
void q_focusframe_move_event(void* self, void* event) {
    QFocusFrame_MoveEvent((QFocusFrame*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QMoveEvent* event ```
void q_focusframe_qbase_move_event(void* self, void* event) {
    QFocusFrame_QBaseMoveEvent((QFocusFrame*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QMoveEvent*) ```
void q_focusframe_on_move_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnMoveEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QResizeEvent* event ```
void q_focusframe_resize_event(void* self, void* event) {
    QFocusFrame_ResizeEvent((QFocusFrame*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QResizeEvent* event ```
void q_focusframe_qbase_resize_event(void* self, void* event) {
    QFocusFrame_QBaseResizeEvent((QFocusFrame*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QResizeEvent*) ```
void q_focusframe_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnResizeEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QCloseEvent* event ```
void q_focusframe_close_event(void* self, void* event) {
    QFocusFrame_CloseEvent((QFocusFrame*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QCloseEvent* event ```
void q_focusframe_qbase_close_event(void* self, void* event) {
    QFocusFrame_QBaseCloseEvent((QFocusFrame*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QCloseEvent*) ```
void q_focusframe_on_close_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnCloseEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QContextMenuEvent* event ```
void q_focusframe_context_menu_event(void* self, void* event) {
    QFocusFrame_ContextMenuEvent((QFocusFrame*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QContextMenuEvent* event ```
void q_focusframe_qbase_context_menu_event(void* self, void* event) {
    QFocusFrame_QBaseContextMenuEvent((QFocusFrame*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QContextMenuEvent*) ```
void q_focusframe_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnContextMenuEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QTabletEvent* event ```
void q_focusframe_tablet_event(void* self, void* event) {
    QFocusFrame_TabletEvent((QFocusFrame*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QTabletEvent* event ```
void q_focusframe_qbase_tablet_event(void* self, void* event) {
    QFocusFrame_QBaseTabletEvent((QFocusFrame*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QTabletEvent*) ```
void q_focusframe_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnTabletEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QActionEvent* event ```
void q_focusframe_action_event(void* self, void* event) {
    QFocusFrame_ActionEvent((QFocusFrame*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QActionEvent* event ```
void q_focusframe_qbase_action_event(void* self, void* event) {
    QFocusFrame_QBaseActionEvent((QFocusFrame*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QActionEvent*) ```
void q_focusframe_on_action_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnActionEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QDragEnterEvent* event ```
void q_focusframe_drag_enter_event(void* self, void* event) {
    QFocusFrame_DragEnterEvent((QFocusFrame*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QDragEnterEvent* event ```
void q_focusframe_qbase_drag_enter_event(void* self, void* event) {
    QFocusFrame_QBaseDragEnterEvent((QFocusFrame*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QDragEnterEvent*) ```
void q_focusframe_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnDragEnterEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QDragMoveEvent* event ```
void q_focusframe_drag_move_event(void* self, void* event) {
    QFocusFrame_DragMoveEvent((QFocusFrame*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QDragMoveEvent* event ```
void q_focusframe_qbase_drag_move_event(void* self, void* event) {
    QFocusFrame_QBaseDragMoveEvent((QFocusFrame*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QDragMoveEvent*) ```
void q_focusframe_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnDragMoveEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QDragLeaveEvent* event ```
void q_focusframe_drag_leave_event(void* self, void* event) {
    QFocusFrame_DragLeaveEvent((QFocusFrame*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QDragLeaveEvent* event ```
void q_focusframe_qbase_drag_leave_event(void* self, void* event) {
    QFocusFrame_QBaseDragLeaveEvent((QFocusFrame*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QDragLeaveEvent*) ```
void q_focusframe_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnDragLeaveEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QDropEvent* event ```
void q_focusframe_drop_event(void* self, void* event) {
    QFocusFrame_DropEvent((QFocusFrame*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QDropEvent* event ```
void q_focusframe_qbase_drop_event(void* self, void* event) {
    QFocusFrame_QBaseDropEvent((QFocusFrame*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QDropEvent*) ```
void q_focusframe_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnDropEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QShowEvent* event ```
void q_focusframe_show_event(void* self, void* event) {
    QFocusFrame_ShowEvent((QFocusFrame*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QShowEvent* event ```
void q_focusframe_qbase_show_event(void* self, void* event) {
    QFocusFrame_QBaseShowEvent((QFocusFrame*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QShowEvent*) ```
void q_focusframe_on_show_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnShowEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QHideEvent* event ```
void q_focusframe_hide_event(void* self, void* event) {
    QFocusFrame_HideEvent((QFocusFrame*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QHideEvent* event ```
void q_focusframe_qbase_hide_event(void* self, void* event) {
    QFocusFrame_QBaseHideEvent((QFocusFrame*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QHideEvent*) ```
void q_focusframe_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnHideEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, const char* eventType, void* message, intptr_t* result ```
bool q_focusframe_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFocusFrame_NativeEvent((QFocusFrame*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, const char* eventType, void* message, intptr_t* result ```
bool q_focusframe_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QFocusFrame_QBaseNativeEvent((QFocusFrame*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, bool (*slot)(QFocusFrame*, const char*, void*, intptr_t*) ```
void q_focusframe_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QFocusFrame_OnNativeEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QEvent* param1 ```
void q_focusframe_change_event(void* self, void* param1) {
    QFocusFrame_ChangeEvent((QFocusFrame*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QEvent* param1 ```
void q_focusframe_qbase_change_event(void* self, void* param1) {
    QFocusFrame_QBaseChangeEvent((QFocusFrame*)self, (QEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QEvent*) ```
void q_focusframe_on_change_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnChangeEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_focusframe_metric(void* self, int64_t param1) {
    return QFocusFrame_Metric((QFocusFrame*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_focusframe_qbase_metric(void* self, int64_t param1) {
    return QFocusFrame_QBaseMetric((QFocusFrame*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, int32_t (*slot)(QFocusFrame*, enum QPaintDevice__PaintDeviceMetric) ```
void q_focusframe_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QFocusFrame_OnMetric((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QPainter* painter ```
void q_focusframe_init_painter(void* self, void* painter) {
    QFocusFrame_InitPainter((QFocusFrame*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QPainter* painter ```
void q_focusframe_qbase_init_painter(void* self, void* painter) {
    QFocusFrame_QBaseInitPainter((QFocusFrame*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QPainter*) ```
void q_focusframe_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnInitPainter((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QPoint* offset ```
QPaintDevice* q_focusframe_redirected(void* self, void* offset) {
    return QFocusFrame_Redirected((QFocusFrame*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QPoint* offset ```
QPaintDevice* q_focusframe_qbase_redirected(void* self, void* offset) {
    return QFocusFrame_QBaseRedirected((QFocusFrame*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, QPaintDevice* (*slot)(QFocusFrame*, QPoint*) ```
void q_focusframe_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QFocusFrame_OnRedirected((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
QPainter* q_focusframe_shared_painter(void* self) {
    return QFocusFrame_SharedPainter((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
QPainter* q_focusframe_qbase_shared_painter(void* self) {
    return QFocusFrame_QBaseSharedPainter((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, QPainter* (*slot)() ```
void q_focusframe_on_shared_painter(void* self, QPainter* (*slot)()) {
    QFocusFrame_OnSharedPainter((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QInputMethodEvent* param1 ```
void q_focusframe_input_method_event(void* self, void* param1) {
    QFocusFrame_InputMethodEvent((QFocusFrame*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QInputMethodEvent* param1 ```
void q_focusframe_qbase_input_method_event(void* self, void* param1) {
    QFocusFrame_QBaseInputMethodEvent((QFocusFrame*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QInputMethodEvent*) ```
void q_focusframe_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnInputMethodEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_focusframe_input_method_query(void* self, int64_t param1) {
    return QFocusFrame_InputMethodQuery((QFocusFrame*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_focusframe_qbase_input_method_query(void* self, int64_t param1) {
    return QFocusFrame_QBaseInputMethodQuery((QFocusFrame*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, QVariant* (*slot)(QFocusFrame*, enum Qt__InputMethodQuery) ```
void q_focusframe_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QFocusFrame_OnInputMethodQuery((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, bool next ```
bool q_focusframe_focus_next_prev_child(void* self, bool next) {
    return QFocusFrame_FocusNextPrevChild((QFocusFrame*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, bool next ```
bool q_focusframe_qbase_focus_next_prev_child(void* self, bool next) {
    return QFocusFrame_QBaseFocusNextPrevChild((QFocusFrame*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, bool (*slot)(QFocusFrame*, bool) ```
void q_focusframe_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QFocusFrame_OnFocusNextPrevChild((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QTimerEvent* event ```
void q_focusframe_timer_event(void* self, void* event) {
    QFocusFrame_TimerEvent((QFocusFrame*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QTimerEvent* event ```
void q_focusframe_qbase_timer_event(void* self, void* event) {
    QFocusFrame_QBaseTimerEvent((QFocusFrame*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QTimerEvent*) ```
void q_focusframe_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnTimerEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QChildEvent* event ```
void q_focusframe_child_event(void* self, void* event) {
    QFocusFrame_ChildEvent((QFocusFrame*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QChildEvent* event ```
void q_focusframe_qbase_child_event(void* self, void* event) {
    QFocusFrame_QBaseChildEvent((QFocusFrame*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QChildEvent*) ```
void q_focusframe_on_child_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnChildEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QEvent* event ```
void q_focusframe_custom_event(void* self, void* event) {
    QFocusFrame_CustomEvent((QFocusFrame*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QEvent* event ```
void q_focusframe_qbase_custom_event(void* self, void* event) {
    QFocusFrame_QBaseCustomEvent((QFocusFrame*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QEvent*) ```
void q_focusframe_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnCustomEvent((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QMetaMethod* signal ```
void q_focusframe_connect_notify(void* self, void* signal) {
    QFocusFrame_ConnectNotify((QFocusFrame*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QMetaMethod* signal ```
void q_focusframe_qbase_connect_notify(void* self, void* signal) {
    QFocusFrame_QBaseConnectNotify((QFocusFrame*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QMetaMethod*) ```
void q_focusframe_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnConnectNotify((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QMetaMethod* signal ```
void q_focusframe_disconnect_notify(void* self, void* signal) {
    QFocusFrame_DisconnectNotify((QFocusFrame*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QMetaMethod* signal ```
void q_focusframe_qbase_disconnect_notify(void* self, void* signal) {
    QFocusFrame_QBaseDisconnectNotify((QFocusFrame*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)(QFocusFrame*, QMetaMethod*) ```
void q_focusframe_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QFocusFrame_OnDisconnectNotify((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
void q_focusframe_update_micro_focus(void* self) {
    QFocusFrame_UpdateMicroFocus((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
void q_focusframe_qbase_update_micro_focus(void* self) {
    QFocusFrame_QBaseUpdateMicroFocus((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)() ```
void q_focusframe_on_update_micro_focus(void* self, void (*slot)()) {
    QFocusFrame_OnUpdateMicroFocus((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
void q_focusframe_create(void* self) {
    QFocusFrame_Create((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
void q_focusframe_qbase_create(void* self) {
    QFocusFrame_QBaseCreate((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)() ```
void q_focusframe_on_create(void* self, void (*slot)()) {
    QFocusFrame_OnCreate((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
void q_focusframe_destroy(void* self) {
    QFocusFrame_Destroy((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
void q_focusframe_qbase_destroy(void* self) {
    QFocusFrame_QBaseDestroy((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, void (*slot)() ```
void q_focusframe_on_destroy(void* self, void (*slot)()) {
    QFocusFrame_OnDestroy((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
bool q_focusframe_focus_next_child(void* self) {
    return QFocusFrame_FocusNextChild((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
bool q_focusframe_qbase_focus_next_child(void* self) {
    return QFocusFrame_QBaseFocusNextChild((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, bool (*slot)() ```
void q_focusframe_on_focus_next_child(void* self, bool (*slot)()) {
    QFocusFrame_OnFocusNextChild((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
bool q_focusframe_focus_previous_child(void* self) {
    return QFocusFrame_FocusPreviousChild((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
bool q_focusframe_qbase_focus_previous_child(void* self) {
    return QFocusFrame_QBaseFocusPreviousChild((QFocusFrame*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, bool (*slot)() ```
void q_focusframe_on_focus_previous_child(void* self, bool (*slot)()) {
    QFocusFrame_OnFocusPreviousChild((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
QObject* q_focusframe_sender(void* self) {
    return QFocusFrame_Sender((QFocusFrame*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
QObject* q_focusframe_qbase_sender(void* self) {
    return QFocusFrame_QBaseSender((QFocusFrame*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, QObject* (*slot)() ```
void q_focusframe_on_sender(void* self, QObject* (*slot)()) {
    QFocusFrame_OnSender((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_sender_signal_index(void* self) {
    return QFocusFrame_SenderSignalIndex((QFocusFrame*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self ```
int32_t q_focusframe_qbase_sender_signal_index(void* self) {
    return QFocusFrame_QBaseSenderSignalIndex((QFocusFrame*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, int32_t (*slot)() ```
void q_focusframe_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QFocusFrame_OnSenderSignalIndex((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, const char* signal ```
int32_t q_focusframe_receivers(void* self, const char* signal) {
    return QFocusFrame_Receivers((QFocusFrame*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, const char* signal ```
int32_t q_focusframe_qbase_receivers(void* self, const char* signal) {
    return QFocusFrame_QBaseReceivers((QFocusFrame*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, int32_t (*slot)(QFocusFrame*, const char*) ```
void q_focusframe_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QFocusFrame_OnReceivers((QFocusFrame*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QFocusFrame* self, QMetaMethod* signal ```
bool q_focusframe_is_signal_connected(void* self, void* signal) {
    return QFocusFrame_IsSignalConnected((QFocusFrame*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QFocusFrame* self, QMetaMethod* signal ```
bool q_focusframe_qbase_is_signal_connected(void* self, void* signal) {
    return QFocusFrame_QBaseIsSignalConnected((QFocusFrame*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QFocusFrame* self, bool (*slot)(QFocusFrame*, QMetaMethod*) ```
void q_focusframe_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QFocusFrame_OnIsSignalConnected((QFocusFrame*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QFocusFrame* self ```
void q_focusframe_delete(void* self) {
    QFocusFrame_Delete((QFocusFrame*)(self));
}