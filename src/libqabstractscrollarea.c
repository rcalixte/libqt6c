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
#include "libqabstractscrollarea.hpp"
#include "libqabstractscrollarea.h"

/// https://doc.qt.io/qt-6/qabstractscrollarea.html

/// q_abstractscrollarea_new constructs a new QAbstractScrollArea object.
///
/// ``` QWidget* parent ```
QAbstractScrollArea* q_abstractscrollarea_new(void* parent) {
    return QAbstractScrollArea_new((QWidget*)parent);
}

/// q_abstractscrollarea_new2 constructs a new QAbstractScrollArea object.
///
///
QAbstractScrollArea* q_abstractscrollarea_new2() {
    return QAbstractScrollArea_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QAbstractScrollArea* self ```
QMetaObject* q_abstractscrollarea_meta_object(void* self) {
    return QAbstractScrollArea_MetaObject((QAbstractScrollArea*)self);
}

/// ``` QAbstractScrollArea* self, const char* param1 ```
void* q_abstractscrollarea_metacast(void* self, const char* param1) {
    return QAbstractScrollArea_Metacast((QAbstractScrollArea*)self, param1);
}

/// ``` QAbstractScrollArea* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractscrollarea_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractScrollArea_Metacall((QAbstractScrollArea*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, int32_t (*slot)(QAbstractScrollArea*, enum QMetaObject__Call, int, void*) ```
void q_abstractscrollarea_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractScrollArea_OnMetacall((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_abstractscrollarea_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractScrollArea_QBaseMetacall((QAbstractScrollArea*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_abstractscrollarea_tr(const char* s) {
    libqt_string _str = QAbstractScrollArea_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QAbstractScrollArea* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_abstractscrollarea_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QAbstractScrollArea* self ```
QScrollBar* q_abstractscrollarea_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QAbstractScrollArea* self, QScrollBar* scrollbar ```
void q_abstractscrollarea_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QAbstractScrollArea* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_abstractscrollarea_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QAbstractScrollArea* self ```
QScrollBar* q_abstractscrollarea_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QAbstractScrollArea* self, QScrollBar* scrollbar ```
void q_abstractscrollarea_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QAbstractScrollArea* self, QWidget* widget ```
void q_abstractscrollarea_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QAbstractScrollArea* self, QWidget* widget, int alignment ```
void q_abstractscrollarea_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QAbstractScrollArea* self, int alignment ```
libqt_list /* of QWidget* */ q_abstractscrollarea_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QAbstractScrollArea* self, QWidget* widget ```
void q_abstractscrollarea_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_minimum_size_hint(void* self) {
    return QAbstractScrollArea_MinimumSizeHint((QAbstractScrollArea*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, QSize* (*slot)() ```
void q_abstractscrollarea_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QAbstractScrollArea_OnMinimumSizeHint((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_qbase_minimum_size_hint(void* self) {
    return QAbstractScrollArea_QBaseMinimumSizeHint((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_size_hint(void* self) {
    return QAbstractScrollArea_SizeHint((QAbstractScrollArea*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, QSize* (*slot)() ```
void q_abstractscrollarea_on_size_hint(void* self, QSize* (*slot)()) {
    QAbstractScrollArea_OnSizeHint((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_qbase_size_hint(void* self) {
    return QAbstractScrollArea_QBaseSizeHint((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
///
/// ``` QAbstractScrollArea* self, QWidget* viewport ```
void q_abstractscrollarea_setup_viewport(void* self, void* viewport) {
    QAbstractScrollArea_SetupViewport((QAbstractScrollArea*)self, (QWidget*)viewport);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QWidget*) ```
void q_abstractscrollarea_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnSetupViewport((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QWidget* viewport ```
void q_abstractscrollarea_qbase_setup_viewport(void* self, void* viewport) {
    QAbstractScrollArea_QBaseSetupViewport((QAbstractScrollArea*)self, (QWidget*)viewport);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QAbstractScrollArea* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_abstractscrollarea_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// ``` QAbstractScrollArea* self, int left, int top, int right, int bottom ```
void q_abstractscrollarea_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QAbstractScrollArea_SetViewportMargins((QAbstractScrollArea*)self, left, top, right, bottom);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, int, int, int, int) ```
void q_abstractscrollarea_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QAbstractScrollArea_OnSetViewportMargins((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, int left, int top, int right, int bottom ```
void q_abstractscrollarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QAbstractScrollArea_QBaseSetViewportMargins((QAbstractScrollArea*)self, left, top, right, bottom);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// ``` QAbstractScrollArea* self, QMargins* margins ```
void q_abstractscrollarea_set_viewport_margins_with_margins(void* self, void* margins) {
    QAbstractScrollArea_SetViewportMarginsWithMargins((QAbstractScrollArea*)self, (QMargins*)margins);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QMargins*) ```
void q_abstractscrollarea_on_set_viewport_margins_with_margins(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnSetViewportMarginsWithMargins((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QMargins* margins ```
void q_abstractscrollarea_qbase_set_viewport_margins_with_margins(void* self, void* margins) {
    QAbstractScrollArea_QBaseSetViewportMarginsWithMargins((QAbstractScrollArea*)self, (QMargins*)margins);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// ``` QAbstractScrollArea* self ```
QMargins* q_abstractscrollarea_viewport_margins(void* self) {
    return QAbstractScrollArea_ViewportMargins((QAbstractScrollArea*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, QMargins* (*slot)() ```
void q_abstractscrollarea_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QAbstractScrollArea_OnViewportMargins((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self ```
QMargins* q_abstractscrollarea_qbase_viewport_margins(void* self) {
    return QAbstractScrollArea_QBaseViewportMargins((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
///
/// ``` QAbstractScrollArea* self, QObject* param1, QEvent* param2 ```
bool q_abstractscrollarea_event_filter(void* self, void* param1, void* param2) {
    return QAbstractScrollArea_EventFilter((QAbstractScrollArea*)self, (QObject*)param1, (QEvent*)param2);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, bool (*slot)(QAbstractScrollArea*, QObject*, QEvent*) ```
void q_abstractscrollarea_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractScrollArea_OnEventFilter((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QObject* param1, QEvent* param2 ```
bool q_abstractscrollarea_qbase_event_filter(void* self, void* param1, void* param2) {
    return QAbstractScrollArea_QBaseEventFilter((QAbstractScrollArea*)self, (QObject*)param1, (QEvent*)param2);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
///
/// ``` QAbstractScrollArea* self, QEvent* param1 ```
bool q_abstractscrollarea_event(void* self, void* param1) {
    return QAbstractScrollArea_Event((QAbstractScrollArea*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, bool (*slot)(QAbstractScrollArea*, QEvent*) ```
void q_abstractscrollarea_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractScrollArea_OnEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QEvent* param1 ```
bool q_abstractscrollarea_qbase_event(void* self, void* param1) {
    return QAbstractScrollArea_QBaseEvent((QAbstractScrollArea*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
///
/// ``` QAbstractScrollArea* self, QEvent* param1 ```
bool q_abstractscrollarea_viewport_event(void* self, void* param1) {
    return QAbstractScrollArea_ViewportEvent((QAbstractScrollArea*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, bool (*slot)(QAbstractScrollArea*, QEvent*) ```
void q_abstractscrollarea_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractScrollArea_OnViewportEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QEvent* param1 ```
bool q_abstractscrollarea_qbase_viewport_event(void* self, void* param1) {
    return QAbstractScrollArea_QBaseViewportEvent((QAbstractScrollArea*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#resizeEvent)
///
/// ``` QAbstractScrollArea* self, QResizeEvent* param1 ```
void q_abstractscrollarea_resize_event(void* self, void* param1) {
    QAbstractScrollArea_ResizeEvent((QAbstractScrollArea*)self, (QResizeEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QResizeEvent*) ```
void q_abstractscrollarea_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnResizeEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QResizeEvent* param1 ```
void q_abstractscrollarea_qbase_resize_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseResizeEvent((QAbstractScrollArea*)self, (QResizeEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#paintEvent)
///
/// ``` QAbstractScrollArea* self, QPaintEvent* param1 ```
void q_abstractscrollarea_paint_event(void* self, void* param1) {
    QAbstractScrollArea_PaintEvent((QAbstractScrollArea*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QPaintEvent*) ```
void q_abstractscrollarea_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnPaintEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QPaintEvent* param1 ```
void q_abstractscrollarea_qbase_paint_event(void* self, void* param1) {
    QAbstractScrollArea_QBasePaintEvent((QAbstractScrollArea*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// ``` QAbstractScrollArea* self, QMouseEvent* param1 ```
void q_abstractscrollarea_mouse_press_event(void* self, void* param1) {
    QAbstractScrollArea_MousePressEvent((QAbstractScrollArea*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QMouseEvent*) ```
void q_abstractscrollarea_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnMousePressEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QMouseEvent* param1 ```
void q_abstractscrollarea_qbase_mouse_press_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseMousePressEvent((QAbstractScrollArea*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// ``` QAbstractScrollArea* self, QMouseEvent* param1 ```
void q_abstractscrollarea_mouse_release_event(void* self, void* param1) {
    QAbstractScrollArea_MouseReleaseEvent((QAbstractScrollArea*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QMouseEvent*) ```
void q_abstractscrollarea_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnMouseReleaseEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QMouseEvent* param1 ```
void q_abstractscrollarea_qbase_mouse_release_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseMouseReleaseEvent((QAbstractScrollArea*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// ``` QAbstractScrollArea* self, QMouseEvent* param1 ```
void q_abstractscrollarea_mouse_double_click_event(void* self, void* param1) {
    QAbstractScrollArea_MouseDoubleClickEvent((QAbstractScrollArea*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QMouseEvent*) ```
void q_abstractscrollarea_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnMouseDoubleClickEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QMouseEvent* param1 ```
void q_abstractscrollarea_qbase_mouse_double_click_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseMouseDoubleClickEvent((QAbstractScrollArea*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// ``` QAbstractScrollArea* self, QMouseEvent* param1 ```
void q_abstractscrollarea_mouse_move_event(void* self, void* param1) {
    QAbstractScrollArea_MouseMoveEvent((QAbstractScrollArea*)self, (QMouseEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QMouseEvent*) ```
void q_abstractscrollarea_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnMouseMoveEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QMouseEvent* param1 ```
void q_abstractscrollarea_qbase_mouse_move_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseMouseMoveEvent((QAbstractScrollArea*)self, (QMouseEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// ``` QAbstractScrollArea* self, QWheelEvent* param1 ```
void q_abstractscrollarea_wheel_event(void* self, void* param1) {
    QAbstractScrollArea_WheelEvent((QAbstractScrollArea*)self, (QWheelEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QWheelEvent*) ```
void q_abstractscrollarea_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnWheelEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QWheelEvent* param1 ```
void q_abstractscrollarea_qbase_wheel_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseWheelEvent((QAbstractScrollArea*)self, (QWheelEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// ``` QAbstractScrollArea* self, QContextMenuEvent* param1 ```
void q_abstractscrollarea_context_menu_event(void* self, void* param1) {
    QAbstractScrollArea_ContextMenuEvent((QAbstractScrollArea*)self, (QContextMenuEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QContextMenuEvent*) ```
void q_abstractscrollarea_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnContextMenuEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QContextMenuEvent* param1 ```
void q_abstractscrollarea_qbase_context_menu_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseContextMenuEvent((QAbstractScrollArea*)self, (QContextMenuEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// ``` QAbstractScrollArea* self, QDragEnterEvent* param1 ```
void q_abstractscrollarea_drag_enter_event(void* self, void* param1) {
    QAbstractScrollArea_DragEnterEvent((QAbstractScrollArea*)self, (QDragEnterEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QDragEnterEvent*) ```
void q_abstractscrollarea_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnDragEnterEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QDragEnterEvent* param1 ```
void q_abstractscrollarea_qbase_drag_enter_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseDragEnterEvent((QAbstractScrollArea*)self, (QDragEnterEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// ``` QAbstractScrollArea* self, QDragMoveEvent* param1 ```
void q_abstractscrollarea_drag_move_event(void* self, void* param1) {
    QAbstractScrollArea_DragMoveEvent((QAbstractScrollArea*)self, (QDragMoveEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QDragMoveEvent*) ```
void q_abstractscrollarea_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnDragMoveEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QDragMoveEvent* param1 ```
void q_abstractscrollarea_qbase_drag_move_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseDragMoveEvent((QAbstractScrollArea*)self, (QDragMoveEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// ``` QAbstractScrollArea* self, QDragLeaveEvent* param1 ```
void q_abstractscrollarea_drag_leave_event(void* self, void* param1) {
    QAbstractScrollArea_DragLeaveEvent((QAbstractScrollArea*)self, (QDragLeaveEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QDragLeaveEvent*) ```
void q_abstractscrollarea_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnDragLeaveEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QDragLeaveEvent* param1 ```
void q_abstractscrollarea_qbase_drag_leave_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseDragLeaveEvent((QAbstractScrollArea*)self, (QDragLeaveEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// ``` QAbstractScrollArea* self, QDropEvent* param1 ```
void q_abstractscrollarea_drop_event(void* self, void* param1) {
    QAbstractScrollArea_DropEvent((QAbstractScrollArea*)self, (QDropEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QDropEvent*) ```
void q_abstractscrollarea_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnDropEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QDropEvent* param1 ```
void q_abstractscrollarea_qbase_drop_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseDropEvent((QAbstractScrollArea*)self, (QDropEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// ``` QAbstractScrollArea* self, QKeyEvent* param1 ```
void q_abstractscrollarea_key_press_event(void* self, void* param1) {
    QAbstractScrollArea_KeyPressEvent((QAbstractScrollArea*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QKeyEvent*) ```
void q_abstractscrollarea_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnKeyPressEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, QKeyEvent* param1 ```
void q_abstractscrollarea_qbase_key_press_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseKeyPressEvent((QAbstractScrollArea*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollContentsBy)
///
/// ``` QAbstractScrollArea* self, int dx, int dy ```
void q_abstractscrollarea_scroll_contents_by(void* self, int dx, int dy) {
    QAbstractScrollArea_ScrollContentsBy((QAbstractScrollArea*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, int, int) ```
void q_abstractscrollarea_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QAbstractScrollArea_OnScrollContentsBy((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self, int dx, int dy ```
void q_abstractscrollarea_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QAbstractScrollArea_QBaseScrollContentsBy((QAbstractScrollArea*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_viewport_size_hint(void* self) {
    return QAbstractScrollArea_ViewportSizeHint((QAbstractScrollArea*)self);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractScrollArea* self, QSize* (*slot)() ```
void q_abstractscrollarea_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QAbstractScrollArea_OnViewportSizeHint((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_qbase_viewport_size_hint(void* self) {
    return QAbstractScrollArea_QBaseViewportSizeHint((QAbstractScrollArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_abstractscrollarea_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractScrollArea_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_abstractscrollarea_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractScrollArea_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QAbstractScrollArea* self, int frameStyle ```
void q_abstractscrollarea_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QAbstractScrollArea* self, enum QFrame__Shape frameShape ```
void q_abstractscrollarea_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QAbstractScrollArea* self, enum QFrame__Shadow frameShadow ```
void q_abstractscrollarea_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QAbstractScrollArea* self, int lineWidth ```
void q_abstractscrollarea_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QAbstractScrollArea* self, int midLineWidth ```
void q_abstractscrollarea_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QAbstractScrollArea* self ```
QRect* q_abstractscrollarea_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QAbstractScrollArea* self, QRect* frameRect ```
void q_abstractscrollarea_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QAbstractScrollArea* self ```
uintptr_t q_abstractscrollarea_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QAbstractScrollArea* self ```
uintptr_t q_abstractscrollarea_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QAbstractScrollArea* self ```
uintptr_t q_abstractscrollarea_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QAbstractScrollArea* self ```
QStyle* q_abstractscrollarea_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QAbstractScrollArea* self, QStyle* style ```
void q_abstractscrollarea_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QAbstractScrollArea* self, enum Qt__WindowModality windowModality ```
void q_abstractscrollarea_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QAbstractScrollArea* self, QWidget* param1 ```
bool q_abstractscrollarea_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QAbstractScrollArea* self, bool enabled ```
void q_abstractscrollarea_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QAbstractScrollArea* self, bool disabled ```
void q_abstractscrollarea_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QAbstractScrollArea* self, bool windowModified ```
void q_abstractscrollarea_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QAbstractScrollArea* self ```
QRect* q_abstractscrollarea_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QAbstractScrollArea* self ```
QRect* q_abstractscrollarea_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QAbstractScrollArea* self ```
QRect* q_abstractscrollarea_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QAbstractScrollArea* self ```
QPoint* q_abstractscrollarea_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QAbstractScrollArea* self ```
QRect* q_abstractscrollarea_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QAbstractScrollArea* self ```
QRect* q_abstractscrollarea_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QAbstractScrollArea* self ```
QRegion* q_abstractscrollarea_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractScrollArea* self, QSize* minimumSize ```
void q_abstractscrollarea_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QAbstractScrollArea* self, int minw, int minh ```
void q_abstractscrollarea_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractScrollArea* self, QSize* maximumSize ```
void q_abstractscrollarea_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QAbstractScrollArea* self, int maxw, int maxh ```
void q_abstractscrollarea_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QAbstractScrollArea* self, int minw ```
void q_abstractscrollarea_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QAbstractScrollArea* self, int minh ```
void q_abstractscrollarea_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QAbstractScrollArea* self, int maxw ```
void q_abstractscrollarea_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QAbstractScrollArea* self, int maxh ```
void q_abstractscrollarea_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractScrollArea* self, QSize* sizeIncrement ```
void q_abstractscrollarea_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QAbstractScrollArea* self, int w, int h ```
void q_abstractscrollarea_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QAbstractScrollArea* self ```
QSize* q_abstractscrollarea_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractScrollArea* self, QSize* baseSize ```
void q_abstractscrollarea_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QAbstractScrollArea* self, int basew, int baseh ```
void q_abstractscrollarea_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractScrollArea* self, QSize* fixedSize ```
void q_abstractscrollarea_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QAbstractScrollArea* self, int w, int h ```
void q_abstractscrollarea_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QAbstractScrollArea* self, int w ```
void q_abstractscrollarea_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QAbstractScrollArea* self, int h ```
void q_abstractscrollarea_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractScrollArea* self, QPointF* param1 ```
QPointF* q_abstractscrollarea_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QAbstractScrollArea* self, QPoint* param1 ```
QPoint* q_abstractscrollarea_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractScrollArea* self, QPointF* param1 ```
QPointF* q_abstractscrollarea_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QAbstractScrollArea* self, QPoint* param1 ```
QPoint* q_abstractscrollarea_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractScrollArea* self, QPointF* param1 ```
QPointF* q_abstractscrollarea_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QAbstractScrollArea* self, QPoint* param1 ```
QPoint* q_abstractscrollarea_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractScrollArea* self, QPointF* param1 ```
QPointF* q_abstractscrollarea_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QAbstractScrollArea* self, QPoint* param1 ```
QPoint* q_abstractscrollarea_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractScrollArea* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractscrollarea_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QAbstractScrollArea* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractscrollarea_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractScrollArea* self, QWidget* param1, QPointF* param2 ```
QPointF* q_abstractscrollarea_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QAbstractScrollArea* self, QWidget* param1, QPoint* param2 ```
QPoint* q_abstractscrollarea_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QAbstractScrollArea* self ```
QPalette* q_abstractscrollarea_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QAbstractScrollArea* self, QPalette* palette ```
void q_abstractscrollarea_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QAbstractScrollArea* self, enum QPalette__ColorRole backgroundRole ```
void q_abstractscrollarea_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QAbstractScrollArea* self, enum QPalette__ColorRole foregroundRole ```
void q_abstractscrollarea_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QAbstractScrollArea* self ```
QFont* q_abstractscrollarea_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QAbstractScrollArea* self, QFont* font ```
void q_abstractscrollarea_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QAbstractScrollArea* self ```
QFontMetrics* q_abstractscrollarea_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QAbstractScrollArea* self ```
QFontInfo* q_abstractscrollarea_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QAbstractScrollArea* self ```
QCursor* q_abstractscrollarea_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QAbstractScrollArea* self, QCursor* cursor ```
void q_abstractscrollarea_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QAbstractScrollArea* self, bool enable ```
void q_abstractscrollarea_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QAbstractScrollArea* self, bool enable ```
void q_abstractscrollarea_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractScrollArea* self, QBitmap* mask ```
void q_abstractscrollarea_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QAbstractScrollArea* self, QRegion* mask ```
void q_abstractscrollarea_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QAbstractScrollArea* self ```
QRegion* q_abstractscrollarea_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractScrollArea* self, QPaintDevice* target ```
void q_abstractscrollarea_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractScrollArea* self, QPainter* painter ```
void q_abstractscrollarea_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractScrollArea* self ```
QPixmap* q_abstractscrollarea_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QAbstractScrollArea* self ```
QGraphicsEffect* q_abstractscrollarea_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QAbstractScrollArea* self, QGraphicsEffect* effect ```
void q_abstractscrollarea_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractScrollArea* self, enum Qt__GestureType typeVal ```
void q_abstractscrollarea_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QAbstractScrollArea* self, enum Qt__GestureType typeVal ```
void q_abstractscrollarea_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QAbstractScrollArea* self, const char* windowTitle ```
void q_abstractscrollarea_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QAbstractScrollArea* self, const char* styleSheet ```
void q_abstractscrollarea_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QAbstractScrollArea* self, QIcon* icon ```
void q_abstractscrollarea_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QAbstractScrollArea* self ```
QIcon* q_abstractscrollarea_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QAbstractScrollArea* self, const char* windowIconText ```
void q_abstractscrollarea_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QAbstractScrollArea* self, const char* windowRole ```
void q_abstractscrollarea_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QAbstractScrollArea* self, const char* filePath ```
void q_abstractscrollarea_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QAbstractScrollArea* self, double level ```
void q_abstractscrollarea_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QAbstractScrollArea* self ```
double q_abstractscrollarea_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QAbstractScrollArea* self, const char* toolTip ```
void q_abstractscrollarea_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QAbstractScrollArea* self, int msec ```
void q_abstractscrollarea_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QAbstractScrollArea* self, const char* statusTip ```
void q_abstractscrollarea_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QAbstractScrollArea* self, const char* whatsThis ```
void q_abstractscrollarea_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QAbstractScrollArea* self, const char* name ```
void q_abstractscrollarea_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QAbstractScrollArea* self, const char* description ```
void q_abstractscrollarea_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QAbstractScrollArea* self, enum Qt__LayoutDirection direction ```
void q_abstractscrollarea_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QAbstractScrollArea* self, QLocale* locale ```
void q_abstractscrollarea_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QAbstractScrollArea* self ```
QLocale* q_abstractscrollarea_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QAbstractScrollArea* self, enum Qt__FocusReason reason ```
void q_abstractscrollarea_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QAbstractScrollArea* self, enum Qt__FocusPolicy policy ```
void q_abstractscrollarea_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_abstractscrollarea_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QAbstractScrollArea* self, QWidget* focusProxy ```
void q_abstractscrollarea_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QAbstractScrollArea* self, enum Qt__ContextMenuPolicy policy ```
void q_abstractscrollarea_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QAbstractScrollArea* self, QCursor* param1 ```
void q_abstractscrollarea_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractScrollArea* self, QKeySequence* key ```
int32_t q_abstractscrollarea_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QAbstractScrollArea* self, int id ```
void q_abstractscrollarea_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractScrollArea* self, int id ```
void q_abstractscrollarea_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractScrollArea* self, int id ```
void q_abstractscrollarea_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_abstractscrollarea_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_abstractscrollarea_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QAbstractScrollArea* self, bool enable ```
void q_abstractscrollarea_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QAbstractScrollArea* self ```
QGraphicsProxyWidget* q_abstractscrollarea_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractScrollArea* self, int x, int y, int w, int h ```
void q_abstractscrollarea_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractScrollArea* self, QRect* param1 ```
void q_abstractscrollarea_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QAbstractScrollArea* self, QRegion* param1 ```
void q_abstractscrollarea_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractScrollArea* self, int x, int y, int w, int h ```
void q_abstractscrollarea_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractScrollArea* self, QRect* param1 ```
void q_abstractscrollarea_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QAbstractScrollArea* self, QRegion* param1 ```
void q_abstractscrollarea_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QAbstractScrollArea* self, bool hidden ```
void q_abstractscrollarea_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QAbstractScrollArea* self, QWidget* param1 ```
void q_abstractscrollarea_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractScrollArea* self, int x, int y ```
void q_abstractscrollarea_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QAbstractScrollArea* self, QPoint* param1 ```
void q_abstractscrollarea_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractScrollArea* self, int w, int h ```
void q_abstractscrollarea_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QAbstractScrollArea* self, QSize* param1 ```
void q_abstractscrollarea_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractScrollArea* self, int x, int y, int w, int h ```
void q_abstractscrollarea_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QAbstractScrollArea* self, QRect* geometry ```
void q_abstractscrollarea_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QAbstractScrollArea* self ```
char* q_abstractscrollarea_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QAbstractScrollArea* self, const char* geometry ```
bool q_abstractscrollarea_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QAbstractScrollArea* self, QWidget* param1 ```
bool q_abstractscrollarea_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QAbstractScrollArea* self, int state ```
void q_abstractscrollarea_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QAbstractScrollArea* self, int state ```
void q_abstractscrollarea_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QAbstractScrollArea* self ```
QSizePolicy* q_abstractscrollarea_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractScrollArea* self, QSizePolicy* sizePolicy ```
void q_abstractscrollarea_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QAbstractScrollArea* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_abstractscrollarea_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QAbstractScrollArea* self ```
QRegion* q_abstractscrollarea_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractScrollArea* self, int left, int top, int right, int bottom ```
void q_abstractscrollarea_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QAbstractScrollArea* self, QMargins* margins ```
void q_abstractscrollarea_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QAbstractScrollArea* self ```
QMargins* q_abstractscrollarea_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QAbstractScrollArea* self ```
QRect* q_abstractscrollarea_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QAbstractScrollArea* self ```
QLayout* q_abstractscrollarea_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QAbstractScrollArea* self, QLayout* layout ```
void q_abstractscrollarea_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractScrollArea* self, QWidget* parent ```
void q_abstractscrollarea_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QAbstractScrollArea* self, QWidget* parent, int f ```
void q_abstractscrollarea_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractScrollArea* self, int dx, int dy ```
void q_abstractscrollarea_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QAbstractScrollArea* self, int dx, int dy, QRect* param3 ```
void q_abstractscrollarea_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QAbstractScrollArea* self, bool on ```
void q_abstractscrollarea_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractScrollArea* self, QAction* action ```
void q_abstractscrollarea_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QAbstractScrollArea* self, QAction* actions[] ```
void q_abstractscrollarea_add_actions(void* self, void* actions[]) {
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
/// ``` QAbstractScrollArea* self, QAction* before, QAction* actions[] ```
void q_abstractscrollarea_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QAbstractScrollArea* self, QAction* before, QAction* action ```
void q_abstractscrollarea_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QAbstractScrollArea* self, QAction* action ```
void q_abstractscrollarea_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QAbstractScrollArea* self ```
libqt_list /* of QAction* */ q_abstractscrollarea_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractScrollArea* self, const char* text ```
QAction* q_abstractscrollarea_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractScrollArea* self, QIcon* icon, const char* text ```
QAction* q_abstractscrollarea_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractScrollArea* self, const char* text, QKeySequence* shortcut ```
QAction* q_abstractscrollarea_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QAbstractScrollArea* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_abstractscrollarea_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QAbstractScrollArea* self ```
QWidget* q_abstractscrollarea_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QAbstractScrollArea* self, int typeVal ```
void q_abstractscrollarea_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractScrollArea* self, enum Qt__WindowType param1 ```
void q_abstractscrollarea_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QAbstractScrollArea* self, int typeVal ```
void q_abstractscrollarea_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_abstractscrollarea_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractScrollArea* self, int x, int y ```
QWidget* q_abstractscrollarea_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QAbstractScrollArea* self, QPoint* p ```
QWidget* q_abstractscrollarea_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractScrollArea* self, enum Qt__WidgetAttribute param1 ```
void q_abstractscrollarea_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QAbstractScrollArea* self, enum Qt__WidgetAttribute param1 ```
bool q_abstractscrollarea_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QAbstractScrollArea* self, QWidget* child ```
bool q_abstractscrollarea_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QAbstractScrollArea* self, bool enabled ```
void q_abstractscrollarea_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QAbstractScrollArea* self ```
QBackingStore* q_abstractscrollarea_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QAbstractScrollArea* self ```
QWindow* q_abstractscrollarea_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QAbstractScrollArea* self ```
QScreen* q_abstractscrollarea_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QAbstractScrollArea* self, QScreen* screen ```
void q_abstractscrollarea_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_abstractscrollarea_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QAbstractScrollArea* self, const char* title ```
void q_abstractscrollarea_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QAbstractScrollArea* self, void (*slot)(QWidget*, const char*) ```
void q_abstractscrollarea_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QAbstractScrollArea* self, QIcon* icon ```
void q_abstractscrollarea_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QAbstractScrollArea* self, void (*slot)(QWidget*, QIcon*) ```
void q_abstractscrollarea_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QAbstractScrollArea* self, const char* iconText ```
void q_abstractscrollarea_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QAbstractScrollArea* self, void (*slot)(QWidget*, const char*) ```
void q_abstractscrollarea_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QAbstractScrollArea* self, QPoint* pos ```
void q_abstractscrollarea_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QAbstractScrollArea* self, void (*slot)(QWidget*, QPoint*) ```
void q_abstractscrollarea_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QAbstractScrollArea* self ```
int64_t q_abstractscrollarea_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QAbstractScrollArea* self, int hints ```
void q_abstractscrollarea_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractScrollArea* self, QPaintDevice* target, QPoint* targetOffset ```
void q_abstractscrollarea_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractScrollArea* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractscrollarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractScrollArea* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractscrollarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractScrollArea* self, QPainter* painter, QPoint* targetOffset ```
void q_abstractscrollarea_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractScrollArea* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_abstractscrollarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QAbstractScrollArea* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_abstractscrollarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QAbstractScrollArea* self, QRect* rectangle ```
QPixmap* q_abstractscrollarea_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QAbstractScrollArea* self, enum Qt__GestureType typeVal, int flags ```
void q_abstractscrollarea_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QAbstractScrollArea* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_abstractscrollarea_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QAbstractScrollArea* self, int id, bool enable ```
void q_abstractscrollarea_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QAbstractScrollArea* self, int id, bool enable ```
void q_abstractscrollarea_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QAbstractScrollArea* self, enum Qt__WindowType param1, bool on ```
void q_abstractscrollarea_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QAbstractScrollArea* self, enum Qt__WidgetAttribute param1, bool on ```
void q_abstractscrollarea_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_abstractscrollarea_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_abstractscrollarea_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QAbstractScrollArea* self ```
const char* q_abstractscrollarea_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QAbstractScrollArea* self, const char* name ```
void q_abstractscrollarea_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QAbstractScrollArea* self, bool b ```
bool q_abstractscrollarea_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QAbstractScrollArea* self ```
QThread* q_abstractscrollarea_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QAbstractScrollArea* self, QThread* thread ```
void q_abstractscrollarea_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractScrollArea* self, int interval ```
int32_t q_abstractscrollarea_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QAbstractScrollArea* self, int id ```
void q_abstractscrollarea_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QAbstractScrollArea* self ```
libqt_list /* of QObject* */ q_abstractscrollarea_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QAbstractScrollArea* self, QObject* filterObj ```
void q_abstractscrollarea_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QAbstractScrollArea* self, QObject* obj ```
void q_abstractscrollarea_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_abstractscrollarea_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractScrollArea* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_abstractscrollarea_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_abstractscrollarea_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_abstractscrollarea_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QAbstractScrollArea* self, const char* name, QVariant* value ```
bool q_abstractscrollarea_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QAbstractScrollArea* self, const char* name ```
QVariant* q_abstractscrollarea_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QAbstractScrollArea* self ```
const char** q_abstractscrollarea_dynamic_property_names(void* self) {
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
/// ``` QAbstractScrollArea* self ```
QBindingStorage* q_abstractscrollarea_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QAbstractScrollArea* self ```
QBindingStorage* q_abstractscrollarea_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QAbstractScrollArea* self, void (*slot)(QObject*) ```
void q_abstractscrollarea_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QAbstractScrollArea* self ```
QObject* q_abstractscrollarea_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QAbstractScrollArea* self, const char* classname ```
bool q_abstractscrollarea_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QAbstractScrollArea* self, int interval, enum Qt__TimerType timerType ```
int32_t q_abstractscrollarea_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractscrollarea_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QAbstractScrollArea* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_abstractscrollarea_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QAbstractScrollArea* self, QObject* param1 ```
void q_abstractscrollarea_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QAbstractScrollArea* self, void (*slot)(QObject*, QObject*) ```
void q_abstractscrollarea_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QAbstractScrollArea* self ```
double q_abstractscrollarea_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QAbstractScrollArea* self ```
double q_abstractscrollarea_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_abstractscrollarea_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QEvent* param1 ```
void q_abstractscrollarea_change_event(void* self, void* param1) {
    QAbstractScrollArea_ChangeEvent((QAbstractScrollArea*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QEvent* param1 ```
void q_abstractscrollarea_qbase_change_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseChangeEvent((QAbstractScrollArea*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QEvent*) ```
void q_abstractscrollarea_on_change_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnChangeEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QStyleOptionFrame* option ```
void q_abstractscrollarea_init_style_option(void* self, void* option) {
    QAbstractScrollArea_InitStyleOption((QAbstractScrollArea*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QStyleOptionFrame* option ```
void q_abstractscrollarea_qbase_init_style_option(void* self, void* option) {
    QAbstractScrollArea_QBaseInitStyleOption((QAbstractScrollArea*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QStyleOptionFrame*) ```
void q_abstractscrollarea_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnInitStyleOption((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_dev_type(void* self) {
    return QAbstractScrollArea_DevType((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_qbase_dev_type(void* self) {
    return QAbstractScrollArea_QBaseDevType((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, int32_t (*slot)() ```
void q_abstractscrollarea_on_dev_type(void* self, int32_t (*slot)()) {
    QAbstractScrollArea_OnDevType((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool visible ```
void q_abstractscrollarea_set_visible(void* self, bool visible) {
    QAbstractScrollArea_SetVisible((QAbstractScrollArea*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool visible ```
void q_abstractscrollarea_qbase_set_visible(void* self, bool visible) {
    QAbstractScrollArea_QBaseSetVisible((QAbstractScrollArea*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, bool) ```
void q_abstractscrollarea_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QAbstractScrollArea_OnSetVisible((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, int param1 ```
int32_t q_abstractscrollarea_height_for_width(void* self, int param1) {
    return QAbstractScrollArea_HeightForWidth((QAbstractScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, int param1 ```
int32_t q_abstractscrollarea_qbase_height_for_width(void* self, int param1) {
    return QAbstractScrollArea_QBaseHeightForWidth((QAbstractScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, int32_t (*slot)(QAbstractScrollArea*, int) ```
void q_abstractscrollarea_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QAbstractScrollArea_OnHeightForWidth((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_has_height_for_width(void* self) {
    return QAbstractScrollArea_HasHeightForWidth((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_qbase_has_height_for_width(void* self) {
    return QAbstractScrollArea_QBaseHasHeightForWidth((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool (*slot)() ```
void q_abstractscrollarea_on_has_height_for_width(void* self, bool (*slot)()) {
    QAbstractScrollArea_OnHasHeightForWidth((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
QPaintEngine* q_abstractscrollarea_paint_engine(void* self) {
    return QAbstractScrollArea_PaintEngine((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
QPaintEngine* q_abstractscrollarea_qbase_paint_engine(void* self) {
    return QAbstractScrollArea_QBasePaintEngine((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QPaintEngine* (*slot)() ```
void q_abstractscrollarea_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QAbstractScrollArea_OnPaintEngine((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QKeyEvent* event ```
void q_abstractscrollarea_key_release_event(void* self, void* event) {
    QAbstractScrollArea_KeyReleaseEvent((QAbstractScrollArea*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QKeyEvent* event ```
void q_abstractscrollarea_qbase_key_release_event(void* self, void* event) {
    QAbstractScrollArea_QBaseKeyReleaseEvent((QAbstractScrollArea*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QKeyEvent*) ```
void q_abstractscrollarea_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnKeyReleaseEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QFocusEvent* event ```
void q_abstractscrollarea_focus_in_event(void* self, void* event) {
    QAbstractScrollArea_FocusInEvent((QAbstractScrollArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QFocusEvent* event ```
void q_abstractscrollarea_qbase_focus_in_event(void* self, void* event) {
    QAbstractScrollArea_QBaseFocusInEvent((QAbstractScrollArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QFocusEvent*) ```
void q_abstractscrollarea_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnFocusInEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QFocusEvent* event ```
void q_abstractscrollarea_focus_out_event(void* self, void* event) {
    QAbstractScrollArea_FocusOutEvent((QAbstractScrollArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QFocusEvent* event ```
void q_abstractscrollarea_qbase_focus_out_event(void* self, void* event) {
    QAbstractScrollArea_QBaseFocusOutEvent((QAbstractScrollArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QFocusEvent*) ```
void q_abstractscrollarea_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnFocusOutEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QEnterEvent* event ```
void q_abstractscrollarea_enter_event(void* self, void* event) {
    QAbstractScrollArea_EnterEvent((QAbstractScrollArea*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QEnterEvent* event ```
void q_abstractscrollarea_qbase_enter_event(void* self, void* event) {
    QAbstractScrollArea_QBaseEnterEvent((QAbstractScrollArea*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QEnterEvent*) ```
void q_abstractscrollarea_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnEnterEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QEvent* event ```
void q_abstractscrollarea_leave_event(void* self, void* event) {
    QAbstractScrollArea_LeaveEvent((QAbstractScrollArea*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QEvent* event ```
void q_abstractscrollarea_qbase_leave_event(void* self, void* event) {
    QAbstractScrollArea_QBaseLeaveEvent((QAbstractScrollArea*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QEvent*) ```
void q_abstractscrollarea_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnLeaveEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QMoveEvent* event ```
void q_abstractscrollarea_move_event(void* self, void* event) {
    QAbstractScrollArea_MoveEvent((QAbstractScrollArea*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QMoveEvent* event ```
void q_abstractscrollarea_qbase_move_event(void* self, void* event) {
    QAbstractScrollArea_QBaseMoveEvent((QAbstractScrollArea*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QMoveEvent*) ```
void q_abstractscrollarea_on_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnMoveEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QCloseEvent* event ```
void q_abstractscrollarea_close_event(void* self, void* event) {
    QAbstractScrollArea_CloseEvent((QAbstractScrollArea*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QCloseEvent* event ```
void q_abstractscrollarea_qbase_close_event(void* self, void* event) {
    QAbstractScrollArea_QBaseCloseEvent((QAbstractScrollArea*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QCloseEvent*) ```
void q_abstractscrollarea_on_close_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnCloseEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QTabletEvent* event ```
void q_abstractscrollarea_tablet_event(void* self, void* event) {
    QAbstractScrollArea_TabletEvent((QAbstractScrollArea*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QTabletEvent* event ```
void q_abstractscrollarea_qbase_tablet_event(void* self, void* event) {
    QAbstractScrollArea_QBaseTabletEvent((QAbstractScrollArea*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QTabletEvent*) ```
void q_abstractscrollarea_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnTabletEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QActionEvent* event ```
void q_abstractscrollarea_action_event(void* self, void* event) {
    QAbstractScrollArea_ActionEvent((QAbstractScrollArea*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QActionEvent* event ```
void q_abstractscrollarea_qbase_action_event(void* self, void* event) {
    QAbstractScrollArea_QBaseActionEvent((QAbstractScrollArea*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QActionEvent*) ```
void q_abstractscrollarea_on_action_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnActionEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QShowEvent* event ```
void q_abstractscrollarea_show_event(void* self, void* event) {
    QAbstractScrollArea_ShowEvent((QAbstractScrollArea*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QShowEvent* event ```
void q_abstractscrollarea_qbase_show_event(void* self, void* event) {
    QAbstractScrollArea_QBaseShowEvent((QAbstractScrollArea*)self, (QShowEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QShowEvent*) ```
void q_abstractscrollarea_on_show_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnShowEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QHideEvent* event ```
void q_abstractscrollarea_hide_event(void* self, void* event) {
    QAbstractScrollArea_HideEvent((QAbstractScrollArea*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QHideEvent* event ```
void q_abstractscrollarea_qbase_hide_event(void* self, void* event) {
    QAbstractScrollArea_QBaseHideEvent((QAbstractScrollArea*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QHideEvent*) ```
void q_abstractscrollarea_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnHideEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractscrollarea_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractScrollArea_NativeEvent((QAbstractScrollArea*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractscrollarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractScrollArea_QBaseNativeEvent((QAbstractScrollArea*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool (*slot)(QAbstractScrollArea*, const char*, void*, intptr_t*) ```
void q_abstractscrollarea_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QAbstractScrollArea_OnNativeEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractscrollarea_metric(void* self, int64_t param1) {
    return QAbstractScrollArea_Metric((QAbstractScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_abstractscrollarea_qbase_metric(void* self, int64_t param1) {
    return QAbstractScrollArea_QBaseMetric((QAbstractScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, int32_t (*slot)(QAbstractScrollArea*, enum QPaintDevice__PaintDeviceMetric) ```
void q_abstractscrollarea_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QAbstractScrollArea_OnMetric((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QPainter* painter ```
void q_abstractscrollarea_init_painter(void* self, void* painter) {
    QAbstractScrollArea_InitPainter((QAbstractScrollArea*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QPainter* painter ```
void q_abstractscrollarea_qbase_init_painter(void* self, void* painter) {
    QAbstractScrollArea_QBaseInitPainter((QAbstractScrollArea*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QPainter*) ```
void q_abstractscrollarea_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnInitPainter((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QPoint* offset ```
QPaintDevice* q_abstractscrollarea_redirected(void* self, void* offset) {
    return QAbstractScrollArea_Redirected((QAbstractScrollArea*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QPoint* offset ```
QPaintDevice* q_abstractscrollarea_qbase_redirected(void* self, void* offset) {
    return QAbstractScrollArea_QBaseRedirected((QAbstractScrollArea*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QPaintDevice* (*slot)(QAbstractScrollArea*, QPoint*) ```
void q_abstractscrollarea_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QAbstractScrollArea_OnRedirected((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
QPainter* q_abstractscrollarea_shared_painter(void* self) {
    return QAbstractScrollArea_SharedPainter((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
QPainter* q_abstractscrollarea_qbase_shared_painter(void* self) {
    return QAbstractScrollArea_QBaseSharedPainter((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QPainter* (*slot)() ```
void q_abstractscrollarea_on_shared_painter(void* self, QPainter* (*slot)()) {
    QAbstractScrollArea_OnSharedPainter((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QInputMethodEvent* param1 ```
void q_abstractscrollarea_input_method_event(void* self, void* param1) {
    QAbstractScrollArea_InputMethodEvent((QAbstractScrollArea*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QInputMethodEvent* param1 ```
void q_abstractscrollarea_qbase_input_method_event(void* self, void* param1) {
    QAbstractScrollArea_QBaseInputMethodEvent((QAbstractScrollArea*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QInputMethodEvent*) ```
void q_abstractscrollarea_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnInputMethodEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_abstractscrollarea_input_method_query(void* self, int64_t param1) {
    return QAbstractScrollArea_InputMethodQuery((QAbstractScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_abstractscrollarea_qbase_input_method_query(void* self, int64_t param1) {
    return QAbstractScrollArea_QBaseInputMethodQuery((QAbstractScrollArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QVariant* (*slot)(QAbstractScrollArea*, enum Qt__InputMethodQuery) ```
void q_abstractscrollarea_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QAbstractScrollArea_OnInputMethodQuery((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool next ```
bool q_abstractscrollarea_focus_next_prev_child(void* self, bool next) {
    return QAbstractScrollArea_FocusNextPrevChild((QAbstractScrollArea*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool next ```
bool q_abstractscrollarea_qbase_focus_next_prev_child(void* self, bool next) {
    return QAbstractScrollArea_QBaseFocusNextPrevChild((QAbstractScrollArea*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool (*slot)(QAbstractScrollArea*, bool) ```
void q_abstractscrollarea_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QAbstractScrollArea_OnFocusNextPrevChild((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QTimerEvent* event ```
void q_abstractscrollarea_timer_event(void* self, void* event) {
    QAbstractScrollArea_TimerEvent((QAbstractScrollArea*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QTimerEvent* event ```
void q_abstractscrollarea_qbase_timer_event(void* self, void* event) {
    QAbstractScrollArea_QBaseTimerEvent((QAbstractScrollArea*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QTimerEvent*) ```
void q_abstractscrollarea_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnTimerEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QChildEvent* event ```
void q_abstractscrollarea_child_event(void* self, void* event) {
    QAbstractScrollArea_ChildEvent((QAbstractScrollArea*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QChildEvent* event ```
void q_abstractscrollarea_qbase_child_event(void* self, void* event) {
    QAbstractScrollArea_QBaseChildEvent((QAbstractScrollArea*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QChildEvent*) ```
void q_abstractscrollarea_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnChildEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QEvent* event ```
void q_abstractscrollarea_custom_event(void* self, void* event) {
    QAbstractScrollArea_CustomEvent((QAbstractScrollArea*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QEvent* event ```
void q_abstractscrollarea_qbase_custom_event(void* self, void* event) {
    QAbstractScrollArea_QBaseCustomEvent((QAbstractScrollArea*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QEvent*) ```
void q_abstractscrollarea_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnCustomEvent((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QMetaMethod* signal ```
void q_abstractscrollarea_connect_notify(void* self, void* signal) {
    QAbstractScrollArea_ConnectNotify((QAbstractScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QMetaMethod* signal ```
void q_abstractscrollarea_qbase_connect_notify(void* self, void* signal) {
    QAbstractScrollArea_QBaseConnectNotify((QAbstractScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QMetaMethod*) ```
void q_abstractscrollarea_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnConnectNotify((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QMetaMethod* signal ```
void q_abstractscrollarea_disconnect_notify(void* self, void* signal) {
    QAbstractScrollArea_DisconnectNotify((QAbstractScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QMetaMethod* signal ```
void q_abstractscrollarea_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractScrollArea_QBaseDisconnectNotify((QAbstractScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QMetaMethod*) ```
void q_abstractscrollarea_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnDisconnectNotify((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QPainter* param1 ```
void q_abstractscrollarea_draw_frame(void* self, void* param1) {
    QAbstractScrollArea_DrawFrame((QAbstractScrollArea*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QPainter* param1 ```
void q_abstractscrollarea_qbase_draw_frame(void* self, void* param1) {
    QAbstractScrollArea_QBaseDrawFrame((QAbstractScrollArea*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)(QAbstractScrollArea*, QPainter*) ```
void q_abstractscrollarea_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QAbstractScrollArea_OnDrawFrame((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_update_micro_focus(void* self) {
    QAbstractScrollArea_UpdateMicroFocus((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_qbase_update_micro_focus(void* self) {
    QAbstractScrollArea_QBaseUpdateMicroFocus((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)() ```
void q_abstractscrollarea_on_update_micro_focus(void* self, void (*slot)()) {
    QAbstractScrollArea_OnUpdateMicroFocus((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_create(void* self) {
    QAbstractScrollArea_Create((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_qbase_create(void* self) {
    QAbstractScrollArea_QBaseCreate((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)() ```
void q_abstractscrollarea_on_create(void* self, void (*slot)()) {
    QAbstractScrollArea_OnCreate((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_destroy(void* self) {
    QAbstractScrollArea_Destroy((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_qbase_destroy(void* self) {
    QAbstractScrollArea_QBaseDestroy((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, void (*slot)() ```
void q_abstractscrollarea_on_destroy(void* self, void (*slot)()) {
    QAbstractScrollArea_OnDestroy((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_focus_next_child(void* self) {
    return QAbstractScrollArea_FocusNextChild((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_qbase_focus_next_child(void* self) {
    return QAbstractScrollArea_QBaseFocusNextChild((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool (*slot)() ```
void q_abstractscrollarea_on_focus_next_child(void* self, bool (*slot)()) {
    QAbstractScrollArea_OnFocusNextChild((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_focus_previous_child(void* self) {
    return QAbstractScrollArea_FocusPreviousChild((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
bool q_abstractscrollarea_qbase_focus_previous_child(void* self) {
    return QAbstractScrollArea_QBaseFocusPreviousChild((QAbstractScrollArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool (*slot)() ```
void q_abstractscrollarea_on_focus_previous_child(void* self, bool (*slot)()) {
    QAbstractScrollArea_OnFocusPreviousChild((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
QObject* q_abstractscrollarea_sender(void* self) {
    return QAbstractScrollArea_Sender((QAbstractScrollArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
QObject* q_abstractscrollarea_qbase_sender(void* self) {
    return QAbstractScrollArea_QBaseSender((QAbstractScrollArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QObject* (*slot)() ```
void q_abstractscrollarea_on_sender(void* self, QObject* (*slot)()) {
    QAbstractScrollArea_OnSender((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_sender_signal_index(void* self) {
    return QAbstractScrollArea_SenderSignalIndex((QAbstractScrollArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self ```
int32_t q_abstractscrollarea_qbase_sender_signal_index(void* self) {
    return QAbstractScrollArea_QBaseSenderSignalIndex((QAbstractScrollArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, int32_t (*slot)() ```
void q_abstractscrollarea_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractScrollArea_OnSenderSignalIndex((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, const char* signal ```
int32_t q_abstractscrollarea_receivers(void* self, const char* signal) {
    return QAbstractScrollArea_Receivers((QAbstractScrollArea*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, const char* signal ```
int32_t q_abstractscrollarea_qbase_receivers(void* self, const char* signal) {
    return QAbstractScrollArea_QBaseReceivers((QAbstractScrollArea*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, int32_t (*slot)(QAbstractScrollArea*, const char*) ```
void q_abstractscrollarea_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractScrollArea_OnReceivers((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QAbstractScrollArea* self, QMetaMethod* signal ```
bool q_abstractscrollarea_is_signal_connected(void* self, void* signal) {
    return QAbstractScrollArea_IsSignalConnected((QAbstractScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, QMetaMethod* signal ```
bool q_abstractscrollarea_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractScrollArea_QBaseIsSignalConnected((QAbstractScrollArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QAbstractScrollArea* self, bool (*slot)(QAbstractScrollArea*, QMetaMethod*) ```
void q_abstractscrollarea_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractScrollArea_OnIsSignalConnected((QAbstractScrollArea*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractScrollArea* self ```
void q_abstractscrollarea_delete(void* self) {
    QAbstractScrollArea_Delete((QAbstractScrollArea*)(self));
}