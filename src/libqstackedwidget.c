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
#include "libqframe.hpp"
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
#include "libqstackedwidget.hpp"
#include "libqstackedwidget.h"

/// https://doc.qt.io/qt-6/qstackedwidget.html

/// q_stackedwidget_new constructs a new QStackedWidget object.
///
/// ``` QWidget* parent ```
QStackedWidget* q_stackedwidget_new(void* parent) {
    return QStackedWidget_new((QWidget*)parent);
}

/// q_stackedwidget_new2 constructs a new QStackedWidget object.
///
///
QStackedWidget* q_stackedwidget_new2() {
    return QStackedWidget_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStackedWidget* self ```
QMetaObject* q_stackedwidget_meta_object(void* self) {
    return QStackedWidget_MetaObject((QStackedWidget*)self);
}

/// ``` QStackedWidget* self, const char* param1 ```
void* q_stackedwidget_metacast(void* self, const char* param1) {
    return QStackedWidget_Metacast((QStackedWidget*)self, param1);
}

/// ``` QStackedWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_stackedwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStackedWidget_Metacall((QStackedWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QStackedWidget* self, int32_t (*slot)(QStackedWidget*, enum QMetaObject__Call, int, void*) ```
void q_stackedwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QStackedWidget_OnMetacall((QStackedWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStackedWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_stackedwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStackedWidget_QBaseMetacall((QStackedWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_stackedwidget_tr(const char* s) {
    libqt_string _str = QStackedWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#addWidget)
///
/// ``` QStackedWidget* self, QWidget* w ```
int32_t q_stackedwidget_add_widget(void* self, void* w) {
    return QStackedWidget_AddWidget((QStackedWidget*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#insertWidget)
///
/// ``` QStackedWidget* self, int index, QWidget* w ```
int32_t q_stackedwidget_insert_widget(void* self, int index, void* w) {
    return QStackedWidget_InsertWidget((QStackedWidget*)self, index, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#removeWidget)
///
/// ``` QStackedWidget* self, QWidget* w ```
void q_stackedwidget_remove_widget(void* self, void* w) {
    QStackedWidget_RemoveWidget((QStackedWidget*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#currentWidget)
///
/// ``` QStackedWidget* self ```
QWidget* q_stackedwidget_current_widget(void* self) {
    return QStackedWidget_CurrentWidget((QStackedWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#currentIndex)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_current_index(void* self) {
    return QStackedWidget_CurrentIndex((QStackedWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#indexOf)
///
/// ``` QStackedWidget* self, QWidget* param1 ```
int32_t q_stackedwidget_index_of(void* self, void* param1) {
    return QStackedWidget_IndexOf((QStackedWidget*)self, (QWidget*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#widget)
///
/// ``` QStackedWidget* self, int param1 ```
QWidget* q_stackedwidget_widget(void* self, int param1) {
    return QStackedWidget_Widget((QStackedWidget*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#count)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_count(void* self) {
    return QStackedWidget_Count((QStackedWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#setCurrentIndex)
///
/// ``` QStackedWidget* self, int index ```
void q_stackedwidget_set_current_index(void* self, int index) {
    QStackedWidget_SetCurrentIndex((QStackedWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#setCurrentWidget)
///
/// ``` QStackedWidget* self, QWidget* w ```
void q_stackedwidget_set_current_widget(void* self, void* w) {
    QStackedWidget_SetCurrentWidget((QStackedWidget*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#currentChanged)
///
/// ``` QStackedWidget* self, int param1 ```
void q_stackedwidget_current_changed(void* self, int param1) {
    QStackedWidget_CurrentChanged((QStackedWidget*)self, param1);
}

/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, int) ```
void q_stackedwidget_on_current_changed(void* self, void (*slot)(void*, int)) {
    QStackedWidget_Connect_CurrentChanged((QStackedWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#widgetRemoved)
///
/// ``` QStackedWidget* self, int index ```
void q_stackedwidget_widget_removed(void* self, int index) {
    QStackedWidget_WidgetRemoved((QStackedWidget*)self, index);
}

/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, int) ```
void q_stackedwidget_on_widget_removed(void* self, void (*slot)(void*, int)) {
    QStackedWidget_Connect_WidgetRemoved((QStackedWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedwidget.html#event)
///
/// ``` QStackedWidget* self, QEvent* e ```
bool q_stackedwidget_event(void* self, void* e) {
    return QStackedWidget_Event((QStackedWidget*)self, (QEvent*)e);
}

/// Allows for overriding the related default method
///
/// ``` QStackedWidget* self, bool (*slot)(QStackedWidget*, QEvent*) ```
void q_stackedwidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QStackedWidget_OnEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStackedWidget* self, QEvent* e ```
bool q_stackedwidget_qbase_event(void* self, void* e) {
    return QStackedWidget_QBaseEvent((QStackedWidget*)self, (QEvent*)e);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_stackedwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QStackedWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_stackedwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStackedWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QStackedWidget* self, int frameStyle ```
void q_stackedwidget_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QStackedWidget* self, enum QFrame__Shape frameShape ```
void q_stackedwidget_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QStackedWidget* self, enum QFrame__Shadow frameShadow ```
void q_stackedwidget_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QStackedWidget* self, int lineWidth ```
void q_stackedwidget_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QStackedWidget* self, int midLineWidth ```
void q_stackedwidget_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QStackedWidget* self ```
QRect* q_stackedwidget_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QStackedWidget* self, QRect* frameRect ```
void q_stackedwidget_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QStackedWidget* self ```
uintptr_t q_stackedwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QStackedWidget* self ```
uintptr_t q_stackedwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QStackedWidget* self ```
uintptr_t q_stackedwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QStackedWidget* self ```
QStyle* q_stackedwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QStackedWidget* self, QStyle* style ```
void q_stackedwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QStackedWidget* self, enum Qt__WindowModality windowModality ```
void q_stackedwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QStackedWidget* self, QWidget* param1 ```
bool q_stackedwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QStackedWidget* self, bool enabled ```
void q_stackedwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QStackedWidget* self, bool disabled ```
void q_stackedwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QStackedWidget* self, bool windowModified ```
void q_stackedwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QStackedWidget* self ```
QRect* q_stackedwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QStackedWidget* self ```
QRect* q_stackedwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QStackedWidget* self ```
QRect* q_stackedwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QStackedWidget* self ```
QPoint* q_stackedwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QStackedWidget* self ```
QRect* q_stackedwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QStackedWidget* self ```
QRect* q_stackedwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QStackedWidget* self ```
QRegion* q_stackedwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QStackedWidget* self, QSize* minimumSize ```
void q_stackedwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QStackedWidget* self, int minw, int minh ```
void q_stackedwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QStackedWidget* self, QSize* maximumSize ```
void q_stackedwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QStackedWidget* self, int maxw, int maxh ```
void q_stackedwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QStackedWidget* self, int minw ```
void q_stackedwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QStackedWidget* self, int minh ```
void q_stackedwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QStackedWidget* self, int maxw ```
void q_stackedwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QStackedWidget* self, int maxh ```
void q_stackedwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QStackedWidget* self, QSize* sizeIncrement ```
void q_stackedwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QStackedWidget* self, int w, int h ```
void q_stackedwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QStackedWidget* self, QSize* baseSize ```
void q_stackedwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QStackedWidget* self, int basew, int baseh ```
void q_stackedwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QStackedWidget* self, QSize* fixedSize ```
void q_stackedwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QStackedWidget* self, int w, int h ```
void q_stackedwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QStackedWidget* self, int w ```
void q_stackedwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QStackedWidget* self, int h ```
void q_stackedwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QStackedWidget* self, QPointF* param1 ```
QPointF* q_stackedwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QStackedWidget* self, QPoint* param1 ```
QPoint* q_stackedwidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QStackedWidget* self, QPointF* param1 ```
QPointF* q_stackedwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QStackedWidget* self, QPoint* param1 ```
QPoint* q_stackedwidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QStackedWidget* self, QPointF* param1 ```
QPointF* q_stackedwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QStackedWidget* self, QPoint* param1 ```
QPoint* q_stackedwidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QStackedWidget* self, QPointF* param1 ```
QPointF* q_stackedwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QStackedWidget* self, QPoint* param1 ```
QPoint* q_stackedwidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QStackedWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_stackedwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QStackedWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_stackedwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QStackedWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_stackedwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QStackedWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_stackedwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QStackedWidget* self ```
QWidget* q_stackedwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QStackedWidget* self ```
QWidget* q_stackedwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QStackedWidget* self ```
QWidget* q_stackedwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QStackedWidget* self ```
QPalette* q_stackedwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QStackedWidget* self, QPalette* palette ```
void q_stackedwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QStackedWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_stackedwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QStackedWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_stackedwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QStackedWidget* self ```
QFont* q_stackedwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QStackedWidget* self, QFont* font ```
void q_stackedwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QStackedWidget* self ```
QFontMetrics* q_stackedwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QStackedWidget* self ```
QFontInfo* q_stackedwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QStackedWidget* self ```
QCursor* q_stackedwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QStackedWidget* self, QCursor* cursor ```
void q_stackedwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QStackedWidget* self, bool enable ```
void q_stackedwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QStackedWidget* self, bool enable ```
void q_stackedwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QStackedWidget* self, QBitmap* mask ```
void q_stackedwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QStackedWidget* self, QRegion* mask ```
void q_stackedwidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QStackedWidget* self ```
QRegion* q_stackedwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStackedWidget* self, QPaintDevice* target ```
void q_stackedwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStackedWidget* self, QPainter* painter ```
void q_stackedwidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QStackedWidget* self ```
QPixmap* q_stackedwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QStackedWidget* self ```
QGraphicsEffect* q_stackedwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QStackedWidget* self, QGraphicsEffect* effect ```
void q_stackedwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QStackedWidget* self, enum Qt__GestureType typeVal ```
void q_stackedwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QStackedWidget* self, enum Qt__GestureType typeVal ```
void q_stackedwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QStackedWidget* self, const char* windowTitle ```
void q_stackedwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QStackedWidget* self, const char* styleSheet ```
void q_stackedwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QStackedWidget* self, QIcon* icon ```
void q_stackedwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QStackedWidget* self ```
QIcon* q_stackedwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QStackedWidget* self, const char* windowIconText ```
void q_stackedwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QStackedWidget* self, const char* windowRole ```
void q_stackedwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QStackedWidget* self, const char* filePath ```
void q_stackedwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QStackedWidget* self, double level ```
void q_stackedwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QStackedWidget* self ```
double q_stackedwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QStackedWidget* self, const char* toolTip ```
void q_stackedwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QStackedWidget* self, int msec ```
void q_stackedwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QStackedWidget* self, const char* statusTip ```
void q_stackedwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QStackedWidget* self, const char* whatsThis ```
void q_stackedwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QStackedWidget* self, const char* name ```
void q_stackedwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QStackedWidget* self, const char* description ```
void q_stackedwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QStackedWidget* self, enum Qt__LayoutDirection direction ```
void q_stackedwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QStackedWidget* self, QLocale* locale ```
void q_stackedwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QStackedWidget* self ```
QLocale* q_stackedwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QStackedWidget* self, enum Qt__FocusReason reason ```
void q_stackedwidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QStackedWidget* self, enum Qt__FocusPolicy policy ```
void q_stackedwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_stackedwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QStackedWidget* self, QWidget* focusProxy ```
void q_stackedwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QStackedWidget* self ```
QWidget* q_stackedwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QStackedWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_stackedwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QStackedWidget* self, QCursor* param1 ```
void q_stackedwidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QStackedWidget* self, QKeySequence* key ```
int32_t q_stackedwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QStackedWidget* self, int id ```
void q_stackedwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QStackedWidget* self, int id ```
void q_stackedwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QStackedWidget* self, int id ```
void q_stackedwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_stackedwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_stackedwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QStackedWidget* self, bool enable ```
void q_stackedwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QStackedWidget* self ```
QGraphicsProxyWidget* q_stackedwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QStackedWidget* self, int x, int y, int w, int h ```
void q_stackedwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QStackedWidget* self, QRect* param1 ```
void q_stackedwidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QStackedWidget* self, QRegion* param1 ```
void q_stackedwidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QStackedWidget* self, int x, int y, int w, int h ```
void q_stackedwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QStackedWidget* self, QRect* param1 ```
void q_stackedwidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QStackedWidget* self, QRegion* param1 ```
void q_stackedwidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QStackedWidget* self, bool hidden ```
void q_stackedwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QStackedWidget* self, QWidget* param1 ```
void q_stackedwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QStackedWidget* self, int x, int y ```
void q_stackedwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QStackedWidget* self, QPoint* param1 ```
void q_stackedwidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QStackedWidget* self, int w, int h ```
void q_stackedwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QStackedWidget* self, QSize* param1 ```
void q_stackedwidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QStackedWidget* self, int x, int y, int w, int h ```
void q_stackedwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QStackedWidget* self, QRect* geometry ```
void q_stackedwidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QStackedWidget* self ```
char* q_stackedwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QStackedWidget* self, const char* geometry ```
bool q_stackedwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QStackedWidget* self, QWidget* param1 ```
bool q_stackedwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QStackedWidget* self, int state ```
void q_stackedwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QStackedWidget* self, int state ```
void q_stackedwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QStackedWidget* self ```
QSizePolicy* q_stackedwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QStackedWidget* self, QSizePolicy* sizePolicy ```
void q_stackedwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QStackedWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_stackedwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QStackedWidget* self ```
QRegion* q_stackedwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QStackedWidget* self, int left, int top, int right, int bottom ```
void q_stackedwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QStackedWidget* self, QMargins* margins ```
void q_stackedwidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QStackedWidget* self ```
QMargins* q_stackedwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QStackedWidget* self ```
QRect* q_stackedwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QStackedWidget* self ```
QLayout* q_stackedwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QStackedWidget* self, QLayout* layout ```
void q_stackedwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QStackedWidget* self, QWidget* parent ```
void q_stackedwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QStackedWidget* self, QWidget* parent, int f ```
void q_stackedwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QStackedWidget* self, int dx, int dy ```
void q_stackedwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QStackedWidget* self, int dx, int dy, QRect* param3 ```
void q_stackedwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QStackedWidget* self ```
QWidget* q_stackedwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QStackedWidget* self ```
QWidget* q_stackedwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QStackedWidget* self ```
QWidget* q_stackedwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QStackedWidget* self, bool on ```
void q_stackedwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStackedWidget* self, QAction* action ```
void q_stackedwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QStackedWidget* self, QAction* actions[] ```
void q_stackedwidget_add_actions(void* self, void* actions[]) {
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
/// ``` QStackedWidget* self, QAction* before, QAction* actions[] ```
void q_stackedwidget_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QStackedWidget* self, QAction* before, QAction* action ```
void q_stackedwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QStackedWidget* self, QAction* action ```
void q_stackedwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QStackedWidget* self ```
libqt_list /* of QAction* */ q_stackedwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStackedWidget* self, const char* text ```
QAction* q_stackedwidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStackedWidget* self, QIcon* icon, const char* text ```
QAction* q_stackedwidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStackedWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_stackedwidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QStackedWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_stackedwidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QStackedWidget* self ```
QWidget* q_stackedwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QStackedWidget* self, int typeVal ```
void q_stackedwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QStackedWidget* self, enum Qt__WindowType param1 ```
void q_stackedwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QStackedWidget* self, int typeVal ```
void q_stackedwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_stackedwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QStackedWidget* self, int x, int y ```
QWidget* q_stackedwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QStackedWidget* self, QPoint* p ```
QWidget* q_stackedwidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QStackedWidget* self, enum Qt__WidgetAttribute param1 ```
void q_stackedwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QStackedWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_stackedwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QStackedWidget* self, QWidget* child ```
bool q_stackedwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QStackedWidget* self, bool enabled ```
void q_stackedwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QStackedWidget* self ```
QBackingStore* q_stackedwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QStackedWidget* self ```
QWindow* q_stackedwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QStackedWidget* self ```
QScreen* q_stackedwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QStackedWidget* self, QScreen* screen ```
void q_stackedwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_stackedwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QStackedWidget* self, const char* title ```
void q_stackedwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QStackedWidget* self, void (*slot)(QWidget*, const char*) ```
void q_stackedwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QStackedWidget* self, QIcon* icon ```
void q_stackedwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QStackedWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_stackedwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QStackedWidget* self, const char* iconText ```
void q_stackedwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QStackedWidget* self, void (*slot)(QWidget*, const char*) ```
void q_stackedwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QStackedWidget* self, QPoint* pos ```
void q_stackedwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QStackedWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_stackedwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QStackedWidget* self ```
int64_t q_stackedwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QStackedWidget* self, int hints ```
void q_stackedwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStackedWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_stackedwidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStackedWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_stackedwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStackedWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_stackedwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStackedWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_stackedwidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStackedWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_stackedwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QStackedWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_stackedwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QStackedWidget* self, QRect* rectangle ```
QPixmap* q_stackedwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QStackedWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_stackedwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QStackedWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_stackedwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QStackedWidget* self, int id, bool enable ```
void q_stackedwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QStackedWidget* self, int id, bool enable ```
void q_stackedwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QStackedWidget* self, enum Qt__WindowType param1, bool on ```
void q_stackedwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QStackedWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_stackedwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_stackedwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_stackedwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStackedWidget* self ```
const char* q_stackedwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStackedWidget* self, const char* name ```
void q_stackedwidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStackedWidget* self, bool b ```
bool q_stackedwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStackedWidget* self ```
QThread* q_stackedwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStackedWidget* self, QThread* thread ```
void q_stackedwidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStackedWidget* self, int interval ```
int32_t q_stackedwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStackedWidget* self, int id ```
void q_stackedwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStackedWidget* self ```
libqt_list /* of QObject* */ q_stackedwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStackedWidget* self, QObject* filterObj ```
void q_stackedwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStackedWidget* self, QObject* obj ```
void q_stackedwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_stackedwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStackedWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_stackedwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_stackedwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_stackedwidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStackedWidget* self, const char* name, QVariant* value ```
bool q_stackedwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStackedWidget* self, const char* name ```
QVariant* q_stackedwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStackedWidget* self ```
const char** q_stackedwidget_dynamic_property_names(void* self) {
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
/// ``` QStackedWidget* self ```
QBindingStorage* q_stackedwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStackedWidget* self ```
QBindingStorage* q_stackedwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QStackedWidget* self, void (*slot)(QObject*) ```
void q_stackedwidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStackedWidget* self ```
QObject* q_stackedwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStackedWidget* self, const char* classname ```
bool q_stackedwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStackedWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_stackedwidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stackedwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStackedWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stackedwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStackedWidget* self, QObject* param1 ```
void q_stackedwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QStackedWidget* self, void (*slot)(QObject*, QObject*) ```
void q_stackedwidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QStackedWidget* self ```
double q_stackedwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QStackedWidget* self ```
double q_stackedwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_stackedwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#sizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_size_hint(void* self) {
    return QStackedWidget_SizeHint((QStackedWidget*)self);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_qbase_size_hint(void* self) {
    return QStackedWidget_QBaseSizeHint((QStackedWidget*)self);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, QSize* (*slot)() ```
void q_stackedwidget_on_size_hint(void* self, QSize* (*slot)()) {
    QStackedWidget_OnSizeHint((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QPaintEvent* param1 ```
void q_stackedwidget_paint_event(void* self, void* param1) {
    QStackedWidget_PaintEvent((QStackedWidget*)self, (QPaintEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QPaintEvent* param1 ```
void q_stackedwidget_qbase_paint_event(void* self, void* param1) {
    QStackedWidget_QBasePaintEvent((QStackedWidget*)self, (QPaintEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QPaintEvent*) ```
void q_stackedwidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnPaintEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QEvent* param1 ```
void q_stackedwidget_change_event(void* self, void* param1) {
    QStackedWidget_ChangeEvent((QStackedWidget*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QEvent* param1 ```
void q_stackedwidget_qbase_change_event(void* self, void* param1) {
    QStackedWidget_QBaseChangeEvent((QStackedWidget*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QEvent*) ```
void q_stackedwidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnChangeEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QStyleOptionFrame* option ```
void q_stackedwidget_init_style_option(void* self, void* option) {
    QStackedWidget_InitStyleOption((QStackedWidget*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QStyleOptionFrame* option ```
void q_stackedwidget_qbase_init_style_option(void* self, void* option) {
    QStackedWidget_QBaseInitStyleOption((QStackedWidget*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QStyleOptionFrame*) ```
void q_stackedwidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnInitStyleOption((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_dev_type(void* self) {
    return QStackedWidget_DevType((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_qbase_dev_type(void* self) {
    return QStackedWidget_QBaseDevType((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, int32_t (*slot)() ```
void q_stackedwidget_on_dev_type(void* self, int32_t (*slot)()) {
    QStackedWidget_OnDevType((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, bool visible ```
void q_stackedwidget_set_visible(void* self, bool visible) {
    QStackedWidget_SetVisible((QStackedWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, bool visible ```
void q_stackedwidget_qbase_set_visible(void* self, bool visible) {
    QStackedWidget_QBaseSetVisible((QStackedWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, bool) ```
void q_stackedwidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QStackedWidget_OnSetVisible((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_minimum_size_hint(void* self) {
    return QStackedWidget_MinimumSizeHint((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
QSize* q_stackedwidget_qbase_minimum_size_hint(void* self) {
    return QStackedWidget_QBaseMinimumSizeHint((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, QSize* (*slot)() ```
void q_stackedwidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QStackedWidget_OnMinimumSizeHint((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, int param1 ```
int32_t q_stackedwidget_height_for_width(void* self, int param1) {
    return QStackedWidget_HeightForWidth((QStackedWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, int param1 ```
int32_t q_stackedwidget_qbase_height_for_width(void* self, int param1) {
    return QStackedWidget_QBaseHeightForWidth((QStackedWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, int32_t (*slot)(QStackedWidget*, int) ```
void q_stackedwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QStackedWidget_OnHeightForWidth((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_has_height_for_width(void* self) {
    return QStackedWidget_HasHeightForWidth((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_qbase_has_height_for_width(void* self) {
    return QStackedWidget_QBaseHasHeightForWidth((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, bool (*slot)() ```
void q_stackedwidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QStackedWidget_OnHasHeightForWidth((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
QPaintEngine* q_stackedwidget_paint_engine(void* self) {
    return QStackedWidget_PaintEngine((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
QPaintEngine* q_stackedwidget_qbase_paint_engine(void* self) {
    return QStackedWidget_QBasePaintEngine((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, QPaintEngine* (*slot)() ```
void q_stackedwidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QStackedWidget_OnPaintEngine((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QMouseEvent* event ```
void q_stackedwidget_mouse_press_event(void* self, void* event) {
    QStackedWidget_MousePressEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QMouseEvent* event ```
void q_stackedwidget_qbase_mouse_press_event(void* self, void* event) {
    QStackedWidget_QBaseMousePressEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QMouseEvent*) ```
void q_stackedwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMousePressEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QMouseEvent* event ```
void q_stackedwidget_mouse_release_event(void* self, void* event) {
    QStackedWidget_MouseReleaseEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QMouseEvent* event ```
void q_stackedwidget_qbase_mouse_release_event(void* self, void* event) {
    QStackedWidget_QBaseMouseReleaseEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QMouseEvent*) ```
void q_stackedwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMouseReleaseEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QMouseEvent* event ```
void q_stackedwidget_mouse_double_click_event(void* self, void* event) {
    QStackedWidget_MouseDoubleClickEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QMouseEvent* event ```
void q_stackedwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QStackedWidget_QBaseMouseDoubleClickEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QMouseEvent*) ```
void q_stackedwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMouseDoubleClickEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QMouseEvent* event ```
void q_stackedwidget_mouse_move_event(void* self, void* event) {
    QStackedWidget_MouseMoveEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QMouseEvent* event ```
void q_stackedwidget_qbase_mouse_move_event(void* self, void* event) {
    QStackedWidget_QBaseMouseMoveEvent((QStackedWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QMouseEvent*) ```
void q_stackedwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMouseMoveEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QWheelEvent* event ```
void q_stackedwidget_wheel_event(void* self, void* event) {
    QStackedWidget_WheelEvent((QStackedWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QWheelEvent* event ```
void q_stackedwidget_qbase_wheel_event(void* self, void* event) {
    QStackedWidget_QBaseWheelEvent((QStackedWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QWheelEvent*) ```
void q_stackedwidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnWheelEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QKeyEvent* event ```
void q_stackedwidget_key_press_event(void* self, void* event) {
    QStackedWidget_KeyPressEvent((QStackedWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QKeyEvent* event ```
void q_stackedwidget_qbase_key_press_event(void* self, void* event) {
    QStackedWidget_QBaseKeyPressEvent((QStackedWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QKeyEvent*) ```
void q_stackedwidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnKeyPressEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QKeyEvent* event ```
void q_stackedwidget_key_release_event(void* self, void* event) {
    QStackedWidget_KeyReleaseEvent((QStackedWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QKeyEvent* event ```
void q_stackedwidget_qbase_key_release_event(void* self, void* event) {
    QStackedWidget_QBaseKeyReleaseEvent((QStackedWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QKeyEvent*) ```
void q_stackedwidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnKeyReleaseEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QFocusEvent* event ```
void q_stackedwidget_focus_in_event(void* self, void* event) {
    QStackedWidget_FocusInEvent((QStackedWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QFocusEvent* event ```
void q_stackedwidget_qbase_focus_in_event(void* self, void* event) {
    QStackedWidget_QBaseFocusInEvent((QStackedWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QFocusEvent*) ```
void q_stackedwidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnFocusInEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QFocusEvent* event ```
void q_stackedwidget_focus_out_event(void* self, void* event) {
    QStackedWidget_FocusOutEvent((QStackedWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QFocusEvent* event ```
void q_stackedwidget_qbase_focus_out_event(void* self, void* event) {
    QStackedWidget_QBaseFocusOutEvent((QStackedWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QFocusEvent*) ```
void q_stackedwidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnFocusOutEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QEnterEvent* event ```
void q_stackedwidget_enter_event(void* self, void* event) {
    QStackedWidget_EnterEvent((QStackedWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QEnterEvent* event ```
void q_stackedwidget_qbase_enter_event(void* self, void* event) {
    QStackedWidget_QBaseEnterEvent((QStackedWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QEnterEvent*) ```
void q_stackedwidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnEnterEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QEvent* event ```
void q_stackedwidget_leave_event(void* self, void* event) {
    QStackedWidget_LeaveEvent((QStackedWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QEvent* event ```
void q_stackedwidget_qbase_leave_event(void* self, void* event) {
    QStackedWidget_QBaseLeaveEvent((QStackedWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QEvent*) ```
void q_stackedwidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnLeaveEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QMoveEvent* event ```
void q_stackedwidget_move_event(void* self, void* event) {
    QStackedWidget_MoveEvent((QStackedWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QMoveEvent* event ```
void q_stackedwidget_qbase_move_event(void* self, void* event) {
    QStackedWidget_QBaseMoveEvent((QStackedWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QMoveEvent*) ```
void q_stackedwidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnMoveEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QResizeEvent* event ```
void q_stackedwidget_resize_event(void* self, void* event) {
    QStackedWidget_ResizeEvent((QStackedWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QResizeEvent* event ```
void q_stackedwidget_qbase_resize_event(void* self, void* event) {
    QStackedWidget_QBaseResizeEvent((QStackedWidget*)self, (QResizeEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QResizeEvent*) ```
void q_stackedwidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnResizeEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QCloseEvent* event ```
void q_stackedwidget_close_event(void* self, void* event) {
    QStackedWidget_CloseEvent((QStackedWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QCloseEvent* event ```
void q_stackedwidget_qbase_close_event(void* self, void* event) {
    QStackedWidget_QBaseCloseEvent((QStackedWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QCloseEvent*) ```
void q_stackedwidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnCloseEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QContextMenuEvent* event ```
void q_stackedwidget_context_menu_event(void* self, void* event) {
    QStackedWidget_ContextMenuEvent((QStackedWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QContextMenuEvent* event ```
void q_stackedwidget_qbase_context_menu_event(void* self, void* event) {
    QStackedWidget_QBaseContextMenuEvent((QStackedWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QContextMenuEvent*) ```
void q_stackedwidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnContextMenuEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QTabletEvent* event ```
void q_stackedwidget_tablet_event(void* self, void* event) {
    QStackedWidget_TabletEvent((QStackedWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QTabletEvent* event ```
void q_stackedwidget_qbase_tablet_event(void* self, void* event) {
    QStackedWidget_QBaseTabletEvent((QStackedWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QTabletEvent*) ```
void q_stackedwidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnTabletEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QActionEvent* event ```
void q_stackedwidget_action_event(void* self, void* event) {
    QStackedWidget_ActionEvent((QStackedWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QActionEvent* event ```
void q_stackedwidget_qbase_action_event(void* self, void* event) {
    QStackedWidget_QBaseActionEvent((QStackedWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QActionEvent*) ```
void q_stackedwidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnActionEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QDragEnterEvent* event ```
void q_stackedwidget_drag_enter_event(void* self, void* event) {
    QStackedWidget_DragEnterEvent((QStackedWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QDragEnterEvent* event ```
void q_stackedwidget_qbase_drag_enter_event(void* self, void* event) {
    QStackedWidget_QBaseDragEnterEvent((QStackedWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QDragEnterEvent*) ```
void q_stackedwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDragEnterEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QDragMoveEvent* event ```
void q_stackedwidget_drag_move_event(void* self, void* event) {
    QStackedWidget_DragMoveEvent((QStackedWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QDragMoveEvent* event ```
void q_stackedwidget_qbase_drag_move_event(void* self, void* event) {
    QStackedWidget_QBaseDragMoveEvent((QStackedWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QDragMoveEvent*) ```
void q_stackedwidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDragMoveEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QDragLeaveEvent* event ```
void q_stackedwidget_drag_leave_event(void* self, void* event) {
    QStackedWidget_DragLeaveEvent((QStackedWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QDragLeaveEvent* event ```
void q_stackedwidget_qbase_drag_leave_event(void* self, void* event) {
    QStackedWidget_QBaseDragLeaveEvent((QStackedWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QDragLeaveEvent*) ```
void q_stackedwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDragLeaveEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QDropEvent* event ```
void q_stackedwidget_drop_event(void* self, void* event) {
    QStackedWidget_DropEvent((QStackedWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QDropEvent* event ```
void q_stackedwidget_qbase_drop_event(void* self, void* event) {
    QStackedWidget_QBaseDropEvent((QStackedWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QDropEvent*) ```
void q_stackedwidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDropEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QShowEvent* event ```
void q_stackedwidget_show_event(void* self, void* event) {
    QStackedWidget_ShowEvent((QStackedWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QShowEvent* event ```
void q_stackedwidget_qbase_show_event(void* self, void* event) {
    QStackedWidget_QBaseShowEvent((QStackedWidget*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QShowEvent*) ```
void q_stackedwidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnShowEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QHideEvent* event ```
void q_stackedwidget_hide_event(void* self, void* event) {
    QStackedWidget_HideEvent((QStackedWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QHideEvent* event ```
void q_stackedwidget_qbase_hide_event(void* self, void* event) {
    QStackedWidget_QBaseHideEvent((QStackedWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QHideEvent*) ```
void q_stackedwidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnHideEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_stackedwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QStackedWidget_NativeEvent((QStackedWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_stackedwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QStackedWidget_QBaseNativeEvent((QStackedWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, bool (*slot)(QStackedWidget*, const char*, void*, intptr_t*) ```
void q_stackedwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QStackedWidget_OnNativeEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_stackedwidget_metric(void* self, int64_t param1) {
    return QStackedWidget_Metric((QStackedWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_stackedwidget_qbase_metric(void* self, int64_t param1) {
    return QStackedWidget_QBaseMetric((QStackedWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, int32_t (*slot)(QStackedWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_stackedwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QStackedWidget_OnMetric((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QPainter* painter ```
void q_stackedwidget_init_painter(void* self, void* painter) {
    QStackedWidget_InitPainter((QStackedWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QPainter* painter ```
void q_stackedwidget_qbase_init_painter(void* self, void* painter) {
    QStackedWidget_QBaseInitPainter((QStackedWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QPainter*) ```
void q_stackedwidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnInitPainter((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QPoint* offset ```
QPaintDevice* q_stackedwidget_redirected(void* self, void* offset) {
    return QStackedWidget_Redirected((QStackedWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QPoint* offset ```
QPaintDevice* q_stackedwidget_qbase_redirected(void* self, void* offset) {
    return QStackedWidget_QBaseRedirected((QStackedWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, QPaintDevice* (*slot)(QStackedWidget*, QPoint*) ```
void q_stackedwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QStackedWidget_OnRedirected((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
QPainter* q_stackedwidget_shared_painter(void* self) {
    return QStackedWidget_SharedPainter((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
QPainter* q_stackedwidget_qbase_shared_painter(void* self) {
    return QStackedWidget_QBaseSharedPainter((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, QPainter* (*slot)() ```
void q_stackedwidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QStackedWidget_OnSharedPainter((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QInputMethodEvent* param1 ```
void q_stackedwidget_input_method_event(void* self, void* param1) {
    QStackedWidget_InputMethodEvent((QStackedWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QInputMethodEvent* param1 ```
void q_stackedwidget_qbase_input_method_event(void* self, void* param1) {
    QStackedWidget_QBaseInputMethodEvent((QStackedWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QInputMethodEvent*) ```
void q_stackedwidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnInputMethodEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_stackedwidget_input_method_query(void* self, int64_t param1) {
    return QStackedWidget_InputMethodQuery((QStackedWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_stackedwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QStackedWidget_QBaseInputMethodQuery((QStackedWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, QVariant* (*slot)(QStackedWidget*, enum Qt__InputMethodQuery) ```
void q_stackedwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QStackedWidget_OnInputMethodQuery((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, bool next ```
bool q_stackedwidget_focus_next_prev_child(void* self, bool next) {
    return QStackedWidget_FocusNextPrevChild((QStackedWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, bool next ```
bool q_stackedwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QStackedWidget_QBaseFocusNextPrevChild((QStackedWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, bool (*slot)(QStackedWidget*, bool) ```
void q_stackedwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QStackedWidget_OnFocusNextPrevChild((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QObject* watched, QEvent* event ```
bool q_stackedwidget_event_filter(void* self, void* watched, void* event) {
    return QStackedWidget_EventFilter((QStackedWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QObject* watched, QEvent* event ```
bool q_stackedwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QStackedWidget_QBaseEventFilter((QStackedWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, bool (*slot)(QStackedWidget*, QObject*, QEvent*) ```
void q_stackedwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QStackedWidget_OnEventFilter((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QTimerEvent* event ```
void q_stackedwidget_timer_event(void* self, void* event) {
    QStackedWidget_TimerEvent((QStackedWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QTimerEvent* event ```
void q_stackedwidget_qbase_timer_event(void* self, void* event) {
    QStackedWidget_QBaseTimerEvent((QStackedWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QTimerEvent*) ```
void q_stackedwidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnTimerEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QChildEvent* event ```
void q_stackedwidget_child_event(void* self, void* event) {
    QStackedWidget_ChildEvent((QStackedWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QChildEvent* event ```
void q_stackedwidget_qbase_child_event(void* self, void* event) {
    QStackedWidget_QBaseChildEvent((QStackedWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QChildEvent*) ```
void q_stackedwidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnChildEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QEvent* event ```
void q_stackedwidget_custom_event(void* self, void* event) {
    QStackedWidget_CustomEvent((QStackedWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QEvent* event ```
void q_stackedwidget_qbase_custom_event(void* self, void* event) {
    QStackedWidget_QBaseCustomEvent((QStackedWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QEvent*) ```
void q_stackedwidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnCustomEvent((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QMetaMethod* signal ```
void q_stackedwidget_connect_notify(void* self, void* signal) {
    QStackedWidget_ConnectNotify((QStackedWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QMetaMethod* signal ```
void q_stackedwidget_qbase_connect_notify(void* self, void* signal) {
    QStackedWidget_QBaseConnectNotify((QStackedWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QMetaMethod*) ```
void q_stackedwidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnConnectNotify((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QMetaMethod* signal ```
void q_stackedwidget_disconnect_notify(void* self, void* signal) {
    QStackedWidget_DisconnectNotify((QStackedWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QMetaMethod* signal ```
void q_stackedwidget_qbase_disconnect_notify(void* self, void* signal) {
    QStackedWidget_QBaseDisconnectNotify((QStackedWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QMetaMethod*) ```
void q_stackedwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDisconnectNotify((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QPainter* param1 ```
void q_stackedwidget_draw_frame(void* self, void* param1) {
    QStackedWidget_DrawFrame((QStackedWidget*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QPainter* param1 ```
void q_stackedwidget_qbase_draw_frame(void* self, void* param1) {
    QStackedWidget_QBaseDrawFrame((QStackedWidget*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)(QStackedWidget*, QPainter*) ```
void q_stackedwidget_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QStackedWidget_OnDrawFrame((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_update_micro_focus(void* self) {
    QStackedWidget_UpdateMicroFocus((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_qbase_update_micro_focus(void* self) {
    QStackedWidget_QBaseUpdateMicroFocus((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)() ```
void q_stackedwidget_on_update_micro_focus(void* self, void (*slot)()) {
    QStackedWidget_OnUpdateMicroFocus((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_create(void* self) {
    QStackedWidget_Create((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_qbase_create(void* self) {
    QStackedWidget_QBaseCreate((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)() ```
void q_stackedwidget_on_create(void* self, void (*slot)()) {
    QStackedWidget_OnCreate((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_destroy(void* self) {
    QStackedWidget_Destroy((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_qbase_destroy(void* self) {
    QStackedWidget_QBaseDestroy((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, void (*slot)() ```
void q_stackedwidget_on_destroy(void* self, void (*slot)()) {
    QStackedWidget_OnDestroy((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_focus_next_child(void* self) {
    return QStackedWidget_FocusNextChild((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_qbase_focus_next_child(void* self) {
    return QStackedWidget_QBaseFocusNextChild((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, bool (*slot)() ```
void q_stackedwidget_on_focus_next_child(void* self, bool (*slot)()) {
    QStackedWidget_OnFocusNextChild((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_focus_previous_child(void* self) {
    return QStackedWidget_FocusPreviousChild((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
bool q_stackedwidget_qbase_focus_previous_child(void* self) {
    return QStackedWidget_QBaseFocusPreviousChild((QStackedWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, bool (*slot)() ```
void q_stackedwidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QStackedWidget_OnFocusPreviousChild((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
QObject* q_stackedwidget_sender(void* self) {
    return QStackedWidget_Sender((QStackedWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
QObject* q_stackedwidget_qbase_sender(void* self) {
    return QStackedWidget_QBaseSender((QStackedWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, QObject* (*slot)() ```
void q_stackedwidget_on_sender(void* self, QObject* (*slot)()) {
    QStackedWidget_OnSender((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_sender_signal_index(void* self) {
    return QStackedWidget_SenderSignalIndex((QStackedWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self ```
int32_t q_stackedwidget_qbase_sender_signal_index(void* self) {
    return QStackedWidget_QBaseSenderSignalIndex((QStackedWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, int32_t (*slot)() ```
void q_stackedwidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QStackedWidget_OnSenderSignalIndex((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, const char* signal ```
int32_t q_stackedwidget_receivers(void* self, const char* signal) {
    return QStackedWidget_Receivers((QStackedWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, const char* signal ```
int32_t q_stackedwidget_qbase_receivers(void* self, const char* signal) {
    return QStackedWidget_QBaseReceivers((QStackedWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, int32_t (*slot)(QStackedWidget*, const char*) ```
void q_stackedwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QStackedWidget_OnReceivers((QStackedWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedWidget* self, QMetaMethod* signal ```
bool q_stackedwidget_is_signal_connected(void* self, void* signal) {
    return QStackedWidget_IsSignalConnected((QStackedWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedWidget* self, QMetaMethod* signal ```
bool q_stackedwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QStackedWidget_QBaseIsSignalConnected((QStackedWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedWidget* self, bool (*slot)(QStackedWidget*, QMetaMethod*) ```
void q_stackedwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QStackedWidget_OnIsSignalConnected((QStackedWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QStackedWidget* self ```
void q_stackedwidget_delete(void* self) {
    QStackedWidget_Delete((QStackedWidget*)(self));
}