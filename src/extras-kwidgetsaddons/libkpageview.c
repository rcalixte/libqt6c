#include "../libqabstractitemdelegate.hpp"
#include "../libqabstractitemmodel.hpp"
#include "../libqabstractitemview.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkpageview.hpp"
#include "libkpageview.h"

KPageView* k_pageview_new(void* parent) {
    return KPageView_new((QWidget*)parent);
}

KPageView* k_pageview_new2() {
    return KPageView_new2();
}

const QMetaObject* k_pageview_meta_object(void* self) {
    return KPageView_MetaObject((KPageView*)self);
}

void k_pageview_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KPageView_OnMetaObject((KPageView*)self, (intptr_t)callback);
}

const QMetaObject* k_pageview_super_meta_object(void* self) {
    return KPageView_SuperMetaObject((KPageView*)self);
}

void* k_pageview_metacast(void* self, const char* param1) {
    return KPageView_Metacast((KPageView*)self, param1);
}

void k_pageview_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KPageView_OnMetacast((KPageView*)self, (intptr_t)callback);
}

void* k_pageview_super_metacast(void* self, const char* param1) {
    return KPageView_SuperMetacast((KPageView*)self, param1);
}

int32_t k_pageview_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageView_Metacall((KPageView*)self, param1, param2, param3);
}

void k_pageview_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPageView_OnMetacall((KPageView*)self, (intptr_t)callback);
}

int32_t k_pageview_super_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageView_SuperMetacall((KPageView*)self, param1, param2, param3);
}

const char* k_pageview_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_model(void* self, void* model) {
    KPageView_SetModel((KPageView*)self, (QAbstractItemModel*)model);
}

QAbstractItemModel* k_pageview_model(void* self) {
    return KPageView_Model((KPageView*)self);
}

void k_pageview_set_face_type(void* self, int32_t faceType) {
    KPageView_SetFaceType((KPageView*)self, faceType);
}

int32_t k_pageview_face_type(void* self) {
    return KPageView_FaceType((KPageView*)self);
}

void k_pageview_set_current_page(void* self, void* index) {
    KPageView_SetCurrentPage((KPageView*)self, (QModelIndex*)index);
}

QModelIndex* k_pageview_current_page(void* self) {
    return KPageView_CurrentPage((KPageView*)self);
}

