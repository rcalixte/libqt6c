#include "libkpageview.hpp"
#include "libkpagewidgetmodel.hpp"
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
#include "libkpagewidget.hpp"
#include "libkpagewidget.h"

KPageWidget* k_pagewidget_new(void* parent) {
    return KPageWidget_new((QWidget*)parent);
}

KPageWidget* k_pagewidget_new2() {
    return KPageWidget_new2();
}

const QMetaObject* k_pagewidget_meta_object(void* self) {
    return KPageWidget_MetaObject((KPageWidget*)self);
}

void* k_pagewidget_metacast(void* self, const char* param1) {
    return KPageWidget_Metacast((KPageWidget*)self, param1);
}

int32_t k_pagewidget_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageWidget_Metacall((KPageWidget*)self, param1, param2, param3);
}

void k_pagewidget_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KPageWidget_OnMetacall((KPageWidget*)self, (intptr_t)callback);
}

int32_t k_pagewidget_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KPageWidget_QBaseMetacall((KPageWidget*)self, param1, param2, param3);
}

const char* k_pagewidget_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

KPageWidgetItem* k_pagewidget_add_page(void* self, void* widget, const char* name) {
    return KPageWidget_AddPage((KPageWidget*)self, (QWidget*)widget, qstring(name));
}

