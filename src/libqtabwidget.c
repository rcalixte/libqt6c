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

QTabWidget* q_tabwidget_new(void* parent) {
    return QTabWidget_new((QWidget*)parent);
}

QTabWidget* q_tabwidget_new2() {
    return QTabWidget_new2();
}

QMetaObject* q_tabwidget_meta_object(void* self) {
    return QTabWidget_MetaObject((QTabWidget*)self);
}

void* q_tabwidget_metacast(void* self, const char* param1) {
    return QTabWidget_Metacast((QTabWidget*)self, param1);
}

int32_t q_tabwidget_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTabWidget_Metacall((QTabWidget*)self, param1, param2, param3);
}

void q_tabwidget_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QTabWidget_OnMetacall((QTabWidget*)self, (intptr_t)slot);
}

int32_t q_tabwidget_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QTabWidget_QBaseMetacall((QTabWidget*)self, param1, param2, param3);
}

const char* q_tabwidget_tr(const char* s) {
    libqt_string _str = QTabWidget_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_tabwidget_add_tab(void* self, void* widget, const char* param2) {
    return QTabWidget_AddTab((QTabWidget*)self, (QWidget*)widget, qstring(param2));
}

int32_t q_tabwidget_add_tab2(void* self, void* widget, void* icon, const char* label) {
    return QTabWidget_AddTab2((QTabWidget*)self, (QWidget*)widget, (QIcon*)icon, qstring(label));
}

int32_t q_tabwidget_insert_tab(void* self, int index, void* widget, const char* param3) {
    return QTabWidget_InsertTab((QTabWidget*)self, index, (QWidget*)widget, qstring(param3));
}

int32_t q_tabwidget_insert_tab2(void* self, int index, void* widget, void* icon, const char* label) {
    return QTabWidget_InsertTab2((QTabWidget*)self, index, (QWidget*)widget, (QIcon*)icon, qstring(label));
}

void q_tabwidget_remove_tab(void* self, int index) {
    QTabWidget_RemoveTab((QTabWidget*)self, index);
}

bool q_tabwidget_is_tab_enabled(void* self, int index) {
    return QTabWidget_IsTabEnabled((QTabWidget*)self, index);
}

void q_tabwidget_set_tab_enabled(void* self, int index, bool enabled) {
    QTabWidget_SetTabEnabled((QTabWidget*)self, index, enabled);
}

bool q_tabwidget_is_tab_visible(void* self, int index) {
    return QTabWidget_IsTabVisible((QTabWidget*)self, index);
}

void q_tabwidget_set_tab_visible(void* self, int index, bool visible) {
    QTabWidget_SetTabVisible((QTabWidget*)self, index, visible);
}

const char* q_tabwidget_tab_text(void* self, int index) {
    libqt_string _str = QTabWidget_TabText((QTabWidget*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_tab_text(void* self, int index, const char* text) {
    QTabWidget_SetTabText((QTabWidget*)self, index, qstring(text));
}

QIcon* q_tabwidget_tab_icon(void* self, int index) {
    return QTabWidget_TabIcon((QTabWidget*)self, index);
}

void q_tabwidget_set_tab_icon(void* self, int index, void* icon) {
    QTabWidget_SetTabIcon((QTabWidget*)self, index, (QIcon*)icon);
}

void q_tabwidget_set_tab_tool_tip(void* self, int index, const char* tip) {
    QTabWidget_SetTabToolTip((QTabWidget*)self, index, qstring(tip));
}

const char* q_tabwidget_tab_tool_tip(void* self, int index) {
    libqt_string _str = QTabWidget_TabToolTip((QTabWidget*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_tab_whats_this(void* self, int index, const char* text) {
    QTabWidget_SetTabWhatsThis((QTabWidget*)self, index, qstring(text));
}

const char* q_tabwidget_tab_whats_this(void* self, int index) {
    libqt_string _str = QTabWidget_TabWhatsThis((QTabWidget*)self, index);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_tabwidget_current_index(void* self) {
    return QTabWidget_CurrentIndex((QTabWidget*)self);
}

QWidget* q_tabwidget_current_widget(void* self) {
    return QTabWidget_CurrentWidget((QTabWidget*)self);
}

QWidget* q_tabwidget_widget(void* self, int index) {
    return QTabWidget_Widget((QTabWidget*)self, index);
}

int32_t q_tabwidget_index_of(void* self, void* widget) {
    return QTabWidget_IndexOf((QTabWidget*)self, (QWidget*)widget);
}

int32_t q_tabwidget_count(void* self) {
    return QTabWidget_Count((QTabWidget*)self);
}

int64_t q_tabwidget_tab_position(void* self) {
    return QTabWidget_TabPosition((QTabWidget*)self);
}

void q_tabwidget_set_tab_position(void* self, int64_t position) {
    QTabWidget_SetTabPosition((QTabWidget*)self, position);
}

bool q_tabwidget_tabs_closable(void* self) {
    return QTabWidget_TabsClosable((QTabWidget*)self);
}

void q_tabwidget_set_tabs_closable(void* self, bool closeable) {
    QTabWidget_SetTabsClosable((QTabWidget*)self, closeable);
}

bool q_tabwidget_is_movable(void* self) {
    return QTabWidget_IsMovable((QTabWidget*)self);
}

void q_tabwidget_set_movable(void* self, bool movable) {
    QTabWidget_SetMovable((QTabWidget*)self, movable);
}

int64_t q_tabwidget_tab_shape(void* self) {
    return QTabWidget_TabShape((QTabWidget*)self);
}

void q_tabwidget_set_tab_shape(void* self, int64_t s) {
    QTabWidget_SetTabShape((QTabWidget*)self, s);
}

QSize* q_tabwidget_size_hint(void* self) {
    return QTabWidget_SizeHint((QTabWidget*)self);
}

void q_tabwidget_on_size_hint(void* self, QSize* (*slot)()) {
    QTabWidget_OnSizeHint((QTabWidget*)self, (intptr_t)slot);
}

QSize* q_tabwidget_qbase_size_hint(void* self) {
    return QTabWidget_QBaseSizeHint((QTabWidget*)self);
}

QSize* q_tabwidget_minimum_size_hint(void* self) {
    return QTabWidget_MinimumSizeHint((QTabWidget*)self);
}

void q_tabwidget_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QTabWidget_OnMinimumSizeHint((QTabWidget*)self, (intptr_t)slot);
}

QSize* q_tabwidget_qbase_minimum_size_hint(void* self) {
    return QTabWidget_QBaseMinimumSizeHint((QTabWidget*)self);
}

int32_t q_tabwidget_height_for_width(void* self, int width) {
    return QTabWidget_HeightForWidth((QTabWidget*)self, width);
}

void q_tabwidget_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QTabWidget_OnHeightForWidth((QTabWidget*)self, (intptr_t)slot);
}

int32_t q_tabwidget_qbase_height_for_width(void* self, int width) {
    return QTabWidget_QBaseHeightForWidth((QTabWidget*)self, width);
}

bool q_tabwidget_has_height_for_width(void* self) {
    return QTabWidget_HasHeightForWidth((QTabWidget*)self);
}

void q_tabwidget_on_has_height_for_width(void* self, bool (*slot)()) {
    QTabWidget_OnHasHeightForWidth((QTabWidget*)self, (intptr_t)slot);
}

bool q_tabwidget_qbase_has_height_for_width(void* self) {
    return QTabWidget_QBaseHasHeightForWidth((QTabWidget*)self);
}

void q_tabwidget_set_corner_widget(void* self, void* w) {
    QTabWidget_SetCornerWidget((QTabWidget*)self, (QWidget*)w);
}

QWidget* q_tabwidget_corner_widget(void* self) {
    return QTabWidget_CornerWidget((QTabWidget*)self);
}

int64_t q_tabwidget_elide_mode(void* self) {
    return QTabWidget_ElideMode((QTabWidget*)self);
}

void q_tabwidget_set_elide_mode(void* self, int64_t mode) {
    QTabWidget_SetElideMode((QTabWidget*)self, mode);
}

QSize* q_tabwidget_icon_size(void* self) {
    return QTabWidget_IconSize((QTabWidget*)self);
}

void q_tabwidget_set_icon_size(void* self, void* size) {
    QTabWidget_SetIconSize((QTabWidget*)self, (QSize*)size);
}

bool q_tabwidget_uses_scroll_buttons(void* self) {
    return QTabWidget_UsesScrollButtons((QTabWidget*)self);
}

void q_tabwidget_set_uses_scroll_buttons(void* self, bool useButtons) {
    QTabWidget_SetUsesScrollButtons((QTabWidget*)self, useButtons);
}

bool q_tabwidget_document_mode(void* self) {
    return QTabWidget_DocumentMode((QTabWidget*)self);
}

void q_tabwidget_set_document_mode(void* self, bool set) {
    QTabWidget_SetDocumentMode((QTabWidget*)self, set);
}

bool q_tabwidget_tab_bar_auto_hide(void* self) {
    return QTabWidget_TabBarAutoHide((QTabWidget*)self);
}

void q_tabwidget_set_tab_bar_auto_hide(void* self, bool enabled) {
    QTabWidget_SetTabBarAutoHide((QTabWidget*)self, enabled);
}

void q_tabwidget_clear(void* self) {
    QTabWidget_Clear((QTabWidget*)self);
}

QTabBar* q_tabwidget_tab_bar(void* self) {
    return QTabWidget_TabBar((QTabWidget*)self);
}

void q_tabwidget_set_current_index(void* self, int index) {
    QTabWidget_SetCurrentIndex((QTabWidget*)self, index);
}

void q_tabwidget_set_current_widget(void* self, void* widget) {
    QTabWidget_SetCurrentWidget((QTabWidget*)self, (QWidget*)widget);
}

void q_tabwidget_current_changed(void* self, int index) {
    QTabWidget_CurrentChanged((QTabWidget*)self, index);
}

void q_tabwidget_on_current_changed(void* self, void (*slot)(void*, int)) {
    QTabWidget_Connect_CurrentChanged((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_tab_close_requested(void* self, int index) {
    QTabWidget_TabCloseRequested((QTabWidget*)self, index);
}

void q_tabwidget_on_tab_close_requested(void* self, void (*slot)(void*, int)) {
    QTabWidget_Connect_TabCloseRequested((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_tab_bar_clicked(void* self, int index) {
    QTabWidget_TabBarClicked((QTabWidget*)self, index);
}

void q_tabwidget_on_tab_bar_clicked(void* self, void (*slot)(void*, int)) {
    QTabWidget_Connect_TabBarClicked((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_tab_bar_double_clicked(void* self, int index) {
    QTabWidget_TabBarDoubleClicked((QTabWidget*)self, index);
}

void q_tabwidget_on_tab_bar_double_clicked(void* self, void (*slot)(void*, int)) {
    QTabWidget_Connect_TabBarDoubleClicked((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_tab_inserted(void* self, int index) {
    QTabWidget_TabInserted((QTabWidget*)self, index);
}

void q_tabwidget_on_tab_inserted(void* self, void (*slot)(void*, int)) {
    QTabWidget_OnTabInserted((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_qbase_tab_inserted(void* self, int index) {
    QTabWidget_QBaseTabInserted((QTabWidget*)self, index);
}

void q_tabwidget_tab_removed(void* self, int index) {
    QTabWidget_TabRemoved((QTabWidget*)self, index);
}

void q_tabwidget_on_tab_removed(void* self, void (*slot)(void*, int)) {
    QTabWidget_OnTabRemoved((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_qbase_tab_removed(void* self, int index) {
    QTabWidget_QBaseTabRemoved((QTabWidget*)self, index);
}

void q_tabwidget_show_event(void* self, void* param1) {
    QTabWidget_ShowEvent((QTabWidget*)self, (QShowEvent*)param1);
}

void q_tabwidget_on_show_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnShowEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_qbase_show_event(void* self, void* param1) {
    QTabWidget_QBaseShowEvent((QTabWidget*)self, (QShowEvent*)param1);
}

void q_tabwidget_resize_event(void* self, void* param1) {
    QTabWidget_ResizeEvent((QTabWidget*)self, (QResizeEvent*)param1);
}

void q_tabwidget_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnResizeEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_qbase_resize_event(void* self, void* param1) {
    QTabWidget_QBaseResizeEvent((QTabWidget*)self, (QResizeEvent*)param1);
}

void q_tabwidget_key_press_event(void* self, void* param1) {
    QTabWidget_KeyPressEvent((QTabWidget*)self, (QKeyEvent*)param1);
}

void q_tabwidget_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnKeyPressEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_qbase_key_press_event(void* self, void* param1) {
    QTabWidget_QBaseKeyPressEvent((QTabWidget*)self, (QKeyEvent*)param1);
}

void q_tabwidget_paint_event(void* self, void* param1) {
    QTabWidget_PaintEvent((QTabWidget*)self, (QPaintEvent*)param1);
}

void q_tabwidget_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnPaintEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_qbase_paint_event(void* self, void* param1) {
    QTabWidget_QBasePaintEvent((QTabWidget*)self, (QPaintEvent*)param1);
}

void q_tabwidget_set_tab_bar(void* self, void* tabBar) {
    QTabWidget_SetTabBar((QTabWidget*)self, (QTabBar*)tabBar);
}

void q_tabwidget_on_set_tab_bar(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnSetTabBar((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_qbase_set_tab_bar(void* self, void* tabBar) {
    QTabWidget_QBaseSetTabBar((QTabWidget*)self, (QTabBar*)tabBar);
}

void q_tabwidget_change_event(void* self, void* param1) {
    QTabWidget_ChangeEvent((QTabWidget*)self, (QEvent*)param1);
}

void q_tabwidget_on_change_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnChangeEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_qbase_change_event(void* self, void* param1) {
    QTabWidget_QBaseChangeEvent((QTabWidget*)self, (QEvent*)param1);
}

bool q_tabwidget_event(void* self, void* param1) {
    return QTabWidget_Event((QTabWidget*)self, (QEvent*)param1);
}

void q_tabwidget_on_event(void* self, bool (*slot)(void*, void*)) {
    QTabWidget_OnEvent((QTabWidget*)self, (intptr_t)slot);
}

bool q_tabwidget_qbase_event(void* self, void* param1) {
    return QTabWidget_QBaseEvent((QTabWidget*)self, (QEvent*)param1);
}

void q_tabwidget_init_style_option(void* self, void* option) {
    QTabWidget_InitStyleOption((QTabWidget*)self, (QStyleOptionTabWidgetFrame*)option);
}

void q_tabwidget_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnInitStyleOption((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_qbase_init_style_option(void* self, void* option) {
    QTabWidget_QBaseInitStyleOption((QTabWidget*)self, (QStyleOptionTabWidgetFrame*)option);
}

const char* q_tabwidget_tr2(const char* s, const char* c) {
    libqt_string _str = QTabWidget_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tabwidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QTabWidget_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_corner_widget2(void* self, void* w, int64_t corner) {
    QTabWidget_SetCornerWidget2((QTabWidget*)self, (QWidget*)w, corner);
}

QWidget* q_tabwidget_corner_widget1(void* self, int64_t corner) {
    return QTabWidget_CornerWidget1((QTabWidget*)self, corner);
}

uintptr_t q_tabwidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_tabwidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_tabwidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_tabwidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_tabwidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_tabwidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_tabwidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_tabwidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_tabwidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_tabwidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_tabwidget_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_tabwidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_tabwidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_tabwidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_tabwidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_tabwidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_tabwidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

QRect* q_tabwidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_tabwidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_tabwidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_tabwidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_tabwidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_tabwidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_tabwidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_tabwidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_tabwidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_tabwidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_tabwidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_tabwidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_tabwidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_tabwidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_tabwidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_tabwidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_tabwidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_tabwidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_tabwidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_tabwidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_tabwidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_tabwidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_tabwidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_tabwidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_tabwidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_tabwidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_tabwidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_tabwidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_tabwidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_tabwidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_tabwidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_tabwidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_tabwidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_tabwidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_tabwidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_tabwidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_tabwidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tabwidget_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tabwidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tabwidget_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tabwidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tabwidget_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tabwidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_tabwidget_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_tabwidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_tabwidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_tabwidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_tabwidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_tabwidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_tabwidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_tabwidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

QPalette* q_tabwidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_tabwidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_tabwidget_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_tabwidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_tabwidget_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_tabwidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

QFont* q_tabwidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_tabwidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_tabwidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_tabwidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_tabwidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_tabwidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_tabwidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_tabwidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_tabwidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_tabwidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_tabwidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_tabwidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_tabwidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_tabwidget_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_tabwidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_tabwidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_tabwidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_tabwidget_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_tabwidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_tabwidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_tabwidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_tabwidget_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_tabwidget_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_tabwidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_tabwidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_tabwidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tabwidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_tabwidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_tabwidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_tabwidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_tabwidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_tabwidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_tabwidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_tabwidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_tabwidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_tabwidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_tabwidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_tabwidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_tabwidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_tabwidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_tabwidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_tabwidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_tabwidget_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_tabwidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_tabwidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_tabwidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_tabwidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_tabwidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_tabwidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_tabwidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_tabwidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_tabwidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_tabwidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_tabwidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_tabwidget_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_tabwidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_tabwidget_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_tabwidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_tabwidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_tabwidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_tabwidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_tabwidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_tabwidget_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_tabwidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_tabwidget_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_tabwidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_tabwidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_tabwidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_tabwidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_tabwidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_tabwidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_tabwidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_tabwidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_tabwidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_tabwidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_tabwidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_tabwidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_tabwidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_tabwidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_tabwidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_tabwidget_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_tabwidget_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_tabwidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_tabwidget_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_tabwidget_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_tabwidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_tabwidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_tabwidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_tabwidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_tabwidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_tabwidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_tabwidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_tabwidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_tabwidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_tabwidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_tabwidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_tabwidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_tabwidget_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_tabwidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_tabwidget_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_tabwidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_tabwidget_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_tabwidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_tabwidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_tabwidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_tabwidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_tabwidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_tabwidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_tabwidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_tabwidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_tabwidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_tabwidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_tabwidget_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_tabwidget_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_tabwidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_tabwidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_tabwidget_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_tabwidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_tabwidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_tabwidget_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_tabwidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_tabwidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_tabwidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_tabwidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_tabwidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_tabwidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_tabwidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_tabwidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_tabwidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_tabwidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_tabwidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_tabwidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_tabwidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_tabwidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_tabwidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

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

void q_tabwidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_tabwidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_tabwidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_tabwidget_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_tabwidget_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_tabwidget_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_tabwidget_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_tabwidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_tabwidget_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_tabwidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_tabwidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_tabwidget_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_tabwidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_tabwidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_tabwidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_tabwidget_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_tabwidget_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_tabwidget_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_tabwidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_tabwidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_tabwidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_tabwidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_tabwidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_tabwidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_tabwidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_tabwidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_tabwidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_tabwidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_tabwidget_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_tabwidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_tabwidget_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_tabwidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_tabwidget_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_tabwidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_tabwidget_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_tabwidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_tabwidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_tabwidget_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_tabwidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_tabwidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_tabwidget_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_tabwidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_tabwidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_tabwidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_tabwidget_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_tabwidget_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_tabwidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_tabwidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_tabwidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_tabwidget_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_tabwidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_tabwidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_tabwidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_tabwidget_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_tabwidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_tabwidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_tabwidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_tabwidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_tabwidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_tabwidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_tabwidget_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_tabwidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_tabwidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_tabwidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_tabwidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_tabwidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_tabwidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_tabwidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_tabwidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_tabwidget_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_tabwidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_tabwidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_tabwidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_tabwidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

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

QBindingStorage* q_tabwidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_tabwidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_tabwidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_tabwidget_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_tabwidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_tabwidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_tabwidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_tabwidget_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_tabwidget_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_tabwidget_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_tabwidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_tabwidget_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_tabwidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_tabwidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_tabwidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_tabwidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_tabwidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_tabwidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_tabwidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_tabwidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_tabwidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_tabwidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_tabwidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_tabwidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_tabwidget_dev_type(void* self) {
    return QTabWidget_DevType((QTabWidget*)self);
}

int32_t q_tabwidget_qbase_dev_type(void* self) {
    return QTabWidget_QBaseDevType((QTabWidget*)self);
}

void q_tabwidget_on_dev_type(void* self, int32_t (*slot)()) {
    QTabWidget_OnDevType((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_set_visible(void* self, bool visible) {
    QTabWidget_SetVisible((QTabWidget*)self, visible);
}

void q_tabwidget_qbase_set_visible(void* self, bool visible) {
    QTabWidget_QBaseSetVisible((QTabWidget*)self, visible);
}

void q_tabwidget_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QTabWidget_OnSetVisible((QTabWidget*)self, (intptr_t)slot);
}

QPaintEngine* q_tabwidget_paint_engine(void* self) {
    return QTabWidget_PaintEngine((QTabWidget*)self);
}

QPaintEngine* q_tabwidget_qbase_paint_engine(void* self) {
    return QTabWidget_QBasePaintEngine((QTabWidget*)self);
}

void q_tabwidget_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QTabWidget_OnPaintEngine((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_mouse_press_event(void* self, void* event) {
    QTabWidget_MousePressEvent((QTabWidget*)self, (QMouseEvent*)event);
}

void q_tabwidget_qbase_mouse_press_event(void* self, void* event) {
    QTabWidget_QBaseMousePressEvent((QTabWidget*)self, (QMouseEvent*)event);
}

void q_tabwidget_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMousePressEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_mouse_release_event(void* self, void* event) {
    QTabWidget_MouseReleaseEvent((QTabWidget*)self, (QMouseEvent*)event);
}

void q_tabwidget_qbase_mouse_release_event(void* self, void* event) {
    QTabWidget_QBaseMouseReleaseEvent((QTabWidget*)self, (QMouseEvent*)event);
}

void q_tabwidget_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMouseReleaseEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_mouse_double_click_event(void* self, void* event) {
    QTabWidget_MouseDoubleClickEvent((QTabWidget*)self, (QMouseEvent*)event);
}

void q_tabwidget_qbase_mouse_double_click_event(void* self, void* event) {
    QTabWidget_QBaseMouseDoubleClickEvent((QTabWidget*)self, (QMouseEvent*)event);
}

void q_tabwidget_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMouseDoubleClickEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_mouse_move_event(void* self, void* event) {
    QTabWidget_MouseMoveEvent((QTabWidget*)self, (QMouseEvent*)event);
}

void q_tabwidget_qbase_mouse_move_event(void* self, void* event) {
    QTabWidget_QBaseMouseMoveEvent((QTabWidget*)self, (QMouseEvent*)event);
}

void q_tabwidget_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMouseMoveEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_wheel_event(void* self, void* event) {
    QTabWidget_WheelEvent((QTabWidget*)self, (QWheelEvent*)event);
}

void q_tabwidget_qbase_wheel_event(void* self, void* event) {
    QTabWidget_QBaseWheelEvent((QTabWidget*)self, (QWheelEvent*)event);
}

void q_tabwidget_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnWheelEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_key_release_event(void* self, void* event) {
    QTabWidget_KeyReleaseEvent((QTabWidget*)self, (QKeyEvent*)event);
}

void q_tabwidget_qbase_key_release_event(void* self, void* event) {
    QTabWidget_QBaseKeyReleaseEvent((QTabWidget*)self, (QKeyEvent*)event);
}

void q_tabwidget_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnKeyReleaseEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_focus_in_event(void* self, void* event) {
    QTabWidget_FocusInEvent((QTabWidget*)self, (QFocusEvent*)event);
}

void q_tabwidget_qbase_focus_in_event(void* self, void* event) {
    QTabWidget_QBaseFocusInEvent((QTabWidget*)self, (QFocusEvent*)event);
}

void q_tabwidget_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnFocusInEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_focus_out_event(void* self, void* event) {
    QTabWidget_FocusOutEvent((QTabWidget*)self, (QFocusEvent*)event);
}

void q_tabwidget_qbase_focus_out_event(void* self, void* event) {
    QTabWidget_QBaseFocusOutEvent((QTabWidget*)self, (QFocusEvent*)event);
}

void q_tabwidget_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnFocusOutEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_enter_event(void* self, void* event) {
    QTabWidget_EnterEvent((QTabWidget*)self, (QEnterEvent*)event);
}

void q_tabwidget_qbase_enter_event(void* self, void* event) {
    QTabWidget_QBaseEnterEvent((QTabWidget*)self, (QEnterEvent*)event);
}

void q_tabwidget_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnEnterEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_leave_event(void* self, void* event) {
    QTabWidget_LeaveEvent((QTabWidget*)self, (QEvent*)event);
}

void q_tabwidget_qbase_leave_event(void* self, void* event) {
    QTabWidget_QBaseLeaveEvent((QTabWidget*)self, (QEvent*)event);
}

void q_tabwidget_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnLeaveEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_move_event(void* self, void* event) {
    QTabWidget_MoveEvent((QTabWidget*)self, (QMoveEvent*)event);
}

void q_tabwidget_qbase_move_event(void* self, void* event) {
    QTabWidget_QBaseMoveEvent((QTabWidget*)self, (QMoveEvent*)event);
}

void q_tabwidget_on_move_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnMoveEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_close_event(void* self, void* event) {
    QTabWidget_CloseEvent((QTabWidget*)self, (QCloseEvent*)event);
}

void q_tabwidget_qbase_close_event(void* self, void* event) {
    QTabWidget_QBaseCloseEvent((QTabWidget*)self, (QCloseEvent*)event);
}

void q_tabwidget_on_close_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnCloseEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_context_menu_event(void* self, void* event) {
    QTabWidget_ContextMenuEvent((QTabWidget*)self, (QContextMenuEvent*)event);
}

void q_tabwidget_qbase_context_menu_event(void* self, void* event) {
    QTabWidget_QBaseContextMenuEvent((QTabWidget*)self, (QContextMenuEvent*)event);
}

void q_tabwidget_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnContextMenuEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_tablet_event(void* self, void* event) {
    QTabWidget_TabletEvent((QTabWidget*)self, (QTabletEvent*)event);
}

void q_tabwidget_qbase_tablet_event(void* self, void* event) {
    QTabWidget_QBaseTabletEvent((QTabWidget*)self, (QTabletEvent*)event);
}

void q_tabwidget_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnTabletEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_action_event(void* self, void* event) {
    QTabWidget_ActionEvent((QTabWidget*)self, (QActionEvent*)event);
}

void q_tabwidget_qbase_action_event(void* self, void* event) {
    QTabWidget_QBaseActionEvent((QTabWidget*)self, (QActionEvent*)event);
}

void q_tabwidget_on_action_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnActionEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_drag_enter_event(void* self, void* event) {
    QTabWidget_DragEnterEvent((QTabWidget*)self, (QDragEnterEvent*)event);
}

void q_tabwidget_qbase_drag_enter_event(void* self, void* event) {
    QTabWidget_QBaseDragEnterEvent((QTabWidget*)self, (QDragEnterEvent*)event);
}

void q_tabwidget_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDragEnterEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_drag_move_event(void* self, void* event) {
    QTabWidget_DragMoveEvent((QTabWidget*)self, (QDragMoveEvent*)event);
}

void q_tabwidget_qbase_drag_move_event(void* self, void* event) {
    QTabWidget_QBaseDragMoveEvent((QTabWidget*)self, (QDragMoveEvent*)event);
}

void q_tabwidget_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDragMoveEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_drag_leave_event(void* self, void* event) {
    QTabWidget_DragLeaveEvent((QTabWidget*)self, (QDragLeaveEvent*)event);
}

void q_tabwidget_qbase_drag_leave_event(void* self, void* event) {
    QTabWidget_QBaseDragLeaveEvent((QTabWidget*)self, (QDragLeaveEvent*)event);
}

void q_tabwidget_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDragLeaveEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_drop_event(void* self, void* event) {
    QTabWidget_DropEvent((QTabWidget*)self, (QDropEvent*)event);
}

void q_tabwidget_qbase_drop_event(void* self, void* event) {
    QTabWidget_QBaseDropEvent((QTabWidget*)self, (QDropEvent*)event);
}

void q_tabwidget_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDropEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_hide_event(void* self, void* event) {
    QTabWidget_HideEvent((QTabWidget*)self, (QHideEvent*)event);
}

void q_tabwidget_qbase_hide_event(void* self, void* event) {
    QTabWidget_QBaseHideEvent((QTabWidget*)self, (QHideEvent*)event);
}

void q_tabwidget_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnHideEvent((QTabWidget*)self, (intptr_t)slot);
}

bool q_tabwidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTabWidget_NativeEvent((QTabWidget*)self, qstring(eventType), message, result);
}

bool q_tabwidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QTabWidget_QBaseNativeEvent((QTabWidget*)self, qstring(eventType), message, result);
}

void q_tabwidget_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QTabWidget_OnNativeEvent((QTabWidget*)self, (intptr_t)slot);
}

int32_t q_tabwidget_metric(void* self, int64_t param1) {
    return QTabWidget_Metric((QTabWidget*)self, param1);
}

int32_t q_tabwidget_qbase_metric(void* self, int64_t param1) {
    return QTabWidget_QBaseMetric((QTabWidget*)self, param1);
}

void q_tabwidget_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QTabWidget_OnMetric((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_init_painter(void* self, void* painter) {
    QTabWidget_InitPainter((QTabWidget*)self, (QPainter*)painter);
}

void q_tabwidget_qbase_init_painter(void* self, void* painter) {
    QTabWidget_QBaseInitPainter((QTabWidget*)self, (QPainter*)painter);
}

void q_tabwidget_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnInitPainter((QTabWidget*)self, (intptr_t)slot);
}

QPaintDevice* q_tabwidget_redirected(void* self, void* offset) {
    return QTabWidget_Redirected((QTabWidget*)self, (QPoint*)offset);
}

QPaintDevice* q_tabwidget_qbase_redirected(void* self, void* offset) {
    return QTabWidget_QBaseRedirected((QTabWidget*)self, (QPoint*)offset);
}

void q_tabwidget_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QTabWidget_OnRedirected((QTabWidget*)self, (intptr_t)slot);
}

QPainter* q_tabwidget_shared_painter(void* self) {
    return QTabWidget_SharedPainter((QTabWidget*)self);
}

QPainter* q_tabwidget_qbase_shared_painter(void* self) {
    return QTabWidget_QBaseSharedPainter((QTabWidget*)self);
}

void q_tabwidget_on_shared_painter(void* self, QPainter* (*slot)()) {
    QTabWidget_OnSharedPainter((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_input_method_event(void* self, void* param1) {
    QTabWidget_InputMethodEvent((QTabWidget*)self, (QInputMethodEvent*)param1);
}

void q_tabwidget_qbase_input_method_event(void* self, void* param1) {
    QTabWidget_QBaseInputMethodEvent((QTabWidget*)self, (QInputMethodEvent*)param1);
}

void q_tabwidget_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnInputMethodEvent((QTabWidget*)self, (intptr_t)slot);
}

QVariant* q_tabwidget_input_method_query(void* self, int64_t param1) {
    return QTabWidget_InputMethodQuery((QTabWidget*)self, param1);
}

QVariant* q_tabwidget_qbase_input_method_query(void* self, int64_t param1) {
    return QTabWidget_QBaseInputMethodQuery((QTabWidget*)self, param1);
}

void q_tabwidget_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QTabWidget_OnInputMethodQuery((QTabWidget*)self, (intptr_t)slot);
}

bool q_tabwidget_focus_next_prev_child(void* self, bool next) {
    return QTabWidget_FocusNextPrevChild((QTabWidget*)self, next);
}

bool q_tabwidget_qbase_focus_next_prev_child(void* self, bool next) {
    return QTabWidget_QBaseFocusNextPrevChild((QTabWidget*)self, next);
}

void q_tabwidget_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QTabWidget_OnFocusNextPrevChild((QTabWidget*)self, (intptr_t)slot);
}

bool q_tabwidget_event_filter(void* self, void* watched, void* event) {
    return QTabWidget_EventFilter((QTabWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool q_tabwidget_qbase_event_filter(void* self, void* watched, void* event) {
    return QTabWidget_QBaseEventFilter((QTabWidget*)self, (QObject*)watched, (QEvent*)event);
}

void q_tabwidget_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QTabWidget_OnEventFilter((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_timer_event(void* self, void* event) {
    QTabWidget_TimerEvent((QTabWidget*)self, (QTimerEvent*)event);
}

void q_tabwidget_qbase_timer_event(void* self, void* event) {
    QTabWidget_QBaseTimerEvent((QTabWidget*)self, (QTimerEvent*)event);
}

void q_tabwidget_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnTimerEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_child_event(void* self, void* event) {
    QTabWidget_ChildEvent((QTabWidget*)self, (QChildEvent*)event);
}

void q_tabwidget_qbase_child_event(void* self, void* event) {
    QTabWidget_QBaseChildEvent((QTabWidget*)self, (QChildEvent*)event);
}

void q_tabwidget_on_child_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnChildEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_custom_event(void* self, void* event) {
    QTabWidget_CustomEvent((QTabWidget*)self, (QEvent*)event);
}

void q_tabwidget_qbase_custom_event(void* self, void* event) {
    QTabWidget_QBaseCustomEvent((QTabWidget*)self, (QEvent*)event);
}

void q_tabwidget_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnCustomEvent((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_connect_notify(void* self, void* signal) {
    QTabWidget_ConnectNotify((QTabWidget*)self, (QMetaMethod*)signal);
}

void q_tabwidget_qbase_connect_notify(void* self, void* signal) {
    QTabWidget_QBaseConnectNotify((QTabWidget*)self, (QMetaMethod*)signal);
}

void q_tabwidget_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnConnectNotify((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_disconnect_notify(void* self, void* signal) {
    QTabWidget_DisconnectNotify((QTabWidget*)self, (QMetaMethod*)signal);
}

void q_tabwidget_qbase_disconnect_notify(void* self, void* signal) {
    QTabWidget_QBaseDisconnectNotify((QTabWidget*)self, (QMetaMethod*)signal);
}

void q_tabwidget_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QTabWidget_OnDisconnectNotify((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_update_micro_focus(void* self) {
    QTabWidget_UpdateMicroFocus((QTabWidget*)self);
}

void q_tabwidget_qbase_update_micro_focus(void* self) {
    QTabWidget_QBaseUpdateMicroFocus((QTabWidget*)self);
}

void q_tabwidget_on_update_micro_focus(void* self, void (*slot)()) {
    QTabWidget_OnUpdateMicroFocus((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_create(void* self) {
    QTabWidget_Create((QTabWidget*)self);
}

void q_tabwidget_qbase_create(void* self) {
    QTabWidget_QBaseCreate((QTabWidget*)self);
}

void q_tabwidget_on_create(void* self, void (*slot)()) {
    QTabWidget_OnCreate((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_destroy(void* self) {
    QTabWidget_Destroy((QTabWidget*)self);
}

void q_tabwidget_qbase_destroy(void* self) {
    QTabWidget_QBaseDestroy((QTabWidget*)self);
}

void q_tabwidget_on_destroy(void* self, void (*slot)()) {
    QTabWidget_OnDestroy((QTabWidget*)self, (intptr_t)slot);
}

bool q_tabwidget_focus_next_child(void* self) {
    return QTabWidget_FocusNextChild((QTabWidget*)self);
}

bool q_tabwidget_qbase_focus_next_child(void* self) {
    return QTabWidget_QBaseFocusNextChild((QTabWidget*)self);
}

void q_tabwidget_on_focus_next_child(void* self, bool (*slot)()) {
    QTabWidget_OnFocusNextChild((QTabWidget*)self, (intptr_t)slot);
}

bool q_tabwidget_focus_previous_child(void* self) {
    return QTabWidget_FocusPreviousChild((QTabWidget*)self);
}

bool q_tabwidget_qbase_focus_previous_child(void* self) {
    return QTabWidget_QBaseFocusPreviousChild((QTabWidget*)self);
}

void q_tabwidget_on_focus_previous_child(void* self, bool (*slot)()) {
    QTabWidget_OnFocusPreviousChild((QTabWidget*)self, (intptr_t)slot);
}

QObject* q_tabwidget_sender(void* self) {
    return QTabWidget_Sender((QTabWidget*)self);
}

QObject* q_tabwidget_qbase_sender(void* self) {
    return QTabWidget_QBaseSender((QTabWidget*)self);
}

void q_tabwidget_on_sender(void* self, QObject* (*slot)()) {
    QTabWidget_OnSender((QTabWidget*)self, (intptr_t)slot);
}

int32_t q_tabwidget_sender_signal_index(void* self) {
    return QTabWidget_SenderSignalIndex((QTabWidget*)self);
}

int32_t q_tabwidget_qbase_sender_signal_index(void* self) {
    return QTabWidget_QBaseSenderSignalIndex((QTabWidget*)self);
}

void q_tabwidget_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QTabWidget_OnSenderSignalIndex((QTabWidget*)self, (intptr_t)slot);
}

int32_t q_tabwidget_receivers(void* self, const char* signal) {
    return QTabWidget_Receivers((QTabWidget*)self, signal);
}

int32_t q_tabwidget_qbase_receivers(void* self, const char* signal) {
    return QTabWidget_QBaseReceivers((QTabWidget*)self, signal);
}

void q_tabwidget_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QTabWidget_OnReceivers((QTabWidget*)self, (intptr_t)slot);
}

bool q_tabwidget_is_signal_connected(void* self, void* signal) {
    return QTabWidget_IsSignalConnected((QTabWidget*)self, (QMetaMethod*)signal);
}

bool q_tabwidget_qbase_is_signal_connected(void* self, void* signal) {
    return QTabWidget_QBaseIsSignalConnected((QTabWidget*)self, (QMetaMethod*)signal);
}

void q_tabwidget_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QTabWidget_OnIsSignalConnected((QTabWidget*)self, (intptr_t)slot);
}

void q_tabwidget_delete(void* self) {
    QTabWidget_Delete((QTabWidget*)(self));
}
