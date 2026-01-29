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
#include "libklanguagebutton.hpp"
#include "libklanguagebutton.h"

KLanguageButton* k_languagebutton_new(void* parent) {
    return KLanguageButton_new((QWidget*)parent);
}

KLanguageButton* k_languagebutton_new2() {
    return KLanguageButton_new2();
}

KLanguageButton* k_languagebutton_new3(const char* text) {
    return KLanguageButton_new3(qstring(text));
}

KLanguageButton* k_languagebutton_new4(const char* text, void* parent) {
    return KLanguageButton_new4(qstring(text), (QWidget*)parent);
}

const QMetaObject* k_languagebutton_meta_object(void* self) {
    return KLanguageButton_MetaObject((KLanguageButton*)self);
}

void k_languagebutton_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    KLanguageButton_OnMetaObject((KLanguageButton*)self, (intptr_t)callback);
}

const QMetaObject* k_languagebutton_qbase_meta_object(void* self) {
    return KLanguageButton_QBaseMetaObject((KLanguageButton*)self);
}

void* k_languagebutton_metacast(void* self, const char* param1) {
    return KLanguageButton_Metacast((KLanguageButton*)self, param1);
}

void k_languagebutton_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    KLanguageButton_OnMetacast((KLanguageButton*)self, (intptr_t)callback);
}

void* k_languagebutton_qbase_metacast(void* self, const char* param1) {
    return KLanguageButton_QBaseMetacast((KLanguageButton*)self, param1);
}

int32_t k_languagebutton_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLanguageButton_Metacall((KLanguageButton*)self, param1, param2, param3);
}

void k_languagebutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KLanguageButton_OnMetacall((KLanguageButton*)self, (intptr_t)callback);
}

int32_t k_languagebutton_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KLanguageButton_QBaseMetacall((KLanguageButton*)self, param1, param2, param3);
}

const char* k_languagebutton_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_locale(void* self, const char* locale) {
    KLanguageButton_SetLocale((KLanguageButton*)self, qstring(locale));
}

void k_languagebutton_set_text(void* self, const char* text) {
    KLanguageButton_SetText((KLanguageButton*)self, qstring(text));
}

void k_languagebutton_show_language_codes(void* self, bool show) {
    KLanguageButton_ShowLanguageCodes((KLanguageButton*)self, show);
}

void k_languagebutton_load_all_languages(void* self) {
    KLanguageButton_LoadAllLanguages((KLanguageButton*)self);
}

void k_languagebutton_insert_language(void* self, const char* languageCode) {
    KLanguageButton_InsertLanguage((KLanguageButton*)self, qstring(languageCode));
}

void k_languagebutton_insert_separator(void* self) {
    KLanguageButton_InsertSeparator((KLanguageButton*)self);
}

int32_t k_languagebutton_count(void* self) {
    return KLanguageButton_Count((KLanguageButton*)self);
}

void k_languagebutton_clear(void* self) {
    KLanguageButton_Clear((KLanguageButton*)self);
}

