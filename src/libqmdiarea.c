#include "libqabstractscrollarea.hpp"
#include "libqaction.hpp"
#include "libqevent.hpp"
#include "libqanystringview.hpp"
#include "libqbackingstore.hpp"
#include "libqbindingstorage.hpp"
#include "libqbitmap.hpp"
#include "libqbrush.hpp"
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
#include "libqmdisubwindow.hpp"
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
#include "libqmdiarea.hpp"
#include "libqmdiarea.h"

/// https://doc.qt.io/qt-6/qmdiarea.html

/// q_mdiarea_new constructs a new QMdiArea object.
///
/// ``` QWidget* parent ```
QMdiArea* q_mdiarea_new(void* parent) {
    return QMdiArea_new((QWidget*)parent);
}

/// q_mdiarea_new2 constructs a new QMdiArea object.
///
///
QMdiArea* q_mdiarea_new2() {
    return QMdiArea_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QMdiArea* self ```
QMetaObject* q_mdiarea_meta_object(void* self) {
    return QMdiArea_MetaObject((QMdiArea*)self);
}

/// ``` QMdiArea* self, const char* param1 ```
void* q_mdiarea_metacast(void* self, const char* param1) {
    return QMdiArea_Metacast((QMdiArea*)self, param1);
}

/// ``` QMdiArea* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mdiarea_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMdiArea_Metacall((QMdiArea*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, int32_t (*slot)(QMdiArea*, enum QMetaObject__Call, int, void*) ```
void q_mdiarea_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QMdiArea_OnMetacall((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_mdiarea_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QMdiArea_QBaseMetacall((QMdiArea*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_mdiarea_tr(const char* s) {
    libqt_string _str = QMdiArea_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#sizeHint)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_size_hint(void* self) {
    return QMdiArea_SizeHint((QMdiArea*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, QSize* (*slot)() ```
void q_mdiarea_on_size_hint(void* self, QSize* (*slot)()) {
    QMdiArea_OnSizeHint((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_qbase_size_hint(void* self) {
    return QMdiArea_QBaseSizeHint((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#minimumSizeHint)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_minimum_size_hint(void* self) {
    return QMdiArea_MinimumSizeHint((QMdiArea*)self);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, QSize* (*slot)() ```
void q_mdiarea_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QMdiArea_OnMinimumSizeHint((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_qbase_minimum_size_hint(void* self) {
    return QMdiArea_QBaseMinimumSizeHint((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#currentSubWindow)
///
/// ``` QMdiArea* self ```
QMdiSubWindow* q_mdiarea_current_sub_window(void* self) {
    return QMdiArea_CurrentSubWindow((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#activeSubWindow)
///
/// ``` QMdiArea* self ```
QMdiSubWindow* q_mdiarea_active_sub_window(void* self) {
    return QMdiArea_ActiveSubWindow((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#subWindowList)
///
/// ``` QMdiArea* self ```
libqt_list /* of QMdiSubWindow* */ q_mdiarea_sub_window_list(void* self) {
    libqt_list _arr = QMdiArea_SubWindowList((QMdiArea*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#addSubWindow)
///
/// ``` QMdiArea* self, QWidget* widget ```
QMdiSubWindow* q_mdiarea_add_sub_window(void* self, void* widget) {
    return QMdiArea_AddSubWindow((QMdiArea*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#removeSubWindow)
///
/// ``` QMdiArea* self, QWidget* widget ```
void q_mdiarea_remove_sub_window(void* self, void* widget) {
    QMdiArea_RemoveSubWindow((QMdiArea*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#background)
///
/// ``` QMdiArea* self ```
QBrush* q_mdiarea_background(void* self) {
    return QMdiArea_Background((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setBackground)
///
/// ``` QMdiArea* self, QBrush* background ```
void q_mdiarea_set_background(void* self, void* background) {
    QMdiArea_SetBackground((QMdiArea*)self, (QBrush*)background);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#activationOrder)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_activation_order(void* self) {
    return QMdiArea_ActivationOrder((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setActivationOrder)
///
/// ``` QMdiArea* self, enum QMdiArea__WindowOrder order ```
void q_mdiarea_set_activation_order(void* self, int64_t order) {
    QMdiArea_SetActivationOrder((QMdiArea*)self, order);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setOption)
///
/// ``` QMdiArea* self, enum QMdiArea__AreaOption option ```
void q_mdiarea_set_option(void* self, int64_t option) {
    QMdiArea_SetOption((QMdiArea*)self, option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#testOption)
///
/// ``` QMdiArea* self, enum QMdiArea__AreaOption opton ```
bool q_mdiarea_test_option(void* self, int64_t opton) {
    return QMdiArea_TestOption((QMdiArea*)self, opton);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setViewMode)
///
/// ``` QMdiArea* self, enum QMdiArea__ViewMode mode ```
void q_mdiarea_set_view_mode(void* self, int64_t mode) {
    QMdiArea_SetViewMode((QMdiArea*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#viewMode)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_view_mode(void* self) {
    return QMdiArea_ViewMode((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#documentMode)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_document_mode(void* self) {
    return QMdiArea_DocumentMode((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setDocumentMode)
///
/// ``` QMdiArea* self, bool enabled ```
void q_mdiarea_set_document_mode(void* self, bool enabled) {
    QMdiArea_SetDocumentMode((QMdiArea*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setTabsClosable)
///
/// ``` QMdiArea* self, bool closable ```
void q_mdiarea_set_tabs_closable(void* self, bool closable) {
    QMdiArea_SetTabsClosable((QMdiArea*)self, closable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tabsClosable)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_tabs_closable(void* self) {
    return QMdiArea_TabsClosable((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setTabsMovable)
///
/// ``` QMdiArea* self, bool movable ```
void q_mdiarea_set_tabs_movable(void* self, bool movable) {
    QMdiArea_SetTabsMovable((QMdiArea*)self, movable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tabsMovable)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_tabs_movable(void* self) {
    return QMdiArea_TabsMovable((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setTabShape)
///
/// ``` QMdiArea* self, enum QTabWidget__TabShape shape ```
void q_mdiarea_set_tab_shape(void* self, int64_t shape) {
    QMdiArea_SetTabShape((QMdiArea*)self, shape);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tabShape)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_tab_shape(void* self) {
    return QMdiArea_TabShape((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setTabPosition)
///
/// ``` QMdiArea* self, enum QTabWidget__TabPosition position ```
void q_mdiarea_set_tab_position(void* self, int64_t position) {
    QMdiArea_SetTabPosition((QMdiArea*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tabPosition)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_tab_position(void* self) {
    return QMdiArea_TabPosition((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#subWindowActivated)
///
/// ``` QMdiArea* self, QMdiSubWindow* param1 ```
void q_mdiarea_sub_window_activated(void* self, void* param1) {
    QMdiArea_SubWindowActivated((QMdiArea*)self, (QMdiSubWindow*)param1);
}

/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMdiSubWindow*) ```
void q_mdiarea_on_sub_window_activated(void* self, void (*slot)(void*, void*)) {
    QMdiArea_Connect_SubWindowActivated((QMdiArea*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setActiveSubWindow)
///
/// ``` QMdiArea* self, QMdiSubWindow* window ```
void q_mdiarea_set_active_sub_window(void* self, void* window) {
    QMdiArea_SetActiveSubWindow((QMdiArea*)self, (QMdiSubWindow*)window);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#tileSubWindows)
///
/// ``` QMdiArea* self ```
void q_mdiarea_tile_sub_windows(void* self) {
    QMdiArea_TileSubWindows((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#cascadeSubWindows)
///
/// ``` QMdiArea* self ```
void q_mdiarea_cascade_sub_windows(void* self) {
    QMdiArea_CascadeSubWindows((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#closeActiveSubWindow)
///
/// ``` QMdiArea* self ```
void q_mdiarea_close_active_sub_window(void* self) {
    QMdiArea_CloseActiveSubWindow((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#closeAllSubWindows)
///
/// ``` QMdiArea* self ```
void q_mdiarea_close_all_sub_windows(void* self) {
    QMdiArea_CloseAllSubWindows((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#activateNextSubWindow)
///
/// ``` QMdiArea* self ```
void q_mdiarea_activate_next_sub_window(void* self) {
    QMdiArea_ActivateNextSubWindow((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#activatePreviousSubWindow)
///
/// ``` QMdiArea* self ```
void q_mdiarea_activate_previous_sub_window(void* self) {
    QMdiArea_ActivatePreviousSubWindow((QMdiArea*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setupViewport)
///
/// ``` QMdiArea* self, QWidget* viewport ```
void q_mdiarea_setup_viewport(void* self, void* viewport) {
    QMdiArea_SetupViewport((QMdiArea*)self, (QWidget*)viewport);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QWidget*) ```
void q_mdiarea_on_setup_viewport(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnSetupViewport((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, QWidget* viewport ```
void q_mdiarea_qbase_setup_viewport(void* self, void* viewport) {
    QMdiArea_QBaseSetupViewport((QMdiArea*)self, (QWidget*)viewport);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#event)
///
/// ``` QMdiArea* self, QEvent* event ```
bool q_mdiarea_event(void* self, void* event) {
    return QMdiArea_Event((QMdiArea*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_event(void* self, bool (*slot)(void*, void*)) {
    QMdiArea_OnEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, QEvent* event ```
bool q_mdiarea_qbase_event(void* self, void* event) {
    return QMdiArea_QBaseEvent((QMdiArea*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#eventFilter)
///
/// ``` QMdiArea* self, QObject* object, QEvent* event ```
bool q_mdiarea_event_filter(void* self, void* object, void* event) {
    return QMdiArea_EventFilter((QMdiArea*)self, (QObject*)object, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, QObject*, QEvent*) ```
void q_mdiarea_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QMdiArea_OnEventFilter((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, QObject* object, QEvent* event ```
bool q_mdiarea_qbase_event_filter(void* self, void* object, void* event) {
    return QMdiArea_QBaseEventFilter((QMdiArea*)self, (QObject*)object, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#paintEvent)
///
/// ``` QMdiArea* self, QPaintEvent* paintEvent ```
void q_mdiarea_paint_event(void* self, void* paintEvent) {
    QMdiArea_PaintEvent((QMdiArea*)self, (QPaintEvent*)paintEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QPaintEvent*) ```
void q_mdiarea_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnPaintEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, QPaintEvent* paintEvent ```
void q_mdiarea_qbase_paint_event(void* self, void* paintEvent) {
    QMdiArea_QBasePaintEvent((QMdiArea*)self, (QPaintEvent*)paintEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#childEvent)
///
/// ``` QMdiArea* self, QChildEvent* childEvent ```
void q_mdiarea_child_event(void* self, void* childEvent) {
    QMdiArea_ChildEvent((QMdiArea*)self, (QChildEvent*)childEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QChildEvent*) ```
void q_mdiarea_on_child_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnChildEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, QChildEvent* childEvent ```
void q_mdiarea_qbase_child_event(void* self, void* childEvent) {
    QMdiArea_QBaseChildEvent((QMdiArea*)self, (QChildEvent*)childEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#resizeEvent)
///
/// ``` QMdiArea* self, QResizeEvent* resizeEvent ```
void q_mdiarea_resize_event(void* self, void* resizeEvent) {
    QMdiArea_ResizeEvent((QMdiArea*)self, (QResizeEvent*)resizeEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QResizeEvent*) ```
void q_mdiarea_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnResizeEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, QResizeEvent* resizeEvent ```
void q_mdiarea_qbase_resize_event(void* self, void* resizeEvent) {
    QMdiArea_QBaseResizeEvent((QMdiArea*)self, (QResizeEvent*)resizeEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#timerEvent)
///
/// ``` QMdiArea* self, QTimerEvent* timerEvent ```
void q_mdiarea_timer_event(void* self, void* timerEvent) {
    QMdiArea_TimerEvent((QMdiArea*)self, (QTimerEvent*)timerEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QTimerEvent*) ```
void q_mdiarea_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnTimerEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, QTimerEvent* timerEvent ```
void q_mdiarea_qbase_timer_event(void* self, void* timerEvent) {
    QMdiArea_QBaseTimerEvent((QMdiArea*)self, (QTimerEvent*)timerEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#showEvent)
///
/// ``` QMdiArea* self, QShowEvent* showEvent ```
void q_mdiarea_show_event(void* self, void* showEvent) {
    QMdiArea_ShowEvent((QMdiArea*)self, (QShowEvent*)showEvent);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QShowEvent*) ```
void q_mdiarea_on_show_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnShowEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, QShowEvent* showEvent ```
void q_mdiarea_qbase_show_event(void* self, void* showEvent) {
    QMdiArea_QBaseShowEvent((QMdiArea*)self, (QShowEvent*)showEvent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#viewportEvent)
///
/// ``` QMdiArea* self, QEvent* event ```
bool q_mdiarea_viewport_event(void* self, void* event) {
    return QMdiArea_ViewportEvent((QMdiArea*)self, (QEvent*)event);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_viewport_event(void* self, bool (*slot)(void*, void*)) {
    QMdiArea_OnViewportEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, QEvent* event ```
bool q_mdiarea_qbase_viewport_event(void* self, void* event) {
    return QMdiArea_QBaseViewportEvent((QMdiArea*)self, (QEvent*)event);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#scrollContentsBy)
///
/// ``` QMdiArea* self, int dx, int dy ```
void q_mdiarea_scroll_contents_by(void* self, int dx, int dy) {
    QMdiArea_ScrollContentsBy((QMdiArea*)self, dx, dy);
}

/// Allows for overriding the related default method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, int, int) ```
void q_mdiarea_on_scroll_contents_by(void* self, void (*slot)(void*, int, int)) {
    QMdiArea_OnScrollContentsBy((QMdiArea*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QMdiArea* self, int dx, int dy ```
void q_mdiarea_qbase_scroll_contents_by(void* self, int dx, int dy) {
    QMdiArea_QBaseScrollContentsBy((QMdiArea*)self, dx, dy);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_mdiarea_tr2(const char* s, const char* c) {
    libqt_string _str = QMdiArea_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_mdiarea_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QMdiArea_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#subWindowList)
///
/// ``` QMdiArea* self, enum QMdiArea__WindowOrder order ```
libqt_list /* of QMdiSubWindow* */ q_mdiarea_sub_window_list1(void* self, int64_t order) {
    libqt_list _arr = QMdiArea_SubWindowList1((QMdiArea*)self, order);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#addSubWindow)
///
/// ``` QMdiArea* self, QWidget* widget, int flags ```
QMdiSubWindow* q_mdiarea_add_sub_window2(void* self, void* widget, int64_t flags) {
    return QMdiArea_AddSubWindow2((QMdiArea*)self, (QWidget*)widget, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmdiarea.html#setOption)
///
/// ``` QMdiArea* self, enum QMdiArea__AreaOption option, bool on ```
void q_mdiarea_set_option2(void* self, int64_t option, bool on) {
    QMdiArea_SetOption2((QMdiArea*)self, option, on);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_vertical_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_VerticalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
///
/// ``` QMdiArea* self, enum Qt__ScrollBarPolicy verticalScrollBarPolicy ```
void q_mdiarea_set_vertical_scroll_bar_policy(void* self, int64_t verticalScrollBarPolicy) {
    QAbstractScrollArea_SetVerticalScrollBarPolicy((QAbstractScrollArea*)self, verticalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
///
/// ``` QMdiArea* self ```
QScrollBar* q_mdiarea_vertical_scroll_bar(void* self) {
    return QAbstractScrollArea_VerticalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
///
/// ``` QMdiArea* self, QScrollBar* scrollbar ```
void q_mdiarea_set_vertical_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetVerticalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_horizontal_scroll_bar_policy(void* self) {
    return QAbstractScrollArea_HorizontalScrollBarPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
///
/// ``` QMdiArea* self, enum Qt__ScrollBarPolicy horizontalScrollBarPolicy ```
void q_mdiarea_set_horizontal_scroll_bar_policy(void* self, int64_t horizontalScrollBarPolicy) {
    QAbstractScrollArea_SetHorizontalScrollBarPolicy((QAbstractScrollArea*)self, horizontalScrollBarPolicy);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
///
/// ``` QMdiArea* self ```
QScrollBar* q_mdiarea_horizontal_scroll_bar(void* self) {
    return QAbstractScrollArea_HorizontalScrollBar((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
///
/// ``` QMdiArea* self, QScrollBar* scrollbar ```
void q_mdiarea_set_horizontal_scroll_bar(void* self, void* scrollbar) {
    QAbstractScrollArea_SetHorizontalScrollBar((QAbstractScrollArea*)self, (QScrollBar*)scrollbar);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_corner_widget(void* self) {
    return QAbstractScrollArea_CornerWidget((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
///
/// ``` QMdiArea* self, QWidget* widget ```
void q_mdiarea_set_corner_widget(void* self, void* widget) {
    QAbstractScrollArea_SetCornerWidget((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
///
/// ``` QMdiArea* self, QWidget* widget, int alignment ```
void q_mdiarea_add_scroll_bar_widget(void* self, void* widget, int64_t alignment) {
    QAbstractScrollArea_AddScrollBarWidget((QAbstractScrollArea*)self, (QWidget*)widget, alignment);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
///
/// ``` QMdiArea* self, int alignment ```
libqt_list /* of QWidget* */ q_mdiarea_scroll_bar_widgets(void* self, int64_t alignment) {
    libqt_list _arr = QAbstractScrollArea_ScrollBarWidgets((QAbstractScrollArea*)self, alignment);
    return _arr;
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_viewport(void* self) {
    return QAbstractScrollArea_Viewport((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
///
/// ``` QMdiArea* self, QWidget* widget ```
void q_mdiarea_set_viewport(void* self, void* widget) {
    QAbstractScrollArea_SetViewport((QAbstractScrollArea*)self, (QWidget*)widget);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_maximum_viewport_size(void* self) {
    return QAbstractScrollArea_MaximumViewportSize((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_size_adjust_policy(void* self) {
    return QAbstractScrollArea_SizeAdjustPolicy((QAbstractScrollArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
///
/// ``` QMdiArea* self, enum QAbstractScrollArea__SizeAdjustPolicy policy ```
void q_mdiarea_set_size_adjust_policy(void* self, int64_t policy) {
    QAbstractScrollArea_SetSizeAdjustPolicy((QAbstractScrollArea*)self, policy);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameStyle)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_frame_style(void* self) {
    return QFrame_FrameStyle((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
///
/// ``` QMdiArea* self, int frameStyle ```
void q_mdiarea_set_frame_style(void* self, int frameStyle) {
    QFrame_SetFrameStyle((QFrame*)self, frameStyle);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_frame_width(void* self) {
    return QFrame_FrameWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShape)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_frame_shape(void* self) {
    return QFrame_FrameShape((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
///
/// ``` QMdiArea* self, enum QFrame__Shape frameShape ```
void q_mdiarea_set_frame_shape(void* self, int64_t frameShape) {
    QFrame_SetFrameShape((QFrame*)self, frameShape);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameShadow)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_frame_shadow(void* self) {
    return QFrame_FrameShadow((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
///
/// ``` QMdiArea* self, enum QFrame__Shadow frameShadow ```
void q_mdiarea_set_frame_shadow(void* self, int64_t frameShadow) {
    QFrame_SetFrameShadow((QFrame*)self, frameShadow);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#lineWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_line_width(void* self) {
    return QFrame_LineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
///
/// ``` QMdiArea* self, int lineWidth ```
void q_mdiarea_set_line_width(void* self, int lineWidth) {
    QFrame_SetLineWidth((QFrame*)self, lineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_mid_line_width(void* self) {
    return QFrame_MidLineWidth((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
///
/// ``` QMdiArea* self, int midLineWidth ```
void q_mdiarea_set_mid_line_width(void* self, int midLineWidth) {
    QFrame_SetMidLineWidth((QFrame*)self, midLineWidth);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#frameRect)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_frame_rect(void* self) {
    return QFrame_FrameRect((QFrame*)self);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
///
/// ``` QMdiArea* self, QRect* frameRect ```
void q_mdiarea_set_frame_rect(void* self, void* frameRect) {
    QFrame_SetFrameRect((QFrame*)self, (QRect*)frameRect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QMdiArea* self ```
uintptr_t q_mdiarea_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QMdiArea* self ```
void q_mdiarea_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QMdiArea* self ```
uintptr_t q_mdiarea_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QMdiArea* self ```
uintptr_t q_mdiarea_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QMdiArea* self ```
QStyle* q_mdiarea_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QMdiArea* self, QStyle* style ```
void q_mdiarea_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QMdiArea* self, enum Qt__WindowModality windowModality ```
void q_mdiarea_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QMdiArea* self, QWidget* param1 ```
bool q_mdiarea_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QMdiArea* self, bool enabled ```
void q_mdiarea_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QMdiArea* self, bool disabled ```
void q_mdiarea_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QMdiArea* self, bool windowModified ```
void q_mdiarea_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QMdiArea* self ```
QPoint* q_mdiarea_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QMdiArea* self ```
QRegion* q_mdiarea_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMdiArea* self, QSize* minimumSize ```
void q_mdiarea_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QMdiArea* self, int minw, int minh ```
void q_mdiarea_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMdiArea* self, QSize* maximumSize ```
void q_mdiarea_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QMdiArea* self, int maxw, int maxh ```
void q_mdiarea_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QMdiArea* self, int minw ```
void q_mdiarea_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QMdiArea* self, int minh ```
void q_mdiarea_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QMdiArea* self, int maxw ```
void q_mdiarea_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QMdiArea* self, int maxh ```
void q_mdiarea_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMdiArea* self, QSize* sizeIncrement ```
void q_mdiarea_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QMdiArea* self, int w, int h ```
void q_mdiarea_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMdiArea* self, QSize* baseSize ```
void q_mdiarea_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QMdiArea* self, int basew, int baseh ```
void q_mdiarea_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMdiArea* self, QSize* fixedSize ```
void q_mdiarea_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QMdiArea* self, int w, int h ```
void q_mdiarea_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QMdiArea* self, int w ```
void q_mdiarea_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QMdiArea* self, int h ```
void q_mdiarea_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMdiArea* self, QPointF* param1 ```
QPointF* q_mdiarea_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QMdiArea* self, QPoint* param1 ```
QPoint* q_mdiarea_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMdiArea* self, QPointF* param1 ```
QPointF* q_mdiarea_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QMdiArea* self, QPoint* param1 ```
QPoint* q_mdiarea_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMdiArea* self, QPointF* param1 ```
QPointF* q_mdiarea_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QMdiArea* self, QPoint* param1 ```
QPoint* q_mdiarea_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMdiArea* self, QPointF* param1 ```
QPointF* q_mdiarea_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QMdiArea* self, QPoint* param1 ```
QPoint* q_mdiarea_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMdiArea* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mdiarea_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QMdiArea* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mdiarea_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMdiArea* self, QWidget* param1, QPointF* param2 ```
QPointF* q_mdiarea_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QMdiArea* self, QWidget* param1, QPoint* param2 ```
QPoint* q_mdiarea_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QMdiArea* self ```
QPalette* q_mdiarea_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QMdiArea* self, QPalette* palette ```
void q_mdiarea_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QMdiArea* self, enum QPalette__ColorRole backgroundRole ```
void q_mdiarea_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QMdiArea* self, enum QPalette__ColorRole foregroundRole ```
void q_mdiarea_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QMdiArea* self ```
QFont* q_mdiarea_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QMdiArea* self, QFont* font ```
void q_mdiarea_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QMdiArea* self ```
QFontMetrics* q_mdiarea_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QMdiArea* self ```
QFontInfo* q_mdiarea_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QMdiArea* self ```
QCursor* q_mdiarea_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QMdiArea* self, QCursor* cursor ```
void q_mdiarea_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QMdiArea* self ```
void q_mdiarea_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QMdiArea* self, bool enable ```
void q_mdiarea_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QMdiArea* self, bool enable ```
void q_mdiarea_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMdiArea* self, QBitmap* mask ```
void q_mdiarea_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QMdiArea* self, QRegion* mask ```
void q_mdiarea_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QMdiArea* self ```
QRegion* q_mdiarea_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QMdiArea* self ```
void q_mdiarea_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPaintDevice* target ```
void q_mdiarea_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPainter* painter ```
void q_mdiarea_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMdiArea* self ```
QPixmap* q_mdiarea_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QMdiArea* self ```
QGraphicsEffect* q_mdiarea_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QMdiArea* self, QGraphicsEffect* effect ```
void q_mdiarea_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMdiArea* self, enum Qt__GestureType typeVal ```
void q_mdiarea_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QMdiArea* self, enum Qt__GestureType typeVal ```
void q_mdiarea_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QMdiArea* self, const char* windowTitle ```
void q_mdiarea_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QMdiArea* self, const char* styleSheet ```
void q_mdiarea_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QMdiArea* self, QIcon* icon ```
void q_mdiarea_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QMdiArea* self ```
QIcon* q_mdiarea_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QMdiArea* self, const char* windowIconText ```
void q_mdiarea_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QMdiArea* self, const char* windowRole ```
void q_mdiarea_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QMdiArea* self, const char* filePath ```
void q_mdiarea_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QMdiArea* self, double level ```
void q_mdiarea_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QMdiArea* self ```
double q_mdiarea_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QMdiArea* self, const char* toolTip ```
void q_mdiarea_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QMdiArea* self, int msec ```
void q_mdiarea_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QMdiArea* self, const char* statusTip ```
void q_mdiarea_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QMdiArea* self, const char* whatsThis ```
void q_mdiarea_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QMdiArea* self, const char* name ```
void q_mdiarea_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QMdiArea* self, const char* description ```
void q_mdiarea_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QMdiArea* self, enum Qt__LayoutDirection direction ```
void q_mdiarea_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QMdiArea* self ```
void q_mdiarea_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QMdiArea* self, QLocale* locale ```
void q_mdiarea_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QMdiArea* self ```
QLocale* q_mdiarea_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QMdiArea* self ```
void q_mdiarea_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMdiArea* self ```
void q_mdiarea_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QMdiArea* self ```
void q_mdiarea_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QMdiArea* self ```
void q_mdiarea_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QMdiArea* self, enum Qt__FocusReason reason ```
void q_mdiarea_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QMdiArea* self, enum Qt__FocusPolicy policy ```
void q_mdiarea_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_mdiarea_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QMdiArea* self, QWidget* focusProxy ```
void q_mdiarea_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QMdiArea* self, enum Qt__ContextMenuPolicy policy ```
void q_mdiarea_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMdiArea* self ```
void q_mdiarea_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QMdiArea* self, QCursor* param1 ```
void q_mdiarea_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QMdiArea* self ```
void q_mdiarea_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QMdiArea* self ```
void q_mdiarea_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QMdiArea* self ```
void q_mdiarea_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMdiArea* self, QKeySequence* key ```
int32_t q_mdiarea_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QMdiArea* self, int id ```
void q_mdiarea_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMdiArea* self, int id ```
void q_mdiarea_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMdiArea* self, int id ```
void q_mdiarea_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_mdiarea_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_mdiarea_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QMdiArea* self, bool enable ```
void q_mdiarea_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QMdiArea* self ```
QGraphicsProxyWidget* q_mdiarea_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiArea* self ```
void q_mdiarea_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiArea* self ```
void q_mdiarea_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiArea* self, int x, int y, int w, int h ```
void q_mdiarea_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiArea* self, QRect* param1 ```
void q_mdiarea_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QMdiArea* self, QRegion* param1 ```
void q_mdiarea_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiArea* self, int x, int y, int w, int h ```
void q_mdiarea_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiArea* self, QRect* param1 ```
void q_mdiarea_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QMdiArea* self, QRegion* param1 ```
void q_mdiarea_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QMdiArea* self, bool hidden ```
void q_mdiarea_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QMdiArea* self ```
void q_mdiarea_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QMdiArea* self ```
void q_mdiarea_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QMdiArea* self ```
void q_mdiarea_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QMdiArea* self ```
void q_mdiarea_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QMdiArea* self, QWidget* param1 ```
void q_mdiarea_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMdiArea* self, int x, int y ```
void q_mdiarea_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QMdiArea* self, QPoint* param1 ```
void q_mdiarea_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMdiArea* self, int w, int h ```
void q_mdiarea_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QMdiArea* self, QSize* param1 ```
void q_mdiarea_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMdiArea* self, int x, int y, int w, int h ```
void q_mdiarea_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QMdiArea* self, QRect* geometry ```
void q_mdiarea_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QMdiArea* self ```
char* q_mdiarea_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QMdiArea* self, const char* geometry ```
bool q_mdiarea_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QMdiArea* self ```
void q_mdiarea_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QMdiArea* self, QWidget* param1 ```
bool q_mdiarea_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QMdiArea* self, int state ```
void q_mdiarea_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QMdiArea* self, int state ```
void q_mdiarea_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QMdiArea* self ```
QSizePolicy* q_mdiarea_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMdiArea* self, QSizePolicy* sizePolicy ```
void q_mdiarea_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QMdiArea* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_mdiarea_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QMdiArea* self ```
QRegion* q_mdiarea_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMdiArea* self, int left, int top, int right, int bottom ```
void q_mdiarea_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QMdiArea* self, QMargins* margins ```
void q_mdiarea_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QMdiArea* self ```
QMargins* q_mdiarea_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QMdiArea* self ```
QRect* q_mdiarea_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QMdiArea* self ```
QLayout* q_mdiarea_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QMdiArea* self, QLayout* layout ```
void q_mdiarea_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QMdiArea* self ```
void q_mdiarea_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMdiArea* self, QWidget* parent ```
void q_mdiarea_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QMdiArea* self, QWidget* parent, int f ```
void q_mdiarea_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMdiArea* self, int dx, int dy ```
void q_mdiarea_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QMdiArea* self, int dx, int dy, QRect* param3 ```
void q_mdiarea_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QMdiArea* self, bool on ```
void q_mdiarea_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, QAction* action ```
void q_mdiarea_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QMdiArea* self, QAction* actions[] ```
void q_mdiarea_add_actions(void* self, void* actions[]) {
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
/// ``` QMdiArea* self, QAction* before, QAction* actions[] ```
void q_mdiarea_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QMdiArea* self, QAction* before, QAction* action ```
void q_mdiarea_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QMdiArea* self, QAction* action ```
void q_mdiarea_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QMdiArea* self ```
libqt_list /* of QAction* */ q_mdiarea_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, const char* text ```
QAction* q_mdiarea_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, QIcon* icon, const char* text ```
QAction* q_mdiarea_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, const char* text, QKeySequence* shortcut ```
QAction* q_mdiarea_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QMdiArea* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_mdiarea_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QMdiArea* self ```
QWidget* q_mdiarea_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QMdiArea* self, int typeVal ```
void q_mdiarea_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMdiArea* self, enum Qt__WindowType param1 ```
void q_mdiarea_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QMdiArea* self, int typeVal ```
void q_mdiarea_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_mdiarea_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMdiArea* self, int x, int y ```
QWidget* q_mdiarea_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QMdiArea* self, QPoint* p ```
QWidget* q_mdiarea_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMdiArea* self, enum Qt__WidgetAttribute param1 ```
void q_mdiarea_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QMdiArea* self, enum Qt__WidgetAttribute param1 ```
bool q_mdiarea_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QMdiArea* self ```
void q_mdiarea_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QMdiArea* self, QWidget* child ```
bool q_mdiarea_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QMdiArea* self, bool enabled ```
void q_mdiarea_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QMdiArea* self ```
QBackingStore* q_mdiarea_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QMdiArea* self ```
QWindow* q_mdiarea_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QMdiArea* self ```
QScreen* q_mdiarea_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QMdiArea* self, QScreen* screen ```
void q_mdiarea_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_mdiarea_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QMdiArea* self, const char* title ```
void q_mdiarea_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QMdiArea* self, void (*slot)(QWidget*, const char*) ```
void q_mdiarea_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QMdiArea* self, QIcon* icon ```
void q_mdiarea_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QMdiArea* self, void (*slot)(QWidget*, QIcon*) ```
void q_mdiarea_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QMdiArea* self, const char* iconText ```
void q_mdiarea_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QMdiArea* self, void (*slot)(QWidget*, const char*) ```
void q_mdiarea_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QMdiArea* self, QPoint* pos ```
void q_mdiarea_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QMdiArea* self, void (*slot)(QWidget*, QPoint*) ```
void q_mdiarea_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QMdiArea* self ```
int64_t q_mdiarea_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QMdiArea* self, int hints ```
void q_mdiarea_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPaintDevice* target, QPoint* targetOffset ```
void q_mdiarea_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mdiarea_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mdiarea_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPainter* painter, QPoint* targetOffset ```
void q_mdiarea_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_mdiarea_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QMdiArea* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_mdiarea_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QMdiArea* self, QRect* rectangle ```
QPixmap* q_mdiarea_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QMdiArea* self, enum Qt__GestureType typeVal, int flags ```
void q_mdiarea_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QMdiArea* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_mdiarea_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QMdiArea* self, int id, bool enable ```
void q_mdiarea_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QMdiArea* self, int id, bool enable ```
void q_mdiarea_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QMdiArea* self, enum Qt__WindowType param1, bool on ```
void q_mdiarea_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QMdiArea* self, enum Qt__WidgetAttribute param1, bool on ```
void q_mdiarea_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_mdiarea_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_mdiarea_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QMdiArea* self ```
const char* q_mdiarea_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QMdiArea* self, const char* name ```
void q_mdiarea_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QMdiArea* self, bool b ```
bool q_mdiarea_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QMdiArea* self ```
QThread* q_mdiarea_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QMdiArea* self, QThread* thread ```
void q_mdiarea_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMdiArea* self, int interval ```
int32_t q_mdiarea_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QMdiArea* self, int id ```
void q_mdiarea_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QMdiArea* self ```
libqt_list /* of QObject* */ q_mdiarea_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QMdiArea* self, QObject* filterObj ```
void q_mdiarea_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QMdiArea* self, QObject* obj ```
void q_mdiarea_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_mdiarea_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMdiArea* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_mdiarea_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_mdiarea_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_mdiarea_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QMdiArea* self ```
void q_mdiarea_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QMdiArea* self ```
void q_mdiarea_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QMdiArea* self, const char* name, QVariant* value ```
bool q_mdiarea_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QMdiArea* self, const char* name ```
QVariant* q_mdiarea_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QMdiArea* self ```
const char** q_mdiarea_dynamic_property_names(void* self) {
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
/// ``` QMdiArea* self ```
QBindingStorage* q_mdiarea_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QMdiArea* self ```
QBindingStorage* q_mdiarea_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMdiArea* self ```
void q_mdiarea_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QMdiArea* self, void (*slot)(QObject*) ```
void q_mdiarea_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QMdiArea* self ```
QObject* q_mdiarea_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QMdiArea* self, const char* classname ```
bool q_mdiarea_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QMdiArea* self ```
void q_mdiarea_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QMdiArea* self, int interval, enum Qt__TimerType timerType ```
int32_t q_mdiarea_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mdiarea_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QMdiArea* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_mdiarea_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QMdiArea* self, QObject* param1 ```
void q_mdiarea_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QMdiArea* self, void (*slot)(QObject*, QObject*) ```
void q_mdiarea_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QMdiArea* self ```
bool q_mdiarea_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QMdiArea* self ```
double q_mdiarea_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QMdiArea* self ```
double q_mdiarea_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_mdiarea_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_mouse_press_event(void* self, void* param1) {
    QMdiArea_MousePressEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_qbase_mouse_press_event(void* self, void* param1) {
    QMdiArea_QBaseMousePressEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMouseEvent*) ```
void q_mdiarea_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnMousePressEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_mouse_release_event(void* self, void* param1) {
    QMdiArea_MouseReleaseEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_qbase_mouse_release_event(void* self, void* param1) {
    QMdiArea_QBaseMouseReleaseEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMouseEvent*) ```
void q_mdiarea_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnMouseReleaseEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_mouse_double_click_event(void* self, void* param1) {
    QMdiArea_MouseDoubleClickEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_qbase_mouse_double_click_event(void* self, void* param1) {
    QMdiArea_QBaseMouseDoubleClickEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMouseEvent*) ```
void q_mdiarea_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnMouseDoubleClickEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_mouse_move_event(void* self, void* param1) {
    QMdiArea_MouseMoveEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMouseEvent* param1 ```
void q_mdiarea_qbase_mouse_move_event(void* self, void* param1) {
    QMdiArea_QBaseMouseMoveEvent((QMdiArea*)self, (QMouseEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMouseEvent*) ```
void q_mdiarea_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnMouseMoveEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QWheelEvent* param1 ```
void q_mdiarea_wheel_event(void* self, void* param1) {
    QMdiArea_WheelEvent((QMdiArea*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QWheelEvent* param1 ```
void q_mdiarea_qbase_wheel_event(void* self, void* param1) {
    QMdiArea_QBaseWheelEvent((QMdiArea*)self, (QWheelEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QWheelEvent*) ```
void q_mdiarea_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnWheelEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QContextMenuEvent* param1 ```
void q_mdiarea_context_menu_event(void* self, void* param1) {
    QMdiArea_ContextMenuEvent((QMdiArea*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QContextMenuEvent* param1 ```
void q_mdiarea_qbase_context_menu_event(void* self, void* param1) {
    QMdiArea_QBaseContextMenuEvent((QMdiArea*)self, (QContextMenuEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QContextMenuEvent*) ```
void q_mdiarea_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnContextMenuEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QDragEnterEvent* param1 ```
void q_mdiarea_drag_enter_event(void* self, void* param1) {
    QMdiArea_DragEnterEvent((QMdiArea*)self, (QDragEnterEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QDragEnterEvent* param1 ```
void q_mdiarea_qbase_drag_enter_event(void* self, void* param1) {
    QMdiArea_QBaseDragEnterEvent((QMdiArea*)self, (QDragEnterEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QDragEnterEvent*) ```
void q_mdiarea_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnDragEnterEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QDragMoveEvent* param1 ```
void q_mdiarea_drag_move_event(void* self, void* param1) {
    QMdiArea_DragMoveEvent((QMdiArea*)self, (QDragMoveEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QDragMoveEvent* param1 ```
void q_mdiarea_qbase_drag_move_event(void* self, void* param1) {
    QMdiArea_QBaseDragMoveEvent((QMdiArea*)self, (QDragMoveEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QDragMoveEvent*) ```
void q_mdiarea_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnDragMoveEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QDragLeaveEvent* param1 ```
void q_mdiarea_drag_leave_event(void* self, void* param1) {
    QMdiArea_DragLeaveEvent((QMdiArea*)self, (QDragLeaveEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QDragLeaveEvent* param1 ```
void q_mdiarea_qbase_drag_leave_event(void* self, void* param1) {
    QMdiArea_QBaseDragLeaveEvent((QMdiArea*)self, (QDragLeaveEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QDragLeaveEvent*) ```
void q_mdiarea_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnDragLeaveEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QDropEvent* param1 ```
void q_mdiarea_drop_event(void* self, void* param1) {
    QMdiArea_DropEvent((QMdiArea*)self, (QDropEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QDropEvent* param1 ```
void q_mdiarea_qbase_drop_event(void* self, void* param1) {
    QMdiArea_QBaseDropEvent((QMdiArea*)self, (QDropEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QDropEvent*) ```
void q_mdiarea_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnDropEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#keyPressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QKeyEvent* param1 ```
void q_mdiarea_key_press_event(void* self, void* param1) {
    QMdiArea_KeyPressEvent((QMdiArea*)self, (QKeyEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QKeyEvent* param1 ```
void q_mdiarea_qbase_key_press_event(void* self, void* param1) {
    QMdiArea_QBaseKeyPressEvent((QMdiArea*)self, (QKeyEvent*)param1);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QKeyEvent*) ```
void q_mdiarea_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnKeyPressEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_viewport_size_hint(void* self) {
    return QMdiArea_ViewportSizeHint((QMdiArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QSize* q_mdiarea_qbase_viewport_size_hint(void* self) {
    return QMdiArea_QBaseViewportSizeHint((QMdiArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QSize* (*slot)() ```
void q_mdiarea_on_viewport_size_hint(void* self, QSize* (*slot)()) {
    QMdiArea_OnViewportSizeHint((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#changeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QEvent* param1 ```
void q_mdiarea_change_event(void* self, void* param1) {
    QMdiArea_ChangeEvent((QMdiArea*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QEvent* param1 ```
void q_mdiarea_qbase_change_event(void* self, void* param1) {
    QMdiArea_QBaseChangeEvent((QMdiArea*)self, (QEvent*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_change_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnChangeEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QStyleOptionFrame* option ```
void q_mdiarea_init_style_option(void* self, void* option) {
    QMdiArea_InitStyleOption((QMdiArea*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QStyleOptionFrame* option ```
void q_mdiarea_qbase_init_style_option(void* self, void* option) {
    QMdiArea_QBaseInitStyleOption((QMdiArea*)self, (QStyleOptionFrame*)option);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QStyleOptionFrame*) ```
void q_mdiarea_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnInitStyleOption((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_dev_type(void* self) {
    return QMdiArea_DevType((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_qbase_dev_type(void* self) {
    return QMdiArea_QBaseDevType((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)() ```
void q_mdiarea_on_dev_type(void* self, int32_t (*slot)()) {
    QMdiArea_OnDevType((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, bool visible ```
void q_mdiarea_set_visible(void* self, bool visible) {
    QMdiArea_SetVisible((QMdiArea*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, bool visible ```
void q_mdiarea_qbase_set_visible(void* self, bool visible) {
    QMdiArea_QBaseSetVisible((QMdiArea*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, bool) ```
void q_mdiarea_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QMdiArea_OnSetVisible((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, int param1 ```
int32_t q_mdiarea_height_for_width(void* self, int param1) {
    return QMdiArea_HeightForWidth((QMdiArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, int param1 ```
int32_t q_mdiarea_qbase_height_for_width(void* self, int param1) {
    return QMdiArea_QBaseHeightForWidth((QMdiArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)(QMdiArea*, int) ```
void q_mdiarea_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QMdiArea_OnHeightForWidth((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_has_height_for_width(void* self) {
    return QMdiArea_HasHeightForWidth((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_qbase_has_height_for_width(void* self) {
    return QMdiArea_QBaseHasHeightForWidth((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)() ```
void q_mdiarea_on_has_height_for_width(void* self, bool (*slot)()) {
    QMdiArea_OnHasHeightForWidth((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QPaintEngine* q_mdiarea_paint_engine(void* self) {
    return QMdiArea_PaintEngine((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QPaintEngine* q_mdiarea_qbase_paint_engine(void* self) {
    return QMdiArea_QBasePaintEngine((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QPaintEngine* (*slot)() ```
void q_mdiarea_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QMdiArea_OnPaintEngine((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QKeyEvent* event ```
void q_mdiarea_key_release_event(void* self, void* event) {
    QMdiArea_KeyReleaseEvent((QMdiArea*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QKeyEvent* event ```
void q_mdiarea_qbase_key_release_event(void* self, void* event) {
    QMdiArea_QBaseKeyReleaseEvent((QMdiArea*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QKeyEvent*) ```
void q_mdiarea_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnKeyReleaseEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QFocusEvent* event ```
void q_mdiarea_focus_in_event(void* self, void* event) {
    QMdiArea_FocusInEvent((QMdiArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QFocusEvent* event ```
void q_mdiarea_qbase_focus_in_event(void* self, void* event) {
    QMdiArea_QBaseFocusInEvent((QMdiArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QFocusEvent*) ```
void q_mdiarea_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnFocusInEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QFocusEvent* event ```
void q_mdiarea_focus_out_event(void* self, void* event) {
    QMdiArea_FocusOutEvent((QMdiArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QFocusEvent* event ```
void q_mdiarea_qbase_focus_out_event(void* self, void* event) {
    QMdiArea_QBaseFocusOutEvent((QMdiArea*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QFocusEvent*) ```
void q_mdiarea_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnFocusOutEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QEnterEvent* event ```
void q_mdiarea_enter_event(void* self, void* event) {
    QMdiArea_EnterEvent((QMdiArea*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QEnterEvent* event ```
void q_mdiarea_qbase_enter_event(void* self, void* event) {
    QMdiArea_QBaseEnterEvent((QMdiArea*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QEnterEvent*) ```
void q_mdiarea_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnEnterEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QEvent* event ```
void q_mdiarea_leave_event(void* self, void* event) {
    QMdiArea_LeaveEvent((QMdiArea*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QEvent* event ```
void q_mdiarea_qbase_leave_event(void* self, void* event) {
    QMdiArea_QBaseLeaveEvent((QMdiArea*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnLeaveEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMoveEvent* event ```
void q_mdiarea_move_event(void* self, void* event) {
    QMdiArea_MoveEvent((QMdiArea*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMoveEvent* event ```
void q_mdiarea_qbase_move_event(void* self, void* event) {
    QMdiArea_QBaseMoveEvent((QMdiArea*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMoveEvent*) ```
void q_mdiarea_on_move_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnMoveEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QCloseEvent* event ```
void q_mdiarea_close_event(void* self, void* event) {
    QMdiArea_CloseEvent((QMdiArea*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QCloseEvent* event ```
void q_mdiarea_qbase_close_event(void* self, void* event) {
    QMdiArea_QBaseCloseEvent((QMdiArea*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QCloseEvent*) ```
void q_mdiarea_on_close_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnCloseEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QTabletEvent* event ```
void q_mdiarea_tablet_event(void* self, void* event) {
    QMdiArea_TabletEvent((QMdiArea*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QTabletEvent* event ```
void q_mdiarea_qbase_tablet_event(void* self, void* event) {
    QMdiArea_QBaseTabletEvent((QMdiArea*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QTabletEvent*) ```
void q_mdiarea_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnTabletEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QActionEvent* event ```
void q_mdiarea_action_event(void* self, void* event) {
    QMdiArea_ActionEvent((QMdiArea*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QActionEvent* event ```
void q_mdiarea_qbase_action_event(void* self, void* event) {
    QMdiArea_QBaseActionEvent((QMdiArea*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QActionEvent*) ```
void q_mdiarea_on_action_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnActionEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QHideEvent* event ```
void q_mdiarea_hide_event(void* self, void* event) {
    QMdiArea_HideEvent((QMdiArea*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QHideEvent* event ```
void q_mdiarea_qbase_hide_event(void* self, void* event) {
    QMdiArea_QBaseHideEvent((QMdiArea*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QHideEvent*) ```
void q_mdiarea_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnHideEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, const char* eventType, void* message, intptr_t* result ```
bool q_mdiarea_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMdiArea_NativeEvent((QMdiArea*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, const char* eventType, void* message, intptr_t* result ```
bool q_mdiarea_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QMdiArea_QBaseNativeEvent((QMdiArea*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, const char*, void*, intptr_t*) ```
void q_mdiarea_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QMdiArea_OnNativeEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mdiarea_metric(void* self, int64_t param1) {
    return QMdiArea_Metric((QMdiArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_mdiarea_qbase_metric(void* self, int64_t param1) {
    return QMdiArea_QBaseMetric((QMdiArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)(QMdiArea*, enum QPaintDevice__PaintDeviceMetric) ```
void q_mdiarea_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QMdiArea_OnMetric((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QPainter* painter ```
void q_mdiarea_init_painter(void* self, void* painter) {
    QMdiArea_InitPainter((QMdiArea*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QPainter* painter ```
void q_mdiarea_qbase_init_painter(void* self, void* painter) {
    QMdiArea_QBaseInitPainter((QMdiArea*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QPainter*) ```
void q_mdiarea_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnInitPainter((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QPoint* offset ```
QPaintDevice* q_mdiarea_redirected(void* self, void* offset) {
    return QMdiArea_Redirected((QMdiArea*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QPoint* offset ```
QPaintDevice* q_mdiarea_qbase_redirected(void* self, void* offset) {
    return QMdiArea_QBaseRedirected((QMdiArea*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QPaintDevice* (*slot)(QMdiArea*, QPoint*) ```
void q_mdiarea_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QMdiArea_OnRedirected((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QPainter* q_mdiarea_shared_painter(void* self) {
    return QMdiArea_SharedPainter((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QPainter* q_mdiarea_qbase_shared_painter(void* self) {
    return QMdiArea_QBaseSharedPainter((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QPainter* (*slot)() ```
void q_mdiarea_on_shared_painter(void* self, QPainter* (*slot)()) {
    QMdiArea_OnSharedPainter((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QInputMethodEvent* param1 ```
void q_mdiarea_input_method_event(void* self, void* param1) {
    QMdiArea_InputMethodEvent((QMdiArea*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QInputMethodEvent* param1 ```
void q_mdiarea_qbase_input_method_event(void* self, void* param1) {
    QMdiArea_QBaseInputMethodEvent((QMdiArea*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QInputMethodEvent*) ```
void q_mdiarea_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnInputMethodEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mdiarea_input_method_query(void* self, int64_t param1) {
    return QMdiArea_InputMethodQuery((QMdiArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_mdiarea_qbase_input_method_query(void* self, int64_t param1) {
    return QMdiArea_QBaseInputMethodQuery((QMdiArea*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QVariant* (*slot)(QMdiArea*, enum Qt__InputMethodQuery) ```
void q_mdiarea_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QMdiArea_OnInputMethodQuery((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, bool next ```
bool q_mdiarea_focus_next_prev_child(void* self, bool next) {
    return QMdiArea_FocusNextPrevChild((QMdiArea*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, bool next ```
bool q_mdiarea_qbase_focus_next_prev_child(void* self, bool next) {
    return QMdiArea_QBaseFocusNextPrevChild((QMdiArea*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, bool) ```
void q_mdiarea_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QMdiArea_OnFocusNextPrevChild((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QEvent* event ```
void q_mdiarea_custom_event(void* self, void* event) {
    QMdiArea_CustomEvent((QMdiArea*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QEvent* event ```
void q_mdiarea_qbase_custom_event(void* self, void* event) {
    QMdiArea_QBaseCustomEvent((QMdiArea*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QEvent*) ```
void q_mdiarea_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnCustomEvent((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
void q_mdiarea_connect_notify(void* self, void* signal) {
    QMdiArea_ConnectNotify((QMdiArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
void q_mdiarea_qbase_connect_notify(void* self, void* signal) {
    QMdiArea_QBaseConnectNotify((QMdiArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMetaMethod*) ```
void q_mdiarea_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnConnectNotify((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
void q_mdiarea_disconnect_notify(void* self, void* signal) {
    QMdiArea_DisconnectNotify((QMdiArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
void q_mdiarea_qbase_disconnect_notify(void* self, void* signal) {
    QMdiArea_QBaseDisconnectNotify((QMdiArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QMetaMethod*) ```
void q_mdiarea_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnDisconnectNotify((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, int left, int top, int right, int bottom ```
void q_mdiarea_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QMdiArea_SetViewportMargins((QMdiArea*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, int left, int top, int right, int bottom ```
void q_mdiarea_qbase_set_viewport_margins(void* self, int left, int top, int right, int bottom) {
    QMdiArea_QBaseSetViewportMargins((QMdiArea*)self, left, top, right, bottom);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, int, int, int, int) ```
void q_mdiarea_on_set_viewport_margins(void* self, void (*slot)(void*, int, int, int, int)) {
    QMdiArea_OnSetViewportMargins((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QAbstractScrollArea
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QMargins* q_mdiarea_viewport_margins(void* self) {
    return QMdiArea_ViewportMargins((QMdiArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QMargins* q_mdiarea_qbase_viewport_margins(void* self) {
    return QMdiArea_QBaseViewportMargins((QMdiArea*)self);
}

/// Inherited from QAbstractScrollArea
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QMargins* (*slot)() ```
void q_mdiarea_on_viewport_margins(void* self, QMargins* (*slot)()) {
    QMdiArea_OnViewportMargins((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QFrame
///
/// [Qt documentation](https://doc.qt.io/qt-6/qframe.html#drawFrame)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QPainter* param1 ```
void q_mdiarea_draw_frame(void* self, void* param1) {
    QMdiArea_DrawFrame((QMdiArea*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QPainter* param1 ```
void q_mdiarea_qbase_draw_frame(void* self, void* param1) {
    QMdiArea_QBaseDrawFrame((QMdiArea*)self, (QPainter*)param1);
}

/// Inherited from QFrame
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)(QMdiArea*, QPainter*) ```
void q_mdiarea_on_draw_frame(void* self, void (*slot)(void*, void*)) {
    QMdiArea_OnDrawFrame((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_update_micro_focus(void* self) {
    QMdiArea_UpdateMicroFocus((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_qbase_update_micro_focus(void* self) {
    QMdiArea_QBaseUpdateMicroFocus((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)() ```
void q_mdiarea_on_update_micro_focus(void* self, void (*slot)()) {
    QMdiArea_OnUpdateMicroFocus((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_create(void* self) {
    QMdiArea_Create((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_qbase_create(void* self) {
    QMdiArea_QBaseCreate((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)() ```
void q_mdiarea_on_create(void* self, void (*slot)()) {
    QMdiArea_OnCreate((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_destroy(void* self) {
    QMdiArea_Destroy((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
void q_mdiarea_qbase_destroy(void* self) {
    QMdiArea_QBaseDestroy((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, void (*slot)() ```
void q_mdiarea_on_destroy(void* self, void (*slot)()) {
    QMdiArea_OnDestroy((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_focus_next_child(void* self) {
    return QMdiArea_FocusNextChild((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_qbase_focus_next_child(void* self) {
    return QMdiArea_QBaseFocusNextChild((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)() ```
void q_mdiarea_on_focus_next_child(void* self, bool (*slot)()) {
    QMdiArea_OnFocusNextChild((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_focus_previous_child(void* self) {
    return QMdiArea_FocusPreviousChild((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
bool q_mdiarea_qbase_focus_previous_child(void* self) {
    return QMdiArea_QBaseFocusPreviousChild((QMdiArea*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)() ```
void q_mdiarea_on_focus_previous_child(void* self, bool (*slot)()) {
    QMdiArea_OnFocusPreviousChild((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
QObject* q_mdiarea_sender(void* self) {
    return QMdiArea_Sender((QMdiArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
QObject* q_mdiarea_qbase_sender(void* self) {
    return QMdiArea_QBaseSender((QMdiArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, QObject* (*slot)() ```
void q_mdiarea_on_sender(void* self, QObject* (*slot)()) {
    QMdiArea_OnSender((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_sender_signal_index(void* self) {
    return QMdiArea_SenderSignalIndex((QMdiArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self ```
int32_t q_mdiarea_qbase_sender_signal_index(void* self) {
    return QMdiArea_QBaseSenderSignalIndex((QMdiArea*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)() ```
void q_mdiarea_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QMdiArea_OnSenderSignalIndex((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, const char* signal ```
int32_t q_mdiarea_receivers(void* self, const char* signal) {
    return QMdiArea_Receivers((QMdiArea*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, const char* signal ```
int32_t q_mdiarea_qbase_receivers(void* self, const char* signal) {
    return QMdiArea_QBaseReceivers((QMdiArea*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, int32_t (*slot)(QMdiArea*, const char*) ```
void q_mdiarea_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QMdiArea_OnReceivers((QMdiArea*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
bool q_mdiarea_is_signal_connected(void* self, void* signal) {
    return QMdiArea_IsSignalConnected((QMdiArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QMdiArea* self, QMetaMethod* signal ```
bool q_mdiarea_qbase_is_signal_connected(void* self, void* signal) {
    return QMdiArea_QBaseIsSignalConnected((QMdiArea*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QMdiArea* self, bool (*slot)(QMdiArea*, QMetaMethod*) ```
void q_mdiarea_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QMdiArea_OnIsSignalConnected((QMdiArea*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QMdiArea* self ```
void q_mdiarea_delete(void* self) {
    QMdiArea_Delete((QMdiArea*)(self));
}