void k_pageview_set_item_delegate(void* self, void* delegate) {
    KPageView_SetItemDelegate((KPageView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_pageview_item_delegate(void* self) {
    return KPageView_ItemDelegate((KPageView*)self);
}

void k_pageview_set_default_widget(void* self, void* widget) {
    KPageView_SetDefaultWidget((KPageView*)self, (QWidget*)widget);
}

void k_pageview_set_page_header(void* self, void* header) {
    KPageView_SetPageHeader((KPageView*)self, (QWidget*)header);
}

QWidget* k_pageview_page_header(void* self) {
    return KPageView_PageHeader((KPageView*)self);
}

void k_pageview_set_page_footer(void* self, void* footer) {
    KPageView_SetPageFooter((KPageView*)self, (QWidget*)footer);
}

QWidget* k_pageview_page_footer(void* self) {
    return KPageView_PageFooter((KPageView*)self);
}

void k_pageview_current_page_changed(void* self, void* current, void* previous) {
    KPageView_CurrentPageChanged((KPageView*)self, (QModelIndex*)current, (QModelIndex*)previous);
}

void k_pageview_on_current_page_changed(void* self, void (*callback)(void*, void*, void*)) {
    KPageView_Connect_CurrentPageChanged((KPageView*)self, (intptr_t)callback);
}

QAbstractItemView* k_pageview_create_view(void* self) {
    return KPageView_CreateView((KPageView*)self);
}

void k_pageview_on_create_view(void* self, QAbstractItemView* (*callback)()) {
    KPageView_OnCreateView((KPageView*)self, (intptr_t)callback);
}

QAbstractItemView* k_pageview_super_create_view(void* self) {
    return KPageView_SuperCreateView((KPageView*)self);
}

bool k_pageview_show_page_header(void* self) {
    return KPageView_ShowPageHeader((KPageView*)self);
}

void k_pageview_on_show_page_header(void* self, bool (*callback)()) {
    KPageView_OnShowPageHeader((KPageView*)self, (intptr_t)callback);
}

bool k_pageview_super_show_page_header(void* self) {
    return KPageView_SuperShowPageHeader((KPageView*)self);
}

int32_t k_pageview_view_position(void* self) {
    return KPageView_ViewPosition((KPageView*)self);
}

void k_pageview_on_view_position(void* self, int32_t (*callback)()) {
    KPageView_OnViewPosition((KPageView*)self, (intptr_t)callback);
}

int32_t k_pageview_super_view_position(void* self) {
    return KPageView_SuperViewPosition((KPageView*)self);
}

const char* k_pageview_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pageview_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t k_pageview_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_pageview_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_pageview_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_pageview_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_pageview_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_pageview_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_pageview_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_pageview_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_pageview_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_pageview_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_pageview_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_pageview_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_pageview_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_pageview_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_pageview_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_pageview_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_pageview_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_pageview_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_pageview_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_pageview_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_pageview_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_pageview_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_pageview_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_pageview_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_pageview_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_pageview_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_pageview_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_pageview_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_pageview_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_pageview_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_pageview_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_pageview_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_pageview_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_pageview_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_pageview_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_pageview_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_pageview_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_pageview_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_pageview_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_pageview_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_pageview_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_pageview_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_pageview_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_pageview_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_pageview_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_pageview_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_pageview_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_pageview_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_pageview_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_pageview_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_pageview_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_pageview_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_pageview_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_pageview_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pageview_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pageview_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pageview_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pageview_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pageview_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pageview_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pageview_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pageview_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pageview_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_pageview_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pageview_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_pageview_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_pageview_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_pageview_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_pageview_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_pageview_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_pageview_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_pageview_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_pageview_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_pageview_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_pageview_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_pageview_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_pageview_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_pageview_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_pageview_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_pageview_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_pageview_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_pageview_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_pageview_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_pageview_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_pageview_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_pageview_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_pageview_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_pageview_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_pageview_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_pageview_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_pageview_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_pageview_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_pageview_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_pageview_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_pageview_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_pageview_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_pageview_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_pageview_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_pageview_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_pageview_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pageview_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_pageview_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_pageview_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_pageview_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_pageview_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_pageview_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_pageview_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_pageview_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_pageview_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_pageview_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_pageview_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_pageview_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_pageview_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_pageview_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pageview_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_pageview_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_pageview_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_pageview_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_pageview_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_pageview_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_pageview_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_pageview_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_pageview_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_pageview_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_pageview_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_pageview_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_pageview_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_pageview_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_pageview_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_pageview_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_pageview_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_pageview_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_pageview_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_pageview_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_pageview_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_pageview_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_pageview_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_pageview_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_pageview_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_pageview_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_pageview_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_pageview_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_pageview_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_pageview_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_pageview_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_pageview_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_pageview_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_pageview_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_pageview_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_pageview_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_pageview_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_pageview_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_pageview_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_pageview_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_pageview_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_pageview_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_pageview_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_pageview_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_pageview_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_pageview_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_pageview_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_pageview_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_pageview_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_pageview_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_pageview_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_pageview_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_pageview_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_pageview_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_pageview_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_pageview_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_pageview_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_pageview_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_pageview_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_pageview_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_pageview_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_pageview_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_pageview_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_pageview_restore_geometry(void* self, char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_pageview_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_pageview_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_pageview_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_pageview_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_pageview_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_pageview_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_pageview_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_pageview_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_pageview_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_pageview_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_pageview_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_pageview_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_pageview_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_pageview_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_pageview_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_pageview_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_pageview_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_pageview_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_pageview_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_pageview_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_pageview_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_pageview_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_pageview_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_pageview_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_pageview_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_pageview_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_pageview_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_pageview_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_pageview_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_pageview_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_pageview_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_pageview_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_pageview_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_pageview_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_pageview_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_pageview_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_pageview_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_pageview_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_pageview_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_pageview_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_pageview_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_pageview_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_pageview_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_pageview_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_pageview_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_pageview_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_pageview_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_pageview_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_pageview_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_pageview_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_pageview_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_pageview_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_pageview_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_pageview_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_pageview_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_pageview_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_pageview_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_pageview_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_pageview_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_pageview_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_pageview_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_pageview_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_pageview_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_pageview_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_pageview_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_pageview_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_pageview_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_pageview_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_pageview_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_pageview_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_pageview_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_pageview_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_pageview_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pageview_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_pageview_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_pageview_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pageview_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_pageview_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_pageview_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_pageview_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_pageview_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_pageview_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_pageview_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_pageview_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_pageview_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_pageview_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_pageview_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pageview_set_object_name(void* self, const char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pageview_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pageview_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pageview_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pageview_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pageview_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pageview_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pageview_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pageview_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_pageview_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_pageview_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pageview_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pageview_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pageview_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pageview_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pageview_connect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Connect((QObject*)sender, signal, (QObject*)receiver, member);
}

QMetaObject__Connection* k_pageview_connect2(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pageview_connect3(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect3((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pageview_disconnect(void* sender, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect((QObject*)sender, signal, (QObject*)receiver, member);
}

bool k_pageview_disconnect2(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect2((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pageview_disconnect3(void* self) {
    return QObject_Disconnect3((QObject*)self);
}

bool k_pageview_disconnect4(void* self, void* receiver) {
    return QObject_Disconnect4((QObject*)self, (QObject*)receiver);
}

bool k_pageview_disconnect5(void* param1) {
    return QObject_Disconnect5((QMetaObject__Connection*)param1);
}

void k_pageview_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pageview_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pageview_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pageview_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pageview_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_pageview_dynamic_property_names\n");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* k_pageview_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pageview_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pageview_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pageview_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_pageview_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_pageview_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pageview_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_pageview_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_pageview_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_pageview_connect5(void* sender, const char* signal, void* receiver, const char* member, int32_t param5) {
    return QObject_Connect5((QObject*)sender, signal, (QObject*)receiver, member, param5);
}

QMetaObject__Connection* k_pageview_connect52(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect52((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_pageview_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

bool k_pageview_disconnect1(void* self, const char* signal) {
    return QObject_Disconnect1((QObject*)self, signal);
}

bool k_pageview_disconnect22(void* self, const char* signal, void* receiver) {
    return QObject_Disconnect22((QObject*)self, signal, (QObject*)receiver);
}

bool k_pageview_disconnect32(void* self, const char* signal, void* receiver, const char* member) {
    return QObject_Disconnect32((QObject*)self, signal, (QObject*)receiver, member);
}

bool k_pageview_disconnect23(void* self, void* receiver, const char* member) {
    return QObject_Disconnect23((QObject*)self, (QObject*)receiver, member);
}

void k_pageview_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pageview_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_pageview_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_pageview_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_pageview_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_pageview_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_pageview_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_pageview_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_pageview_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_pageview_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_pageview_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_pageview_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_pageview_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_pageview_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_pageview_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_pageview_dev_type(void* self) {
    return KPageView_DevType((KPageView*)self);
}

int32_t k_pageview_super_dev_type(void* self) {
    return KPageView_SuperDevType((KPageView*)self);
}

void k_pageview_on_dev_type(void* self, int32_t (*callback)()) {
    KPageView_OnDevType((KPageView*)self, (intptr_t)callback);
}

void k_pageview_set_visible(void* self, bool visible) {
    KPageView_SetVisible((KPageView*)self, visible);
}

void k_pageview_super_set_visible(void* self, bool visible) {
    KPageView_SuperSetVisible((KPageView*)self, visible);
}

void k_pageview_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPageView_OnSetVisible((KPageView*)self, (intptr_t)callback);
}

QSize* k_pageview_size_hint(void* self) {
    return KPageView_SizeHint((KPageView*)self);
}

QSize* k_pageview_super_size_hint(void* self) {
    return KPageView_SuperSizeHint((KPageView*)self);
}

void k_pageview_on_size_hint(void* self, QSize* (*callback)()) {
    KPageView_OnSizeHint((KPageView*)self, (intptr_t)callback);
}

QSize* k_pageview_minimum_size_hint(void* self) {
    return KPageView_MinimumSizeHint((KPageView*)self);
}

QSize* k_pageview_super_minimum_size_hint(void* self) {
    return KPageView_SuperMinimumSizeHint((KPageView*)self);
}

void k_pageview_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPageView_OnMinimumSizeHint((KPageView*)self, (intptr_t)callback);
}

int32_t k_pageview_height_for_width(void* self, int param1) {
    return KPageView_HeightForWidth((KPageView*)self, param1);
}

int32_t k_pageview_super_height_for_width(void* self, int param1) {
    return KPageView_SuperHeightForWidth((KPageView*)self, param1);
}

void k_pageview_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPageView_OnHeightForWidth((KPageView*)self, (intptr_t)callback);
}

bool k_pageview_has_height_for_width(void* self) {
    return KPageView_HasHeightForWidth((KPageView*)self);
}

bool k_pageview_super_has_height_for_width(void* self) {
    return KPageView_SuperHasHeightForWidth((KPageView*)self);
}

void k_pageview_on_has_height_for_width(void* self, bool (*callback)()) {
    KPageView_OnHasHeightForWidth((KPageView*)self, (intptr_t)callback);
}

QPaintEngine* k_pageview_paint_engine(void* self) {
    return KPageView_PaintEngine((KPageView*)self);
}

QPaintEngine* k_pageview_super_paint_engine(void* self) {
    return KPageView_SuperPaintEngine((KPageView*)self);
}

void k_pageview_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPageView_OnPaintEngine((KPageView*)self, (intptr_t)callback);
}

bool k_pageview_event(void* self, void* event) {
    return KPageView_Event((KPageView*)self, (QEvent*)event);
}

bool k_pageview_super_event(void* self, void* event) {
    return KPageView_SuperEvent((KPageView*)self, (QEvent*)event);
}

void k_pageview_on_event(void* self, bool (*callback)(void*, void*)) {
    KPageView_OnEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_mouse_press_event(void* self, void* event) {
    KPageView_MousePressEvent((KPageView*)self, (QMouseEvent*)event);
}

void k_pageview_super_mouse_press_event(void* self, void* event) {
    KPageView_SuperMousePressEvent((KPageView*)self, (QMouseEvent*)event);
}

void k_pageview_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnMousePressEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_mouse_release_event(void* self, void* event) {
    KPageView_MouseReleaseEvent((KPageView*)self, (QMouseEvent*)event);
}

void k_pageview_super_mouse_release_event(void* self, void* event) {
    KPageView_SuperMouseReleaseEvent((KPageView*)self, (QMouseEvent*)event);
}

void k_pageview_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnMouseReleaseEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_mouse_double_click_event(void* self, void* event) {
    KPageView_MouseDoubleClickEvent((KPageView*)self, (QMouseEvent*)event);
}

void k_pageview_super_mouse_double_click_event(void* self, void* event) {
    KPageView_SuperMouseDoubleClickEvent((KPageView*)self, (QMouseEvent*)event);
}

void k_pageview_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnMouseDoubleClickEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_mouse_move_event(void* self, void* event) {
    KPageView_MouseMoveEvent((KPageView*)self, (QMouseEvent*)event);
}

void k_pageview_super_mouse_move_event(void* self, void* event) {
    KPageView_SuperMouseMoveEvent((KPageView*)self, (QMouseEvent*)event);
}

void k_pageview_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnMouseMoveEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_wheel_event(void* self, void* event) {
    KPageView_WheelEvent((KPageView*)self, (QWheelEvent*)event);
}

void k_pageview_super_wheel_event(void* self, void* event) {
    KPageView_SuperWheelEvent((KPageView*)self, (QWheelEvent*)event);
}

void k_pageview_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnWheelEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_key_press_event(void* self, void* event) {
    KPageView_KeyPressEvent((KPageView*)self, (QKeyEvent*)event);
}

void k_pageview_super_key_press_event(void* self, void* event) {
    KPageView_SuperKeyPressEvent((KPageView*)self, (QKeyEvent*)event);
}

void k_pageview_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnKeyPressEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_key_release_event(void* self, void* event) {
    KPageView_KeyReleaseEvent((KPageView*)self, (QKeyEvent*)event);
}

void k_pageview_super_key_release_event(void* self, void* event) {
    KPageView_SuperKeyReleaseEvent((KPageView*)self, (QKeyEvent*)event);
}

void k_pageview_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnKeyReleaseEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_focus_in_event(void* self, void* event) {
    KPageView_FocusInEvent((KPageView*)self, (QFocusEvent*)event);
}

void k_pageview_super_focus_in_event(void* self, void* event) {
    KPageView_SuperFocusInEvent((KPageView*)self, (QFocusEvent*)event);
}

void k_pageview_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnFocusInEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_focus_out_event(void* self, void* event) {
    KPageView_FocusOutEvent((KPageView*)self, (QFocusEvent*)event);
}

void k_pageview_super_focus_out_event(void* self, void* event) {
    KPageView_SuperFocusOutEvent((KPageView*)self, (QFocusEvent*)event);
}

void k_pageview_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnFocusOutEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_enter_event(void* self, void* event) {
    KPageView_EnterEvent((KPageView*)self, (QEnterEvent*)event);
}

void k_pageview_super_enter_event(void* self, void* event) {
    KPageView_SuperEnterEvent((KPageView*)self, (QEnterEvent*)event);
}

void k_pageview_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnEnterEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_leave_event(void* self, void* event) {
    KPageView_LeaveEvent((KPageView*)self, (QEvent*)event);
}

void k_pageview_super_leave_event(void* self, void* event) {
    KPageView_SuperLeaveEvent((KPageView*)self, (QEvent*)event);
}

void k_pageview_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnLeaveEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_paint_event(void* self, void* event) {
    KPageView_PaintEvent((KPageView*)self, (QPaintEvent*)event);
}

void k_pageview_super_paint_event(void* self, void* event) {
    KPageView_SuperPaintEvent((KPageView*)self, (QPaintEvent*)event);
}

void k_pageview_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnPaintEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_move_event(void* self, void* event) {
    KPageView_MoveEvent((KPageView*)self, (QMoveEvent*)event);
}

void k_pageview_super_move_event(void* self, void* event) {
    KPageView_SuperMoveEvent((KPageView*)self, (QMoveEvent*)event);
}

void k_pageview_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnMoveEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_resize_event(void* self, void* event) {
    KPageView_ResizeEvent((KPageView*)self, (QResizeEvent*)event);
}

void k_pageview_super_resize_event(void* self, void* event) {
    KPageView_SuperResizeEvent((KPageView*)self, (QResizeEvent*)event);
}

void k_pageview_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnResizeEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_close_event(void* self, void* event) {
    KPageView_CloseEvent((KPageView*)self, (QCloseEvent*)event);
}

void k_pageview_super_close_event(void* self, void* event) {
    KPageView_SuperCloseEvent((KPageView*)self, (QCloseEvent*)event);
}

void k_pageview_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnCloseEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_context_menu_event(void* self, void* event) {
    KPageView_ContextMenuEvent((KPageView*)self, (QContextMenuEvent*)event);
}

void k_pageview_super_context_menu_event(void* self, void* event) {
    KPageView_SuperContextMenuEvent((KPageView*)self, (QContextMenuEvent*)event);
}

void k_pageview_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnContextMenuEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_tablet_event(void* self, void* event) {
    KPageView_TabletEvent((KPageView*)self, (QTabletEvent*)event);
}

void k_pageview_super_tablet_event(void* self, void* event) {
    KPageView_SuperTabletEvent((KPageView*)self, (QTabletEvent*)event);
}

void k_pageview_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnTabletEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_action_event(void* self, void* event) {
    KPageView_ActionEvent((KPageView*)self, (QActionEvent*)event);
}

void k_pageview_super_action_event(void* self, void* event) {
    KPageView_SuperActionEvent((KPageView*)self, (QActionEvent*)event);
}

void k_pageview_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnActionEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_drag_enter_event(void* self, void* event) {
    KPageView_DragEnterEvent((KPageView*)self, (QDragEnterEvent*)event);
}

void k_pageview_super_drag_enter_event(void* self, void* event) {
    KPageView_SuperDragEnterEvent((KPageView*)self, (QDragEnterEvent*)event);
}

void k_pageview_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnDragEnterEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_drag_move_event(void* self, void* event) {
    KPageView_DragMoveEvent((KPageView*)self, (QDragMoveEvent*)event);
}

void k_pageview_super_drag_move_event(void* self, void* event) {
    KPageView_SuperDragMoveEvent((KPageView*)self, (QDragMoveEvent*)event);
}

void k_pageview_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnDragMoveEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_drag_leave_event(void* self, void* event) {
    KPageView_DragLeaveEvent((KPageView*)self, (QDragLeaveEvent*)event);
}

void k_pageview_super_drag_leave_event(void* self, void* event) {
    KPageView_SuperDragLeaveEvent((KPageView*)self, (QDragLeaveEvent*)event);
}

void k_pageview_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnDragLeaveEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_drop_event(void* self, void* event) {
    KPageView_DropEvent((KPageView*)self, (QDropEvent*)event);
}

void k_pageview_super_drop_event(void* self, void* event) {
    KPageView_SuperDropEvent((KPageView*)self, (QDropEvent*)event);
}

void k_pageview_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnDropEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_show_event(void* self, void* event) {
    KPageView_ShowEvent((KPageView*)self, (QShowEvent*)event);
}

void k_pageview_super_show_event(void* self, void* event) {
    KPageView_SuperShowEvent((KPageView*)self, (QShowEvent*)event);
}

void k_pageview_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnShowEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_hide_event(void* self, void* event) {
    KPageView_HideEvent((KPageView*)self, (QHideEvent*)event);
}

void k_pageview_super_hide_event(void* self, void* event) {
    KPageView_SuperHideEvent((KPageView*)self, (QHideEvent*)event);
}

void k_pageview_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnHideEvent((KPageView*)self, (intptr_t)callback);
}

bool k_pageview_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KPageView_NativeEvent((KPageView*)self, qstring(eventType), message, result);
}

bool k_pageview_super_native_event(void* self, char* eventType, void* message, intptr_t* result) {
    return KPageView_SuperNativeEvent((KPageView*)self, qstring(eventType), message, result);
}

void k_pageview_on_native_event(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    KPageView_OnNativeEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_change_event(void* self, void* param1) {
    KPageView_ChangeEvent((KPageView*)self, (QEvent*)param1);
}

void k_pageview_super_change_event(void* self, void* param1) {
    KPageView_SuperChangeEvent((KPageView*)self, (QEvent*)param1);
}

void k_pageview_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnChangeEvent((KPageView*)self, (intptr_t)callback);
}

int32_t k_pageview_metric(void* self, int32_t param1) {
    return KPageView_Metric((KPageView*)self, param1);
}

int32_t k_pageview_super_metric(void* self, int32_t param1) {
    return KPageView_SuperMetric((KPageView*)self, param1);
}

void k_pageview_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPageView_OnMetric((KPageView*)self, (intptr_t)callback);
}

void k_pageview_init_painter(void* self, void* painter) {
    KPageView_InitPainter((KPageView*)self, (QPainter*)painter);
}

void k_pageview_super_init_painter(void* self, void* painter) {
    KPageView_SuperInitPainter((KPageView*)self, (QPainter*)painter);
}

void k_pageview_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPageView_OnInitPainter((KPageView*)self, (intptr_t)callback);
}

QPaintDevice* k_pageview_redirected(void* self, void* offset) {
    return KPageView_Redirected((KPageView*)self, (QPoint*)offset);
}

QPaintDevice* k_pageview_super_redirected(void* self, void* offset) {
    return KPageView_SuperRedirected((KPageView*)self, (QPoint*)offset);
}

void k_pageview_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPageView_OnRedirected((KPageView*)self, (intptr_t)callback);
}

QPainter* k_pageview_shared_painter(void* self) {
    return KPageView_SharedPainter((KPageView*)self);
}

QPainter* k_pageview_super_shared_painter(void* self) {
    return KPageView_SuperSharedPainter((KPageView*)self);
}

void k_pageview_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPageView_OnSharedPainter((KPageView*)self, (intptr_t)callback);
}

void k_pageview_input_method_event(void* self, void* param1) {
    KPageView_InputMethodEvent((KPageView*)self, (QInputMethodEvent*)param1);
}

void k_pageview_super_input_method_event(void* self, void* param1) {
    KPageView_SuperInputMethodEvent((KPageView*)self, (QInputMethodEvent*)param1);
}

void k_pageview_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnInputMethodEvent((KPageView*)self, (intptr_t)callback);
}

QVariant* k_pageview_input_method_query(void* self, int32_t param1) {
    return KPageView_InputMethodQuery((KPageView*)self, param1);
}

QVariant* k_pageview_super_input_method_query(void* self, int32_t param1) {
    return KPageView_SuperInputMethodQuery((KPageView*)self, param1);
}

void k_pageview_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KPageView_OnInputMethodQuery((KPageView*)self, (intptr_t)callback);
}

bool k_pageview_focus_next_prev_child(void* self, bool next) {
    return KPageView_FocusNextPrevChild((KPageView*)self, next);
}

bool k_pageview_super_focus_next_prev_child(void* self, bool next) {
    return KPageView_SuperFocusNextPrevChild((KPageView*)self, next);
}

void k_pageview_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPageView_OnFocusNextPrevChild((KPageView*)self, (intptr_t)callback);
}

bool k_pageview_event_filter(void* self, void* watched, void* event) {
    return KPageView_EventFilter((KPageView*)self, (QObject*)watched, (QEvent*)event);
}

bool k_pageview_super_event_filter(void* self, void* watched, void* event) {
    return KPageView_SuperEventFilter((KPageView*)self, (QObject*)watched, (QEvent*)event);
}

void k_pageview_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPageView_OnEventFilter((KPageView*)self, (intptr_t)callback);
}