void k_pagewidget_add_page2(void* self, void* item) {
    KPageWidget_AddPage2((KPageWidget*)self, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_pagewidget_insert_page(void* self, void* before, void* widget, const char* name) {
    return KPageWidget_InsertPage((KPageWidget*)self, (KPageWidgetItem*)before, (QWidget*)widget, qstring(name));
}

void k_pagewidget_insert_page2(void* self, void* before, void* item) {
    KPageWidget_InsertPage2((KPageWidget*)self, (KPageWidgetItem*)before, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_pagewidget_add_sub_page(void* self, void* parent, void* widget, const char* name) {
    return KPageWidget_AddSubPage((KPageWidget*)self, (KPageWidgetItem*)parent, (QWidget*)widget, qstring(name));
}

void k_pagewidget_add_sub_page2(void* self, void* parent, void* item) {
    KPageWidget_AddSubPage2((KPageWidget*)self, (KPageWidgetItem*)parent, (KPageWidgetItem*)item);
}

void k_pagewidget_remove_page(void* self, void* item) {
    KPageWidget_RemovePage((KPageWidget*)self, (KPageWidgetItem*)item);
}

void k_pagewidget_set_current_page(void* self, void* item) {
    KPageWidget_SetCurrentPage((KPageWidget*)self, (KPageWidgetItem*)item);
}

KPageWidgetItem* k_pagewidget_current_page(void* self) {
    return KPageWidget_CurrentPage((KPageWidget*)self);
}

void k_pagewidget_current_page_changed(void* self, void* current, void* before) {
    KPageWidget_CurrentPageChanged((KPageWidget*)self, (KPageWidgetItem*)current, (KPageWidgetItem*)before);
}

void k_pagewidget_on_current_page_changed(void* self, void (*callback)(void*, void*, void*)) {
    KPageWidget_Connect_CurrentPageChanged((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_page_toggled(void* self, void* page, bool checked) {
    KPageWidget_PageToggled((KPageWidget*)self, (KPageWidgetItem*)page, checked);
}

void k_pagewidget_on_page_toggled(void* self, void (*callback)(void*, void*, bool)) {
    KPageWidget_Connect_PageToggled((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_page_removed(void* self, void* page) {
    KPageWidget_PageRemoved((KPageWidget*)self, (KPageWidgetItem*)page);
}

void k_pagewidget_on_page_removed(void* self, void (*callback)(void*, void*)) {
    KPageWidget_Connect_PageRemoved((KPageWidget*)self, (intptr_t)callback);
}

const char* k_pagewidget_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagewidget_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_model(void* self, void* model) {
    KPageView_SetModel((KPageView*)self, (QAbstractItemModel*)model);
}

QAbstractItemModel* k_pagewidget_model(void* self) {
    return KPageView_Model((KPageView*)self);
}

void k_pagewidget_set_face_type(void* self, int32_t faceType) {
    KPageView_SetFaceType((KPageView*)self, faceType);
}

int32_t k_pagewidget_face_type(void* self) {
    return KPageView_FaceType((KPageView*)self);
}

void k_pagewidget_set_item_delegate(void* self, void* delegate) {
    KPageView_SetItemDelegate((KPageView*)self, (QAbstractItemDelegate*)delegate);
}

QAbstractItemDelegate* k_pagewidget_item_delegate(void* self) {
    return KPageView_ItemDelegate((KPageView*)self);
}

void k_pagewidget_set_default_widget(void* self, void* widget) {
    KPageView_SetDefaultWidget((KPageView*)self, (QWidget*)widget);
}

void k_pagewidget_set_page_header(void* self, void* header) {
    KPageView_SetPageHeader((KPageView*)self, (QWidget*)header);
}

QWidget* k_pagewidget_page_header(void* self) {
    return KPageView_PageHeader((KPageView*)self);
}

void k_pagewidget_set_page_footer(void* self, void* footer) {
    KPageView_SetPageFooter((KPageView*)self, (QWidget*)footer);
}

QWidget* k_pagewidget_page_footer(void* self) {
    return KPageView_PageFooter((KPageView*)self);
}

uintptr_t k_pagewidget_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_pagewidget_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_pagewidget_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_pagewidget_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_pagewidget_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_pagewidget_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_pagewidget_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_pagewidget_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_pagewidget_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_pagewidget_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_pagewidget_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_pagewidget_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_pagewidget_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_pagewidget_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_pagewidget_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_pagewidget_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_pagewidget_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_pagewidget_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_pagewidget_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_pagewidget_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_pagewidget_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_pagewidget_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_pagewidget_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_pagewidget_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_pagewidget_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_pagewidget_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_pagewidget_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_pagewidget_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_pagewidget_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_pagewidget_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_pagewidget_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_pagewidget_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_pagewidget_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_pagewidget_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_pagewidget_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_pagewidget_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_pagewidget_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_pagewidget_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_pagewidget_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_pagewidget_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_pagewidget_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_pagewidget_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_pagewidget_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_pagewidget_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_pagewidget_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_pagewidget_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_pagewidget_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_pagewidget_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_pagewidget_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_pagewidget_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_pagewidget_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_pagewidget_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_pagewidget_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_pagewidget_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pagewidget_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pagewidget_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pagewidget_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pagewidget_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pagewidget_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pagewidget_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_pagewidget_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_pagewidget_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pagewidget_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_pagewidget_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_pagewidget_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_pagewidget_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_pagewidget_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_pagewidget_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_pagewidget_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_pagewidget_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_pagewidget_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_pagewidget_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_pagewidget_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_pagewidget_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_pagewidget_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_pagewidget_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_pagewidget_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_pagewidget_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_pagewidget_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_pagewidget_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_pagewidget_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_pagewidget_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_pagewidget_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_pagewidget_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_pagewidget_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_pagewidget_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_pagewidget_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_pagewidget_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_pagewidget_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_pagewidget_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_pagewidget_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_pagewidget_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_pagewidget_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_pagewidget_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_pagewidget_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_pagewidget_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_pagewidget_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_pagewidget_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_pagewidget_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_pagewidget_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagewidget_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_pagewidget_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_pagewidget_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_pagewidget_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_pagewidget_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_pagewidget_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_pagewidget_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_pagewidget_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_pagewidget_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_pagewidget_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_pagewidget_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_pagewidget_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_pagewidget_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_pagewidget_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_pagewidget_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_pagewidget_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_pagewidget_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_pagewidget_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_pagewidget_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_pagewidget_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_pagewidget_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_pagewidget_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_pagewidget_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_pagewidget_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_pagewidget_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_pagewidget_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_pagewidget_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_pagewidget_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_pagewidget_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_pagewidget_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_pagewidget_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_pagewidget_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_pagewidget_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_pagewidget_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_pagewidget_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_pagewidget_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_pagewidget_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_pagewidget_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_pagewidget_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_pagewidget_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_pagewidget_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_pagewidget_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_pagewidget_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_pagewidget_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_pagewidget_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_pagewidget_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_pagewidget_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_pagewidget_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_pagewidget_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_pagewidget_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_pagewidget_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_pagewidget_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_pagewidget_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_pagewidget_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_pagewidget_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_pagewidget_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_pagewidget_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_pagewidget_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_pagewidget_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_pagewidget_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_pagewidget_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_pagewidget_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_pagewidget_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_pagewidget_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_pagewidget_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_pagewidget_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_pagewidget_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_pagewidget_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_pagewidget_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_pagewidget_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_pagewidget_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_pagewidget_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_pagewidget_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_pagewidget_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_pagewidget_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_pagewidget_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_pagewidget_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_pagewidget_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_pagewidget_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_pagewidget_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_pagewidget_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_pagewidget_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_pagewidget_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_pagewidget_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_pagewidget_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_pagewidget_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_pagewidget_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_pagewidget_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_pagewidget_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_pagewidget_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_pagewidget_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_pagewidget_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_pagewidget_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_pagewidget_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_pagewidget_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_pagewidget_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_pagewidget_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_pagewidget_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_pagewidget_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_pagewidget_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_pagewidget_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_pagewidget_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_pagewidget_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_pagewidget_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_pagewidget_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_pagewidget_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_pagewidget_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_pagewidget_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_pagewidget_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_pagewidget_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_pagewidget_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_pagewidget_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_pagewidget_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_pagewidget_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_pagewidget_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_pagewidget_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_pagewidget_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_pagewidget_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_pagewidget_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_pagewidget_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_pagewidget_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_pagewidget_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_pagewidget_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_pagewidget_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_pagewidget_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_pagewidget_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_pagewidget_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_pagewidget_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_pagewidget_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_pagewidget_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_pagewidget_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_pagewidget_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_pagewidget_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_pagewidget_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_pagewidget_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_pagewidget_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_pagewidget_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_pagewidget_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_pagewidget_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_pagewidget_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_pagewidget_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_pagewidget_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_pagewidget_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_pagewidget_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_pagewidget_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_pagewidget_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_pagewidget_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_pagewidget_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_pagewidget_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_pagewidget_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_pagewidget_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pagewidget_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_pagewidget_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_pagewidget_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_pagewidget_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_pagewidget_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_pagewidget_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_pagewidget_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_pagewidget_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_pagewidget_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_pagewidget_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_pagewidget_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_pagewidget_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_pagewidget_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_pagewidget_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_pagewidget_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_pagewidget_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_pagewidget_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_pagewidget_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_pagewidget_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_pagewidget_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_pagewidget_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_pagewidget_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_pagewidget_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_pagewidget_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_pagewidget_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_pagewidget_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_pagewidget_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_pagewidget_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_pagewidget_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_pagewidget_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_pagewidget_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_pagewidget_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_pagewidget_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_pagewidget_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_pagewidget_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_pagewidget_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_pagewidget_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_pagewidget_dynamic_property_names");
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

QBindingStorage* k_pagewidget_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_pagewidget_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_pagewidget_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_pagewidget_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_pagewidget_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_pagewidget_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_pagewidget_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_pagewidget_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_pagewidget_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_pagewidget_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_pagewidget_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_pagewidget_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_pagewidget_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_pagewidget_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_pagewidget_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_pagewidget_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_pagewidget_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_pagewidget_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_pagewidget_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_pagewidget_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_pagewidget_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_pagewidget_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_pagewidget_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_pagewidget_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_pagewidget_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_pagewidget_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QAbstractItemView* k_pagewidget_create_view(void* self) {
    return KPageWidget_CreateView((KPageWidget*)self);
}

QAbstractItemView* k_pagewidget_qbase_create_view(void* self) {
    return KPageWidget_QBaseCreateView((KPageWidget*)self);
}

void k_pagewidget_on_create_view(void* self, QAbstractItemView* (*callback)()) {
    KPageWidget_OnCreateView((KPageWidget*)self, (intptr_t)callback);
}

bool k_pagewidget_show_page_header(void* self) {
    return KPageWidget_ShowPageHeader((KPageWidget*)self);
}

bool k_pagewidget_qbase_show_page_header(void* self) {
    return KPageWidget_QBaseShowPageHeader((KPageWidget*)self);
}

void k_pagewidget_on_show_page_header(void* self, bool (*callback)()) {
    KPageWidget_OnShowPageHeader((KPageWidget*)self, (intptr_t)callback);
}

int32_t k_pagewidget_view_position(void* self) {
    return KPageWidget_ViewPosition((KPageWidget*)self);
}

int32_t k_pagewidget_qbase_view_position(void* self) {
    return KPageWidget_QBaseViewPosition((KPageWidget*)self);
}

void k_pagewidget_on_view_position(void* self, int32_t (*callback)()) {
    KPageWidget_OnViewPosition((KPageWidget*)self, (intptr_t)callback);
}

int32_t k_pagewidget_dev_type(void* self) {
    return KPageWidget_DevType((KPageWidget*)self);
}

int32_t k_pagewidget_qbase_dev_type(void* self) {
    return KPageWidget_QBaseDevType((KPageWidget*)self);
}

void k_pagewidget_on_dev_type(void* self, int32_t (*callback)()) {
    KPageWidget_OnDevType((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_set_visible(void* self, bool visible) {
    KPageWidget_SetVisible((KPageWidget*)self, visible);
}

void k_pagewidget_qbase_set_visible(void* self, bool visible) {
    KPageWidget_QBaseSetVisible((KPageWidget*)self, visible);
}

void k_pagewidget_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KPageWidget_OnSetVisible((KPageWidget*)self, (intptr_t)callback);
}

QSize* k_pagewidget_size_hint(void* self) {
    return KPageWidget_SizeHint((KPageWidget*)self);
}

QSize* k_pagewidget_qbase_size_hint(void* self) {
    return KPageWidget_QBaseSizeHint((KPageWidget*)self);
}

void k_pagewidget_on_size_hint(void* self, QSize* (*callback)()) {
    KPageWidget_OnSizeHint((KPageWidget*)self, (intptr_t)callback);
}

QSize* k_pagewidget_minimum_size_hint(void* self) {
    return KPageWidget_MinimumSizeHint((KPageWidget*)self);
}

QSize* k_pagewidget_qbase_minimum_size_hint(void* self) {
    return KPageWidget_QBaseMinimumSizeHint((KPageWidget*)self);
}

void k_pagewidget_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KPageWidget_OnMinimumSizeHint((KPageWidget*)self, (intptr_t)callback);
}

int32_t k_pagewidget_height_for_width(void* self, int param1) {
    return KPageWidget_HeightForWidth((KPageWidget*)self, param1);
}

int32_t k_pagewidget_qbase_height_for_width(void* self, int param1) {
    return KPageWidget_QBaseHeightForWidth((KPageWidget*)self, param1);
}

void k_pagewidget_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KPageWidget_OnHeightForWidth((KPageWidget*)self, (intptr_t)callback);
}

bool k_pagewidget_has_height_for_width(void* self) {
    return KPageWidget_HasHeightForWidth((KPageWidget*)self);
}

bool k_pagewidget_qbase_has_height_for_width(void* self) {
    return KPageWidget_QBaseHasHeightForWidth((KPageWidget*)self);
}

void k_pagewidget_on_has_height_for_width(void* self, bool (*callback)()) {
    KPageWidget_OnHasHeightForWidth((KPageWidget*)self, (intptr_t)callback);
}

QPaintEngine* k_pagewidget_paint_engine(void* self) {
    return KPageWidget_PaintEngine((KPageWidget*)self);
}

QPaintEngine* k_pagewidget_qbase_paint_engine(void* self) {
    return KPageWidget_QBasePaintEngine((KPageWidget*)self);
}

void k_pagewidget_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KPageWidget_OnPaintEngine((KPageWidget*)self, (intptr_t)callback);
}

bool k_pagewidget_event(void* self, void* event) {
    return KPageWidget_Event((KPageWidget*)self, (QEvent*)event);
}

bool k_pagewidget_qbase_event(void* self, void* event) {
    return KPageWidget_QBaseEvent((KPageWidget*)self, (QEvent*)event);
}

void k_pagewidget_on_event(void* self, bool (*callback)(void*, void*)) {
    KPageWidget_OnEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_mouse_press_event(void* self, void* event) {
    KPageWidget_MousePressEvent((KPageWidget*)self, (QMouseEvent*)event);
}

void k_pagewidget_qbase_mouse_press_event(void* self, void* event) {
    KPageWidget_QBaseMousePressEvent((KPageWidget*)self, (QMouseEvent*)event);
}

void k_pagewidget_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnMousePressEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_mouse_release_event(void* self, void* event) {
    KPageWidget_MouseReleaseEvent((KPageWidget*)self, (QMouseEvent*)event);
}

void k_pagewidget_qbase_mouse_release_event(void* self, void* event) {
    KPageWidget_QBaseMouseReleaseEvent((KPageWidget*)self, (QMouseEvent*)event);
}

void k_pagewidget_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnMouseReleaseEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_mouse_double_click_event(void* self, void* event) {
    KPageWidget_MouseDoubleClickEvent((KPageWidget*)self, (QMouseEvent*)event);
}

void k_pagewidget_qbase_mouse_double_click_event(void* self, void* event) {
    KPageWidget_QBaseMouseDoubleClickEvent((KPageWidget*)self, (QMouseEvent*)event);
}

void k_pagewidget_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnMouseDoubleClickEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_mouse_move_event(void* self, void* event) {
    KPageWidget_MouseMoveEvent((KPageWidget*)self, (QMouseEvent*)event);
}

void k_pagewidget_qbase_mouse_move_event(void* self, void* event) {
    KPageWidget_QBaseMouseMoveEvent((KPageWidget*)self, (QMouseEvent*)event);
}

void k_pagewidget_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnMouseMoveEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_wheel_event(void* self, void* event) {
    KPageWidget_WheelEvent((KPageWidget*)self, (QWheelEvent*)event);
}

void k_pagewidget_qbase_wheel_event(void* self, void* event) {
    KPageWidget_QBaseWheelEvent((KPageWidget*)self, (QWheelEvent*)event);
}

void k_pagewidget_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnWheelEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_key_press_event(void* self, void* event) {
    KPageWidget_KeyPressEvent((KPageWidget*)self, (QKeyEvent*)event);
}

void k_pagewidget_qbase_key_press_event(void* self, void* event) {
    KPageWidget_QBaseKeyPressEvent((KPageWidget*)self, (QKeyEvent*)event);
}

void k_pagewidget_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnKeyPressEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_key_release_event(void* self, void* event) {
    KPageWidget_KeyReleaseEvent((KPageWidget*)self, (QKeyEvent*)event);
}

void k_pagewidget_qbase_key_release_event(void* self, void* event) {
    KPageWidget_QBaseKeyReleaseEvent((KPageWidget*)self, (QKeyEvent*)event);
}

void k_pagewidget_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnKeyReleaseEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_focus_in_event(void* self, void* event) {
    KPageWidget_FocusInEvent((KPageWidget*)self, (QFocusEvent*)event);
}

void k_pagewidget_qbase_focus_in_event(void* self, void* event) {
    KPageWidget_QBaseFocusInEvent((KPageWidget*)self, (QFocusEvent*)event);
}

void k_pagewidget_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnFocusInEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_focus_out_event(void* self, void* event) {
    KPageWidget_FocusOutEvent((KPageWidget*)self, (QFocusEvent*)event);
}

void k_pagewidget_qbase_focus_out_event(void* self, void* event) {
    KPageWidget_QBaseFocusOutEvent((KPageWidget*)self, (QFocusEvent*)event);
}

void k_pagewidget_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnFocusOutEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_enter_event(void* self, void* event) {
    KPageWidget_EnterEvent((KPageWidget*)self, (QEnterEvent*)event);
}

void k_pagewidget_qbase_enter_event(void* self, void* event) {
    KPageWidget_QBaseEnterEvent((KPageWidget*)self, (QEnterEvent*)event);
}

void k_pagewidget_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnEnterEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_leave_event(void* self, void* event) {
    KPageWidget_LeaveEvent((KPageWidget*)self, (QEvent*)event);
}

void k_pagewidget_qbase_leave_event(void* self, void* event) {
    KPageWidget_QBaseLeaveEvent((KPageWidget*)self, (QEvent*)event);
}

void k_pagewidget_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnLeaveEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_paint_event(void* self, void* event) {
    KPageWidget_PaintEvent((KPageWidget*)self, (QPaintEvent*)event);
}

void k_pagewidget_qbase_paint_event(void* self, void* event) {
    KPageWidget_QBasePaintEvent((KPageWidget*)self, (QPaintEvent*)event);
}

void k_pagewidget_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnPaintEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_move_event(void* self, void* event) {
    KPageWidget_MoveEvent((KPageWidget*)self, (QMoveEvent*)event);
}

void k_pagewidget_qbase_move_event(void* self, void* event) {
    KPageWidget_QBaseMoveEvent((KPageWidget*)self, (QMoveEvent*)event);
}

void k_pagewidget_on_move_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnMoveEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_resize_event(void* self, void* event) {
    KPageWidget_ResizeEvent((KPageWidget*)self, (QResizeEvent*)event);
}

void k_pagewidget_qbase_resize_event(void* self, void* event) {
    KPageWidget_QBaseResizeEvent((KPageWidget*)self, (QResizeEvent*)event);
}

void k_pagewidget_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnResizeEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_close_event(void* self, void* event) {
    KPageWidget_CloseEvent((KPageWidget*)self, (QCloseEvent*)event);
}

void k_pagewidget_qbase_close_event(void* self, void* event) {
    KPageWidget_QBaseCloseEvent((KPageWidget*)self, (QCloseEvent*)event);
}

void k_pagewidget_on_close_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnCloseEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_context_menu_event(void* self, void* event) {
    KPageWidget_ContextMenuEvent((KPageWidget*)self, (QContextMenuEvent*)event);
}

void k_pagewidget_qbase_context_menu_event(void* self, void* event) {
    KPageWidget_QBaseContextMenuEvent((KPageWidget*)self, (QContextMenuEvent*)event);
}

void k_pagewidget_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnContextMenuEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_tablet_event(void* self, void* event) {
    KPageWidget_TabletEvent((KPageWidget*)self, (QTabletEvent*)event);
}

void k_pagewidget_qbase_tablet_event(void* self, void* event) {
    KPageWidget_QBaseTabletEvent((KPageWidget*)self, (QTabletEvent*)event);
}

void k_pagewidget_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnTabletEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_action_event(void* self, void* event) {
    KPageWidget_ActionEvent((KPageWidget*)self, (QActionEvent*)event);
}

void k_pagewidget_qbase_action_event(void* self, void* event) {
    KPageWidget_QBaseActionEvent((KPageWidget*)self, (QActionEvent*)event);
}

void k_pagewidget_on_action_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnActionEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_drag_enter_event(void* self, void* event) {
    KPageWidget_DragEnterEvent((KPageWidget*)self, (QDragEnterEvent*)event);
}

void k_pagewidget_qbase_drag_enter_event(void* self, void* event) {
    KPageWidget_QBaseDragEnterEvent((KPageWidget*)self, (QDragEnterEvent*)event);
}

void k_pagewidget_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnDragEnterEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_drag_move_event(void* self, void* event) {
    KPageWidget_DragMoveEvent((KPageWidget*)self, (QDragMoveEvent*)event);
}

void k_pagewidget_qbase_drag_move_event(void* self, void* event) {
    KPageWidget_QBaseDragMoveEvent((KPageWidget*)self, (QDragMoveEvent*)event);
}

void k_pagewidget_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnDragMoveEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_drag_leave_event(void* self, void* event) {
    KPageWidget_DragLeaveEvent((KPageWidget*)self, (QDragLeaveEvent*)event);
}

void k_pagewidget_qbase_drag_leave_event(void* self, void* event) {
    KPageWidget_QBaseDragLeaveEvent((KPageWidget*)self, (QDragLeaveEvent*)event);
}

void k_pagewidget_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnDragLeaveEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_drop_event(void* self, void* event) {
    KPageWidget_DropEvent((KPageWidget*)self, (QDropEvent*)event);
}

void k_pagewidget_qbase_drop_event(void* self, void* event) {
    KPageWidget_QBaseDropEvent((KPageWidget*)self, (QDropEvent*)event);
}

void k_pagewidget_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnDropEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_show_event(void* self, void* event) {
    KPageWidget_ShowEvent((KPageWidget*)self, (QShowEvent*)event);
}

void k_pagewidget_qbase_show_event(void* self, void* event) {
    KPageWidget_QBaseShowEvent((KPageWidget*)self, (QShowEvent*)event);
}

void k_pagewidget_on_show_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnShowEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_hide_event(void* self, void* event) {
    KPageWidget_HideEvent((KPageWidget*)self, (QHideEvent*)event);
}

void k_pagewidget_qbase_hide_event(void* self, void* event) {
    KPageWidget_QBaseHideEvent((KPageWidget*)self, (QHideEvent*)event);
}

void k_pagewidget_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnHideEvent((KPageWidget*)self, (intptr_t)callback);
}

bool k_pagewidget_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPageWidget_NativeEvent((KPageWidget*)self, qstring(eventType), message, result);
}

bool k_pagewidget_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KPageWidget_QBaseNativeEvent((KPageWidget*)self, qstring(eventType), message, result);
}

void k_pagewidget_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KPageWidget_OnNativeEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_change_event(void* self, void* param1) {
    KPageWidget_ChangeEvent((KPageWidget*)self, (QEvent*)param1);
}

void k_pagewidget_qbase_change_event(void* self, void* param1) {
    KPageWidget_QBaseChangeEvent((KPageWidget*)self, (QEvent*)param1);
}

void k_pagewidget_on_change_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnChangeEvent((KPageWidget*)self, (intptr_t)callback);
}

int32_t k_pagewidget_metric(void* self, int32_t param1) {
    return KPageWidget_Metric((KPageWidget*)self, param1);
}

int32_t k_pagewidget_qbase_metric(void* self, int32_t param1) {
    return KPageWidget_QBaseMetric((KPageWidget*)self, param1);
}

void k_pagewidget_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KPageWidget_OnMetric((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_init_painter(void* self, void* painter) {
    KPageWidget_InitPainter((KPageWidget*)self, (QPainter*)painter);
}

void k_pagewidget_qbase_init_painter(void* self, void* painter) {
    KPageWidget_QBaseInitPainter((KPageWidget*)self, (QPainter*)painter);
}

void k_pagewidget_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnInitPainter((KPageWidget*)self, (intptr_t)callback);
}

QPaintDevice* k_pagewidget_redirected(void* self, void* offset) {
    return KPageWidget_Redirected((KPageWidget*)self, (QPoint*)offset);
}

QPaintDevice* k_pagewidget_qbase_redirected(void* self, void* offset) {
    return KPageWidget_QBaseRedirected((KPageWidget*)self, (QPoint*)offset);
}

void k_pagewidget_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KPageWidget_OnRedirected((KPageWidget*)self, (intptr_t)callback);
}

QPainter* k_pagewidget_shared_painter(void* self) {
    return KPageWidget_SharedPainter((KPageWidget*)self);
}

QPainter* k_pagewidget_qbase_shared_painter(void* self) {
    return KPageWidget_QBaseSharedPainter((KPageWidget*)self);
}

void k_pagewidget_on_shared_painter(void* self, QPainter* (*callback)()) {
    KPageWidget_OnSharedPainter((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_input_method_event(void* self, void* param1) {
    KPageWidget_InputMethodEvent((KPageWidget*)self, (QInputMethodEvent*)param1);
}

void k_pagewidget_qbase_input_method_event(void* self, void* param1) {
    KPageWidget_QBaseInputMethodEvent((KPageWidget*)self, (QInputMethodEvent*)param1);
}

void k_pagewidget_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnInputMethodEvent((KPageWidget*)self, (intptr_t)callback);
}

QVariant* k_pagewidget_input_method_query(void* self, int64_t param1) {
    return KPageWidget_InputMethodQuery((KPageWidget*)self, param1);
}

QVariant* k_pagewidget_qbase_input_method_query(void* self, int64_t param1) {
    return KPageWidget_QBaseInputMethodQuery((KPageWidget*)self, param1);
}

void k_pagewidget_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KPageWidget_OnInputMethodQuery((KPageWidget*)self, (intptr_t)callback);
}

bool k_pagewidget_focus_next_prev_child(void* self, bool next) {
    return KPageWidget_FocusNextPrevChild((KPageWidget*)self, next);
}

bool k_pagewidget_qbase_focus_next_prev_child(void* self, bool next) {
    return KPageWidget_QBaseFocusNextPrevChild((KPageWidget*)self, next);
}

void k_pagewidget_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KPageWidget_OnFocusNextPrevChild((KPageWidget*)self, (intptr_t)callback);
}

bool k_pagewidget_event_filter(void* self, void* watched, void* event) {
    return KPageWidget_EventFilter((KPageWidget*)self, (QObject*)watched, (QEvent*)event);
}

bool k_pagewidget_qbase_event_filter(void* self, void* watched, void* event) {
    return KPageWidget_QBaseEventFilter((KPageWidget*)self, (QObject*)watched, (QEvent*)event);
}

void k_pagewidget_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KPageWidget_OnEventFilter((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_timer_event(void* self, void* event) {
    KPageWidget_TimerEvent((KPageWidget*)self, (QTimerEvent*)event);
}

void k_pagewidget_qbase_timer_event(void* self, void* event) {
    KPageWidget_QBaseTimerEvent((KPageWidget*)self, (QTimerEvent*)event);
}

void k_pagewidget_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnTimerEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_child_event(void* self, void* event) {
    KPageWidget_ChildEvent((KPageWidget*)self, (QChildEvent*)event);
}

void k_pagewidget_qbase_child_event(void* self, void* event) {
    KPageWidget_QBaseChildEvent((KPageWidget*)self, (QChildEvent*)event);
}

void k_pagewidget_on_child_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnChildEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_custom_event(void* self, void* event) {
    KPageWidget_CustomEvent((KPageWidget*)self, (QEvent*)event);
}

void k_pagewidget_qbase_custom_event(void* self, void* event) {
    KPageWidget_QBaseCustomEvent((KPageWidget*)self, (QEvent*)event);
}

void k_pagewidget_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnCustomEvent((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_connect_notify(void* self, void* signal) {
    KPageWidget_ConnectNotify((KPageWidget*)self, (QMetaMethod*)signal);
}

void k_pagewidget_qbase_connect_notify(void* self, void* signal) {
    KPageWidget_QBaseConnectNotify((KPageWidget*)self, (QMetaMethod*)signal);
}

void k_pagewidget_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnConnectNotify((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_disconnect_notify(void* self, void* signal) {
    KPageWidget_DisconnectNotify((KPageWidget*)self, (QMetaMethod*)signal);
}

void k_pagewidget_qbase_disconnect_notify(void* self, void* signal) {
    KPageWidget_QBaseDisconnectNotify((KPageWidget*)self, (QMetaMethod*)signal);
}

void k_pagewidget_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KPageWidget_OnDisconnectNotify((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_update_micro_focus(void* self) {
    KPageWidget_UpdateMicroFocus((KPageWidget*)self);
}

void k_pagewidget_qbase_update_micro_focus(void* self) {
    KPageWidget_QBaseUpdateMicroFocus((KPageWidget*)self);
}

void k_pagewidget_on_update_micro_focus(void* self, void (*callback)()) {
    KPageWidget_OnUpdateMicroFocus((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_create(void* self) {
    KPageWidget_Create((KPageWidget*)self);
}

void k_pagewidget_qbase_create(void* self) {
    KPageWidget_QBaseCreate((KPageWidget*)self);
}

void k_pagewidget_on_create(void* self, void (*callback)()) {
    KPageWidget_OnCreate((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_destroy(void* self) {
    KPageWidget_Destroy((KPageWidget*)self);
}

void k_pagewidget_qbase_destroy(void* self) {
    KPageWidget_QBaseDestroy((KPageWidget*)self);
}

void k_pagewidget_on_destroy(void* self, void (*callback)()) {
    KPageWidget_OnDestroy((KPageWidget*)self, (intptr_t)callback);
}

bool k_pagewidget_focus_next_child(void* self) {
    return KPageWidget_FocusNextChild((KPageWidget*)self);
}

bool k_pagewidget_qbase_focus_next_child(void* self) {
    return KPageWidget_QBaseFocusNextChild((KPageWidget*)self);
}

void k_pagewidget_on_focus_next_child(void* self, bool (*callback)()) {
    KPageWidget_OnFocusNextChild((KPageWidget*)self, (intptr_t)callback);
}

bool k_pagewidget_focus_previous_child(void* self) {
    return KPageWidget_FocusPreviousChild((KPageWidget*)self);
}

bool k_pagewidget_qbase_focus_previous_child(void* self) {
    return KPageWidget_QBaseFocusPreviousChild((KPageWidget*)self);
}

void k_pagewidget_on_focus_previous_child(void* self, bool (*callback)()) {
    KPageWidget_OnFocusPreviousChild((KPageWidget*)self, (intptr_t)callback);
}

QObject* k_pagewidget_sender(void* self) {
    return KPageWidget_Sender((KPageWidget*)self);
}

QObject* k_pagewidget_qbase_sender(void* self) {
    return KPageWidget_QBaseSender((KPageWidget*)self);
}

void k_pagewidget_on_sender(void* self, QObject* (*callback)()) {
    KPageWidget_OnSender((KPageWidget*)self, (intptr_t)callback);
}

int32_t k_pagewidget_sender_signal_index(void* self) {
    return KPageWidget_SenderSignalIndex((KPageWidget*)self);
}

int32_t k_pagewidget_qbase_sender_signal_index(void* self) {
    return KPageWidget_QBaseSenderSignalIndex((KPageWidget*)self);
}

void k_pagewidget_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KPageWidget_OnSenderSignalIndex((KPageWidget*)self, (intptr_t)callback);
}

int32_t k_pagewidget_receivers(void* self, const char* signal) {
    return KPageWidget_Receivers((KPageWidget*)self, signal);
}

int32_t k_pagewidget_qbase_receivers(void* self, const char* signal) {
    return KPageWidget_QBaseReceivers((KPageWidget*)self, signal);
}

void k_pagewidget_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KPageWidget_OnReceivers((KPageWidget*)self, (intptr_t)callback);
}

bool k_pagewidget_is_signal_connected(void* self, void* signal) {
    return KPageWidget_IsSignalConnected((KPageWidget*)self, (QMetaMethod*)signal);
}

bool k_pagewidget_qbase_is_signal_connected(void* self, void* signal) {
    return KPageWidget_QBaseIsSignalConnected((KPageWidget*)self, (QMetaMethod*)signal);
}

void k_pagewidget_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KPageWidget_OnIsSignalConnected((KPageWidget*)self, (intptr_t)callback);
}

double k_pagewidget_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPageWidget_GetDecodedMetricF((KPageWidget*)self, metricA, metricB);
}

double k_pagewidget_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KPageWidget_QBaseGetDecodedMetricF((KPageWidget*)self, metricA, metricB);
}

void k_pagewidget_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KPageWidget_OnGetDecodedMetricF((KPageWidget*)self, (intptr_t)callback);
}

void k_pagewidget_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_pagewidget_delete(void* self) {
    KPageWidget_Delete((KPageWidget*)(self));
}
