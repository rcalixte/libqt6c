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
#include "libqtabbar.hpp"
#include "libqthread.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqwindow.hpp"
#include "libqcoreevent.hpp"
#include "libqtabwidget.hpp"
#include "libqtabwidget.h"

/// https://doc.qt.io/qt-6/qtabwidget.html

/// q_tabwidget_new constructs a new QTabWidget object.
///
/// ``` QWidget* parent ```
QTabWidget* q_tabwidget_new(void* parent) {
    return QTabWidget_new((QWidget*)parent);
}

/// q_tabwidget_new2 constructs a new QTabWidget object.
///
///
QTabWidget* q_tabwidget_new2() {
    return QTabWidget_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QTabWidget* self ```
QMetaObject* q_tabwidget_meta_object(void* self) {
    return QTabWidget_MetaObject((QTabWidget*)self);
}

/// ``` QTabWidget* self, const char* param1 ```
void* q_tabwidget_metacast(void* self, const char* param1) {
    return QTabWidget_Metacast((QTabWidget*)self, param1);
}

/// ``` QTabWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tabwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTabWidget_Metacall((QTabWidget*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, int32_t (*slot)(QTabWidget*, enum QMetaObject__Call, int, void*) ```
void q_tabwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTabWidget_OnMetacall((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_tabwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTabWidget_QBaseMetacall((QTabWidget*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_tabwidget_tr(const char* s) {
    libqt_string _str = QTabWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#addTab)
///
/// ``` QTabWidget* self, QWidget* widget, const char* param2 ```
int32_t q_tabwidget_add_tab(void* self, void* widget, const char* param2) {
    return QTabWidget_AddTab((QTabWidget*)self, (QWidget*)widget, qstring(param2));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#addTab)
///
/// ``` QTabWidget* self, QWidget* widget, QIcon* icon, const char* label ```
int32_t q_tabwidget_add_tab2(void* self, void* widget, void* icon, const char* label) {
    return QTabWidget_AddTab2((QTabWidget*)self, (QWidget*)widget, (QIcon*)icon, qstring(label));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#insertTab)
///
/// ``` QTabWidget* self, int index, QWidget* widget, const char* param3 ```
int32_t q_tabwidget_insert_tab(void* self, int index, void* widget, const char* param3) {
    return QTabWidget_InsertTab((QTabWidget*)self, index, (QWidget*)widget, qstring(param3));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#insertTab)
///
/// ``` QTabWidget* self, int index, QWidget* widget, QIcon* icon, const char* label ```
int32_t q_tabwidget_insert_tab2(void* self, int index, void* widget, void* icon, const char* label) {
    return QTabWidget_InsertTab2((QTabWidget*)self, index, (QWidget*)widget, (QIcon*)icon, qstring(label));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#removeTab)
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_remove_tab(void* self, int index) {
    QTabWidget_RemoveTab((QTabWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#isTabEnabled)
///
/// ``` QTabWidget* self, int index ```
bool q_tabwidget_is_tab_enabled(void* self, int index) {
    return QTabWidget_IsTabEnabled((QTabWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabEnabled)
///
/// ``` QTabWidget* self, int index, bool enabled ```
void q_tabwidget_set_tab_enabled(void* self, int index, bool enabled) {
    QTabWidget_SetTabEnabled((QTabWidget*)self, index, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#isTabVisible)
///
/// ``` QTabWidget* self, int index ```
bool q_tabwidget_is_tab_visible(void* self, int index) {
    return QTabWidget_IsTabVisible((QTabWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabVisible)
///
/// ``` QTabWidget* self, int index, bool visible ```
void q_tabwidget_set_tab_visible(void* self, int index, bool visible) {
    QTabWidget_SetTabVisible((QTabWidget*)self, index, visible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabText)
///
/// ``` QTabWidget* self, int index ```
const char* q_tabwidget_tab_text(void* self, int index) {
    libqt_string _str = QTabWidget_TabText((QTabWidget*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabText)
///
/// ``` QTabWidget* self, int index, const char* text ```
void q_tabwidget_set_tab_text(void* self, int index, const char* text) {
    QTabWidget_SetTabText((QTabWidget*)self, index, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabIcon)
///
/// ``` QTabWidget* self, int index ```
QIcon* q_tabwidget_tab_icon(void* self, int index) {
    return QTabWidget_TabIcon((QTabWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabIcon)
///
/// ``` QTabWidget* self, int index, QIcon* icon ```
void q_tabwidget_set_tab_icon(void* self, int index, void* icon) {
    QTabWidget_SetTabIcon((QTabWidget*)self, index, (QIcon*)icon);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabToolTip)
///
/// ``` QTabWidget* self, int index, const char* tip ```
void q_tabwidget_set_tab_tool_tip(void* self, int index, const char* tip) {
    QTabWidget_SetTabToolTip((QTabWidget*)self, index, qstring(tip));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabToolTip)
///
/// ``` QTabWidget* self, int index ```
const char* q_tabwidget_tab_tool_tip(void* self, int index) {
    libqt_string _str = QTabWidget_TabToolTip((QTabWidget*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabWhatsThis)
///
/// ``` QTabWidget* self, int index, const char* text ```
void q_tabwidget_set_tab_whats_this(void* self, int index, const char* text) {
    QTabWidget_SetTabWhatsThis((QTabWidget*)self, index, qstring(text));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabWhatsThis)
///
/// ``` QTabWidget* self, int index ```
const char* q_tabwidget_tab_whats_this(void* self, int index) {
    libqt_string _str = QTabWidget_TabWhatsThis((QTabWidget*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#currentIndex)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_current_index(void* self) {
    return QTabWidget_CurrentIndex((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#currentWidget)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_current_widget(void* self) {
    return QTabWidget_CurrentWidget((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#widget)
///
/// ``` QTabWidget* self, int index ```
QWidget* q_tabwidget_widget(void* self, int index) {
    return QTabWidget_Widget((QTabWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#indexOf)
///
/// ``` QTabWidget* self, QWidget* widget ```
int32_t q_tabwidget_index_of(void* self, void* widget) {
    return QTabWidget_IndexOf((QTabWidget*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#count)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_count(void* self) {
    return QTabWidget_Count((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabPosition)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_tab_position(void* self) {
    return QTabWidget_TabPosition((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabPosition)
///
/// ``` QTabWidget* self, enum QTabWidget__TabPosition position ```
void q_tabwidget_set_tab_position(void* self, int64_t position) {
    QTabWidget_SetTabPosition((QTabWidget*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabsClosable)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_tabs_closable(void* self) {
    return QTabWidget_TabsClosable((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabsClosable)
///
/// ``` QTabWidget* self, bool closeable ```
void q_tabwidget_set_tabs_closable(void* self, bool closeable) {
    QTabWidget_SetTabsClosable((QTabWidget*)self, closeable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#isMovable)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_movable(void* self) {
    return QTabWidget_IsMovable((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setMovable)
///
/// ``` QTabWidget* self, bool movable ```
void q_tabwidget_set_movable(void* self, bool movable) {
    QTabWidget_SetMovable((QTabWidget*)self, movable);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabShape)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_tab_shape(void* self) {
    return QTabWidget_TabShape((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabShape)
///
/// ``` QTabWidget* self, enum QTabWidget__TabShape s ```
void q_tabwidget_set_tab_shape(void* self, int64_t s) {
    QTabWidget_SetTabShape((QTabWidget*)self, s);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#sizeHint)
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_size_hint(void* self) {
    return QTabWidget_SizeHint((QTabWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, QSize* (*slot)() ```
void q_tabwidget_on_size_hint(void* self, QSize* (*slot)()) {
    QTabWidget_OnSizeHint((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_qbase_size_hint(void* self) {
    return QTabWidget_QBaseSizeHint((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#minimumSizeHint)
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_minimum_size_hint(void* self) {
    return QTabWidget_MinimumSizeHint((QTabWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, QSize* (*slot)() ```
void q_tabwidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTabWidget_OnMinimumSizeHint((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_qbase_minimum_size_hint(void* self) {
    return QTabWidget_QBaseMinimumSizeHint((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#heightForWidth)
///
/// ``` QTabWidget* self, int width ```
int32_t q_tabwidget_height_for_width(void* self, int width) {
    return QTabWidget_HeightForWidth((QTabWidget*)self, width);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, int32_t (*slot)(QTabWidget*, int) ```
void q_tabwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTabWidget_OnHeightForWidth((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, int width ```
int32_t q_tabwidget_qbase_height_for_width(void* self, int width) {
    return QTabWidget_QBaseHeightForWidth((QTabWidget*)self, width);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#hasHeightForWidth)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_has_height_for_width(void* self) {
    return QTabWidget_HasHeightForWidth((QTabWidget*)self);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, bool (*slot)() ```
void q_tabwidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QTabWidget_OnHasHeightForWidth((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self ```
bool q_tabwidget_qbase_has_height_for_width(void* self) {
    return QTabWidget_QBaseHasHeightForWidth((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setCornerWidget)
///
/// ``` QTabWidget* self, QWidget* w ```
void q_tabwidget_set_corner_widget(void* self, void* w) {
    QTabWidget_SetCornerWidget((QTabWidget*)self, (QWidget*)w);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#cornerWidget)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_corner_widget(void* self) {
    return QTabWidget_CornerWidget((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#elideMode)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_elide_mode(void* self) {
    return QTabWidget_ElideMode((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setElideMode)
///
/// ``` QTabWidget* self, enum Qt__TextElideMode mode ```
void q_tabwidget_set_elide_mode(void* self, int64_t mode) {
    QTabWidget_SetElideMode((QTabWidget*)self, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#iconSize)
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_icon_size(void* self) {
    return QTabWidget_IconSize((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setIconSize)
///
/// ``` QTabWidget* self, QSize* size ```
void q_tabwidget_set_icon_size(void* self, void* size) {
    QTabWidget_SetIconSize((QTabWidget*)self, (QSize*)size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#usesScrollButtons)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_uses_scroll_buttons(void* self) {
    return QTabWidget_UsesScrollButtons((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setUsesScrollButtons)
///
/// ``` QTabWidget* self, bool useButtons ```
void q_tabwidget_set_uses_scroll_buttons(void* self, bool useButtons) {
    QTabWidget_SetUsesScrollButtons((QTabWidget*)self, useButtons);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#documentMode)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_document_mode(void* self) {
    return QTabWidget_DocumentMode((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setDocumentMode)
///
/// ``` QTabWidget* self, bool set ```
void q_tabwidget_set_document_mode(void* self, bool set) {
    QTabWidget_SetDocumentMode((QTabWidget*)self, set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabBarAutoHide)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_tab_bar_auto_hide(void* self) {
    return QTabWidget_TabBarAutoHide((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabBarAutoHide)
///
/// ``` QTabWidget* self, bool enabled ```
void q_tabwidget_set_tab_bar_auto_hide(void* self, bool enabled) {
    QTabWidget_SetTabBarAutoHide((QTabWidget*)self, enabled);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#clear)
///
/// ``` QTabWidget* self ```
void q_tabwidget_clear(void* self) {
    QTabWidget_Clear((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabBar)
///
/// ``` QTabWidget* self ```
QTabBar* q_tabwidget_tab_bar(void* self) {
    return QTabWidget_TabBar((QTabWidget*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setCurrentIndex)
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_set_current_index(void* self, int index) {
    QTabWidget_SetCurrentIndex((QTabWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setCurrentWidget)
///
/// ``` QTabWidget* self, QWidget* widget ```
void q_tabwidget_set_current_widget(void* self, void* widget) {
    QTabWidget_SetCurrentWidget((QTabWidget*)self, (QWidget*)widget);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#currentChanged)
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_current_changed(void* self, int index) {
    QTabWidget_CurrentChanged((QTabWidget*)self, index);
}

/// ``` QTabWidget* self, void (*slot)(QTabWidget*, int) ```
void q_tabwidget_on_current_changed(void* self, void (*slot)(void*, int)) {
    QTabWidget_Connect_CurrentChanged((QTabWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabCloseRequested)
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_tab_close_requested(void* self, int index) {
    QTabWidget_TabCloseRequested((QTabWidget*)self, index);
}

/// ``` QTabWidget* self, void (*slot)(QTabWidget*, int) ```
void q_tabwidget_on_tab_close_requested(void* self, void (*slot)(void*, int)) {
    QTabWidget_Connect_TabCloseRequested((QTabWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabBarClicked)
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_tab_bar_clicked(void* self, int index) {
    QTabWidget_TabBarClicked((QTabWidget*)self, index);
}

/// ``` QTabWidget* self, void (*slot)(QTabWidget*, int) ```
void q_tabwidget_on_tab_bar_clicked(void* self, void (*slot)(void*, int)) {
    QTabWidget_Connect_TabBarClicked((QTabWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabBarDoubleClicked)
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_tab_bar_double_clicked(void* self, int index) {
    QTabWidget_TabBarDoubleClicked((QTabWidget*)self, index);
}

/// ``` QTabWidget* self, void (*slot)(QTabWidget*, int) ```
void q_tabwidget_on_tab_bar_double_clicked(void* self, void (*slot)(void*, int)) {
    QTabWidget_Connect_TabBarDoubleClicked((QTabWidget*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabInserted)
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_tab_inserted(void* self, int index) {
    QTabWidget_TabInserted((QTabWidget*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, int) ```
void q_tabwidget_on_tab_inserted(void* self, void (*slot)(void*, int)) {
    QTabWidget_OnTabInserted((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_qbase_tab_inserted(void* self, int index) {
    QTabWidget_QBaseTabInserted((QTabWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#tabRemoved)
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_tab_removed(void* self, int index) {
    QTabWidget_TabRemoved((QTabWidget*)self, index);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, int) ```
void q_tabwidget_on_tab_removed(void* self, void (*slot)(void*, int)) {
    QTabWidget_OnTabRemoved((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, int index ```
void q_tabwidget_qbase_tab_removed(void* self, int index) {
    QTabWidget_QBaseTabRemoved((QTabWidget*)self, index);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#showEvent)
///
/// ``` QTabWidget* self, QShowEvent* param1 ```
void q_tabwidget_show_event(void* self, void* param1) {
    QTabWidget_ShowEvent((QTabWidget*)self, (QShowEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QShowEvent*) ```
void q_tabwidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnShowEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, QShowEvent* param1 ```
void q_tabwidget_qbase_show_event(void* self, void* param1) {
    QTabWidget_QBaseShowEvent((QTabWidget*)self, (QShowEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#resizeEvent)
///
/// ``` QTabWidget* self, QResizeEvent* param1 ```
void q_tabwidget_resize_event(void* self, void* param1) {
    QTabWidget_ResizeEvent((QTabWidget*)self, (QResizeEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QResizeEvent*) ```
void q_tabwidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnResizeEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, QResizeEvent* param1 ```
void q_tabwidget_qbase_resize_event(void* self, void* param1) {
    QTabWidget_QBaseResizeEvent((QTabWidget*)self, (QResizeEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#keyPressEvent)
///
/// ``` QTabWidget* self, QKeyEvent* param1 ```
void q_tabwidget_key_press_event(void* self, void* param1) {
    QTabWidget_KeyPressEvent((QTabWidget*)self, (QKeyEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QKeyEvent*) ```
void q_tabwidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnKeyPressEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, QKeyEvent* param1 ```
void q_tabwidget_qbase_key_press_event(void* self, void* param1) {
    QTabWidget_QBaseKeyPressEvent((QTabWidget*)self, (QKeyEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#paintEvent)
///
/// ``` QTabWidget* self, QPaintEvent* param1 ```
void q_tabwidget_paint_event(void* self, void* param1) {
    QTabWidget_PaintEvent((QTabWidget*)self, (QPaintEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QPaintEvent*) ```
void q_tabwidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnPaintEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, QPaintEvent* param1 ```
void q_tabwidget_qbase_paint_event(void* self, void* param1) {
    QTabWidget_QBasePaintEvent((QTabWidget*)self, (QPaintEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setTabBar)
///
/// ``` QTabWidget* self, QTabBar* tabBar ```
void q_tabwidget_set_tab_bar(void* self, void* tabBar) {
    QTabWidget_SetTabBar((QTabWidget*)self, (QTabBar*)tabBar);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QTabBar*) ```
void q_tabwidget_on_set_tab_bar(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnSetTabBar((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, QTabBar* tabBar ```
void q_tabwidget_qbase_set_tab_bar(void* self, void* tabBar) {
    QTabWidget_QBaseSetTabBar((QTabWidget*)self, (QTabBar*)tabBar);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#changeEvent)
///
/// ``` QTabWidget* self, QEvent* param1 ```
void q_tabwidget_change_event(void* self, void* param1) {
    QTabWidget_ChangeEvent((QTabWidget*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QEvent*) ```
void q_tabwidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnChangeEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, QEvent* param1 ```
void q_tabwidget_qbase_change_event(void* self, void* param1) {
    QTabWidget_QBaseChangeEvent((QTabWidget*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#event)
///
/// ``` QTabWidget* self, QEvent* param1 ```
bool q_tabwidget_event(void* self, void* param1) {
    return QTabWidget_Event((QTabWidget*)self, (QEvent*)param1);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, bool (*slot)(QTabWidget*, QEvent*) ```
void q_tabwidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QTabWidget_OnEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, QEvent* param1 ```
bool q_tabwidget_qbase_event(void* self, void* param1) {
    return QTabWidget_QBaseEvent((QTabWidget*)self, (QEvent*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#initStyleOption)
///
/// ``` QTabWidget* self, QStyleOptionTabWidgetFrame* option ```
void q_tabwidget_init_style_option(void* self, void* option) {
    QTabWidget_InitStyleOption((QTabWidget*)self, (QStyleOptionTabWidgetFrame*)option);
}

/// Allows for overriding the related default method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QStyleOptionTabWidgetFrame*) ```
void q_tabwidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnInitStyleOption((QTabWidget*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QTabWidget* self, QStyleOptionTabWidgetFrame* option ```
void q_tabwidget_qbase_init_style_option(void* self, void* option) {
    QTabWidget_QBaseInitStyleOption((QTabWidget*)self, (QStyleOptionTabWidgetFrame*)option);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_tabwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QTabWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_tabwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTabWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#setCornerWidget)
///
/// ``` QTabWidget* self, QWidget* w, enum Qt__Corner corner ```
void q_tabwidget_set_corner_widget2(void* self, void* w, int64_t corner) {
    QTabWidget_SetCornerWidget2((QTabWidget*)self, (QWidget*)w, corner);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtabwidget.html#cornerWidget)
///
/// ``` QTabWidget* self, enum Qt__Corner corner ```
QWidget* q_tabwidget_corner_widget1(void* self, int64_t corner) {
    return QTabWidget_CornerWidget1((QTabWidget*)self, corner);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#winId)
///
/// ``` QTabWidget* self ```
uintptr_t q_tabwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWinId)
///
/// ``` QTabWidget* self ```
void q_tabwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
///
/// ``` QTabWidget* self ```
uintptr_t q_tabwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
///
/// ``` QTabWidget* self ```
uintptr_t q_tabwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#style)
///
/// ``` QTabWidget* self ```
QStyle* q_tabwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyle)
///
/// ``` QTabWidget* self, QStyle* style ```
void q_tabwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindow)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isModal)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowModality)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
///
/// ``` QTabWidget* self, enum Qt__WindowModality windowModality ```
void q_tabwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
///
/// ``` QTabWidget* self, QWidget* param1 ```
bool q_tabwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
///
/// ``` QTabWidget* self, bool enabled ```
void q_tabwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
///
/// ``` QTabWidget* self, bool disabled ```
void q_tabwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
///
/// ``` QTabWidget* self, bool windowModified ```
void q_tabwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
///
/// ``` QTabWidget* self ```
QRect* q_tabwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#geometry)
///
/// ``` QTabWidget* self ```
QRect* q_tabwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
///
/// ``` QTabWidget* self ```
QRect* q_tabwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#x)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#y)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#pos)
///
/// ``` QTabWidget* self ```
QPoint* q_tabwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#frameSize)
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#size)
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#width)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#height)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#rect)
///
/// ``` QTabWidget* self ```
QRect* q_tabwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
///
/// ``` QTabWidget* self ```
QRect* q_tabwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
///
/// ``` QTabWidget* self ```
QRegion* q_tabwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTabWidget* self, QSize* minimumSize ```
void q_tabwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
///
/// ``` QTabWidget* self, int minw, int minh ```
void q_tabwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTabWidget* self, QSize* maximumSize ```
void q_tabwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
///
/// ``` QTabWidget* self, int maxw, int maxh ```
void q_tabwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
///
/// ``` QTabWidget* self, int minw ```
void q_tabwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
///
/// ``` QTabWidget* self, int minh ```
void q_tabwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
///
/// ``` QTabWidget* self, int maxw ```
void q_tabwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
///
/// ``` QTabWidget* self, int maxh ```
void q_tabwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTabWidget* self, QSize* sizeIncrement ```
void q_tabwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
///
/// ``` QTabWidget* self, int w, int h ```
void q_tabwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#baseSize)
///
/// ``` QTabWidget* self ```
QSize* q_tabwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTabWidget* self, QSize* baseSize ```
void q_tabwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
///
/// ``` QTabWidget* self, int basew, int baseh ```
void q_tabwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTabWidget* self, QSize* fixedSize ```
void q_tabwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
///
/// ``` QTabWidget* self, int w, int h ```
void q_tabwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
///
/// ``` QTabWidget* self, int w ```
void q_tabwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
///
/// ``` QTabWidget* self, int h ```
void q_tabwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTabWidget* self, QPointF* param1 ```
QPointF* q_tabwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
///
/// ``` QTabWidget* self, QPoint* param1 ```
QPoint* q_tabwidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTabWidget* self, QPointF* param1 ```
QPointF* q_tabwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
///
/// ``` QTabWidget* self, QPoint* param1 ```
QPoint* q_tabwidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTabWidget* self, QPointF* param1 ```
QPointF* q_tabwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
///
/// ``` QTabWidget* self, QPoint* param1 ```
QPoint* q_tabwidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTabWidget* self, QPointF* param1 ```
QPointF* q_tabwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
///
/// ``` QTabWidget* self, QPoint* param1 ```
QPoint* q_tabwidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTabWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tabwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapTo)
///
/// ``` QTabWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tabwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTabWidget* self, QWidget* param1, QPointF* param2 ```
QPointF* q_tabwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mapFrom)
///
/// ``` QTabWidget* self, QWidget* param1, QPoint* param2 ```
QPoint* q_tabwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#window)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#palette)
///
/// ``` QTabWidget* self ```
QPalette* q_tabwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setPalette)
///
/// ``` QTabWidget* self, QPalette* palette ```
void q_tabwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
///
/// ``` QTabWidget* self, enum QPalette__ColorRole backgroundRole ```
void q_tabwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
///
/// ``` QTabWidget* self, enum QPalette__ColorRole foregroundRole ```
void q_tabwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#font)
///
/// ``` QTabWidget* self ```
QFont* q_tabwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFont)
///
/// ``` QTabWidget* self, QFont* font ```
void q_tabwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
///
/// ``` QTabWidget* self ```
QFontMetrics* q_tabwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
///
/// ``` QTabWidget* self ```
QFontInfo* q_tabwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#cursor)
///
/// ``` QTabWidget* self ```
QCursor* q_tabwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setCursor)
///
/// ``` QTabWidget* self, QCursor* cursor ```
void q_tabwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
///
/// ``` QTabWidget* self ```
void q_tabwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
///
/// ``` QTabWidget* self, bool enable ```
void q_tabwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#underMouse)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
///
/// ``` QTabWidget* self, bool enable ```
void q_tabwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTabWidget* self, QBitmap* mask ```
void q_tabwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setMask)
///
/// ``` QTabWidget* self, QRegion* mask ```
void q_tabwidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mask)
///
/// ``` QTabWidget* self ```
QRegion* q_tabwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearMask)
///
/// ``` QTabWidget* self ```
void q_tabwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabWidget* self, QPaintDevice* target ```
void q_tabwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabWidget* self, QPainter* painter ```
void q_tabwidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTabWidget* self ```
QPixmap* q_tabwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
///
/// ``` QTabWidget* self ```
QGraphicsEffect* q_tabwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
///
/// ``` QTabWidget* self, QGraphicsEffect* effect ```
void q_tabwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTabWidget* self, enum Qt__GestureType typeVal ```
void q_tabwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
///
/// ``` QTabWidget* self, enum Qt__GestureType typeVal ```
void q_tabwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
///
/// ``` QTabWidget* self, const char* windowTitle ```
void q_tabwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
///
/// ``` QTabWidget* self, const char* styleSheet ```
void q_tabwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#styleSheet)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
///
/// ``` QTabWidget* self, QIcon* icon ```
void q_tabwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
///
/// ``` QTabWidget* self ```
QIcon* q_tabwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
///
/// ``` QTabWidget* self, const char* windowIconText ```
void q_tabwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconText)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
///
/// ``` QTabWidget* self, const char* windowRole ```
void q_tabwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowRole)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
///
/// ``` QTabWidget* self, const char* filePath ```
void q_tabwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFilePath)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
///
/// ``` QTabWidget* self, double level ```
void q_tabwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
///
/// ``` QTabWidget* self ```
double q_tabwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
///
/// ``` QTabWidget* self, const char* toolTip ```
void q_tabwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTip)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
///
/// ``` QTabWidget* self, int msec ```
void q_tabwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
///
/// ``` QTabWidget* self, const char* statusTip ```
void q_tabwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#statusTip)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
///
/// ``` QTabWidget* self, const char* whatsThis ```
void q_tabwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#whatsThis)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
///
/// ``` QTabWidget* self, const char* name ```
void q_tabwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#accessibleDescription)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
///
/// ``` QTabWidget* self, const char* description ```
void q_tabwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayoutDirection)
///
/// ``` QTabWidget* self, enum Qt__LayoutDirection direction ```
void q_tabwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
///
/// ``` QTabWidget* self ```
void q_tabwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLocale)
///
/// ``` QTabWidget* self, QLocale* locale ```
void q_tabwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#locale)
///
/// ``` QTabWidget* self ```
QLocale* q_tabwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
///
/// ``` QTabWidget* self ```
void q_tabwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTabWidget* self ```
void q_tabwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
///
/// ``` QTabWidget* self ```
void q_tabwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
///
/// ``` QTabWidget* self ```
void q_tabwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocus)
///
/// ``` QTabWidget* self, enum Qt__FocusReason reason ```
void q_tabwidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
///
/// ``` QTabWidget* self, enum Qt__FocusPolicy policy ```
void q_tabwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setTabOrder)
///
/// ``` QWidget* param1, QWidget* param2 ```
void q_tabwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
///
/// ``` QTabWidget* self, QWidget* focusProxy ```
void q_tabwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
///
/// ``` QTabWidget* self, enum Qt__ContextMenuPolicy policy ```
void q_tabwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTabWidget* self ```
void q_tabwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
///
/// ``` QTabWidget* self, QCursor* param1 ```
void q_tabwidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
///
/// ``` QTabWidget* self ```
void q_tabwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
///
/// ``` QTabWidget* self ```
void q_tabwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
///
/// ``` QTabWidget* self ```
void q_tabwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTabWidget* self, QKeySequence* key ```
int32_t q_tabwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
///
/// ``` QTabWidget* self, int id ```
void q_tabwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTabWidget* self, int id ```
void q_tabwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTabWidget* self, int id ```
void q_tabwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
///
///
QWidget* q_tabwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
///
///
QWidget* q_tabwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
///
/// ``` QTabWidget* self, bool enable ```
void q_tabwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
///
/// ``` QTabWidget* self ```
QGraphicsProxyWidget* q_tabwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTabWidget* self ```
void q_tabwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTabWidget* self ```
void q_tabwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTabWidget* self, int x, int y, int w, int h ```
void q_tabwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTabWidget* self, QRect* param1 ```
void q_tabwidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#update)
///
/// ``` QTabWidget* self, QRegion* param1 ```
void q_tabwidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTabWidget* self, int x, int y, int w, int h ```
void q_tabwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTabWidget* self, QRect* param1 ```
void q_tabwidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#repaint)
///
/// ``` QTabWidget* self, QRegion* param1 ```
void q_tabwidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setHidden)
///
/// ``` QTabWidget* self, bool hidden ```
void q_tabwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#show)
///
/// ``` QTabWidget* self ```
void q_tabwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hide)
///
/// ``` QTabWidget* self ```
void q_tabwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
///
/// ``` QTabWidget* self ```
void q_tabwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
///
/// ``` QTabWidget* self ```
void q_tabwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
///
/// ``` QTabWidget* self ```
void q_tabwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#showNormal)
///
/// ``` QTabWidget* self ```
void q_tabwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#close)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#raise)
///
/// ``` QTabWidget* self ```
void q_tabwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#lower)
///
/// ``` QTabWidget* self ```
void q_tabwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
///
/// ``` QTabWidget* self, QWidget* param1 ```
void q_tabwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTabWidget* self, int x, int y ```
void q_tabwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#move)
///
/// ``` QTabWidget* self, QPoint* param1 ```
void q_tabwidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTabWidget* self, int w, int h ```
void q_tabwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#resize)
///
/// ``` QTabWidget* self, QSize* param1 ```
void q_tabwidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTabWidget* self, int x, int y, int w, int h ```
void q_tabwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
///
/// ``` QTabWidget* self, QRect* geometry ```
void q_tabwidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
///
/// ``` QTabWidget* self ```
char* q_tabwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
///
/// ``` QTabWidget* self, const char* geometry ```
bool q_tabwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
///
/// ``` QTabWidget* self ```
void q_tabwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisible)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
///
/// ``` QTabWidget* self, QWidget* param1 ```
bool q_tabwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isHidden)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowState)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
///
/// ``` QTabWidget* self, int state ```
void q_tabwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
///
/// ``` QTabWidget* self, int state ```
void q_tabwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
///
/// ``` QTabWidget* self ```
QSizePolicy* q_tabwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTabWidget* self, QSizePolicy* sizePolicy ```
void q_tabwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
///
/// ``` QTabWidget* self, enum QSizePolicy__Policy horizontal, enum QSizePolicy__Policy vertical ```
void q_tabwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
///
/// ``` QTabWidget* self ```
QRegion* q_tabwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTabWidget* self, int left, int top, int right, int bottom ```
void q_tabwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
///
/// ``` QTabWidget* self, QMargins* margins ```
void q_tabwidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
///
/// ``` QTabWidget* self ```
QMargins* q_tabwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
///
/// ``` QTabWidget* self ```
QRect* q_tabwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#layout)
///
/// ``` QTabWidget* self ```
QLayout* q_tabwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setLayout)
///
/// ``` QTabWidget* self, QLayout* layout ```
void q_tabwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
///
/// ``` QTabWidget* self ```
void q_tabwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTabWidget* self, QWidget* parent ```
void q_tabwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setParent)
///
/// ``` QTabWidget* self, QWidget* parent, int f ```
void q_tabwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTabWidget* self, int dx, int dy ```
void q_tabwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#scroll)
///
/// ``` QTabWidget* self, int dx, int dy, QRect* param3 ```
void q_tabwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
///
/// ``` QTabWidget* self, bool on ```
void q_tabwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabWidget* self, QAction* action ```
void q_tabwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addActions)
///
/// ``` QTabWidget* self, QAction* actions[] ```
void q_tabwidget_add_actions(void* self, void* actions[]) {
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
/// ``` QTabWidget* self, QAction* before, QAction* actions[] ```
void q_tabwidget_insert_actions(void* self, void* before, void* actions[]) {
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
/// ``` QTabWidget* self, QAction* before, QAction* action ```
void q_tabwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#removeAction)
///
/// ``` QTabWidget* self, QAction* action ```
void q_tabwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actions)
///
/// ``` QTabWidget* self ```
libqt_list /* of QAction* */ q_tabwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabWidget* self, const char* text ```
QAction* q_tabwidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabWidget* self, QIcon* icon, const char* text ```
QAction* q_tabwidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabWidget* self, const char* text, QKeySequence* shortcut ```
QAction* q_tabwidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#addAction)
///
/// ``` QTabWidget* self, QIcon* icon, const char* text, QKeySequence* shortcut ```
QAction* q_tabwidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
///
/// ``` QTabWidget* self ```
QWidget* q_tabwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
///
/// ``` QTabWidget* self, int typeVal ```
void q_tabwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTabWidget* self, enum Qt__WindowType param1 ```
void q_tabwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
///
/// ``` QTabWidget* self, int typeVal ```
void q_tabwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowType)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#find)
///
/// ``` uint64_t param1 ```
QWidget* q_tabwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTabWidget* self, int x, int y ```
QWidget* q_tabwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#childAt)
///
/// ``` QTabWidget* self, QPoint* p ```
QWidget* q_tabwidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTabWidget* self, enum Qt__WidgetAttribute param1 ```
void q_tabwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
///
/// ``` QTabWidget* self, enum Qt__WidgetAttribute param1 ```
bool q_tabwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
///
/// ``` QTabWidget* self ```
void q_tabwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
///
/// ``` QTabWidget* self, QWidget* child ```
bool q_tabwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
///
/// ``` QTabWidget* self, bool enabled ```
void q_tabwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#backingStore)
///
/// ``` QTabWidget* self ```
QBackingStore* q_tabwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
///
/// ``` QTabWidget* self ```
QWindow* q_tabwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#screen)
///
/// ``` QTabWidget* self ```
QScreen* q_tabwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setScreen)
///
/// ``` QTabWidget* self, QScreen* screen ```
void q_tabwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window ```
QWidget* q_tabwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
///
/// ``` QTabWidget* self, const char* title ```
void q_tabwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

/// Inherited from QWidget
///
/// ``` QTabWidget* self, void (*slot)(QWidget*, const char*) ```
void q_tabwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
///
/// ``` QTabWidget* self, QIcon* icon ```
void q_tabwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

/// Inherited from QWidget
///
/// ``` QTabWidget* self, void (*slot)(QWidget*, QIcon*) ```
void q_tabwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
///
/// ``` QTabWidget* self, const char* iconText ```
void q_tabwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

/// Inherited from QWidget
///
/// ``` QTabWidget* self, void (*slot)(QWidget*, const char*) ```
void q_tabwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
///
/// ``` QTabWidget* self, QPoint* pos ```
void q_tabwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

/// Inherited from QWidget
///
/// ``` QTabWidget* self, void (*slot)(QWidget*, QPoint*) ```
void q_tabwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
///
/// ``` QTabWidget* self ```
int64_t q_tabwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
///
/// ``` QTabWidget* self, int hints ```
void q_tabwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabWidget* self, QPaintDevice* target, QPoint* targetOffset ```
void q_tabwidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tabwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabWidget* self, QPaintDevice* target, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tabwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabWidget* self, QPainter* painter, QPoint* targetOffset ```
void q_tabwidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion ```
void q_tabwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#render)
///
/// ``` QTabWidget* self, QPainter* painter, QPoint* targetOffset, QRegion* sourceRegion, int renderFlags ```
void q_tabwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grab)
///
/// ``` QTabWidget* self, QRect* rectangle ```
QPixmap* q_tabwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
///
/// ``` QTabWidget* self, enum Qt__GestureType typeVal, int flags ```
void q_tabwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
///
/// ``` QTabWidget* self, QKeySequence* key, enum Qt__ShortcutContext context ```
int32_t q_tabwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
///
/// ``` QTabWidget* self, int id, bool enable ```
void q_tabwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
///
/// ``` QTabWidget* self, int id, bool enable ```
void q_tabwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
///
/// ``` QTabWidget* self, enum Qt__WindowType param1, bool on ```
void q_tabwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
///
/// ``` QTabWidget* self, enum Qt__WidgetAttribute param1, bool on ```
void q_tabwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent ```
QWidget* q_tabwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
///
/// ``` QWindow* window, QWidget* parent, int flags ```
QWidget* q_tabwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QTabWidget* self ```
const char* q_tabwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QTabWidget* self, const char* name ```
void q_tabwidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QTabWidget* self, bool b ```
bool q_tabwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QTabWidget* self ```
QThread* q_tabwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QTabWidget* self, QThread* thread ```
void q_tabwidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTabWidget* self, int interval ```
int32_t q_tabwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QTabWidget* self, int id ```
void q_tabwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QTabWidget* self ```
libqt_list /* of QObject* */ q_tabwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QTabWidget* self, QObject* filterObj ```
void q_tabwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QTabWidget* self, QObject* obj ```
void q_tabwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_tabwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTabWidget* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_tabwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_tabwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_tabwidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QTabWidget* self ```
void q_tabwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QTabWidget* self ```
void q_tabwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QTabWidget* self, const char* name, QVariant* value ```
bool q_tabwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QTabWidget* self, const char* name ```
QVariant* q_tabwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QTabWidget* self ```
const char** q_tabwidget_dynamic_property_names(void* self) {
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
/// ``` QTabWidget* self ```
QBindingStorage* q_tabwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QTabWidget* self ```
QBindingStorage* q_tabwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTabWidget* self ```
void q_tabwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QTabWidget* self, void (*slot)(QObject*) ```
void q_tabwidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QTabWidget* self ```
QObject* q_tabwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QTabWidget* self, const char* classname ```
bool q_tabwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QTabWidget* self ```
void q_tabwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QTabWidget* self, int interval, enum Qt__TimerType timerType ```
int32_t q_tabwidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tabwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QTabWidget* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_tabwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QTabWidget* self, QObject* param1 ```
void q_tabwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QTabWidget* self, void (*slot)(QObject*, QObject*) ```
void q_tabwidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
///
/// ``` QTabWidget* self ```
bool q_tabwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
///
/// ``` QTabWidget* self ```
double q_tabwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
///
/// ``` QTabWidget* self ```
double q_tabwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

/// Inherited from QPaintDevice
///
/// [Qt documentation](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
///
///
double q_tabwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#devType)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_dev_type(void* self) {
    return QTabWidget_DevType((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_qbase_dev_type(void* self) {
    return QTabWidget_QBaseDevType((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, int32_t (*slot)() ```
void q_tabwidget_on_dev_type(void* self, int32_t (*slot)()) {
    QTabWidget_OnDevType((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#setVisible)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, bool visible ```
void q_tabwidget_set_visible(void* self, bool visible) {
    QTabWidget_SetVisible((QTabWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, bool visible ```
void q_tabwidget_qbase_set_visible(void* self, bool visible) {
    QTabWidget_QBaseSetVisible((QTabWidget*)self, visible);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, bool) ```
void q_tabwidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTabWidget_OnSetVisible((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
QPaintEngine* q_tabwidget_paint_engine(void* self) {
    return QTabWidget_PaintEngine((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
QPaintEngine* q_tabwidget_qbase_paint_engine(void* self) {
    return QTabWidget_QBasePaintEngine((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, QPaintEngine* (*slot)() ```
void q_tabwidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTabWidget_OnPaintEngine((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QMouseEvent* event ```
void q_tabwidget_mouse_press_event(void* self, void* event) {
    QTabWidget_MousePressEvent((QTabWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QMouseEvent* event ```
void q_tabwidget_qbase_mouse_press_event(void* self, void* event) {
    QTabWidget_QBaseMousePressEvent((QTabWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QMouseEvent*) ```
void q_tabwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMousePressEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QMouseEvent* event ```
void q_tabwidget_mouse_release_event(void* self, void* event) {
    QTabWidget_MouseReleaseEvent((QTabWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QMouseEvent* event ```
void q_tabwidget_qbase_mouse_release_event(void* self, void* event) {
    QTabWidget_QBaseMouseReleaseEvent((QTabWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QMouseEvent*) ```
void q_tabwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMouseReleaseEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QMouseEvent* event ```
void q_tabwidget_mouse_double_click_event(void* self, void* event) {
    QTabWidget_MouseDoubleClickEvent((QTabWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QMouseEvent* event ```
void q_tabwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QTabWidget_QBaseMouseDoubleClickEvent((QTabWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QMouseEvent*) ```
void q_tabwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMouseDoubleClickEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QMouseEvent* event ```
void q_tabwidget_mouse_move_event(void* self, void* event) {
    QTabWidget_MouseMoveEvent((QTabWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QMouseEvent* event ```
void q_tabwidget_qbase_mouse_move_event(void* self, void* event) {
    QTabWidget_QBaseMouseMoveEvent((QTabWidget*)self, (QMouseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QMouseEvent*) ```
void q_tabwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMouseMoveEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QWheelEvent* event ```
void q_tabwidget_wheel_event(void* self, void* event) {
    QTabWidget_WheelEvent((QTabWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QWheelEvent* event ```
void q_tabwidget_qbase_wheel_event(void* self, void* event) {
    QTabWidget_QBaseWheelEvent((QTabWidget*)self, (QWheelEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QWheelEvent*) ```
void q_tabwidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnWheelEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QKeyEvent* event ```
void q_tabwidget_key_release_event(void* self, void* event) {
    QTabWidget_KeyReleaseEvent((QTabWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QKeyEvent* event ```
void q_tabwidget_qbase_key_release_event(void* self, void* event) {
    QTabWidget_QBaseKeyReleaseEvent((QTabWidget*)self, (QKeyEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QKeyEvent*) ```
void q_tabwidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnKeyReleaseEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QFocusEvent* event ```
void q_tabwidget_focus_in_event(void* self, void* event) {
    QTabWidget_FocusInEvent((QTabWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QFocusEvent* event ```
void q_tabwidget_qbase_focus_in_event(void* self, void* event) {
    QTabWidget_QBaseFocusInEvent((QTabWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QFocusEvent*) ```
void q_tabwidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnFocusInEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QFocusEvent* event ```
void q_tabwidget_focus_out_event(void* self, void* event) {
    QTabWidget_FocusOutEvent((QTabWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QFocusEvent* event ```
void q_tabwidget_qbase_focus_out_event(void* self, void* event) {
    QTabWidget_QBaseFocusOutEvent((QTabWidget*)self, (QFocusEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QFocusEvent*) ```
void q_tabwidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnFocusOutEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QEnterEvent* event ```
void q_tabwidget_enter_event(void* self, void* event) {
    QTabWidget_EnterEvent((QTabWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QEnterEvent* event ```
void q_tabwidget_qbase_enter_event(void* self, void* event) {
    QTabWidget_QBaseEnterEvent((QTabWidget*)self, (QEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QEnterEvent*) ```
void q_tabwidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnEnterEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QEvent* event ```
void q_tabwidget_leave_event(void* self, void* event) {
    QTabWidget_LeaveEvent((QTabWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QEvent* event ```
void q_tabwidget_qbase_leave_event(void* self, void* event) {
    QTabWidget_QBaseLeaveEvent((QTabWidget*)self, (QEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QEvent*) ```
void q_tabwidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnLeaveEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QMoveEvent* event ```
void q_tabwidget_move_event(void* self, void* event) {
    QTabWidget_MoveEvent((QTabWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QMoveEvent* event ```
void q_tabwidget_qbase_move_event(void* self, void* event) {
    QTabWidget_QBaseMoveEvent((QTabWidget*)self, (QMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QMoveEvent*) ```
void q_tabwidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMoveEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QCloseEvent* event ```
void q_tabwidget_close_event(void* self, void* event) {
    QTabWidget_CloseEvent((QTabWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QCloseEvent* event ```
void q_tabwidget_qbase_close_event(void* self, void* event) {
    QTabWidget_QBaseCloseEvent((QTabWidget*)self, (QCloseEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QCloseEvent*) ```
void q_tabwidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnCloseEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QContextMenuEvent* event ```
void q_tabwidget_context_menu_event(void* self, void* event) {
    QTabWidget_ContextMenuEvent((QTabWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QContextMenuEvent* event ```
void q_tabwidget_qbase_context_menu_event(void* self, void* event) {
    QTabWidget_QBaseContextMenuEvent((QTabWidget*)self, (QContextMenuEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QContextMenuEvent*) ```
void q_tabwidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnContextMenuEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QTabletEvent* event ```
void q_tabwidget_tablet_event(void* self, void* event) {
    QTabWidget_TabletEvent((QTabWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QTabletEvent* event ```
void q_tabwidget_qbase_tablet_event(void* self, void* event) {
    QTabWidget_QBaseTabletEvent((QTabWidget*)self, (QTabletEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QTabletEvent*) ```
void q_tabwidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnTabletEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QActionEvent* event ```
void q_tabwidget_action_event(void* self, void* event) {
    QTabWidget_ActionEvent((QTabWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QActionEvent* event ```
void q_tabwidget_qbase_action_event(void* self, void* event) {
    QTabWidget_QBaseActionEvent((QTabWidget*)self, (QActionEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QActionEvent*) ```
void q_tabwidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnActionEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QDragEnterEvent* event ```
void q_tabwidget_drag_enter_event(void* self, void* event) {
    QTabWidget_DragEnterEvent((QTabWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QDragEnterEvent* event ```
void q_tabwidget_qbase_drag_enter_event(void* self, void* event) {
    QTabWidget_QBaseDragEnterEvent((QTabWidget*)self, (QDragEnterEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QDragEnterEvent*) ```
void q_tabwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDragEnterEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QDragMoveEvent* event ```
void q_tabwidget_drag_move_event(void* self, void* event) {
    QTabWidget_DragMoveEvent((QTabWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QDragMoveEvent* event ```
void q_tabwidget_qbase_drag_move_event(void* self, void* event) {
    QTabWidget_QBaseDragMoveEvent((QTabWidget*)self, (QDragMoveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QDragMoveEvent*) ```
void q_tabwidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDragMoveEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QDragLeaveEvent* event ```
void q_tabwidget_drag_leave_event(void* self, void* event) {
    QTabWidget_DragLeaveEvent((QTabWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QDragLeaveEvent* event ```
void q_tabwidget_qbase_drag_leave_event(void* self, void* event) {
    QTabWidget_QBaseDragLeaveEvent((QTabWidget*)self, (QDragLeaveEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QDragLeaveEvent*) ```
void q_tabwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDragLeaveEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QDropEvent* event ```
void q_tabwidget_drop_event(void* self, void* event) {
    QTabWidget_DropEvent((QTabWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QDropEvent* event ```
void q_tabwidget_qbase_drop_event(void* self, void* event) {
    QTabWidget_QBaseDropEvent((QTabWidget*)self, (QDropEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QDropEvent*) ```
void q_tabwidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDropEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QHideEvent* event ```
void q_tabwidget_hide_event(void* self, void* event) {
    QTabWidget_HideEvent((QTabWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QHideEvent* event ```
void q_tabwidget_qbase_hide_event(void* self, void* event) {
    QTabWidget_QBaseHideEvent((QTabWidget*)self, (QHideEvent*)event);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QHideEvent*) ```
void q_tabwidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnHideEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_tabwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTabWidget_NativeEvent((QTabWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, const char* eventType, void* message, intptr_t* result ```
bool q_tabwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTabWidget_QBaseNativeEvent((QTabWidget*)self, qstring(eventType), message, result);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, bool (*slot)(QTabWidget*, const char*, void*, intptr_t*) ```
void q_tabwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTabWidget_OnNativeEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#metric)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tabwidget_metric(void* self, int64_t param1) {
    return QTabWidget_Metric((QTabWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_tabwidget_qbase_metric(void* self, int64_t param1) {
    return QTabWidget_QBaseMetric((QTabWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, int32_t (*slot)(QTabWidget*, enum QPaintDevice__PaintDeviceMetric) ```
void q_tabwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTabWidget_OnMetric((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#initPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QPainter* painter ```
void q_tabwidget_init_painter(void* self, void* painter) {
    QTabWidget_InitPainter((QTabWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QPainter* painter ```
void q_tabwidget_qbase_init_painter(void* self, void* painter) {
    QTabWidget_QBaseInitPainter((QTabWidget*)self, (QPainter*)painter);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QPainter*) ```
void q_tabwidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnInitPainter((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#redirected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QPoint* offset ```
QPaintDevice* q_tabwidget_redirected(void* self, void* offset) {
    return QTabWidget_Redirected((QTabWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QPoint* offset ```
QPaintDevice* q_tabwidget_qbase_redirected(void* self, void* offset) {
    return QTabWidget_QBaseRedirected((QTabWidget*)self, (QPoint*)offset);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, QPaintDevice* (*slot)(QTabWidget*, QPoint*) ```
void q_tabwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTabWidget_OnRedirected((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
QPainter* q_tabwidget_shared_painter(void* self) {
    return QTabWidget_SharedPainter((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
QPainter* q_tabwidget_qbase_shared_painter(void* self) {
    return QTabWidget_QBaseSharedPainter((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, QPainter* (*slot)() ```
void q_tabwidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTabWidget_OnSharedPainter((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QInputMethodEvent* param1 ```
void q_tabwidget_input_method_event(void* self, void* param1) {
    QTabWidget_InputMethodEvent((QTabWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QInputMethodEvent* param1 ```
void q_tabwidget_qbase_input_method_event(void* self, void* param1) {
    QTabWidget_QBaseInputMethodEvent((QTabWidget*)self, (QInputMethodEvent*)param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QInputMethodEvent*) ```
void q_tabwidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnInputMethodEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_tabwidget_input_method_query(void* self, int64_t param1) {
    return QTabWidget_InputMethodQuery((QTabWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, enum Qt__InputMethodQuery param1 ```
QVariant* q_tabwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QTabWidget_QBaseInputMethodQuery((QTabWidget*)self, param1);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, QVariant* (*slot)(QTabWidget*, enum Qt__InputMethodQuery) ```
void q_tabwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTabWidget_OnInputMethodQuery((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, bool next ```
bool q_tabwidget_focus_next_prev_child(void* self, bool next) {
    return QTabWidget_FocusNextPrevChild((QTabWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, bool next ```
bool q_tabwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QTabWidget_QBaseFocusNextPrevChild((QTabWidget*)self, next);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, bool (*slot)(QTabWidget*, bool) ```
void q_tabwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTabWidget_OnFocusNextPrevChild((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QObject* watched, QEvent* event ```
bool q_tabwidget_event_filter(void* self, void* watched, void* event) {
    return QTabWidget_EventFilter((QTabWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QObject* watched, QEvent* event ```
bool q_tabwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QTabWidget_QBaseEventFilter((QTabWidget*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, bool (*slot)(QTabWidget*, QObject*, QEvent*) ```
void q_tabwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTabWidget_OnEventFilter((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QTimerEvent* event ```
void q_tabwidget_timer_event(void* self, void* event) {
    QTabWidget_TimerEvent((QTabWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QTimerEvent* event ```
void q_tabwidget_qbase_timer_event(void* self, void* event) {
    QTabWidget_QBaseTimerEvent((QTabWidget*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QTimerEvent*) ```
void q_tabwidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnTimerEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QChildEvent* event ```
void q_tabwidget_child_event(void* self, void* event) {
    QTabWidget_ChildEvent((QTabWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QChildEvent* event ```
void q_tabwidget_qbase_child_event(void* self, void* event) {
    QTabWidget_QBaseChildEvent((QTabWidget*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QChildEvent*) ```
void q_tabwidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnChildEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QEvent* event ```
void q_tabwidget_custom_event(void* self, void* event) {
    QTabWidget_CustomEvent((QTabWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QEvent* event ```
void q_tabwidget_qbase_custom_event(void* self, void* event) {
    QTabWidget_QBaseCustomEvent((QTabWidget*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QEvent*) ```
void q_tabwidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnCustomEvent((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QMetaMethod* signal ```
void q_tabwidget_connect_notify(void* self, void* signal) {
    QTabWidget_ConnectNotify((QTabWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QMetaMethod* signal ```
void q_tabwidget_qbase_connect_notify(void* self, void* signal) {
    QTabWidget_QBaseConnectNotify((QTabWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QMetaMethod*) ```
void q_tabwidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnConnectNotify((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QMetaMethod* signal ```
void q_tabwidget_disconnect_notify(void* self, void* signal) {
    QTabWidget_DisconnectNotify((QTabWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QMetaMethod* signal ```
void q_tabwidget_qbase_disconnect_notify(void* self, void* signal) {
    QTabWidget_QBaseDisconnectNotify((QTabWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)(QTabWidget*, QMetaMethod*) ```
void q_tabwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDisconnectNotify((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
void q_tabwidget_update_micro_focus(void* self) {
    QTabWidget_UpdateMicroFocus((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
void q_tabwidget_qbase_update_micro_focus(void* self) {
    QTabWidget_QBaseUpdateMicroFocus((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)() ```
void q_tabwidget_on_update_micro_focus(void* self, void (*slot)()) {
    QTabWidget_OnUpdateMicroFocus((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#create)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
void q_tabwidget_create(void* self) {
    QTabWidget_Create((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
void q_tabwidget_qbase_create(void* self) {
    QTabWidget_QBaseCreate((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)() ```
void q_tabwidget_on_create(void* self, void (*slot)()) {
    QTabWidget_OnCreate((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#destroy)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
void q_tabwidget_destroy(void* self) {
    QTabWidget_Destroy((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
void q_tabwidget_qbase_destroy(void* self) {
    QTabWidget_QBaseDestroy((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, void (*slot)() ```
void q_tabwidget_on_destroy(void* self, void (*slot)()) {
    QTabWidget_OnDestroy((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
bool q_tabwidget_focus_next_child(void* self) {
    return QTabWidget_FocusNextChild((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
bool q_tabwidget_qbase_focus_next_child(void* self) {
    return QTabWidget_QBaseFocusNextChild((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, bool (*slot)() ```
void q_tabwidget_on_focus_next_child(void* self, bool (*slot)()) {
    QTabWidget_OnFocusNextChild((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QWidget
///
/// [Qt documentation](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
bool q_tabwidget_focus_previous_child(void* self) {
    return QTabWidget_FocusPreviousChild((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
bool q_tabwidget_qbase_focus_previous_child(void* self) {
    return QTabWidget_QBaseFocusPreviousChild((QTabWidget*)self);
}

/// Inherited from QWidget
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, bool (*slot)() ```
void q_tabwidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QTabWidget_OnFocusPreviousChild((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
QObject* q_tabwidget_sender(void* self) {
    return QTabWidget_Sender((QTabWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
QObject* q_tabwidget_qbase_sender(void* self) {
    return QTabWidget_QBaseSender((QTabWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, QObject* (*slot)() ```
void q_tabwidget_on_sender(void* self, QObject* (*slot)()) {
    QTabWidget_OnSender((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_sender_signal_index(void* self) {
    return QTabWidget_SenderSignalIndex((QTabWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self ```
int32_t q_tabwidget_qbase_sender_signal_index(void* self) {
    return QTabWidget_QBaseSenderSignalIndex((QTabWidget*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, int32_t (*slot)() ```
void q_tabwidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTabWidget_OnSenderSignalIndex((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, const char* signal ```
int32_t q_tabwidget_receivers(void* self, const char* signal) {
    return QTabWidget_Receivers((QTabWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, const char* signal ```
int32_t q_tabwidget_qbase_receivers(void* self, const char* signal) {
    return QTabWidget_QBaseReceivers((QTabWidget*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, int32_t (*slot)(QTabWidget*, const char*) ```
void q_tabwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTabWidget_OnReceivers((QTabWidget*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QTabWidget* self, QMetaMethod* signal ```
bool q_tabwidget_is_signal_connected(void* self, void* signal) {
    return QTabWidget_IsSignalConnected((QTabWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QTabWidget* self, QMetaMethod* signal ```
bool q_tabwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QTabWidget_QBaseIsSignalConnected((QTabWidget*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QTabWidget* self, bool (*slot)(QTabWidget*, QMetaMethod*) ```
void q_tabwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTabWidget_OnIsSignalConnected((QTabWidget*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QTabWidget* self ```
void q_tabwidget_delete(void* self) {
    QTabWidget_Delete((QTabWidget*)(self));
}