void k_pageview_timer_event(void* self, void* event) {
    KPageView_TimerEvent((KPageView*)self, (QTimerEvent*)event);
}

void k_pageview_super_timer_event(void* self, void* event) {
    KPageView_SuperTimerEvent((KPageView*)self, (QTimerEvent*)event);
}

void k_pageview_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnTimerEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_child_event(void* self, void* event) {
    KPageView_ChildEvent((KPageView*)self, (QChildEvent*)event);
}

void k_pageview_super_child_event(void* self, void* event) {
    KPageView_SuperChildEvent((KPageView*)self, (QChildEvent*)event);
}

void k_pageview_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnChildEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_custom_event(void* self, void* event) {
    KPageView_CustomEvent((KPageView*)self, (QEvent*)event);
}

void k_pageview_super_custom_event(void* self, void* event) {
    KPageView_SuperCustomEvent((KPageView*)self, (QEvent*)event);
}

void k_pageview_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPageView_OnCustomEvent((KPageView*)self, (intptr_t)callback);
}

void k_pageview_connect_notify(void* self, void* signal) {
    KPageView_ConnectNotify((KPageView*)self, (QMetaMethod*)signal);
}

void k_pageview_super_connect_notify(void* self, void* signal) {
    KPageView_SuperConnectNotify((KPageView*)self, (QMetaMethod*)signal);
}