const char* k_languagebutton_current(void* self) {
    libqt_string _str = KLanguageButton_Current((KLanguageButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_languagebutton_contains(void* self, const char* languageCode) {
    return KLanguageButton_Contains((KLanguageButton*)self, qstring(languageCode));
}

void k_languagebutton_set_current_item(void* self, const char* languageCode) {
    KLanguageButton_SetCurrentItem((KLanguageButton*)self, qstring(languageCode));
}

void k_languagebutton_activated(void* self, const char* languageCode) {
    KLanguageButton_Activated((KLanguageButton*)self, qstring(languageCode));
}

void k_languagebutton_on_activated(void* self, void (*callback)(void*, const char*)) {
    KLanguageButton_Connect_Activated((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_highlighted(void* self, const char* languageCode) {
    KLanguageButton_Highlighted((KLanguageButton*)self, qstring(languageCode));
}

void k_languagebutton_on_highlighted(void* self, void (*callback)(void*, const char*)) {
    KLanguageButton_Connect_Highlighted((KLanguageButton*)self, (intptr_t)callback);
}

const char* k_languagebutton_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_languagebutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_insert_language2(void* self, const char* languageCode, const char* name) {
    KLanguageButton_InsertLanguage2((KLanguageButton*)self, qstring(languageCode), qstring(name));
}

void k_languagebutton_insert_language3(void* self, const char* languageCode, const char* name, int index) {
    KLanguageButton_InsertLanguage3((KLanguageButton*)self, qstring(languageCode), qstring(name), index);
}

void k_languagebutton_insert_separator1(void* self, int index) {
    KLanguageButton_InsertSeparator1((KLanguageButton*)self, index);
}

uintptr_t k_languagebutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_languagebutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_languagebutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_languagebutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_languagebutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_languagebutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_languagebutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_languagebutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_languagebutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_languagebutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_languagebutton_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_languagebutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_languagebutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_languagebutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_languagebutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_languagebutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_languagebutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_languagebutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_languagebutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_languagebutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_languagebutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_languagebutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_languagebutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_languagebutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_languagebutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_languagebutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_languagebutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_languagebutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_languagebutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_languagebutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_languagebutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_languagebutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_languagebutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_languagebutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_languagebutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_languagebutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_languagebutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_languagebutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_languagebutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_languagebutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_languagebutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_languagebutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_languagebutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_languagebutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_languagebutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_languagebutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_languagebutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_languagebutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_languagebutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_languagebutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_languagebutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_languagebutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_languagebutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_languagebutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_languagebutton_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_languagebutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_languagebutton_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_languagebutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_languagebutton_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_languagebutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_languagebutton_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_languagebutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_languagebutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_languagebutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_languagebutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_languagebutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_languagebutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_languagebutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_languagebutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_languagebutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_languagebutton_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_languagebutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_languagebutton_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_languagebutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_languagebutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_languagebutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_languagebutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_languagebutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_languagebutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_languagebutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_languagebutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_languagebutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_languagebutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_languagebutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_languagebutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_languagebutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_languagebutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_languagebutton_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_languagebutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_languagebutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_languagebutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_languagebutton_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_languagebutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_languagebutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_languagebutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_languagebutton_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_languagebutton_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_languagebutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_languagebutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_languagebutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_languagebutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_languagebutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_languagebutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_languagebutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_languagebutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_languagebutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_languagebutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_languagebutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_languagebutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_languagebutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_languagebutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_languagebutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_languagebutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_languagebutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_languagebutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_languagebutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_languagebutton_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_languagebutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_languagebutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

QLocale* k_languagebutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_languagebutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_languagebutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_languagebutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_languagebutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_languagebutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_languagebutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_languagebutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_languagebutton_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_languagebutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_languagebutton_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_languagebutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_languagebutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_languagebutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_languagebutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_languagebutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_languagebutton_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_languagebutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_languagebutton_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_languagebutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_languagebutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_languagebutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_languagebutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_languagebutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_languagebutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_languagebutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_languagebutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_languagebutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_languagebutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_languagebutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_languagebutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_languagebutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_languagebutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_languagebutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_languagebutton_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_languagebutton_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_languagebutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_languagebutton_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_languagebutton_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_languagebutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_languagebutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_languagebutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_languagebutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_languagebutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_languagebutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_languagebutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_languagebutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_languagebutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_languagebutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_languagebutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_languagebutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_languagebutton_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_languagebutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_languagebutton_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_languagebutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_languagebutton_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_languagebutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_languagebutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_languagebutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_languagebutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_languagebutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_languagebutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_languagebutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_languagebutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_languagebutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_languagebutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_languagebutton_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_languagebutton_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_languagebutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_languagebutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_languagebutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_languagebutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_languagebutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_languagebutton_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_languagebutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_languagebutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_languagebutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_languagebutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_languagebutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_languagebutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_languagebutton_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_languagebutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_languagebutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_languagebutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_languagebutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_languagebutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_languagebutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_languagebutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_languagebutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_languagebutton_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_languagebutton_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_languagebutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_languagebutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_languagebutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_languagebutton_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_languagebutton_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_languagebutton_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_languagebutton_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_languagebutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_languagebutton_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_languagebutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_languagebutton_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_languagebutton_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_languagebutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_languagebutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_languagebutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_languagebutton_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_languagebutton_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_languagebutton_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_languagebutton_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_languagebutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_languagebutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_languagebutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_languagebutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_languagebutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_languagebutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_languagebutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_languagebutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_languagebutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_languagebutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_languagebutton_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_languagebutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_languagebutton_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_languagebutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_languagebutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_languagebutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_languagebutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_languagebutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_languagebutton_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_languagebutton_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_languagebutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_languagebutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_languagebutton_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_languagebutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_languagebutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_languagebutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_languagebutton_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_languagebutton_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_languagebutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_languagebutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_languagebutton_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_languagebutton_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_languagebutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_languagebutton_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_languagebutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_languagebutton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_languagebutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_languagebutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_languagebutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_languagebutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_languagebutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_languagebutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_languagebutton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_languagebutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_languagebutton_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_languagebutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_languagebutton_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_languagebutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_languagebutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_languagebutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_languagebutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_languagebutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_languagebutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_languagebutton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_languagebutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_languagebutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_languagebutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_languagebutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_languagebutton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_languagebutton_dynamic_property_names\n");
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

QBindingStorage* k_languagebutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_languagebutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_languagebutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_languagebutton_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_languagebutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_languagebutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_languagebutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t k_languagebutton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_languagebutton_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_languagebutton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_languagebutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_languagebutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_languagebutton_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_languagebutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_languagebutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_languagebutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_languagebutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_languagebutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_languagebutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_languagebutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_languagebutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_languagebutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_languagebutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_languagebutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_languagebutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_languagebutton_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t k_languagebutton_dev_type(void* self) {
    return KLanguageButton_DevType((KLanguageButton*)self);
}

int32_t k_languagebutton_qbase_dev_type(void* self) {
    return KLanguageButton_QBaseDevType((KLanguageButton*)self);
}

void k_languagebutton_on_dev_type(void* self, int32_t (*callback)()) {
    KLanguageButton_OnDevType((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_set_visible(void* self, bool visible) {
    KLanguageButton_SetVisible((KLanguageButton*)self, visible);
}

void k_languagebutton_qbase_set_visible(void* self, bool visible) {
    KLanguageButton_QBaseSetVisible((KLanguageButton*)self, visible);
}

void k_languagebutton_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KLanguageButton_OnSetVisible((KLanguageButton*)self, (intptr_t)callback);
}

QSize* k_languagebutton_size_hint(void* self) {
    return KLanguageButton_SizeHint((KLanguageButton*)self);
}

QSize* k_languagebutton_qbase_size_hint(void* self) {
    return KLanguageButton_QBaseSizeHint((KLanguageButton*)self);
}

void k_languagebutton_on_size_hint(void* self, QSize* (*callback)()) {
    KLanguageButton_OnSizeHint((KLanguageButton*)self, (intptr_t)callback);
}

QSize* k_languagebutton_minimum_size_hint(void* self) {
    return KLanguageButton_MinimumSizeHint((KLanguageButton*)self);
}

QSize* k_languagebutton_qbase_minimum_size_hint(void* self) {
    return KLanguageButton_QBaseMinimumSizeHint((KLanguageButton*)self);
}

void k_languagebutton_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KLanguageButton_OnMinimumSizeHint((KLanguageButton*)self, (intptr_t)callback);
}

int32_t k_languagebutton_height_for_width(void* self, int param1) {
    return KLanguageButton_HeightForWidth((KLanguageButton*)self, param1);
}

int32_t k_languagebutton_qbase_height_for_width(void* self, int param1) {
    return KLanguageButton_QBaseHeightForWidth((KLanguageButton*)self, param1);
}

void k_languagebutton_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KLanguageButton_OnHeightForWidth((KLanguageButton*)self, (intptr_t)callback);
}

bool k_languagebutton_has_height_for_width(void* self) {
    return KLanguageButton_HasHeightForWidth((KLanguageButton*)self);
}

bool k_languagebutton_qbase_has_height_for_width(void* self) {
    return KLanguageButton_QBaseHasHeightForWidth((KLanguageButton*)self);
}

void k_languagebutton_on_has_height_for_width(void* self, bool (*callback)()) {
    KLanguageButton_OnHasHeightForWidth((KLanguageButton*)self, (intptr_t)callback);
}

QPaintEngine* k_languagebutton_paint_engine(void* self) {
    return KLanguageButton_PaintEngine((KLanguageButton*)self);
}

QPaintEngine* k_languagebutton_qbase_paint_engine(void* self) {
    return KLanguageButton_QBasePaintEngine((KLanguageButton*)self);
}

void k_languagebutton_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KLanguageButton_OnPaintEngine((KLanguageButton*)self, (intptr_t)callback);
}

bool k_languagebutton_event(void* self, void* event) {
    return KLanguageButton_Event((KLanguageButton*)self, (QEvent*)event);
}

bool k_languagebutton_qbase_event(void* self, void* event) {
    return KLanguageButton_QBaseEvent((KLanguageButton*)self, (QEvent*)event);
}

void k_languagebutton_on_event(void* self, bool (*callback)(void*, void*)) {
    KLanguageButton_OnEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_mouse_press_event(void* self, void* event) {
    KLanguageButton_MousePressEvent((KLanguageButton*)self, (QMouseEvent*)event);
}

void k_languagebutton_qbase_mouse_press_event(void* self, void* event) {
    KLanguageButton_QBaseMousePressEvent((KLanguageButton*)self, (QMouseEvent*)event);
}

void k_languagebutton_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnMousePressEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_mouse_release_event(void* self, void* event) {
    KLanguageButton_MouseReleaseEvent((KLanguageButton*)self, (QMouseEvent*)event);
}

void k_languagebutton_qbase_mouse_release_event(void* self, void* event) {
    KLanguageButton_QBaseMouseReleaseEvent((KLanguageButton*)self, (QMouseEvent*)event);
}

void k_languagebutton_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnMouseReleaseEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_mouse_double_click_event(void* self, void* event) {
    KLanguageButton_MouseDoubleClickEvent((KLanguageButton*)self, (QMouseEvent*)event);
}

void k_languagebutton_qbase_mouse_double_click_event(void* self, void* event) {
    KLanguageButton_QBaseMouseDoubleClickEvent((KLanguageButton*)self, (QMouseEvent*)event);
}

void k_languagebutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnMouseDoubleClickEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_mouse_move_event(void* self, void* event) {
    KLanguageButton_MouseMoveEvent((KLanguageButton*)self, (QMouseEvent*)event);
}

void k_languagebutton_qbase_mouse_move_event(void* self, void* event) {
    KLanguageButton_QBaseMouseMoveEvent((KLanguageButton*)self, (QMouseEvent*)event);
}

void k_languagebutton_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnMouseMoveEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_wheel_event(void* self, void* event) {
    KLanguageButton_WheelEvent((KLanguageButton*)self, (QWheelEvent*)event);
}

void k_languagebutton_qbase_wheel_event(void* self, void* event) {
    KLanguageButton_QBaseWheelEvent((KLanguageButton*)self, (QWheelEvent*)event);
}

void k_languagebutton_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnWheelEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_key_press_event(void* self, void* event) {
    KLanguageButton_KeyPressEvent((KLanguageButton*)self, (QKeyEvent*)event);
}

void k_languagebutton_qbase_key_press_event(void* self, void* event) {
    KLanguageButton_QBaseKeyPressEvent((KLanguageButton*)self, (QKeyEvent*)event);
}

void k_languagebutton_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnKeyPressEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_key_release_event(void* self, void* event) {
    KLanguageButton_KeyReleaseEvent((KLanguageButton*)self, (QKeyEvent*)event);
}

void k_languagebutton_qbase_key_release_event(void* self, void* event) {
    KLanguageButton_QBaseKeyReleaseEvent((KLanguageButton*)self, (QKeyEvent*)event);
}

void k_languagebutton_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnKeyReleaseEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_focus_in_event(void* self, void* event) {
    KLanguageButton_FocusInEvent((KLanguageButton*)self, (QFocusEvent*)event);
}

void k_languagebutton_qbase_focus_in_event(void* self, void* event) {
    KLanguageButton_QBaseFocusInEvent((KLanguageButton*)self, (QFocusEvent*)event);
}

void k_languagebutton_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnFocusInEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_focus_out_event(void* self, void* event) {
    KLanguageButton_FocusOutEvent((KLanguageButton*)self, (QFocusEvent*)event);
}

void k_languagebutton_qbase_focus_out_event(void* self, void* event) {
    KLanguageButton_QBaseFocusOutEvent((KLanguageButton*)self, (QFocusEvent*)event);
}

void k_languagebutton_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnFocusOutEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_enter_event(void* self, void* event) {
    KLanguageButton_EnterEvent((KLanguageButton*)self, (QEnterEvent*)event);
}

void k_languagebutton_qbase_enter_event(void* self, void* event) {
    KLanguageButton_QBaseEnterEvent((KLanguageButton*)self, (QEnterEvent*)event);
}

void k_languagebutton_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnEnterEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_leave_event(void* self, void* event) {
    KLanguageButton_LeaveEvent((KLanguageButton*)self, (QEvent*)event);
}

void k_languagebutton_qbase_leave_event(void* self, void* event) {
    KLanguageButton_QBaseLeaveEvent((KLanguageButton*)self, (QEvent*)event);
}

void k_languagebutton_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnLeaveEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_paint_event(void* self, void* event) {
    KLanguageButton_PaintEvent((KLanguageButton*)self, (QPaintEvent*)event);
}

void k_languagebutton_qbase_paint_event(void* self, void* event) {
    KLanguageButton_QBasePaintEvent((KLanguageButton*)self, (QPaintEvent*)event);
}

void k_languagebutton_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnPaintEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_move_event(void* self, void* event) {
    KLanguageButton_MoveEvent((KLanguageButton*)self, (QMoveEvent*)event);
}

void k_languagebutton_qbase_move_event(void* self, void* event) {
    KLanguageButton_QBaseMoveEvent((KLanguageButton*)self, (QMoveEvent*)event);
}

void k_languagebutton_on_move_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnMoveEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_resize_event(void* self, void* event) {
    KLanguageButton_ResizeEvent((KLanguageButton*)self, (QResizeEvent*)event);
}

void k_languagebutton_qbase_resize_event(void* self, void* event) {
    KLanguageButton_QBaseResizeEvent((KLanguageButton*)self, (QResizeEvent*)event);
}

void k_languagebutton_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnResizeEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_close_event(void* self, void* event) {
    KLanguageButton_CloseEvent((KLanguageButton*)self, (QCloseEvent*)event);
}

void k_languagebutton_qbase_close_event(void* self, void* event) {
    KLanguageButton_QBaseCloseEvent((KLanguageButton*)self, (QCloseEvent*)event);
}

void k_languagebutton_on_close_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnCloseEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_context_menu_event(void* self, void* event) {
    KLanguageButton_ContextMenuEvent((KLanguageButton*)self, (QContextMenuEvent*)event);
}

void k_languagebutton_qbase_context_menu_event(void* self, void* event) {
    KLanguageButton_QBaseContextMenuEvent((KLanguageButton*)self, (QContextMenuEvent*)event);
}

void k_languagebutton_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnContextMenuEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_tablet_event(void* self, void* event) {
    KLanguageButton_TabletEvent((KLanguageButton*)self, (QTabletEvent*)event);
}

void k_languagebutton_qbase_tablet_event(void* self, void* event) {
    KLanguageButton_QBaseTabletEvent((KLanguageButton*)self, (QTabletEvent*)event);
}

void k_languagebutton_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnTabletEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_action_event(void* self, void* event) {
    KLanguageButton_ActionEvent((KLanguageButton*)self, (QActionEvent*)event);
}

void k_languagebutton_qbase_action_event(void* self, void* event) {
    KLanguageButton_QBaseActionEvent((KLanguageButton*)self, (QActionEvent*)event);
}

void k_languagebutton_on_action_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnActionEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_drag_enter_event(void* self, void* event) {
    KLanguageButton_DragEnterEvent((KLanguageButton*)self, (QDragEnterEvent*)event);
}

void k_languagebutton_qbase_drag_enter_event(void* self, void* event) {
    KLanguageButton_QBaseDragEnterEvent((KLanguageButton*)self, (QDragEnterEvent*)event);
}

void k_languagebutton_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnDragEnterEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_drag_move_event(void* self, void* event) {
    KLanguageButton_DragMoveEvent((KLanguageButton*)self, (QDragMoveEvent*)event);
}

void k_languagebutton_qbase_drag_move_event(void* self, void* event) {
    KLanguageButton_QBaseDragMoveEvent((KLanguageButton*)self, (QDragMoveEvent*)event);
}

void k_languagebutton_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnDragMoveEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_drag_leave_event(void* self, void* event) {
    KLanguageButton_DragLeaveEvent((KLanguageButton*)self, (QDragLeaveEvent*)event);
}

void k_languagebutton_qbase_drag_leave_event(void* self, void* event) {
    KLanguageButton_QBaseDragLeaveEvent((KLanguageButton*)self, (QDragLeaveEvent*)event);
}

void k_languagebutton_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnDragLeaveEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_drop_event(void* self, void* event) {
    KLanguageButton_DropEvent((KLanguageButton*)self, (QDropEvent*)event);
}

void k_languagebutton_qbase_drop_event(void* self, void* event) {
    KLanguageButton_QBaseDropEvent((KLanguageButton*)self, (QDropEvent*)event);
}

void k_languagebutton_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnDropEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_show_event(void* self, void* event) {
    KLanguageButton_ShowEvent((KLanguageButton*)self, (QShowEvent*)event);
}

void k_languagebutton_qbase_show_event(void* self, void* event) {
    KLanguageButton_QBaseShowEvent((KLanguageButton*)self, (QShowEvent*)event);
}

void k_languagebutton_on_show_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnShowEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_hide_event(void* self, void* event) {
    KLanguageButton_HideEvent((KLanguageButton*)self, (QHideEvent*)event);
}

void k_languagebutton_qbase_hide_event(void* self, void* event) {
    KLanguageButton_QBaseHideEvent((KLanguageButton*)self, (QHideEvent*)event);
}

void k_languagebutton_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnHideEvent((KLanguageButton*)self, (intptr_t)callback);
}

bool k_languagebutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KLanguageButton_NativeEvent((KLanguageButton*)self, qstring(eventType), message, result);
}

bool k_languagebutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KLanguageButton_QBaseNativeEvent((KLanguageButton*)self, qstring(eventType), message, result);
}

void k_languagebutton_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KLanguageButton_OnNativeEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_change_event(void* self, void* param1) {
    KLanguageButton_ChangeEvent((KLanguageButton*)self, (QEvent*)param1);
}

void k_languagebutton_qbase_change_event(void* self, void* param1) {
    KLanguageButton_QBaseChangeEvent((KLanguageButton*)self, (QEvent*)param1);
}

void k_languagebutton_on_change_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnChangeEvent((KLanguageButton*)self, (intptr_t)callback);
}

int32_t k_languagebutton_metric(void* self, int32_t param1) {
    return KLanguageButton_Metric((KLanguageButton*)self, param1);
}

int32_t k_languagebutton_qbase_metric(void* self, int32_t param1) {
    return KLanguageButton_QBaseMetric((KLanguageButton*)self, param1);
}

void k_languagebutton_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KLanguageButton_OnMetric((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_init_painter(void* self, void* painter) {
    KLanguageButton_InitPainter((KLanguageButton*)self, (QPainter*)painter);
}

void k_languagebutton_qbase_init_painter(void* self, void* painter) {
    KLanguageButton_QBaseInitPainter((KLanguageButton*)self, (QPainter*)painter);
}

void k_languagebutton_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnInitPainter((KLanguageButton*)self, (intptr_t)callback);
}

QPaintDevice* k_languagebutton_redirected(void* self, void* offset) {
    return KLanguageButton_Redirected((KLanguageButton*)self, (QPoint*)offset);
}

QPaintDevice* k_languagebutton_qbase_redirected(void* self, void* offset) {
    return KLanguageButton_QBaseRedirected((KLanguageButton*)self, (QPoint*)offset);
}

void k_languagebutton_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KLanguageButton_OnRedirected((KLanguageButton*)self, (intptr_t)callback);
}

QPainter* k_languagebutton_shared_painter(void* self) {
    return KLanguageButton_SharedPainter((KLanguageButton*)self);
}

QPainter* k_languagebutton_qbase_shared_painter(void* self) {
    return KLanguageButton_QBaseSharedPainter((KLanguageButton*)self);
}

void k_languagebutton_on_shared_painter(void* self, QPainter* (*callback)()) {
    KLanguageButton_OnSharedPainter((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_input_method_event(void* self, void* param1) {
    KLanguageButton_InputMethodEvent((KLanguageButton*)self, (QInputMethodEvent*)param1);
}

void k_languagebutton_qbase_input_method_event(void* self, void* param1) {
    KLanguageButton_QBaseInputMethodEvent((KLanguageButton*)self, (QInputMethodEvent*)param1);
}

void k_languagebutton_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnInputMethodEvent((KLanguageButton*)self, (intptr_t)callback);
}

QVariant* k_languagebutton_input_method_query(void* self, int32_t param1) {
    return KLanguageButton_InputMethodQuery((KLanguageButton*)self, param1);
}

QVariant* k_languagebutton_qbase_input_method_query(void* self, int32_t param1) {
    return KLanguageButton_QBaseInputMethodQuery((KLanguageButton*)self, param1);
}

void k_languagebutton_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    KLanguageButton_OnInputMethodQuery((KLanguageButton*)self, (intptr_t)callback);
}

bool k_languagebutton_focus_next_prev_child(void* self, bool next) {
    return KLanguageButton_FocusNextPrevChild((KLanguageButton*)self, next);
}

bool k_languagebutton_qbase_focus_next_prev_child(void* self, bool next) {
    return KLanguageButton_QBaseFocusNextPrevChild((KLanguageButton*)self, next);
}

void k_languagebutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KLanguageButton_OnFocusNextPrevChild((KLanguageButton*)self, (intptr_t)callback);
}

bool k_languagebutton_event_filter(void* self, void* watched, void* event) {
    return KLanguageButton_EventFilter((KLanguageButton*)self, (QObject*)watched, (QEvent*)event);
}

bool k_languagebutton_qbase_event_filter(void* self, void* watched, void* event) {
    return KLanguageButton_QBaseEventFilter((KLanguageButton*)self, (QObject*)watched, (QEvent*)event);
}

void k_languagebutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KLanguageButton_OnEventFilter((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_timer_event(void* self, void* event) {
    KLanguageButton_TimerEvent((KLanguageButton*)self, (QTimerEvent*)event);
}

void k_languagebutton_qbase_timer_event(void* self, void* event) {
    KLanguageButton_QBaseTimerEvent((KLanguageButton*)self, (QTimerEvent*)event);
}

void k_languagebutton_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnTimerEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_child_event(void* self, void* event) {
    KLanguageButton_ChildEvent((KLanguageButton*)self, (QChildEvent*)event);
}

void k_languagebutton_qbase_child_event(void* self, void* event) {
    KLanguageButton_QBaseChildEvent((KLanguageButton*)self, (QChildEvent*)event);
}

void k_languagebutton_on_child_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnChildEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_custom_event(void* self, void* event) {
    KLanguageButton_CustomEvent((KLanguageButton*)self, (QEvent*)event);
}

void k_languagebutton_qbase_custom_event(void* self, void* event) {
    KLanguageButton_QBaseCustomEvent((KLanguageButton*)self, (QEvent*)event);
}

void k_languagebutton_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnCustomEvent((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_connect_notify(void* self, void* signal) {
    KLanguageButton_ConnectNotify((KLanguageButton*)self, (QMetaMethod*)signal);
}

void k_languagebutton_qbase_connect_notify(void* self, void* signal) {
    KLanguageButton_QBaseConnectNotify((KLanguageButton*)self, (QMetaMethod*)signal);
}

void k_languagebutton_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnConnectNotify((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_disconnect_notify(void* self, void* signal) {
    KLanguageButton_DisconnectNotify((KLanguageButton*)self, (QMetaMethod*)signal);
}

void k_languagebutton_qbase_disconnect_notify(void* self, void* signal) {
    KLanguageButton_QBaseDisconnectNotify((KLanguageButton*)self, (QMetaMethod*)signal);
}

void k_languagebutton_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KLanguageButton_OnDisconnectNotify((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_update_micro_focus(void* self) {
    KLanguageButton_UpdateMicroFocus((KLanguageButton*)self);
}

void k_languagebutton_qbase_update_micro_focus(void* self) {
    KLanguageButton_QBaseUpdateMicroFocus((KLanguageButton*)self);
}

void k_languagebutton_on_update_micro_focus(void* self, void (*callback)()) {
    KLanguageButton_OnUpdateMicroFocus((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_create(void* self) {
    KLanguageButton_Create((KLanguageButton*)self);
}

void k_languagebutton_qbase_create(void* self) {
    KLanguageButton_QBaseCreate((KLanguageButton*)self);
}

void k_languagebutton_on_create(void* self, void (*callback)()) {
    KLanguageButton_OnCreate((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_destroy(void* self) {
    KLanguageButton_Destroy((KLanguageButton*)self);
}

void k_languagebutton_qbase_destroy(void* self) {
    KLanguageButton_QBaseDestroy((KLanguageButton*)self);
}

void k_languagebutton_on_destroy(void* self, void (*callback)()) {
    KLanguageButton_OnDestroy((KLanguageButton*)self, (intptr_t)callback);
}

bool k_languagebutton_focus_next_child(void* self) {
    return KLanguageButton_FocusNextChild((KLanguageButton*)self);
}

bool k_languagebutton_qbase_focus_next_child(void* self) {
    return KLanguageButton_QBaseFocusNextChild((KLanguageButton*)self);
}

void k_languagebutton_on_focus_next_child(void* self, bool (*callback)()) {
    KLanguageButton_OnFocusNextChild((KLanguageButton*)self, (intptr_t)callback);
}

bool k_languagebutton_focus_previous_child(void* self) {
    return KLanguageButton_FocusPreviousChild((KLanguageButton*)self);
}

bool k_languagebutton_qbase_focus_previous_child(void* self) {
    return KLanguageButton_QBaseFocusPreviousChild((KLanguageButton*)self);
}

void k_languagebutton_on_focus_previous_child(void* self, bool (*callback)()) {
    KLanguageButton_OnFocusPreviousChild((KLanguageButton*)self, (intptr_t)callback);
}

QObject* k_languagebutton_sender(void* self) {
    return KLanguageButton_Sender((KLanguageButton*)self);
}

QObject* k_languagebutton_qbase_sender(void* self) {
    return KLanguageButton_QBaseSender((KLanguageButton*)self);
}

void k_languagebutton_on_sender(void* self, QObject* (*callback)()) {
    KLanguageButton_OnSender((KLanguageButton*)self, (intptr_t)callback);
}

int32_t k_languagebutton_sender_signal_index(void* self) {
    return KLanguageButton_SenderSignalIndex((KLanguageButton*)self);
}

int32_t k_languagebutton_qbase_sender_signal_index(void* self) {
    return KLanguageButton_QBaseSenderSignalIndex((KLanguageButton*)self);
}

void k_languagebutton_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KLanguageButton_OnSenderSignalIndex((KLanguageButton*)self, (intptr_t)callback);
}

int32_t k_languagebutton_receivers(void* self, const char* signal) {
    return KLanguageButton_Receivers((KLanguageButton*)self, signal);
}

int32_t k_languagebutton_qbase_receivers(void* self, const char* signal) {
    return KLanguageButton_QBaseReceivers((KLanguageButton*)self, signal);
}

void k_languagebutton_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KLanguageButton_OnReceivers((KLanguageButton*)self, (intptr_t)callback);
}

bool k_languagebutton_is_signal_connected(void* self, void* signal) {
    return KLanguageButton_IsSignalConnected((KLanguageButton*)self, (QMetaMethod*)signal);
}

bool k_languagebutton_qbase_is_signal_connected(void* self, void* signal) {
    return KLanguageButton_QBaseIsSignalConnected((KLanguageButton*)self, (QMetaMethod*)signal);
}

void k_languagebutton_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KLanguageButton_OnIsSignalConnected((KLanguageButton*)self, (intptr_t)callback);
}

double k_languagebutton_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KLanguageButton_GetDecodedMetricF((KLanguageButton*)self, metricA, metricB);
}

double k_languagebutton_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KLanguageButton_QBaseGetDecodedMetricF((KLanguageButton*)self, metricA, metricB);
}

void k_languagebutton_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KLanguageButton_OnGetDecodedMetricF((KLanguageButton*)self, (intptr_t)callback);
}

void k_languagebutton_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_languagebutton_delete(void* self) {
    KLanguageButton_Delete((KLanguageButton*)(self));
}
