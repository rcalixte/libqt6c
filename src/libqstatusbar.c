#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqmetaobject.hpp"
#include "libqobjectdefs.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqstatusbar.hpp"
#include "libqstatusbar.h"

QStatusBar* q_statusbar_new(void* parent) {
    return QStatusBar_new((QWidget*)parent);
}

QStatusBar* q_statusbar_new2() {
    return QStatusBar_new2();
}

const QMetaObject* q_statusbar_meta_object(void* self) {
    return QStatusBar_MetaObject((QStatusBar*)self);
}

void* q_statusbar_metacast(void* self, const char* param1) {
    return QStatusBar_Metacast((QStatusBar*)self, param1);
}

int32_t q_statusbar_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStatusBar_Metacall((QStatusBar*)self, param1, param2, param3);
}

void q_statusbar_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QStatusBar_OnMetacall((QStatusBar*)self, (intptr_t)callback);
}

int32_t q_statusbar_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QStatusBar_QBaseMetacall((QStatusBar*)self, param1, param2, param3);
}

const char* q_statusbar_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_add_widget(void* self, void* widget) {
    QStatusBar_AddWidget((QStatusBar*)self, (QWidget*)widget);
}

int32_t q_statusbar_insert_widget(void* self, int index, void* widget) {
    return QStatusBar_InsertWidget((QStatusBar*)self, index, (QWidget*)widget);
}

void q_statusbar_add_permanent_widget(void* self, void* widget) {
    QStatusBar_AddPermanentWidget((QStatusBar*)self, (QWidget*)widget);
}

int32_t q_statusbar_insert_permanent_widget(void* self, int index, void* widget) {
    return QStatusBar_InsertPermanentWidget((QStatusBar*)self, index, (QWidget*)widget);
}

void q_statusbar_remove_widget(void* self, void* widget) {
    QStatusBar_RemoveWidget((QStatusBar*)self, (QWidget*)widget);
}

void q_statusbar_set_size_grip_enabled(void* self, bool sizeGripEnabled) {
    QStatusBar_SetSizeGripEnabled((QStatusBar*)self, sizeGripEnabled);
}

bool q_statusbar_is_size_grip_enabled(void* self) {
    return QStatusBar_IsSizeGripEnabled((QStatusBar*)self);
}