void k_pageview_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPageView_OnConnectNotify((KPageView*)self, (intptr_t)callback);
}

void k_pageview_disconnect_notify(void* self, void* signal) {
    KPageView_DisconnectNotify((KPageView*)self, (QMetaMethod*)signal);
}

void k_pageview_super_disconnect_notify(void* self, void* signal) {
    KPageView_SuperDisconnectNotify((KPageView*)self, (QMetaMethod*)signal);
}

void k_pageview_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPageView_OnDisconnectNotify((KPageView*)self, (intptr_t)callback);
}

void k_pageview_update_micro_focus(void* self) {
    KPageView_UpdateMicroFocus((KPageView*)self);
}

void k_pageview_super_update_micro_focus(void* self) {
    KPageView_SuperUpdateMicroFocus((KPageView*)self);
}

void k_pageview_on_update_micro_focus(void* self, void (*callback)()) {
    KPageView_OnUpdateMicroFocus((KPageView*)self, (intptr_t)callback);
}

void k_pageview_create(void* self) {
    KPageView_Create((KPageView*)self);
}

void k_pageview_super_create(void* self) {
    KPageView_SuperCreate((KPageView*)self);
}

void k_pageview_on_create(void* self, void (*callback)()) {
    KPageView_OnCreate((KPageView*)self, (intptr_t)callback);
}

