#include "libqabstractscrollarea.hpp"
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
#include "libqscrollbar.hpp"
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
#include "libqscrollarea.hpp"
#include "libqscrollarea.h"

/// https://doc.qt.io/qt-6/qscrollarea.html

/// q_scrollarea_new constructs a new QScrollArea object.
///
/// ``` QWidget* parent ```
QScrollArea* q_scrollarea_new(void* parent) {
    return QScrollArea_new((QWidget*)parent);
}

/// q_scrollarea_new2 constructs a new QScrollArea object.
///
///
QScrollArea* q_scrollarea_new2() {
    return QScrollArea_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QScrollArea* self ```
QMetaObject* q_scrollarea_meta_object(void* self) {
    return QScrollArea_MetaObject((QScrollArea*)self);
}

/// ``` QScrollArea* self, const char* param1 ```
void* q_scrollarea_metacast(void* self, const char* param1) {
    return QScrollArea_Metacast((QScrollArea*)self, param1);
}

/// ``` QScrollArea* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scrollarea_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScrollArea_Metacall((QScrollArea*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QScrollArea* self, int32_t (*slot)(QScrollArea*, enum QMetaObject__Call, int, void*) ```
void q_scrollarea_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QScrollArea_OnMetacall((QScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollArea* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_scrollarea_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QScrollArea_QBaseMetacall((QScrollArea*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_scrollarea_tr(const char* s) {
    libqt_string _str = QScrollArea_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#widget)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_widget(void* self) {
    return QScrollArea_Widget((QScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#setWidget)
///
/// ``` QScrollArea* self, QWidget* widget ```
void q_scrollarea_set_widget(void* self, void* widget) {
    QScrollArea_SetWidget((QScrollArea*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#takeWidget)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_take_widget(void* self) {
    return QScrollArea_TakeWidget((QScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#widgetResizable)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_widget_resizable(void* self) {
    return QScrollArea_WidgetResizable((QScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#setWidgetResizable)
///
/// ``` QScrollArea* self, bool resizable ```
void q_scrollarea_set_widget_resizable(void* self, bool resizable) {
    QScrollArea_SetWidgetResizable((QScrollArea*)self, resizable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#sizeHint)
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_size_hint(void* self) {
    return QScrollArea_SizeHint((QScrollArea*)self);
}

/// Allows for overriding the related default method
///
/// ``` QScrollArea* self, QSize* (*slot)() ```
void q_scrollarea_on_size_hint(void* self, QSize* (*slot)()) {
    QScrollArea_OnSizeHint((QScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_qbase_size_hint(void* self) {
    return QScrollArea_QBaseSizeHint((QScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#focusNextPrevChild)
///
/// ``` QScrollArea* self, bool next ```
bool q_scrollarea_focus_next_prev_child(void* self, bool next) {
    return QScrollArea_FocusNextPrevChild((QScrollArea*)self, next);
}

/// Allows for overriding the related default method
///
/// ``` QScrollArea* self, bool (*slot)(QScrollArea*, bool) ```
void q_scrollarea_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QScrollArea_OnFocusNextPrevChild((QScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollArea* self, bool next ```
bool q_scrollarea_qbase_focus_next_prev_child(void* self, bool next) {
    return QScrollArea_QBaseFocusNextPrevChild((QScrollArea*)self, next);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#alignment)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_alignment(void* self) {
    return QScrollArea_Alignment((QScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#setAlignment)
///
/// ``` QScrollArea* self, int alignment ```
void q_scrollarea_set_alignment(void* self, int64_t alignment) {
    QScrollArea_SetAlignment((QScrollArea*)self, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureVisible)
///
/// ``` QScrollArea* self, int x, int y ```
void q_scrollarea_ensure_visible(void* self, int x, int y) {
    QScrollArea_EnsureVisible((QScrollArea*)self, x, y);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureWidgetVisible)
///
/// ``` QScrollArea* self, QWidget* childWidget ```
void q_scrollarea_ensure_widget_visible(void* self, void* childWidget) {
    QScrollArea_EnsureWidgetVisible((QScrollArea*)self, (QWidget*)childWidget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#event)
///
/// ``` QScrollArea* self, QEvent* param1 ```
bool q_scrollarea_event(void* self, void* param1) {
    return QScrollArea_Event((QScrollArea*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QScrollArea* self, bool (*slot)(QScrollArea*, QEvent*) ```
void q_scrollarea_on_event(void* self, bool (*slot)(void*, void*)) {
    QScrollArea_OnEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollArea* self, QEvent* param1 ```
bool q_scrollarea_qbase_event(void* self, void* param1) {
    return QScrollArea_QBaseEvent((QScrollArea*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#eventFilter)
///
/// ``` QScrollArea* self, QObject* param1, QEvent* param2 ```
bool q_scrollarea_event_filter(void* self, void* param1, void* param2) {
    return QScrollArea_EventFilter((QScrollArea*)self, (QObject*)param1, (QEvent*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QScrollArea* self, bool (*slot)(QScrollArea*, QObject*, QEvent*) ```
void q_scrollarea_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QScrollArea_OnEventFilter((QScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollArea* self, QObject* param1, QEvent* param2 ```
bool q_scrollarea_qbase_event_filter(void* self, void* param1, void* param2) {
    return QScrollArea_QBaseEventFilter((QScrollArea*)self, (QObject*)param1, (QEvent*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#resizeEvent)
///
/// ``` QScrollArea* self, QResizeEvent* param1 ```
void q_scrollarea_resize_event(void* self, void* param1) {
    QScrollArea_ResizeEvent((QScrollArea*)self, (QResizeEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QResizeEvent*) ```
void q_scrollarea_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnResizeEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollArea* self, QResizeEvent* param1 ```
void q_scrollarea_qbase_resize_event(void* self, void* param1) {
    QScrollArea_QBaseResizeEvent((QScrollArea*)self, (QResizeEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#scrollContentsBy)
///
/// ``` QScrollArea* self, int dx, int dy ```
void q_scrollarea_scroll_contents_by(void* self, int dx, int dy) {
    QScrollArea_ScrollContentsBy((QScrollArea*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, int, int) ```
void q_scrollarea_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QScrollArea_OnScrollContentsBy((QScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollArea* self, int dx, int dy ```
void q_scrollarea_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QScrollArea_QBaseScrollContentsBy((QScrollArea*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#viewportSizeHint)
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_viewport_size_hint(void* self) {
    return QScrollArea_ViewportSizeHint((QScrollArea*)self);
}

/// Allows for overriding the related default method
///
/// ``` QScrollArea* self, QSize* (*slot)() ```
void q_scrollarea_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QScrollArea_OnViewportSizeHint((QScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_qbase_viewport_size_hint(void* self) {
    return QScrollArea_QBaseViewportSizeHint((QScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_scrollarea_tr2(const char* s, const char* c) {
    libqt_string _str = QScrollArea_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_scrollarea_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QScrollArea_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureVisible)
///
/// ``` QScrollArea* self, int x, int y, int xmargin ```
void q_scrollarea_ensure_visible3(void* self, int x, int y, int xmargin) {
    QScrollArea_EnsureVisible3((QScrollArea*)self, x, y, xmargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureVisible)
///
/// ``` QScrollArea* self, int x, int y, int xmargin, int ymargin ```
void q_scrollarea_ensure_visible4(void* self, int x, int y, int xmargin, int ymargin) {
    QScrollArea_EnsureVisible4((QScrollArea*)self, x, y, xmargin, ymargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureWidgetVisible)
///
/// ``` QScrollArea* self, QWidget* childWidget, int xmargin ```
void q_scrollarea_ensure_widget_visible2(void* self, void* childWidget, int xmargin) {
    QScrollArea_EnsureWidgetVisible2((QScrollArea*)self, (QWidget*)childWidget, xmargin);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscrollarea.html#ensureWidgetVisible)
///
/// ``` QScrollArea* self, QWidget* childWidget, int xmargin, int ymargin ```
void q_scrollarea_ensure_widget_visible3(void* self, void* childWidget, int xmargin, int ymargin) {
    QScrollArea_EnsureWidgetVisible3((QScrollArea*)self, (QWidget*)childWidget, xmargin, ymargin);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QScrollArea* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_scrollarea_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QScrollArea* self ```
QScrollBar* q_scrollarea_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QScrollArea* self, QScrollBar* scrollbar ```
void q_scrollarea_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QScrollArea* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_scrollarea_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QScrollArea* self ```
QScrollBar* q_scrollarea_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QScrollArea* self, QScrollBar* scrollbar ```
void q_scrollarea_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QScrollArea* self, QWidget* widget ```
void q_scrollarea_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QScrollArea* self, QWidget* widget, int alignment ```
void q_scrollarea_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QScrollArea* self, int alignment ```
libqt_list /* of QWidget* */ q_scrollarea_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QScrollArea* self, QWidget* widget ```
void q_scrollarea_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QScrollArea* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_scrollarea_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QScrollArea* self, int frameStyle ```
void q_scrollarea_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QScrollArea* self, enum QFrame__Shape frameShape ```
void q_scrollarea_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QScrollArea* self, enum QFrame__Shadow frameShadow ```
void q_scrollarea_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QScrollArea* self, int lineWidth ```
void q_scrollarea_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QScrollArea* self, int midLineWidth ```
void q_scrollarea_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QScrollArea* self ```
QRect* q_scrollarea_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QScrollArea* self, QRect* frameRect ```
void q_scrollarea_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QScrollArea* self ```
uintptr_t q_scrollarea_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QScrollArea* self ```
void q_scrollarea_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QScrollArea* self ```
uintptr_t q_scrollarea_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QScrollArea* self ```
uintptr_t q_scrollarea_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QScrollArea* self ```
QStyle* q_scrollarea_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QScrollArea* self, QStyle* style ```
void q_scrollarea_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QScrollArea* self, enum Qt__WindowModality windowModality ```
void q_scrollarea_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QScrollArea* self, QWidget* param1 ```
bool q_scrollarea_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QScrollArea* self, bool enabled ```
void q_scrollarea_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QScrollArea* self, bool disabled ```
void q_scrollarea_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QScrollArea* self, bool windowModified ```
void q_scrollarea_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QScrollArea* self ```
QRect* q_scrollarea_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QScrollArea* self ```
QRect* q_scrollarea_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QScrollArea* self ```
QRect* q_scrollarea_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QScrollArea* self ```
QPoint* q_scrollarea_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QScrollArea* self ```
QRect* q_scrollarea_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QScrollArea* self ```
QRect* q_scrollarea_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QScrollArea* self ```
QRegion* q_scrollarea_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QScrollArea* self, QSize* minimumSize ```
void q_scrollarea_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QScrollArea* self, int minw, int minh ```
void q_scrollarea_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QScrollArea* self, QSize* maximumSize ```
void q_scrollarea_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QScrollArea* self, int maxw, int maxh ```
void q_scrollarea_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QScrollArea* self, int minw ```
void q_scrollarea_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QScrollArea* self, int minh ```
void q_scrollarea_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QScrollArea* self, int maxw ```
void q_scrollarea_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QScrollArea* self, int maxh ```
void q_scrollarea_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QScrollArea* self, QSize* sizeIncrement ```
void q_scrollarea_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QScrollArea* self, int w, int h ```
void q_scrollarea_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QScrollArea* self, QSize* baseSize ```
void q_scrollarea_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QScrollArea* self, int basew, int baseh ```
void q_scrollarea_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QScrollArea* self, QSize* fixedSize ```
void q_scrollarea_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QScrollArea* self, int w, int h ```
void q_scrollarea_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QScrollArea* self, int w ```
void q_scrollarea_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QScrollArea* self, int h ```
void q_scrollarea_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QScrollArea* self, QPointF* param1 ```
QPointF* q_scrollarea_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QScrollArea* self, QPoint* param1 ```
QPoint* q_scrollarea_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QScrollArea* self, QPointF* param1 ```
QPointF* q_scrollarea_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QScrollArea* self, QPoint* param1 ```
QPoint* q_scrollarea_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QScrollArea* self, QPointF* param1 ```
QPointF* q_scrollarea_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QScrollArea* self, QPoint* param1 ```
QPoint* q_scrollarea_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QScrollArea* self, QPointF* param1 ```
QPointF* q_scrollarea_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QScrollArea* self, QPoint* param1 ```
QPoint* q_scrollarea_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QScrollArea* self, QWidget* param1, QPointF* param2 ```
QPointF* q_scrollarea_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QScrollArea* self, QWidget* param1, QPoint* param2 ```
QPoint* q_scrollarea_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QScrollArea* self, QWidget* param1, QPointF* param2 ```
QPointF* q_scrollarea_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QScrollArea* self, QWidget* param1, QPoint* param2 ```
QPoint* q_scrollarea_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QScrollArea* self ```
QPalette* q_scrollarea_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QScrollArea* self, QPalette* palette ```
void q_scrollarea_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QScrollArea* self, enum QPalette__ColorRole backgroundRole ```
void q_scrollarea_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QScrollArea* self, enum QPalette__ColorRole foregroundRole ```
void q_scrollarea_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QScrollArea* self ```
QFont* q_scrollarea_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QScrollArea* self, QFont* font ```
void q_scrollarea_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QScrollArea* self ```
QFontMetrics* q_scrollarea_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QScrollArea* self ```
QFontInfo* q_scrollarea_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QScrollArea* self ```
QCursor* q_scrollarea_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QScrollArea* self, QCursor* cursor ```
void q_scrollarea_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QScrollArea* self ```
void q_scrollarea_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QScrollArea* self, bool enable ```
void q_scrollarea_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QScrollArea* self, bool enable ```
void q_scrollarea_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QScrollArea* self, QBitmap* mask ```
void q_scrollarea_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QScrollArea* self, QRegion* mask ```
void q_scrollarea_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QScrollArea* self ```
QRegion* q_scrollarea_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QScrollArea* self ```
void q_scrollarea_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollArea* self, QPaintDevice* target ```
void q_scrollarea_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollArea* self, QPainter* painter ```
void q_scrollarea_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QScrollArea* self ```
QPixmap* q_scrollarea_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QScrollArea* self ```
QGraphicsEffect* q_scrollarea_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QScrollArea* self, QGraphicsEffect* effect ```
void q_scrollarea_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QScrollArea* self, enum Qt__GestureType typeVal ```
void q_scrollarea_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QScrollArea* self, enum Qt__GestureType typeVal ```
void q_scrollarea_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QScrollArea* self, const char* windowTitle ```
void q_scrollarea_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QScrollArea* self, const char* styleSheet ```
void q_scrollarea_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QScrollArea* self, QIcon* icon ```
void q_scrollarea_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QScrollArea* self ```
QIcon* q_scrollarea_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QScrollArea* self, const char* windowIconText ```
void q_scrollarea_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QScrollArea* self, const char* windowRole ```
void q_scrollarea_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QScrollArea* self, const char* filePath ```
void q_scrollarea_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QScrollArea* self, double level ```
void q_scrollarea_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QScrollArea* self ```
double q_scrollarea_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QScrollArea* self, const char* toolTip ```
void q_scrollarea_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QScrollArea* self, int msec ```
void q_scrollarea_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QScrollArea* self, const char* statusTip ```
void q_scrollarea_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QScrollArea* self, const char* whatsThis ```
void q_scrollarea_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QScrollArea* self, const char* name ```
void q_scrollarea_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QScrollArea* self, const char* description ```
void q_scrollarea_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QScrollArea* self, enum Qt__LayoutDirection direction ```
void q_scrollarea_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QScrollArea* self ```
void q_scrollarea_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QScrollArea* self, QLocale* locale ```
void q_scrollarea_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QScrollArea* self ```
QLocale* q_scrollarea_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QScrollArea* self ```
void q_scrollarea_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QScrollArea* self ```
void q_scrollarea_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QScrollArea* self ```
void q_scrollarea_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QScrollArea* self ```
void q_scrollarea_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QScrollArea* self, enum Qt__FocusReason reason ```
void q_scrollarea_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QScrollArea* self, enum Qt__FocusPolicy policy ```
void q_scrollarea_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_scrollarea_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QScrollArea* self, QWidget* focusProxy ```
void q_scrollarea_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QScrollArea* self, enum Qt__ContextMenuPolicy policy ```
void q_scrollarea_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QScrollArea* self ```
void q_scrollarea_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QScrollArea* self, QCursor* param1 ```
void q_scrollarea_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QScrollArea* self ```
void q_scrollarea_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QScrollArea* self ```
void q_scrollarea_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QScrollArea* self ```
void q_scrollarea_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QScrollArea* self, QKeySequence* key ```
int32_t q_scrollarea_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QScrollArea* self, int id ```
void q_scrollarea_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QScrollArea* self, int id ```
void q_scrollarea_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QScrollArea* self, int id ```
void q_scrollarea_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_scrollarea_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_scrollarea_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QScrollArea* self, bool enable ```
void q_scrollarea_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QScrollArea* self ```
QGraphicsProxyWidget* q_scrollarea_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QScrollArea* self ```
void q_scrollarea_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QScrollArea* self ```
void q_scrollarea_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QScrollArea* self, int x, int y, int w, int h ```
void q_scrollarea_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QScrollArea* self, QRect* param1 ```
void q_scrollarea_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QScrollArea* self, QRegion* param1 ```
void q_scrollarea_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QScrollArea* self, int x, int y, int w, int h ```
void q_scrollarea_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QScrollArea* self, QRect* param1 ```
void q_scrollarea_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QScrollArea* self, QRegion* param1 ```
void q_scrollarea_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QScrollArea* self, bool hidden ```
void q_scrollarea_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QScrollArea* self ```
void q_scrollarea_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QScrollArea* self ```
void q_scrollarea_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QScrollArea* self ```
void q_scrollarea_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QScrollArea* self ```
void q_scrollarea_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QScrollArea* self ```
void q_scrollarea_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QScrollArea* self ```
void q_scrollarea_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QScrollArea* self ```
void q_scrollarea_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QScrollArea* self ```
void q_scrollarea_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QScrollArea* self, QWidget* param1 ```
void q_scrollarea_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QScrollArea* self, int x, int y ```
void q_scrollarea_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QScrollArea* self, QPoint* param1 ```
void q_scrollarea_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QScrollArea* self, int w, int h ```
void q_scrollarea_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QScrollArea* self, QSize* param1 ```
void q_scrollarea_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QScrollArea* self, int x, int y, int w, int h ```
void q_scrollarea_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QScrollArea* self, QRect* geometry ```
void q_scrollarea_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QScrollArea* self ```
char* q_scrollarea_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QScrollArea* self, const char* geometry ```
bool q_scrollarea_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QScrollArea* self ```
void q_scrollarea_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QScrollArea* self, QWidget* param1 ```
bool q_scrollarea_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QScrollArea* self, int state ```
void q_scrollarea_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QScrollArea* self, int state ```
void q_scrollarea_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QScrollArea* self ```
QSizePolicy* q_scrollarea_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QScrollArea* self, QSizePolicy* sizePolicy ```
void q_scrollarea_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QScrollArea* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_scrollarea_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QScrollArea* self ```
QRegion* q_scrollarea_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QScrollArea* self, int left, int top, int right, int bottom ```
void q_scrollarea_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QScrollArea* self, QMargins* margins ```
void q_scrollarea_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QScrollArea* self ```
QMargins* q_scrollarea_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QScrollArea* self ```
QRect* q_scrollarea_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QScrollArea* self ```
QLayout* q_scrollarea_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QScrollArea* self, QLayout* layout ```
void q_scrollarea_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QScrollArea* self ```
void q_scrollarea_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QScrollArea* self, QWidget* parent ```
void q_scrollarea_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QScrollArea* self, QWidget* parent, int f ```
void q_scrollarea_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QScrollArea* self, int dx, int dy ```
void q_scrollarea_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QScrollArea* self, int dx, int dy, QRect* param3 ```
void q_scrollarea_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QScrollArea* self, bool on ```
void q_scrollarea_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollArea* self, QAction* action ```
void q_scrollarea_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QScrollArea* self, QAction* actions[] ```
void q_scrollarea_add_actions(void* self, void* actions[]) {
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
/// ``` QScrollArea* self, QAction* before, QAction* actions[] ```
void q_scrollarea_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QScrollArea* self, QAction* before, QAction* action ```
void q_scrollarea_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QScrollArea* self, QAction* action ```
void q_scrollarea_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QScrollArea* self ```
libqt_list /* of QAction* */ q_scrollarea_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollArea* self, const char* text ```
QAction* q_scrollarea_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollArea* self, QIcon* icon, const char* text ```
QAction* q_scrollarea_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollArea* self, const char* text, QKeySequence* shortcut ```
QAction* q_scrollarea_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QScrollArea* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_scrollarea_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QScrollArea* self ```
QWidget* q_scrollarea_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QScrollArea* self, int typeVal ```
void q_scrollarea_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QScrollArea* self, enum Qt__WindowType param1 ```
void q_scrollarea_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QScrollArea* self, int typeVal ```
void q_scrollarea_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_scrollarea_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QScrollArea* self, int x, int y ```
QWidget* q_scrollarea_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QScrollArea* self, QPoint* p ```
QWidget* q_scrollarea_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QScrollArea* self, enum Qt__WidgetAttribute param1 ```
void q_scrollarea_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QScrollArea* self, enum Qt__WidgetAttribute param1 ```
bool q_scrollarea_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QScrollArea* self ```
void q_scrollarea_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QScrollArea* self, QWidget* child ```
bool q_scrollarea_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QScrollArea* self, bool enabled ```
void q_scrollarea_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QScrollArea* self ```
QBackingStore* q_scrollarea_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QScrollArea* self ```
QWindow* q_scrollarea_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QScrollArea* self ```
QScreen* q_scrollarea_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QScrollArea* self, QScreen* screen ```
void q_scrollarea_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_scrollarea_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QScrollArea* self, const char* title ```
void q_scrollarea_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QScrollArea* self, void (*slot)(QWidget*, const char*) ```
void q_scrollarea_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QScrollArea* self, QIcon* icon ```
void q_scrollarea_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QScrollArea* self, void (*slot)(QWidget*, QIcon*) ```
void q_scrollarea_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QScrollArea* self, const char* iconText ```
void q_scrollarea_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QScrollArea* self, void (*slot)(QWidget*, const char*) ```
void q_scrollarea_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QScrollArea* self, QPoint* pos ```
void q_scrollarea_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QScrollArea* self, void (*slot)(QWidget*, QPoint*) ```
void q_scrollarea_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QScrollArea* self ```
int64_t q_scrollarea_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QScrollArea* self, int hints ```
void q_scrollarea_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollArea* self, QPaintDevice* target, QPoint* targetOffset ```
void q_scrollarea_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollArea* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_scrollarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollArea* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_scrollarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollArea* self, QPainter* painter, QPoint* targetOffset ```
void q_scrollarea_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollArea* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_scrollarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QScrollArea* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_scrollarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QScrollArea* self, QRect* rectangle ```
QPixmap* q_scrollarea_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QScrollArea* self, enum Qt__GestureType typeVal, int flags ```
void q_scrollarea_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QScrollArea* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_scrollarea_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QScrollArea* self, int id, bool enable ```
void q_scrollarea_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QScrollArea* self, int id, bool enable ```
void q_scrollarea_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QScrollArea* self, enum Qt__WindowType param1, bool on ```
void q_scrollarea_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QScrollArea* self, enum Qt__WidgetAttribute param1, bool on ```
void q_scrollarea_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_scrollarea_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_scrollarea_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QScrollArea* self ```
const char* q_scrollarea_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QScrollArea* self, const char* name ```
void q_scrollarea_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QScrollArea* self, bool b ```
bool q_scrollarea_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QScrollArea* self ```
QThread* q_scrollarea_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QScrollArea* self, QThread* thread ```
void q_scrollarea_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScrollArea* self, int interval ```
int32_t q_scrollarea_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QScrollArea* self, int id ```
void q_scrollarea_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QScrollArea* self ```
libqt_list /* of QObject* */ q_scrollarea_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QScrollArea* self, QObject* filterObj ```
void q_scrollarea_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QScrollArea* self, QObject* obj ```
void q_scrollarea_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_scrollarea_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScrollArea* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_scrollarea_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_scrollarea_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_scrollarea_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QScrollArea* self ```
void q_scrollarea_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QScrollArea* self ```
void q_scrollarea_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QScrollArea* self, const char* name, QVariant* value ```
bool q_scrollarea_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QScrollArea* self, const char* name ```
QVariant* q_scrollarea_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QScrollArea* self ```
const char** q_scrollarea_dynamic_property_names(void* self) {
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
/// ``` QScrollArea* self ```
QBindingStorage* q_scrollarea_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QScrollArea* self ```
QBindingStorage* q_scrollarea_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScrollArea* self ```
void q_scrollarea_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QScrollArea* self, void (*slot)(QObject*) ```
void q_scrollarea_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QScrollArea* self ```
QObject* q_scrollarea_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QScrollArea* self, const char* classname ```
bool q_scrollarea_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QScrollArea* self ```
void q_scrollarea_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QScrollArea* self, int interval, enum Qt__TimerType timerType ```
int32_t q_scrollarea_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scrollarea_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QScrollArea* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_scrollarea_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QScrollArea* self, QObject* param1 ```
void q_scrollarea_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QScrollArea* self, void (*slot)(QObject*, QObject*) ```
void q_scrollarea_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QScrollArea* self ```
bool q_scrollarea_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QScrollArea* self ```
double q_scrollarea_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QScrollArea* self ```
double q_scrollarea_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_scrollarea_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_minimum_size_hint(void* self) {
    return QScrollArea_MinimumSizeHint((QScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
QSize* q_scrollarea_qbase_minimum_size_hint(void* self) {
    return QScrollArea_QBaseMinimumSizeHint((QScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, QSize* (*slot)() ```
void q_scrollarea_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QScrollArea_OnMinimumSizeHint((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QWidget* viewport ```
void q_scrollarea_setup_viewport(void* self, void* viewport) {
    QScrollArea_SetupViewport((QScrollArea*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QWidget* viewport ```
void q_scrollarea_qbase_setup_viewport(void* self, void* viewport) {
    QScrollArea_QBaseSetupViewport((QScrollArea*)self, (QWidget*)viewport);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QWidget*) ```
void q_scrollarea_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnSetupViewport((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QEvent* param1 ```
bool q_scrollarea_viewport_event(void* self, void* param1) {
    return QScrollArea_ViewportEvent((QScrollArea*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QEvent* param1 ```
bool q_scrollarea_qbase_viewport_event(void* self, void* param1) {
    return QScrollArea_QBaseViewportEvent((QScrollArea*)self, (QEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, bool (*slot)(QScrollArea*, QEvent*) ```
void q_scrollarea_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QScrollArea_OnViewportEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QPaintEvent* param1 ```
void q_scrollarea_paint_event(void* self, void* param1) {
    QScrollArea_PaintEvent((QScrollArea*)self, (QPaintEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QPaintEvent* param1 ```
void q_scrollarea_qbase_paint_event(void* self, void* param1) {
    QScrollArea_QBasePaintEvent((QScrollArea*)self, (QPaintEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QPaintEvent*) ```
void q_scrollarea_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnPaintEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QMouseEvent* param1 ```
void q_scrollarea_mouse_press_event(void* self, void* param1) {
    QScrollArea_MousePressEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QMouseEvent* param1 ```
void q_scrollarea_qbase_mouse_press_event(void* self, void* param1) {
    QScrollArea_QBaseMousePressEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QMouseEvent*) ```
void q_scrollarea_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMousePressEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QMouseEvent* param1 ```
void q_scrollarea_mouse_release_event(void* self, void* param1) {
    QScrollArea_MouseReleaseEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QMouseEvent* param1 ```
void q_scrollarea_qbase_mouse_release_event(void* self, void* param1) {
    QScrollArea_QBaseMouseReleaseEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QMouseEvent*) ```
void q_scrollarea_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMouseReleaseEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QMouseEvent* param1 ```
void q_scrollarea_mouse_double_click_event(void* self, void* param1) {
    QScrollArea_MouseDoubleClickEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QMouseEvent* param1 ```
void q_scrollarea_qbase_mouse_double_click_event(void* self, void* param1) {
    QScrollArea_QBaseMouseDoubleClickEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QMouseEvent*) ```
void q_scrollarea_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMouseDoubleClickEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QMouseEvent* param1 ```
void q_scrollarea_mouse_move_event(void* self, void* param1) {
    QScrollArea_MouseMoveEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QMouseEvent* param1 ```
void q_scrollarea_qbase_mouse_move_event(void* self, void* param1) {
    QScrollArea_QBaseMouseMoveEvent((QScrollArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QMouseEvent*) ```
void q_scrollarea_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMouseMoveEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QWheelEvent* param1 ```
void q_scrollarea_wheel_event(void* self, void* param1) {
    QScrollArea_WheelEvent((QScrollArea*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QWheelEvent* param1 ```
void q_scrollarea_qbase_wheel_event(void* self, void* param1) {
    QScrollArea_QBaseWheelEvent((QScrollArea*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QWheelEvent*) ```
void q_scrollarea_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnWheelEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QContextMenuEvent* param1 ```
void q_scrollarea_context_menu_event(void* self, void* param1) {
    QScrollArea_ContextMenuEvent((QScrollArea*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QContextMenuEvent* param1 ```
void q_scrollarea_qbase_context_menu_event(void* self, void* param1) {
    QScrollArea_QBaseContextMenuEvent((QScrollArea*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QContextMenuEvent*) ```
void q_scrollarea_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnContextMenuEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QDragEnterEvent* param1 ```
void q_scrollarea_drag_enter_event(void* self, void* param1) {
    QScrollArea_DragEnterEvent((QScrollArea*)self, (QDragEnterEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QDragEnterEvent* param1 ```
void q_scrollarea_qbase_drag_enter_event(void* self, void* param1) {
    QScrollArea_QBaseDragEnterEvent((QScrollArea*)self, (QDragEnterEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QDragEnterEvent*) ```
void q_scrollarea_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDragEnterEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QDragMoveEvent* param1 ```
void q_scrollarea_drag_move_event(void* self, void* param1) {
    QScrollArea_DragMoveEvent((QScrollArea*)self, (QDragMoveEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QDragMoveEvent* param1 ```
void q_scrollarea_qbase_drag_move_event(void* self, void* param1) {
    QScrollArea_QBaseDragMoveEvent((QScrollArea*)self, (QDragMoveEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QDragMoveEvent*) ```
void q_scrollarea_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDragMoveEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QDragLeaveEvent* param1 ```
void q_scrollarea_drag_leave_event(void* self, void* param1) {
    QScrollArea_DragLeaveEvent((QScrollArea*)self, (QDragLeaveEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QDragLeaveEvent* param1 ```
void q_scrollarea_qbase_drag_leave_event(void* self, void* param1) {
    QScrollArea_QBaseDragLeaveEvent((QScrollArea*)self, (QDragLeaveEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QDragLeaveEvent*) ```
void q_scrollarea_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDragLeaveEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QDropEvent* param1 ```
void q_scrollarea_drop_event(void* self, void* param1) {
    QScrollArea_DropEvent((QScrollArea*)self, (QDropEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QDropEvent* param1 ```
void q_scrollarea_qbase_drop_event(void* self, void* param1) {
    QScrollArea_QBaseDropEvent((QScrollArea*)self, (QDropEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QDropEvent*) ```
void q_scrollarea_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDropEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QKeyEvent* param1 ```
void q_scrollarea_key_press_event(void* self, void* param1) {
    QScrollArea_KeyPressEvent((QScrollArea*)self, (QKeyEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QKeyEvent* param1 ```
void q_scrollarea_qbase_key_press_event(void* self, void* param1) {
    QScrollArea_QBaseKeyPressEvent((QScrollArea*)self, (QKeyEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QKeyEvent*) ```
void q_scrollarea_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnKeyPressEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QEvent* param1 ```
void q_scrollarea_change_event(void* self, void* param1) {
    QScrollArea_ChangeEvent((QScrollArea*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QEvent* param1 ```
void q_scrollarea_qbase_change_event(void* self, void* param1) {
    QScrollArea_QBaseChangeEvent((QScrollArea*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QEvent*) ```
void q_scrollarea_on_change_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnChangeEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QStyleOptionFrame* option ```
void q_scrollarea_init_style_option(void* self, void* option) {
    QScrollArea_InitStyleOption((QScrollArea*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QStyleOptionFrame* option ```
void q_scrollarea_qbase_init_style_option(void* self, void* option) {
    QScrollArea_QBaseInitStyleOption((QScrollArea*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QStyleOptionFrame*) ```
void q_scrollarea_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnInitStyleOption((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_dev_type(void* self) {
    return QScrollArea_DevType((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_qbase_dev_type(void* self) {
    return QScrollArea_QBaseDevType((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, int32_t (*slot)() ```
void q_scrollarea_on_dev_type(void* self, int32_t (*slot)()) {
    QScrollArea_OnDevType((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, bool visible ```
void q_scrollarea_set_visible(void* self, bool visible) {
    QScrollArea_SetVisible((QScrollArea*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, bool visible ```
void q_scrollarea_qbase_set_visible(void* self, bool visible) {
    QScrollArea_QBaseSetVisible((QScrollArea*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, bool) ```
void q_scrollarea_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QScrollArea_OnSetVisible((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, int param1 ```
int32_t q_scrollarea_height_for_width(void* self, int param1) {
    return QScrollArea_HeightForWidth((QScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, int param1 ```
int32_t q_scrollarea_qbase_height_for_width(void* self, int param1) {
    return QScrollArea_QBaseHeightForWidth((QScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, int32_t (*slot)(QScrollArea*, int) ```
void q_scrollarea_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QScrollArea_OnHeightForWidth((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
bool q_scrollarea_has_height_for_width(void* self) {
    return QScrollArea_HasHeightForWidth((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
bool q_scrollarea_qbase_has_height_for_width(void* self) {
    return QScrollArea_QBaseHasHeightForWidth((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, bool (*slot)() ```
void q_scrollarea_on_has_height_for_width(void* self, bool (*slot)()) {
    QScrollArea_OnHasHeightForWidth((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
QPaintEngine* q_scrollarea_paint_engine(void* self) {
    return QScrollArea_PaintEngine((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
QPaintEngine* q_scrollarea_qbase_paint_engine(void* self) {
    return QScrollArea_QBasePaintEngine((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, QPaintEngine* (*slot)() ```
void q_scrollarea_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QScrollArea_OnPaintEngine((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QKeyEvent* event ```
void q_scrollarea_key_release_event(void* self, void* event) {
    QScrollArea_KeyReleaseEvent((QScrollArea*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QKeyEvent* event ```
void q_scrollarea_qbase_key_release_event(void* self, void* event) {
    QScrollArea_QBaseKeyReleaseEvent((QScrollArea*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QKeyEvent*) ```
void q_scrollarea_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnKeyReleaseEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QFocusEvent* event ```
void q_scrollarea_focus_in_event(void* self, void* event) {
    QScrollArea_FocusInEvent((QScrollArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QFocusEvent* event ```
void q_scrollarea_qbase_focus_in_event(void* self, void* event) {
    QScrollArea_QBaseFocusInEvent((QScrollArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QFocusEvent*) ```
void q_scrollarea_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnFocusInEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QFocusEvent* event ```
void q_scrollarea_focus_out_event(void* self, void* event) {
    QScrollArea_FocusOutEvent((QScrollArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QFocusEvent* event ```
void q_scrollarea_qbase_focus_out_event(void* self, void* event) {
    QScrollArea_QBaseFocusOutEvent((QScrollArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QFocusEvent*) ```
void q_scrollarea_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnFocusOutEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QEnterEvent* event ```
void q_scrollarea_enter_event(void* self, void* event) {
    QScrollArea_EnterEvent((QScrollArea*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QEnterEvent* event ```
void q_scrollarea_qbase_enter_event(void* self, void* event) {
    QScrollArea_QBaseEnterEvent((QScrollArea*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QEnterEvent*) ```
void q_scrollarea_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnEnterEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QEvent* event ```
void q_scrollarea_leave_event(void* self, void* event) {
    QScrollArea_LeaveEvent((QScrollArea*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QEvent* event ```
void q_scrollarea_qbase_leave_event(void* self, void* event) {
    QScrollArea_QBaseLeaveEvent((QScrollArea*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QEvent*) ```
void q_scrollarea_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnLeaveEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QMoveEvent* event ```
void q_scrollarea_move_event(void* self, void* event) {
    QScrollArea_MoveEvent((QScrollArea*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QMoveEvent* event ```
void q_scrollarea_qbase_move_event(void* self, void* event) {
    QScrollArea_QBaseMoveEvent((QScrollArea*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QMoveEvent*) ```
void q_scrollarea_on_move_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnMoveEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QCloseEvent* event ```
void q_scrollarea_close_event(void* self, void* event) {
    QScrollArea_CloseEvent((QScrollArea*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QCloseEvent* event ```
void q_scrollarea_qbase_close_event(void* self, void* event) {
    QScrollArea_QBaseCloseEvent((QScrollArea*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QCloseEvent*) ```
void q_scrollarea_on_close_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnCloseEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QTabletEvent* event ```
void q_scrollarea_tablet_event(void* self, void* event) {
    QScrollArea_TabletEvent((QScrollArea*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QTabletEvent* event ```
void q_scrollarea_qbase_tablet_event(void* self, void* event) {
    QScrollArea_QBaseTabletEvent((QScrollArea*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QTabletEvent*) ```
void q_scrollarea_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnTabletEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QActionEvent* event ```
void q_scrollarea_action_event(void* self, void* event) {
    QScrollArea_ActionEvent((QScrollArea*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QActionEvent* event ```
void q_scrollarea_qbase_action_event(void* self, void* event) {
    QScrollArea_QBaseActionEvent((QScrollArea*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QActionEvent*) ```
void q_scrollarea_on_action_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnActionEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QShowEvent* event ```
void q_scrollarea_show_event(void* self, void* event) {
    QScrollArea_ShowEvent((QScrollArea*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QShowEvent* event ```
void q_scrollarea_qbase_show_event(void* self, void* event) {
    QScrollArea_QBaseShowEvent((QScrollArea*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QShowEvent*) ```
void q_scrollarea_on_show_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnShowEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QHideEvent* event ```
void q_scrollarea_hide_event(void* self, void* event) {
    QScrollArea_HideEvent((QScrollArea*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QHideEvent* event ```
void q_scrollarea_qbase_hide_event(void* self, void* event) {
    QScrollArea_QBaseHideEvent((QScrollArea*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QHideEvent*) ```
void q_scrollarea_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnHideEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, const char* eventType, void* message, intptr_t* result ```
bool q_scrollarea_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QScrollArea_NativeEvent((QScrollArea*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, const char* eventType, void* message, intptr_t* result ```
bool q_scrollarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QScrollArea_QBaseNativeEvent((QScrollArea*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, bool (*slot)(QScrollArea*, const char*, void*, intptr_t*) ```
void q_scrollarea_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QScrollArea_OnNativeEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_scrollarea_metric(void* self, int64_t param1) {
    return QScrollArea_Metric((QScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_scrollarea_qbase_metric(void* self, int64_t param1) {
    return QScrollArea_QBaseMetric((QScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, int32_t (*slot)(QScrollArea*, enum QPaintDevice__PaintDeviceMetric) ```
void q_scrollarea_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QScrollArea_OnMetric((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QPainter* painter ```
void q_scrollarea_init_painter(void* self, void* painter) {
    QScrollArea_InitPainter((QScrollArea*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QPainter* painter ```
void q_scrollarea_qbase_init_painter(void* self, void* painter) {
    QScrollArea_QBaseInitPainter((QScrollArea*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QPainter*) ```
void q_scrollarea_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnInitPainter((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QPoint* offset ```
QPaintDevice* q_scrollarea_redirected(void* self, void* offset) {
    return QScrollArea_Redirected((QScrollArea*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QPoint* offset ```
QPaintDevice* q_scrollarea_qbase_redirected(void* self, void* offset) {
    return QScrollArea_QBaseRedirected((QScrollArea*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, QPaintDevice* (*slot)(QScrollArea*, QPoint*) ```
void q_scrollarea_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QScrollArea_OnRedirected((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
QPainter* q_scrollarea_shared_painter(void* self) {
    return QScrollArea_SharedPainter((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
QPainter* q_scrollarea_qbase_shared_painter(void* self) {
    return QScrollArea_QBaseSharedPainter((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, QPainter* (*slot)() ```
void q_scrollarea_on_shared_painter(void* self, QPainter* (*slot)()) {
    QScrollArea_OnSharedPainter((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QInputMethodEvent* param1 ```
void q_scrollarea_input_method_event(void* self, void* param1) {
    QScrollArea_InputMethodEvent((QScrollArea*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QInputMethodEvent* param1 ```
void q_scrollarea_qbase_input_method_event(void* self, void* param1) {
    QScrollArea_QBaseInputMethodEvent((QScrollArea*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QInputMethodEvent*) ```
void q_scrollarea_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnInputMethodEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_scrollarea_input_method_query(void* self, int64_t param1) {
    return QScrollArea_InputMethodQuery((QScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_scrollarea_qbase_input_method_query(void* self, int64_t param1) {
    return QScrollArea_QBaseInputMethodQuery((QScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, QVariant* (*slot)(QScrollArea*, enum Qt__InputMethodQuery) ```
void q_scrollarea_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QScrollArea_OnInputMethodQuery((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QTimerEvent* event ```
void q_scrollarea_timer_event(void* self, void* event) {
    QScrollArea_TimerEvent((QScrollArea*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QTimerEvent* event ```
void q_scrollarea_qbase_timer_event(void* self, void* event) {
    QScrollArea_QBaseTimerEvent((QScrollArea*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QTimerEvent*) ```
void q_scrollarea_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnTimerEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QChildEvent* event ```
void q_scrollarea_child_event(void* self, void* event) {
    QScrollArea_ChildEvent((QScrollArea*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QChildEvent* event ```
void q_scrollarea_qbase_child_event(void* self, void* event) {
    QScrollArea_QBaseChildEvent((QScrollArea*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QChildEvent*) ```
void q_scrollarea_on_child_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnChildEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QEvent* event ```
void q_scrollarea_custom_event(void* self, void* event) {
    QScrollArea_CustomEvent((QScrollArea*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QEvent* event ```
void q_scrollarea_qbase_custom_event(void* self, void* event) {
    QScrollArea_QBaseCustomEvent((QScrollArea*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QEvent*) ```
void q_scrollarea_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnCustomEvent((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QMetaMethod* signal ```
void q_scrollarea_connect_notify(void* self, void* signal) {
    QScrollArea_ConnectNotify((QScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QMetaMethod* signal ```
void q_scrollarea_qbase_connect_notify(void* self, void* signal) {
    QScrollArea_QBaseConnectNotify((QScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QMetaMethod*) ```
void q_scrollarea_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnConnectNotify((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QMetaMethod* signal ```
void q_scrollarea_disconnect_notify(void* self, void* signal) {
    QScrollArea_DisconnectNotify((QScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QMetaMethod* signal ```
void q_scrollarea_qbase_disconnect_notify(void* self, void* signal) {
    QScrollArea_QBaseDisconnectNotify((QScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QMetaMethod*) ```
void q_scrollarea_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDisconnectNotify((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, int left, int top, int right, int bottom ```
void q_scrollarea_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QScrollArea_SetViewportMargins((QScrollArea*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, int left, int top, int right, int bottom ```
void q_scrollarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QScrollArea_QBaseSetViewportMargins((QScrollArea*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, int, int, int, int) ```
void q_scrollarea_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QScrollArea_OnSetViewportMargins((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
QMargins* q_scrollarea_viewport_margins(void* self) {
    return QScrollArea_ViewportMargins((QScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
QMargins* q_scrollarea_qbase_viewport_margins(void* self) {
    return QScrollArea_QBaseViewportMargins((QScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, QMargins* (*slot)() ```
void q_scrollarea_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QScrollArea_OnViewportMargins((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QPainter* param1 ```
void q_scrollarea_draw_frame(void* self, void* param1) {
    QScrollArea_DrawFrame((QScrollArea*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QPainter* param1 ```
void q_scrollarea_qbase_draw_frame(void* self, void* param1) {
    QScrollArea_QBaseDrawFrame((QScrollArea*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)(QScrollArea*, QPainter*) ```
void q_scrollarea_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QScrollArea_OnDrawFrame((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
void q_scrollarea_update_micro_focus(void* self) {
    QScrollArea_UpdateMicroFocus((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
void q_scrollarea_qbase_update_micro_focus(void* self) {
    QScrollArea_QBaseUpdateMicroFocus((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)() ```
void q_scrollarea_on_update_micro_focus(void* self, void (*slot)()) {
    QScrollArea_OnUpdateMicroFocus((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
void q_scrollarea_create(void* self) {
    QScrollArea_Create((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
void q_scrollarea_qbase_create(void* self) {
    QScrollArea_QBaseCreate((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)() ```
void q_scrollarea_on_create(void* self, void (*slot)()) {
    QScrollArea_OnCreate((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
void q_scrollarea_destroy(void* self) {
    QScrollArea_Destroy((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
void q_scrollarea_qbase_destroy(void* self) {
    QScrollArea_QBaseDestroy((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, void (*slot)() ```
void q_scrollarea_on_destroy(void* self, void (*slot)()) {
    QScrollArea_OnDestroy((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
bool q_scrollarea_focus_next_child(void* self) {
    return QScrollArea_FocusNextChild((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
bool q_scrollarea_qbase_focus_next_child(void* self) {
    return QScrollArea_QBaseFocusNextChild((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, bool (*slot)() ```
void q_scrollarea_on_focus_next_child(void* self, bool (*slot)()) {
    QScrollArea_OnFocusNextChild((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
bool q_scrollarea_focus_previous_child(void* self) {
    return QScrollArea_FocusPreviousChild((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
bool q_scrollarea_qbase_focus_previous_child(void* self) {
    return QScrollArea_QBaseFocusPreviousChild((QScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, bool (*slot)() ```
void q_scrollarea_on_focus_previous_child(void* self, bool (*slot)()) {
    QScrollArea_OnFocusPreviousChild((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
QObject* q_scrollarea_sender(void* self) {
    return QScrollArea_Sender((QScrollArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
QObject* q_scrollarea_qbase_sender(void* self) {
    return QScrollArea_QBaseSender((QScrollArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, QObject* (*slot)() ```
void q_scrollarea_on_sender(void* self, QObject* (*slot)()) {
    QScrollArea_OnSender((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_sender_signal_index(void* self) {
    return QScrollArea_SenderSignalIndex((QScrollArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self ```
int32_t q_scrollarea_qbase_sender_signal_index(void* self) {
    return QScrollArea_QBaseSenderSignalIndex((QScrollArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, int32_t (*slot)() ```
void q_scrollarea_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QScrollArea_OnSenderSignalIndex((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, const char* signal ```
int32_t q_scrollarea_receivers(void* self, const char* signal) {
    return QScrollArea_Receivers((QScrollArea*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, const char* signal ```
int32_t q_scrollarea_qbase_receivers(void* self, const char* signal) {
    return QScrollArea_QBaseReceivers((QScrollArea*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, int32_t (*slot)(QScrollArea*, const char*) ```
void q_scrollarea_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QScrollArea_OnReceivers((QScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QScrollArea* self, QMetaMethod* signal ```
bool q_scrollarea_is_signal_connected(void* self, void* signal) {
    return QScrollArea_IsSignalConnected((QScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QScrollArea* self, QMetaMethod* signal ```
bool q_scrollarea_qbase_is_signal_connected(void* self, void* signal) {
    return QScrollArea_QBaseIsSignalConnected((QScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QScrollArea* self, bool (*slot)(QScrollArea*, QMetaMethod*) ```
void q_scrollarea_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QScrollArea_OnIsSignalConnected((QScrollArea*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QScrollArea* self ```
void q_scrollarea_delete(void* self) {
    QScrollArea_Delete((QScrollArea*)(self));
}