const char* q_statusbar_current_message(void* self) {
    libqt_string _str = QStatusBar_CurrentMessage((QStatusBar*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_show_message(void* self, const char* text) {
    QStatusBar_ShowMessage((QStatusBar*)self, qstring(text));
}

void q_statusbar_clear_message(void* self) {
    QStatusBar_ClearMessage((QStatusBar*)self);
}

void q_statusbar_message_changed(void* self, const char* text) {
    QStatusBar_MessageChanged((QStatusBar*)self, qstring(text));
}

void q_statusbar_on_message_changed(void* self, void (*callback)(void*, const char*)) {
    QStatusBar_Connect_MessageChanged((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_show_event(void* self, void* param1) {
    QStatusBar_ShowEvent((QStatusBar*)self, (QShowEvent*)param1);
}

void q_statusbar_on_show_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnShowEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_qbase_show_event(void* self, void* param1) {
    QStatusBar_QBaseShowEvent((QStatusBar*)self, (QShowEvent*)param1);
}

void q_statusbar_paint_event(void* self, void* param1) {
    QStatusBar_PaintEvent((QStatusBar*)self, (QPaintEvent*)param1);
}

void q_statusbar_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnPaintEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_qbase_paint_event(void* self, void* param1) {
    QStatusBar_QBasePaintEvent((QStatusBar*)self, (QPaintEvent*)param1);
}

void q_statusbar_resize_event(void* self, void* param1) {
    QStatusBar_ResizeEvent((QStatusBar*)self, (QResizeEvent*)param1);
}

void q_statusbar_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnResizeEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_qbase_resize_event(void* self, void* param1) {
    QStatusBar_QBaseResizeEvent((QStatusBar*)self, (QResizeEvent*)param1);
}

void q_statusbar_reformat(void* self) {
    QStatusBar_Reformat((QStatusBar*)self);
}

void q_statusbar_on_reformat(void* self, void (*callback)()) {
    QStatusBar_OnReformat((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_qbase_reformat(void* self) {
    QStatusBar_QBaseReformat((QStatusBar*)self);
}

void q_statusbar_hide_or_show(void* self) {
    QStatusBar_HideOrShow((QStatusBar*)self);
}

void q_statusbar_on_hide_or_show(void* self, void (*callback)()) {
    QStatusBar_OnHideOrShow((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_qbase_hide_or_show(void* self) {
    QStatusBar_QBaseHideOrShow((QStatusBar*)self);
}

bool q_statusbar_event(void* self, void* param1) {
    return QStatusBar_Event((QStatusBar*)self, (QEvent*)param1);
}

void q_statusbar_on_event(void* self, bool (*callback)(void*, void*)) {
    QStatusBar_OnEvent((QStatusBar*)self, (intptr_t)callback);
}

bool q_statusbar_qbase_event(void* self, void* param1) {
    return QStatusBar_QBaseEvent((QStatusBar*)self, (QEvent*)param1);
}

const char* q_statusbar_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_statusbar_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_add_widget2(void* self, void* widget, int stretch) {
    QStatusBar_AddWidget2((QStatusBar*)self, (QWidget*)widget, stretch);
}

int32_t q_statusbar_insert_widget3(void* self, int index, void* widget, int stretch) {
    return QStatusBar_InsertWidget3((QStatusBar*)self, index, (QWidget*)widget, stretch);
}

void q_statusbar_add_permanent_widget2(void* self, void* widget, int stretch) {
    QStatusBar_AddPermanentWidget2((QStatusBar*)self, (QWidget*)widget, stretch);
}

int32_t q_statusbar_insert_permanent_widget3(void* self, int index, void* widget, int stretch) {
    return QStatusBar_InsertPermanentWidget3((QStatusBar*)self, index, (QWidget*)widget, stretch);
}

void q_statusbar_show_message2(void* self, const char* text, int timeout) {
    QStatusBar_ShowMessage2((QStatusBar*)self, qstring(text), timeout);
}

uintptr_t q_statusbar_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_statusbar_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_statusbar_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_statusbar_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_statusbar_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_statusbar_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_statusbar_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_statusbar_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_statusbar_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_statusbar_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_statusbar_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_statusbar_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_statusbar_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_statusbar_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_statusbar_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_statusbar_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_statusbar_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_statusbar_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_statusbar_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_statusbar_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_statusbar_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_statusbar_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_statusbar_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_statusbar_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_statusbar_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_statusbar_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_statusbar_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_statusbar_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_statusbar_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_statusbar_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_statusbar_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_statusbar_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_statusbar_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_statusbar_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_statusbar_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_statusbar_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_statusbar_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_statusbar_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_statusbar_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_statusbar_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_statusbar_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_statusbar_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_statusbar_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_statusbar_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_statusbar_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_statusbar_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_statusbar_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_statusbar_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_statusbar_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_statusbar_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_statusbar_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_statusbar_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_statusbar_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_statusbar_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_statusbar_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_statusbar_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_statusbar_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_statusbar_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_statusbar_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_statusbar_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_statusbar_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_statusbar_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_statusbar_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_statusbar_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_statusbar_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_statusbar_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_statusbar_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_statusbar_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_statusbar_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_statusbar_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_statusbar_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_statusbar_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_statusbar_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_statusbar_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_statusbar_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_statusbar_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_statusbar_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_statusbar_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_statusbar_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_statusbar_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_statusbar_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_statusbar_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_statusbar_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_statusbar_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_statusbar_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_statusbar_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_statusbar_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_statusbar_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_statusbar_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_statusbar_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_statusbar_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_statusbar_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_statusbar_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_statusbar_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_statusbar_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_statusbar_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_statusbar_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_statusbar_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_statusbar_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_statusbar_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_statusbar_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_statusbar_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_statusbar_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_statusbar_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_statusbar_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_statusbar_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_statusbar_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_statusbar_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_statusbar_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_statusbar_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_statusbar_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_statusbar_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_statusbar_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_statusbar_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_statusbar_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_statusbar_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_statusbar_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_statusbar_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_statusbar_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_statusbar_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_statusbar_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_statusbar_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_statusbar_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_statusbar_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_statusbar_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_statusbar_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_statusbar_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_statusbar_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_statusbar_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_statusbar_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_statusbar_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_statusbar_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_statusbar_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_statusbar_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_statusbar_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_statusbar_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_statusbar_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_statusbar_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_statusbar_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_statusbar_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_statusbar_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_statusbar_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_statusbar_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_statusbar_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_statusbar_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_statusbar_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_statusbar_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_statusbar_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_statusbar_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_statusbar_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_statusbar_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_statusbar_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_statusbar_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_statusbar_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_statusbar_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_statusbar_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_statusbar_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_statusbar_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_statusbar_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_statusbar_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_statusbar_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_statusbar_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_statusbar_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_statusbar_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_statusbar_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_statusbar_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_statusbar_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_statusbar_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_statusbar_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_statusbar_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_statusbar_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_statusbar_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_statusbar_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_statusbar_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_statusbar_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_statusbar_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_statusbar_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_statusbar_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_statusbar_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_statusbar_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_statusbar_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_statusbar_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_statusbar_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_statusbar_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_statusbar_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_statusbar_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_statusbar_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_statusbar_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_statusbar_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_statusbar_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_statusbar_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_statusbar_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_statusbar_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_statusbar_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_statusbar_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_statusbar_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_statusbar_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_statusbar_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_statusbar_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_statusbar_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_statusbar_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_statusbar_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_statusbar_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_statusbar_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_statusbar_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_statusbar_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_statusbar_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_statusbar_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_statusbar_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_statusbar_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_statusbar_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_statusbar_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_statusbar_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_statusbar_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_statusbar_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_statusbar_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_statusbar_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_statusbar_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_statusbar_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_statusbar_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_statusbar_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_statusbar_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_statusbar_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_statusbar_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_statusbar_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_statusbar_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_statusbar_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_statusbar_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_statusbar_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_statusbar_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_statusbar_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_statusbar_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_statusbar_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_statusbar_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_statusbar_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_statusbar_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_statusbar_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_statusbar_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_statusbar_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_statusbar_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_statusbar_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_statusbar_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_statusbar_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_statusbar_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_statusbar_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_statusbar_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_statusbar_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_statusbar_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_statusbar_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_statusbar_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_statusbar_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_statusbar_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_statusbar_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_statusbar_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_statusbar_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_statusbar_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_statusbar_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_statusbar_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_statusbar_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_statusbar_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_statusbar_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_statusbar_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_statusbar_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_statusbar_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_statusbar_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_statusbar_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_statusbar_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_statusbar_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_statusbar_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_statusbar_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_statusbar_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_statusbar_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_statusbar_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_statusbar_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_statusbar_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_statusbar_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_statusbar_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_statusbar_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_statusbar_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_statusbar_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_statusbar_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_statusbar_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_statusbar_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_statusbar_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_statusbar_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_statusbar_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_statusbar_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_statusbar_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_statusbar_dynamic_property_names");
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

QBindingStorage* q_statusbar_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_statusbar_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_statusbar_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_statusbar_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_statusbar_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_statusbar_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_statusbar_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_statusbar_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_statusbar_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_statusbar_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_statusbar_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_statusbar_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_statusbar_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_statusbar_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_statusbar_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_statusbar_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_statusbar_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_statusbar_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_statusbar_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_statusbar_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_statusbar_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_statusbar_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_statusbar_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_statusbar_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_statusbar_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_statusbar_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_statusbar_dev_type(void* self) {
    return QStatusBar_DevType((QStatusBar*)self);
}

int32_t q_statusbar_qbase_dev_type(void* self) {
    return QStatusBar_QBaseDevType((QStatusBar*)self);
}

void q_statusbar_on_dev_type(void* self, int32_t (*callback)()) {
    QStatusBar_OnDevType((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_set_visible(void* self, bool visible) {
    QStatusBar_SetVisible((QStatusBar*)self, visible);
}

void q_statusbar_qbase_set_visible(void* self, bool visible) {
    QStatusBar_QBaseSetVisible((QStatusBar*)self, visible);
}

void q_statusbar_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QStatusBar_OnSetVisible((QStatusBar*)self, (intptr_t)callback);
}

QSize* q_statusbar_size_hint(void* self) {
    return QStatusBar_SizeHint((QStatusBar*)self);
}

QSize* q_statusbar_qbase_size_hint(void* self) {
    return QStatusBar_QBaseSizeHint((QStatusBar*)self);
}

void q_statusbar_on_size_hint(void* self, QSize* (*callback)()) {
    QStatusBar_OnSizeHint((QStatusBar*)self, (intptr_t)callback);
}

QSize* q_statusbar_minimum_size_hint(void* self) {
    return QStatusBar_MinimumSizeHint((QStatusBar*)self);
}

QSize* q_statusbar_qbase_minimum_size_hint(void* self) {
    return QStatusBar_QBaseMinimumSizeHint((QStatusBar*)self);
}

void q_statusbar_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QStatusBar_OnMinimumSizeHint((QStatusBar*)self, (intptr_t)callback);
}

int32_t q_statusbar_height_for_width(void* self, int param1) {
    return QStatusBar_HeightForWidth((QStatusBar*)self, param1);
}

int32_t q_statusbar_qbase_height_for_width(void* self, int param1) {
    return QStatusBar_QBaseHeightForWidth((QStatusBar*)self, param1);
}

void q_statusbar_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QStatusBar_OnHeightForWidth((QStatusBar*)self, (intptr_t)callback);
}

bool q_statusbar_has_height_for_width(void* self) {
    return QStatusBar_HasHeightForWidth((QStatusBar*)self);
}

bool q_statusbar_qbase_has_height_for_width(void* self) {
    return QStatusBar_QBaseHasHeightForWidth((QStatusBar*)self);
}

void q_statusbar_on_has_height_for_width(void* self, bool (*callback)()) {
    QStatusBar_OnHasHeightForWidth((QStatusBar*)self, (intptr_t)callback);
}

QPaintEngine* q_statusbar_paint_engine(void* self) {
    return QStatusBar_PaintEngine((QStatusBar*)self);
}

QPaintEngine* q_statusbar_qbase_paint_engine(void* self) {
    return QStatusBar_QBasePaintEngine((QStatusBar*)self);
}

void q_statusbar_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QStatusBar_OnPaintEngine((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_mouse_press_event(void* self, void* event) {
    QStatusBar_MousePressEvent((QStatusBar*)self, (QMouseEvent*)event);
}

void q_statusbar_qbase_mouse_press_event(void* self, void* event) {
    QStatusBar_QBaseMousePressEvent((QStatusBar*)self, (QMouseEvent*)event);
}

void q_statusbar_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnMousePressEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_mouse_release_event(void* self, void* event) {
    QStatusBar_MouseReleaseEvent((QStatusBar*)self, (QMouseEvent*)event);
}

void q_statusbar_qbase_mouse_release_event(void* self, void* event) {
    QStatusBar_QBaseMouseReleaseEvent((QStatusBar*)self, (QMouseEvent*)event);
}

void q_statusbar_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnMouseReleaseEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_mouse_double_click_event(void* self, void* event) {
    QStatusBar_MouseDoubleClickEvent((QStatusBar*)self, (QMouseEvent*)event);
}

void q_statusbar_qbase_mouse_double_click_event(void* self, void* event) {
    QStatusBar_QBaseMouseDoubleClickEvent((QStatusBar*)self, (QMouseEvent*)event);
}

void q_statusbar_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnMouseDoubleClickEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_mouse_move_event(void* self, void* event) {
    QStatusBar_MouseMoveEvent((QStatusBar*)self, (QMouseEvent*)event);
}

void q_statusbar_qbase_mouse_move_event(void* self, void* event) {
    QStatusBar_QBaseMouseMoveEvent((QStatusBar*)self, (QMouseEvent*)event);
}

void q_statusbar_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnMouseMoveEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_wheel_event(void* self, void* event) {
    QStatusBar_WheelEvent((QStatusBar*)self, (QWheelEvent*)event);
}

void q_statusbar_qbase_wheel_event(void* self, void* event) {
    QStatusBar_QBaseWheelEvent((QStatusBar*)self, (QWheelEvent*)event);
}

void q_statusbar_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnWheelEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_key_press_event(void* self, void* event) {
    QStatusBar_KeyPressEvent((QStatusBar*)self, (QKeyEvent*)event);
}

void q_statusbar_qbase_key_press_event(void* self, void* event) {
    QStatusBar_QBaseKeyPressEvent((QStatusBar*)self, (QKeyEvent*)event);
}

void q_statusbar_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnKeyPressEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_key_release_event(void* self, void* event) {
    QStatusBar_KeyReleaseEvent((QStatusBar*)self, (QKeyEvent*)event);
}

void q_statusbar_qbase_key_release_event(void* self, void* event) {
    QStatusBar_QBaseKeyReleaseEvent((QStatusBar*)self, (QKeyEvent*)event);
}

void q_statusbar_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnKeyReleaseEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_focus_in_event(void* self, void* event) {
    QStatusBar_FocusInEvent((QStatusBar*)self, (QFocusEvent*)event);
}

void q_statusbar_qbase_focus_in_event(void* self, void* event) {
    QStatusBar_QBaseFocusInEvent((QStatusBar*)self, (QFocusEvent*)event);
}

void q_statusbar_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnFocusInEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_focus_out_event(void* self, void* event) {
    QStatusBar_FocusOutEvent((QStatusBar*)self, (QFocusEvent*)event);
}

void q_statusbar_qbase_focus_out_event(void* self, void* event) {
    QStatusBar_QBaseFocusOutEvent((QStatusBar*)self, (QFocusEvent*)event);
}

void q_statusbar_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnFocusOutEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_enter_event(void* self, void* event) {
    QStatusBar_EnterEvent((QStatusBar*)self, (QEnterEvent*)event);
}

void q_statusbar_qbase_enter_event(void* self, void* event) {
    QStatusBar_QBaseEnterEvent((QStatusBar*)self, (QEnterEvent*)event);
}

void q_statusbar_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnEnterEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_leave_event(void* self, void* event) {
    QStatusBar_LeaveEvent((QStatusBar*)self, (QEvent*)event);
}

void q_statusbar_qbase_leave_event(void* self, void* event) {
    QStatusBar_QBaseLeaveEvent((QStatusBar*)self, (QEvent*)event);
}

void q_statusbar_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnLeaveEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_move_event(void* self, void* event) {
    QStatusBar_MoveEvent((QStatusBar*)self, (QMoveEvent*)event);
}

void q_statusbar_qbase_move_event(void* self, void* event) {
    QStatusBar_QBaseMoveEvent((QStatusBar*)self, (QMoveEvent*)event);
}

void q_statusbar_on_move_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnMoveEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_close_event(void* self, void* event) {
    QStatusBar_CloseEvent((QStatusBar*)self, (QCloseEvent*)event);
}

void q_statusbar_qbase_close_event(void* self, void* event) {
    QStatusBar_QBaseCloseEvent((QStatusBar*)self, (QCloseEvent*)event);
}

void q_statusbar_on_close_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnCloseEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_context_menu_event(void* self, void* event) {
    QStatusBar_ContextMenuEvent((QStatusBar*)self, (QContextMenuEvent*)event);
}

void q_statusbar_qbase_context_menu_event(void* self, void* event) {
    QStatusBar_QBaseContextMenuEvent((QStatusBar*)self, (QContextMenuEvent*)event);
}

void q_statusbar_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnContextMenuEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_tablet_event(void* self, void* event) {
    QStatusBar_TabletEvent((QStatusBar*)self, (QTabletEvent*)event);
}

void q_statusbar_qbase_tablet_event(void* self, void* event) {
    QStatusBar_QBaseTabletEvent((QStatusBar*)self, (QTabletEvent*)event);
}

void q_statusbar_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnTabletEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_action_event(void* self, void* event) {
    QStatusBar_ActionEvent((QStatusBar*)self, (QActionEvent*)event);
}

void q_statusbar_qbase_action_event(void* self, void* event) {
    QStatusBar_QBaseActionEvent((QStatusBar*)self, (QActionEvent*)event);
}

void q_statusbar_on_action_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnActionEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_drag_enter_event(void* self, void* event) {
    QStatusBar_DragEnterEvent((QStatusBar*)self, (QDragEnterEvent*)event);
}

void q_statusbar_qbase_drag_enter_event(void* self, void* event) {
    QStatusBar_QBaseDragEnterEvent((QStatusBar*)self, (QDragEnterEvent*)event);
}

void q_statusbar_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnDragEnterEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_drag_move_event(void* self, void* event) {
    QStatusBar_DragMoveEvent((QStatusBar*)self, (QDragMoveEvent*)event);
}

void q_statusbar_qbase_drag_move_event(void* self, void* event) {
    QStatusBar_QBaseDragMoveEvent((QStatusBar*)self, (QDragMoveEvent*)event);
}

void q_statusbar_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnDragMoveEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_drag_leave_event(void* self, void* event) {
    QStatusBar_DragLeaveEvent((QStatusBar*)self, (QDragLeaveEvent*)event);
}

void q_statusbar_qbase_drag_leave_event(void* self, void* event) {
    QStatusBar_QBaseDragLeaveEvent((QStatusBar*)self, (QDragLeaveEvent*)event);
}

void q_statusbar_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnDragLeaveEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_drop_event(void* self, void* event) {
    QStatusBar_DropEvent((QStatusBar*)self, (QDropEvent*)event);
}

void q_statusbar_qbase_drop_event(void* self, void* event) {
    QStatusBar_QBaseDropEvent((QStatusBar*)self, (QDropEvent*)event);
}

void q_statusbar_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnDropEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_hide_event(void* self, void* event) {
    QStatusBar_HideEvent((QStatusBar*)self, (QHideEvent*)event);
}

void q_statusbar_qbase_hide_event(void* self, void* event) {
    QStatusBar_QBaseHideEvent((QStatusBar*)self, (QHideEvent*)event);
}

void q_statusbar_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnHideEvent((QStatusBar*)self, (intptr_t)callback);
}

bool q_statusbar_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QStatusBar_NativeEvent((QStatusBar*)self, qstring(eventType), message, result);
}

bool q_statusbar_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QStatusBar_QBaseNativeEvent((QStatusBar*)self, qstring(eventType), message, result);
}

void q_statusbar_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QStatusBar_OnNativeEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_change_event(void* self, void* param1) {
    QStatusBar_ChangeEvent((QStatusBar*)self, (QEvent*)param1);
}

void q_statusbar_qbase_change_event(void* self, void* param1) {
    QStatusBar_QBaseChangeEvent((QStatusBar*)self, (QEvent*)param1);
}

void q_statusbar_on_change_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnChangeEvent((QStatusBar*)self, (intptr_t)callback);
}

int32_t q_statusbar_metric(void* self, int32_t param1) {
    return QStatusBar_Metric((QStatusBar*)self, param1);
}

int32_t q_statusbar_qbase_metric(void* self, int32_t param1) {
    return QStatusBar_QBaseMetric((QStatusBar*)self, param1);
}

void q_statusbar_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QStatusBar_OnMetric((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_init_painter(void* self, void* painter) {
    QStatusBar_InitPainter((QStatusBar*)self, (QPainter*)painter);
}

void q_statusbar_qbase_init_painter(void* self, void* painter) {
    QStatusBar_QBaseInitPainter((QStatusBar*)self, (QPainter*)painter);
}

void q_statusbar_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnInitPainter((QStatusBar*)self, (intptr_t)callback);
}

QPaintDevice* q_statusbar_redirected(void* self, void* offset) {
    return QStatusBar_Redirected((QStatusBar*)self, (QPoint*)offset);
}

QPaintDevice* q_statusbar_qbase_redirected(void* self, void* offset) {
    return QStatusBar_QBaseRedirected((QStatusBar*)self, (QPoint*)offset);
}

void q_statusbar_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QStatusBar_OnRedirected((QStatusBar*)self, (intptr_t)callback);
}

QPainter* q_statusbar_shared_painter(void* self) {
    return QStatusBar_SharedPainter((QStatusBar*)self);
}

QPainter* q_statusbar_qbase_shared_painter(void* self) {
    return QStatusBar_QBaseSharedPainter((QStatusBar*)self);
}

void q_statusbar_on_shared_painter(void* self, QPainter* (*callback)()) {
    QStatusBar_OnSharedPainter((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_input_method_event(void* self, void* param1) {
    QStatusBar_InputMethodEvent((QStatusBar*)self, (QInputMethodEvent*)param1);
}

void q_statusbar_qbase_input_method_event(void* self, void* param1) {
    QStatusBar_QBaseInputMethodEvent((QStatusBar*)self, (QInputMethodEvent*)param1);
}

void q_statusbar_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnInputMethodEvent((QStatusBar*)self, (intptr_t)callback);
}

QVariant* q_statusbar_input_method_query(void* self, int64_t param1) {
    return QStatusBar_InputMethodQuery((QStatusBar*)self, param1);
}

QVariant* q_statusbar_qbase_input_method_query(void* self, int64_t param1) {
    return QStatusBar_QBaseInputMethodQuery((QStatusBar*)self, param1);
}

void q_statusbar_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QStatusBar_OnInputMethodQuery((QStatusBar*)self, (intptr_t)callback);
}

bool q_statusbar_focus_next_prev_child(void* self, bool next) {
    return QStatusBar_FocusNextPrevChild((QStatusBar*)self, next);
}

bool q_statusbar_qbase_focus_next_prev_child(void* self, bool next) {
    return QStatusBar_QBaseFocusNextPrevChild((QStatusBar*)self, next);
}

void q_statusbar_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QStatusBar_OnFocusNextPrevChild((QStatusBar*)self, (intptr_t)callback);
}

bool q_statusbar_event_filter(void* self, void* watched, void* event) {
    return QStatusBar_EventFilter((QStatusBar*)self, (QObject*)watched, (QEvent*)event);
}

bool q_statusbar_qbase_event_filter(void* self, void* watched, void* event) {
    return QStatusBar_QBaseEventFilter((QStatusBar*)self, (QObject*)watched, (QEvent*)event);
}

void q_statusbar_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QStatusBar_OnEventFilter((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_timer_event(void* self, void* event) {
    QStatusBar_TimerEvent((QStatusBar*)self, (QTimerEvent*)event);
}

void q_statusbar_qbase_timer_event(void* self, void* event) {
    QStatusBar_QBaseTimerEvent((QStatusBar*)self, (QTimerEvent*)event);
}

void q_statusbar_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnTimerEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_child_event(void* self, void* event) {
    QStatusBar_ChildEvent((QStatusBar*)self, (QChildEvent*)event);
}

void q_statusbar_qbase_child_event(void* self, void* event) {
    QStatusBar_QBaseChildEvent((QStatusBar*)self, (QChildEvent*)event);
}

void q_statusbar_on_child_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnChildEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_custom_event(void* self, void* event) {
    QStatusBar_CustomEvent((QStatusBar*)self, (QEvent*)event);
}

void q_statusbar_qbase_custom_event(void* self, void* event) {
    QStatusBar_QBaseCustomEvent((QStatusBar*)self, (QEvent*)event);
}

void q_statusbar_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnCustomEvent((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_connect_notify(void* self, void* signal) {
    QStatusBar_ConnectNotify((QStatusBar*)self, (QMetaMethod*)signal);
}

void q_statusbar_qbase_connect_notify(void* self, void* signal) {
    QStatusBar_QBaseConnectNotify((QStatusBar*)self, (QMetaMethod*)signal);
}

void q_statusbar_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnConnectNotify((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_disconnect_notify(void* self, void* signal) {
    QStatusBar_DisconnectNotify((QStatusBar*)self, (QMetaMethod*)signal);
}

void q_statusbar_qbase_disconnect_notify(void* self, void* signal) {
    QStatusBar_QBaseDisconnectNotify((QStatusBar*)self, (QMetaMethod*)signal);
}

void q_statusbar_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QStatusBar_OnDisconnectNotify((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_update_micro_focus(void* self) {
    QStatusBar_UpdateMicroFocus((QStatusBar*)self);
}

void q_statusbar_qbase_update_micro_focus(void* self) {
    QStatusBar_QBaseUpdateMicroFocus((QStatusBar*)self);
}

void q_statusbar_on_update_micro_focus(void* self, void (*callback)()) {
    QStatusBar_OnUpdateMicroFocus((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_create(void* self) {
    QStatusBar_Create((QStatusBar*)self);
}

void q_statusbar_qbase_create(void* self) {
    QStatusBar_QBaseCreate((QStatusBar*)self);
}

void q_statusbar_on_create(void* self, void (*callback)()) {
    QStatusBar_OnCreate((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_destroy(void* self) {
    QStatusBar_Destroy((QStatusBar*)self);
}

void q_statusbar_qbase_destroy(void* self) {
    QStatusBar_QBaseDestroy((QStatusBar*)self);
}

void q_statusbar_on_destroy(void* self, void (*callback)()) {
    QStatusBar_OnDestroy((QStatusBar*)self, (intptr_t)callback);
}

bool q_statusbar_focus_next_child(void* self) {
    return QStatusBar_FocusNextChild((QStatusBar*)self);
}

bool q_statusbar_qbase_focus_next_child(void* self) {
    return QStatusBar_QBaseFocusNextChild((QStatusBar*)self);
}

void q_statusbar_on_focus_next_child(void* self, bool (*callback)()) {
    QStatusBar_OnFocusNextChild((QStatusBar*)self, (intptr_t)callback);
}

bool q_statusbar_focus_previous_child(void* self) {
    return QStatusBar_FocusPreviousChild((QStatusBar*)self);
}

bool q_statusbar_qbase_focus_previous_child(void* self) {
    return QStatusBar_QBaseFocusPreviousChild((QStatusBar*)self);
}

void q_statusbar_on_focus_previous_child(void* self, bool (*callback)()) {
    QStatusBar_OnFocusPreviousChild((QStatusBar*)self, (intptr_t)callback);
}

QObject* q_statusbar_sender(void* self) {
    return QStatusBar_Sender((QStatusBar*)self);
}

QObject* q_statusbar_qbase_sender(void* self) {
    return QStatusBar_QBaseSender((QStatusBar*)self);
}

void q_statusbar_on_sender(void* self, QObject* (*callback)()) {
    QStatusBar_OnSender((QStatusBar*)self, (intptr_t)callback);
}

int32_t q_statusbar_sender_signal_index(void* self) {
    return QStatusBar_SenderSignalIndex((QStatusBar*)self);
}

int32_t q_statusbar_qbase_sender_signal_index(void* self) {
    return QStatusBar_QBaseSenderSignalIndex((QStatusBar*)self);
}

void q_statusbar_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QStatusBar_OnSenderSignalIndex((QStatusBar*)self, (intptr_t)callback);
}

int32_t q_statusbar_receivers(void* self, const char* signal) {
    return QStatusBar_Receivers((QStatusBar*)self, signal);
}

int32_t q_statusbar_qbase_receivers(void* self, const char* signal) {
    return QStatusBar_QBaseReceivers((QStatusBar*)self, signal);
}

void q_statusbar_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QStatusBar_OnReceivers((QStatusBar*)self, (intptr_t)callback);
}

bool q_statusbar_is_signal_connected(void* self, void* signal) {
    return QStatusBar_IsSignalConnected((QStatusBar*)self, (QMetaMethod*)signal);
}

bool q_statusbar_qbase_is_signal_connected(void* self, void* signal) {
    return QStatusBar_QBaseIsSignalConnected((QStatusBar*)self, (QMetaMethod*)signal);
}

void q_statusbar_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QStatusBar_OnIsSignalConnected((QStatusBar*)self, (intptr_t)callback);
}

double q_statusbar_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QStatusBar_GetDecodedMetricF((QStatusBar*)self, metricA, metricB);
}

double q_statusbar_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QStatusBar_QBaseGetDecodedMetricF((QStatusBar*)self, metricA, metricB);
}

void q_statusbar_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QStatusBar_OnGetDecodedMetricF((QStatusBar*)self, (intptr_t)callback);
}

void q_statusbar_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_statusbar_delete(void* self) {
    QStatusBar_Delete((QStatusBar*)(self));
}