void k_pageview_destroy(void* self) {
    KPageView_Destroy((KPageView*)self);
}

void k_pageview_super_destroy(void* self) {
    KPageView_SuperDestroy((KPageView*)self);
}

void k_pageview_on_destroy(void* self, void (*callback)()) {
    KPageView_OnDestroy((KPageView*)self, (intptr_t)callback);
}

bool k_pageview_focus_next_child(void* self) {
    return KPageView_FocusNextChild((KPageView*)self);
}

bool k_pageview_super_focus_next_child(void* self) {
    return KPageView_SuperFocusNextChild((KPageView*)self);
}

void k_pageview_on_focus_next_child(void* self, bool (*callback)()) {
    KPageView_OnFocusNextChild((KPageView*)self, (intptr_t)callback);
}

bool k_pageview_focus_previous_child(void* self) {
    return KPageView_FocusPreviousChild((KPageView*)self);
}

bool k_pageview_super_focus_previous_child(void* self) {
    return KPageView_SuperFocusPreviousChild((KPageView*)self);
}

void k_pageview_on_focus_previous_child(void* self, bool (*callback)()) {
    KPageView_OnFocusPreviousChild((KPageView*)self, (intptr_t)callback);
}

QObject* k_pageview_sender(void* self) {
    return KPageView_Sender((KPageView*)self);
}

QObject* k_pageview_super_sender(void* self) {
    return KPageView_SuperSender((KPageView*)self);
}

void k_pageview_on_sender(void* self, QObject* (*callback)()) {
    KPageView_OnSender((KPageView*)self, (intptr_t)callback);
}

int32_t k_pageview_sender_signal_index(void* self) {
    return KPageView_SenderSignalIndex((KPageView*)self);
}

int32_t k_pageview_super_sender_signal_index(void* self) {
    return KPageView_SuperSenderSignalIndex((KPageView*)self);
}

void k_pageview_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPageView_OnSenderSignalIndex((KPageView*)self, (intptr_t)callback);
}

int32_t k_pageview_receivers(void* self, const char* signal) {
    return KPageView_Receivers((KPageView*)self, signal);
}

int32_t k_pageview_super_receivers(void* self, const char* signal) {
    return KPageView_SuperReceivers((KPageView*)self, signal);
}

void k_pageview_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPageView_OnReceivers((KPageView*)self, (intptr_t)callback);
}

bool k_pageview_is_signal_connected(void* self, void* signal) {
    return KPageView_IsSignalConnected((KPageView*)self, (QMetaMethod*)signal);
}

bool k_pageview_super_is_signal_connected(void* self, void* signal) {
    return KPageView_SuperIsSignalConnected((KPageView*)self, (QMetaMethod*)signal);
}

void k_pageview_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPageView_OnIsSignalConnected((KPageView*)self, (intptr_t)callback);
}

double k_pageview_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPageView_GetDecodedMetricF((KPageView*)self, metricA, metricB);
}

double k_pageview_super_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPageView_SuperGetDecodedMetricF((KPageView*)self, metricA, metricB);
}

void k_pageview_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPageView_OnGetDecodedMetricF((KPageView*)self, (intptr_t)callback);
}

void k_pageview_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pageview_delete(void* self) {
    KPageView_Delete((KPageView*)(self));
}
