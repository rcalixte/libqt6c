#include "../libqabstractbutton.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqtoolbutton.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libKColorPicker.hpp"
#include "libKColorPicker.h"

kColorPicker__KColorPicker* k_colorpicker__kcolorpicker_new() {
    return kColorPicker__KColorPicker_new();
}

kColorPicker__KColorPicker* k_colorpicker__kcolorpicker_new2(bool showAlphaChannel) {
    return kColorPicker__KColorPicker_new2(showAlphaChannel);
}

kColorPicker__KColorPicker* k_colorpicker__kcolorpicker_new3(bool showAlphaChannel, void* parent) {
    return kColorPicker__KColorPicker_new3(showAlphaChannel, (QWidget*)parent);
}

const QMetaObject* k_colorpicker__kcolorpicker_meta_object(void* self) {
    return kColorPicker__KColorPicker_MetaObject((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_meta_object(void* self, const QMetaObject* (*callback)()) {
    kColorPicker__KColorPicker_OnMetaObject((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

const QMetaObject* k_colorpicker__kcolorpicker_qbase_meta_object(void* self) {
    return kColorPicker__KColorPicker_QBaseMetaObject((kColorPicker__KColorPicker*)self);
}

void* k_colorpicker__kcolorpicker_metacast(void* self, const char* param1) {
    return kColorPicker__KColorPicker_Metacast((kColorPicker__KColorPicker*)self, param1);
}

void k_colorpicker__kcolorpicker_on_metacast(void* self, void* (*callback)(void*, const char*)) {
    kColorPicker__KColorPicker_OnMetacast((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void* k_colorpicker__kcolorpicker_qbase_metacast(void* self, const char* param1) {
    return kColorPicker__KColorPicker_QBaseMetacast((kColorPicker__KColorPicker*)self, param1);
}

int32_t k_colorpicker__kcolorpicker_metacall(void* self, int32_t param1, int param2, void* param3) {
    return kColorPicker__KColorPicker_Metacall((kColorPicker__KColorPicker*)self, param1, param2, param3);
}

void k_colorpicker__kcolorpicker_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    kColorPicker__KColorPicker_OnMetacall((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

int32_t k_colorpicker__kcolorpicker_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return kColorPicker__KColorPicker_QBaseMetacall((kColorPicker__KColorPicker*)self, param1, param2, param3);
}

const char* k_colorpicker__kcolorpicker_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_fixed_size(void* self, void* size) {
    kColorPicker__KColorPicker_SetFixedSize((kColorPicker__KColorPicker*)self, (QSize*)size);
}

void k_colorpicker__kcolorpicker_set_fixed_size2(void* self, int width, int height) {
    kColorPicker__KColorPicker_SetFixedSize2((kColorPicker__KColorPicker*)self, width, height);
}

QColor* k_colorpicker__kcolorpicker_color(void* self) {
    return kColorPicker__KColorPicker_Color((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_reset_colors(void* self) {
    kColorPicker__KColorPicker_ResetColors((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_set_color(void* self, void* color) {
    kColorPicker__KColorPicker_SetColor((kColorPicker__KColorPicker*)self, (QColor*)color);
}

void k_colorpicker__kcolorpicker_color_changed(void* self, void* color) {
    kColorPicker__KColorPicker_ColorChanged((kColorPicker__KColorPicker*)self, (QColor*)color);
}

void k_colorpicker__kcolorpicker_on_color_changed(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_Connect_ColorChanged((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

const char* k_colorpicker__kcolorpicker_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorpicker__kcolorpicker_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_reset_colors1(void* self, bool showAlphaChannel) {
    kColorPicker__KColorPicker_ResetColors1((kColorPicker__KColorPicker*)self, showAlphaChannel);
}

int32_t k_colorpicker__kcolorpicker_tool_button_style(void* self) {
    return QToolButton_ToolButtonStyle((QToolButton*)self);
}

int32_t k_colorpicker__kcolorpicker_arrow_type(void* self) {
    return QToolButton_ArrowType((QToolButton*)self);
}

void k_colorpicker__kcolorpicker_set_arrow_type(void* self, int32_t type) {
    QToolButton_SetArrowType((QToolButton*)self, type);
}

void k_colorpicker__kcolorpicker_set_menu(void* self, void* menu) {
    QToolButton_SetMenu((QToolButton*)self, (QMenu*)menu);
}

QMenu* k_colorpicker__kcolorpicker_menu(void* self) {
    return QToolButton_Menu((QToolButton*)self);
}

void k_colorpicker__kcolorpicker_set_popup_mode(void* self, int32_t mode) {
    QToolButton_SetPopupMode((QToolButton*)self, mode);
}

int32_t k_colorpicker__kcolorpicker_popup_mode(void* self) {
    return QToolButton_PopupMode((QToolButton*)self);
}

QAction* k_colorpicker__kcolorpicker_default_action(void* self) {
    return QToolButton_DefaultAction((QToolButton*)self);
}

void k_colorpicker__kcolorpicker_set_auto_raise(void* self, bool enable) {
    QToolButton_SetAutoRaise((QToolButton*)self, enable);
}

bool k_colorpicker__kcolorpicker_auto_raise(void* self) {
    return QToolButton_AutoRaise((QToolButton*)self);
}

void k_colorpicker__kcolorpicker_show_menu(void* self) {
    QToolButton_ShowMenu((QToolButton*)self);
}

void k_colorpicker__kcolorpicker_set_tool_button_style(void* self, int32_t style) {
    QToolButton_SetToolButtonStyle((QToolButton*)self, style);
}

void k_colorpicker__kcolorpicker_set_default_action(void* self, void* defaultAction) {
    QToolButton_SetDefaultAction((QToolButton*)self, (QAction*)defaultAction);
}

void k_colorpicker__kcolorpicker_triggered(void* self, void* param1) {
    QToolButton_Triggered((QToolButton*)self, (QAction*)param1);
}

void k_colorpicker__kcolorpicker_on_triggered(void* self, void (*callback)(void*, void*)) {
    QToolButton_Connect_Triggered((QToolButton*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

const char* k_colorpicker__kcolorpicker_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

QIcon* k_colorpicker__kcolorpicker_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

QSize* k_colorpicker__kcolorpicker_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

QKeySequence* k_colorpicker__kcolorpicker_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

bool k_colorpicker__kcolorpicker_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

bool k_colorpicker__kcolorpicker_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

bool k_colorpicker__kcolorpicker_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

bool k_colorpicker__kcolorpicker_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

int32_t k_colorpicker__kcolorpicker_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

int32_t k_colorpicker__kcolorpicker_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

bool k_colorpicker__kcolorpicker_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

QButtonGroup* k_colorpicker__kcolorpicker_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

void k_colorpicker__kcolorpicker_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

void k_colorpicker__kcolorpicker_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_on_pressed(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_on_released(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

void k_colorpicker__kcolorpicker_on_clicked(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

void k_colorpicker__kcolorpicker_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

void k_colorpicker__kcolorpicker_on_clicked1(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)callback);
}

uintptr_t k_colorpicker__kcolorpicker_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_colorpicker__kcolorpicker_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_colorpicker__kcolorpicker_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_colorpicker__kcolorpicker_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_colorpicker__kcolorpicker_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_colorpicker__kcolorpicker_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_colorpicker__kcolorpicker_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_colorpicker__kcolorpicker_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_colorpicker__kcolorpicker_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_colorpicker__kcolorpicker_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_colorpicker__kcolorpicker_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_colorpicker__kcolorpicker_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_colorpicker__kcolorpicker_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_colorpicker__kcolorpicker_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_colorpicker__kcolorpicker_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_colorpicker__kcolorpicker_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_colorpicker__kcolorpicker_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_colorpicker__kcolorpicker_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_colorpicker__kcolorpicker_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_colorpicker__kcolorpicker_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_colorpicker__kcolorpicker_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_colorpicker__kcolorpicker_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_colorpicker__kcolorpicker_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_colorpicker__kcolorpicker_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_colorpicker__kcolorpicker_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_colorpicker__kcolorpicker_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_colorpicker__kcolorpicker_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_colorpicker__kcolorpicker_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_colorpicker__kcolorpicker_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_colorpicker__kcolorpicker_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_colorpicker__kcolorpicker_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_colorpicker__kcolorpicker_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_colorpicker__kcolorpicker_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_colorpicker__kcolorpicker_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_colorpicker__kcolorpicker_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorpicker__kcolorpicker_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorpicker__kcolorpicker_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorpicker__kcolorpicker_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorpicker__kcolorpicker_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorpicker__kcolorpicker_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorpicker__kcolorpicker_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorpicker__kcolorpicker_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorpicker__kcolorpicker_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_colorpicker__kcolorpicker_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_colorpicker__kcolorpicker_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_colorpicker__kcolorpicker_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_colorpicker__kcolorpicker_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_colorpicker__kcolorpicker_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_colorpicker__kcolorpicker_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_colorpicker__kcolorpicker_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_colorpicker__kcolorpicker_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_colorpicker__kcolorpicker_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_colorpicker__kcolorpicker_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_colorpicker__kcolorpicker_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_colorpicker__kcolorpicker_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_colorpicker__kcolorpicker_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_colorpicker__kcolorpicker_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_colorpicker__kcolorpicker_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_colorpicker__kcolorpicker_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_colorpicker__kcolorpicker_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_colorpicker__kcolorpicker_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_colorpicker__kcolorpicker_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_colorpicker__kcolorpicker_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_colorpicker__kcolorpicker_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_colorpicker__kcolorpicker_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_colorpicker__kcolorpicker_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_colorpicker__kcolorpicker_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_colorpicker__kcolorpicker_grab_gesture(void* self, int32_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_colorpicker__kcolorpicker_ungrab_gesture(void* self, int32_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_colorpicker__kcolorpicker_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_colorpicker__kcolorpicker_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_colorpicker__kcolorpicker_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorpicker__kcolorpicker_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_colorpicker__kcolorpicker_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_colorpicker__kcolorpicker_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_colorpicker__kcolorpicker_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_colorpicker__kcolorpicker_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_colorpicker__kcolorpicker_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_colorpicker__kcolorpicker_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_colorpicker__kcolorpicker_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_colorpicker__kcolorpicker_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_colorpicker__kcolorpicker_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorpicker__kcolorpicker_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_colorpicker__kcolorpicker_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_colorpicker__kcolorpicker_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_colorpicker__kcolorpicker_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_colorpicker__kcolorpicker_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_colorpicker__kcolorpicker_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_colorpicker__kcolorpicker_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_colorpicker__kcolorpicker_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_colorpicker__kcolorpicker_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_colorpicker__kcolorpicker_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_colorpicker__kcolorpicker_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_colorpicker__kcolorpicker_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_colorpicker__kcolorpicker_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_colorpicker__kcolorpicker_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_colorpicker__kcolorpicker_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_colorpicker__kcolorpicker_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_colorpicker__kcolorpicker_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_colorpicker__kcolorpicker_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_colorpicker__kcolorpicker_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_colorpicker__kcolorpicker_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_colorpicker__kcolorpicker_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_colorpicker__kcolorpicker_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_colorpicker__kcolorpicker_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_colorpicker__kcolorpicker_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_colorpicker__kcolorpicker_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_colorpicker__kcolorpicker_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_colorpicker__kcolorpicker_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_colorpicker__kcolorpicker_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_colorpicker__kcolorpicker_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_colorpicker__kcolorpicker_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_colorpicker__kcolorpicker_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_colorpicker__kcolorpicker_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_colorpicker__kcolorpicker_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_colorpicker__kcolorpicker_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_colorpicker__kcolorpicker_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_colorpicker__kcolorpicker_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_colorpicker__kcolorpicker_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_colorpicker__kcolorpicker_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_colorpicker__kcolorpicker_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_colorpicker__kcolorpicker_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_colorpicker__kcolorpicker_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_colorpicker__kcolorpicker_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_colorpicker__kcolorpicker_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_colorpicker__kcolorpicker_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_colorpicker__kcolorpicker_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_colorpicker__kcolorpicker_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_colorpicker__kcolorpicker_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_colorpicker__kcolorpicker_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_colorpicker__kcolorpicker_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_colorpicker__kcolorpicker_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_colorpicker__kcolorpicker_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_colorpicker__kcolorpicker_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_colorpicker__kcolorpicker_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_colorpicker__kcolorpicker_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_colorpicker__kcolorpicker_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_colorpicker__kcolorpicker_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_colorpicker__kcolorpicker_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_colorpicker__kcolorpicker_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_colorpicker__kcolorpicker_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_colorpicker__kcolorpicker_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_colorpicker__kcolorpicker_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_colorpicker__kcolorpicker_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_colorpicker__kcolorpicker_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_colorpicker__kcolorpicker_set_parent2(void* self, void* parent, int32_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_colorpicker__kcolorpicker_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_colorpicker__kcolorpicker_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_colorpicker__kcolorpicker_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_colorpicker__kcolorpicker_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_colorpicker__kcolorpicker_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_colorpicker__kcolorpicker_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_colorpicker__kcolorpicker_add_actions(void* self, libqt_list /* of QAction* */ actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_colorpicker__kcolorpicker_insert_actions(void* self, void* before, libqt_list /* of QAction* */ actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_colorpicker__kcolorpicker_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_colorpicker__kcolorpicker_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_colorpicker__kcolorpicker_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_colorpicker__kcolorpicker_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_colorpicker__kcolorpicker_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_colorpicker__kcolorpicker_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_colorpicker__kcolorpicker_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_colorpicker__kcolorpicker_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_window_flags(void* self, int32_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int32_t k_colorpicker__kcolorpicker_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_window_flag(void* self, int32_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_colorpicker__kcolorpicker_override_window_flags(void* self, int32_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int32_t k_colorpicker__kcolorpicker_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_colorpicker__kcolorpicker_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_colorpicker__kcolorpicker_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_colorpicker__kcolorpicker_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_colorpicker__kcolorpicker_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_colorpicker__kcolorpicker_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_colorpicker__kcolorpicker_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_colorpicker__kcolorpicker_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_colorpicker__kcolorpicker_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_colorpicker__kcolorpicker_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_colorpicker__kcolorpicker_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_colorpicker__kcolorpicker_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_colorpicker__kcolorpicker_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_colorpicker__kcolorpicker_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_colorpicker__kcolorpicker_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_colorpicker__kcolorpicker_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_colorpicker__kcolorpicker_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_colorpicker__kcolorpicker_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_colorpicker__kcolorpicker_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int32_t k_colorpicker__kcolorpicker_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_colorpicker__kcolorpicker_set_input_method_hints(void* self, int32_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_colorpicker__kcolorpicker_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_colorpicker__kcolorpicker_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_colorpicker__kcolorpicker_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_colorpicker__kcolorpicker_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_colorpicker__kcolorpicker_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_colorpicker__kcolorpicker_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_colorpicker__kcolorpicker_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_colorpicker__kcolorpicker_grab_gesture2(void* self, int32_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_colorpicker__kcolorpicker_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_colorpicker__kcolorpicker_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_colorpicker__kcolorpicker_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_colorpicker__kcolorpicker_set_window_flag2(void* self, int32_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_colorpicker__kcolorpicker_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_colorpicker__kcolorpicker_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_colorpicker__kcolorpicker_create_window_container3(void* window, void* parent, int32_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_colorpicker__kcolorpicker_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorpicker__kcolorpicker_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_colorpicker__kcolorpicker_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_colorpicker__kcolorpicker_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_colorpicker__kcolorpicker_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_colorpicker__kcolorpicker_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_colorpicker__kcolorpicker_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_colorpicker__kcolorpicker_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_colorpicker__kcolorpicker_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_colorpicker__kcolorpicker_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

int32_t k_colorpicker__kcolorpicker_start_timer2(void* self, int64_t time) {
    return QObject_StartTimer2((QObject*)self, time);
}

void k_colorpicker__kcolorpicker_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_colorpicker__kcolorpicker_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_colorpicker__kcolorpicker_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_colorpicker__kcolorpicker_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_colorpicker__kcolorpicker_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_colorpicker__kcolorpicker_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_colorpicker__kcolorpicker_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_colorpicker__kcolorpicker_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_colorpicker__kcolorpicker_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_colorpicker__kcolorpicker_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_colorpicker__kcolorpicker_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_colorpicker__kcolorpicker_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_colorpicker__kcolorpicker_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_colorpicker__kcolorpicker_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in k_colorpicker__kcolorpicker_dynamic_property_names\n");
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

QBindingStorage* k_colorpicker__kcolorpicker_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_colorpicker__kcolorpicker_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_colorpicker__kcolorpicker_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_colorpicker__kcolorpicker_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_colorpicker__kcolorpicker_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_colorpicker__kcolorpicker_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_colorpicker__kcolorpicker_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_colorpicker__kcolorpicker_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_colorpicker__kcolorpicker_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

int32_t k_colorpicker__kcolorpicker_start_timer23(void* self, int64_t time, int32_t timerType) {
    return QObject_StartTimer23((QObject*)self, time, timerType);
}

QMetaObject__Connection* k_colorpicker__kcolorpicker_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_colorpicker__kcolorpicker_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_colorpicker__kcolorpicker_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_colorpicker__kcolorpicker_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_colorpicker__kcolorpicker_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_colorpicker__kcolorpicker_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_colorpicker__kcolorpicker_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_colorpicker__kcolorpicker_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_colorpicker__kcolorpicker_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_colorpicker__kcolorpicker_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_colorpicker__kcolorpicker_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_colorpicker__kcolorpicker_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_colorpicker__kcolorpicker_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_colorpicker__kcolorpicker_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_colorpicker__kcolorpicker_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_colorpicker__kcolorpicker_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_colorpicker__kcolorpicker_size_hint(void* self) {
    return kColorPicker__KColorPicker_SizeHint((kColorPicker__KColorPicker*)self);
}

QSize* k_colorpicker__kcolorpicker_qbase_size_hint(void* self) {
    return kColorPicker__KColorPicker_QBaseSizeHint((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_size_hint(void* self, QSize* (*callback)()) {
    kColorPicker__KColorPicker_OnSizeHint((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

QSize* k_colorpicker__kcolorpicker_minimum_size_hint(void* self) {
    return kColorPicker__KColorPicker_MinimumSizeHint((kColorPicker__KColorPicker*)self);
}

QSize* k_colorpicker__kcolorpicker_qbase_minimum_size_hint(void* self) {
    return kColorPicker__KColorPicker_QBaseMinimumSizeHint((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    kColorPicker__KColorPicker_OnMinimumSizeHint((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_event(void* self, void* e) {
    return kColorPicker__KColorPicker_Event((kColorPicker__KColorPicker*)self, (QEvent*)e);
}

bool k_colorpicker__kcolorpicker_qbase_event(void* self, void* e) {
    return kColorPicker__KColorPicker_QBaseEvent((kColorPicker__KColorPicker*)self, (QEvent*)e);
}

void k_colorpicker__kcolorpicker_on_event(void* self, bool (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_mouse_press_event(void* self, void* param1) {
    kColorPicker__KColorPicker_MousePressEvent((kColorPicker__KColorPicker*)self, (QMouseEvent*)param1);
}

void k_colorpicker__kcolorpicker_qbase_mouse_press_event(void* self, void* param1) {
    kColorPicker__KColorPicker_QBaseMousePressEvent((kColorPicker__KColorPicker*)self, (QMouseEvent*)param1);
}

void k_colorpicker__kcolorpicker_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnMousePressEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_mouse_release_event(void* self, void* param1) {
    kColorPicker__KColorPicker_MouseReleaseEvent((kColorPicker__KColorPicker*)self, (QMouseEvent*)param1);
}

void k_colorpicker__kcolorpicker_qbase_mouse_release_event(void* self, void* param1) {
    kColorPicker__KColorPicker_QBaseMouseReleaseEvent((kColorPicker__KColorPicker*)self, (QMouseEvent*)param1);
}

void k_colorpicker__kcolorpicker_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnMouseReleaseEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_paint_event(void* self, void* param1) {
    kColorPicker__KColorPicker_PaintEvent((kColorPicker__KColorPicker*)self, (QPaintEvent*)param1);
}

void k_colorpicker__kcolorpicker_qbase_paint_event(void* self, void* param1) {
    kColorPicker__KColorPicker_QBasePaintEvent((kColorPicker__KColorPicker*)self, (QPaintEvent*)param1);
}

void k_colorpicker__kcolorpicker_on_paint_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnPaintEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_action_event(void* self, void* param1) {
    kColorPicker__KColorPicker_ActionEvent((kColorPicker__KColorPicker*)self, (QActionEvent*)param1);
}

void k_colorpicker__kcolorpicker_qbase_action_event(void* self, void* param1) {
    kColorPicker__KColorPicker_QBaseActionEvent((kColorPicker__KColorPicker*)self, (QActionEvent*)param1);
}

void k_colorpicker__kcolorpicker_on_action_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnActionEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_enter_event(void* self, void* param1) {
    kColorPicker__KColorPicker_EnterEvent((kColorPicker__KColorPicker*)self, (QEnterEvent*)param1);
}

void k_colorpicker__kcolorpicker_qbase_enter_event(void* self, void* param1) {
    kColorPicker__KColorPicker_QBaseEnterEvent((kColorPicker__KColorPicker*)self, (QEnterEvent*)param1);
}

void k_colorpicker__kcolorpicker_on_enter_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnEnterEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_leave_event(void* self, void* param1) {
    kColorPicker__KColorPicker_LeaveEvent((kColorPicker__KColorPicker*)self, (QEvent*)param1);
}

void k_colorpicker__kcolorpicker_qbase_leave_event(void* self, void* param1) {
    kColorPicker__KColorPicker_QBaseLeaveEvent((kColorPicker__KColorPicker*)self, (QEvent*)param1);
}

void k_colorpicker__kcolorpicker_on_leave_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnLeaveEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_timer_event(void* self, void* param1) {
    kColorPicker__KColorPicker_TimerEvent((kColorPicker__KColorPicker*)self, (QTimerEvent*)param1);
}

void k_colorpicker__kcolorpicker_qbase_timer_event(void* self, void* param1) {
    kColorPicker__KColorPicker_QBaseTimerEvent((kColorPicker__KColorPicker*)self, (QTimerEvent*)param1);
}

void k_colorpicker__kcolorpicker_on_timer_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnTimerEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_change_event(void* self, void* param1) {
    kColorPicker__KColorPicker_ChangeEvent((kColorPicker__KColorPicker*)self, (QEvent*)param1);
}

void k_colorpicker__kcolorpicker_qbase_change_event(void* self, void* param1) {
    kColorPicker__KColorPicker_QBaseChangeEvent((kColorPicker__KColorPicker*)self, (QEvent*)param1);
}

void k_colorpicker__kcolorpicker_on_change_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnChangeEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_hit_button(void* self, void* pos) {
    return kColorPicker__KColorPicker_HitButton((kColorPicker__KColorPicker*)self, (QPoint*)pos);
}

bool k_colorpicker__kcolorpicker_qbase_hit_button(void* self, void* pos) {
    return kColorPicker__KColorPicker_QBaseHitButton((kColorPicker__KColorPicker*)self, (QPoint*)pos);
}

void k_colorpicker__kcolorpicker_on_hit_button(void* self, bool (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnHitButton((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_check_state_set(void* self) {
    kColorPicker__KColorPicker_CheckStateSet((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_qbase_check_state_set(void* self) {
    kColorPicker__KColorPicker_QBaseCheckStateSet((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_check_state_set(void* self, void (*callback)()) {
    kColorPicker__KColorPicker_OnCheckStateSet((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_next_check_state(void* self) {
    kColorPicker__KColorPicker_NextCheckState((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_qbase_next_check_state(void* self) {
    kColorPicker__KColorPicker_QBaseNextCheckState((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_next_check_state(void* self, void (*callback)()) {
    kColorPicker__KColorPicker_OnNextCheckState((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_init_style_option(void* self, void* option) {
    kColorPicker__KColorPicker_InitStyleOption((kColorPicker__KColorPicker*)self, (QStyleOptionToolButton*)option);
}

void k_colorpicker__kcolorpicker_qbase_init_style_option(void* self, void* option) {
    kColorPicker__KColorPicker_QBaseInitStyleOption((kColorPicker__KColorPicker*)self, (QStyleOptionToolButton*)option);
}

void k_colorpicker__kcolorpicker_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnInitStyleOption((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_key_press_event(void* self, void* e) {
    kColorPicker__KColorPicker_KeyPressEvent((kColorPicker__KColorPicker*)self, (QKeyEvent*)e);
}

void k_colorpicker__kcolorpicker_qbase_key_press_event(void* self, void* e) {
    kColorPicker__KColorPicker_QBaseKeyPressEvent((kColorPicker__KColorPicker*)self, (QKeyEvent*)e);
}

void k_colorpicker__kcolorpicker_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnKeyPressEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_key_release_event(void* self, void* e) {
    kColorPicker__KColorPicker_KeyReleaseEvent((kColorPicker__KColorPicker*)self, (QKeyEvent*)e);
}

void k_colorpicker__kcolorpicker_qbase_key_release_event(void* self, void* e) {
    kColorPicker__KColorPicker_QBaseKeyReleaseEvent((kColorPicker__KColorPicker*)self, (QKeyEvent*)e);
}

void k_colorpicker__kcolorpicker_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnKeyReleaseEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_mouse_move_event(void* self, void* e) {
    kColorPicker__KColorPicker_MouseMoveEvent((kColorPicker__KColorPicker*)self, (QMouseEvent*)e);
}

void k_colorpicker__kcolorpicker_qbase_mouse_move_event(void* self, void* e) {
    kColorPicker__KColorPicker_QBaseMouseMoveEvent((kColorPicker__KColorPicker*)self, (QMouseEvent*)e);
}

void k_colorpicker__kcolorpicker_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnMouseMoveEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_focus_in_event(void* self, void* e) {
    kColorPicker__KColorPicker_FocusInEvent((kColorPicker__KColorPicker*)self, (QFocusEvent*)e);
}

void k_colorpicker__kcolorpicker_qbase_focus_in_event(void* self, void* e) {
    kColorPicker__KColorPicker_QBaseFocusInEvent((kColorPicker__KColorPicker*)self, (QFocusEvent*)e);
}

void k_colorpicker__kcolorpicker_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnFocusInEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_focus_out_event(void* self, void* e) {
    kColorPicker__KColorPicker_FocusOutEvent((kColorPicker__KColorPicker*)self, (QFocusEvent*)e);
}

void k_colorpicker__kcolorpicker_qbase_focus_out_event(void* self, void* e) {
    kColorPicker__KColorPicker_QBaseFocusOutEvent((kColorPicker__KColorPicker*)self, (QFocusEvent*)e);
}

void k_colorpicker__kcolorpicker_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnFocusOutEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

int32_t k_colorpicker__kcolorpicker_dev_type(void* self) {
    return kColorPicker__KColorPicker_DevType((kColorPicker__KColorPicker*)self);
}

int32_t k_colorpicker__kcolorpicker_qbase_dev_type(void* self) {
    return kColorPicker__KColorPicker_QBaseDevType((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_dev_type(void* self, int32_t (*callback)()) {
    kColorPicker__KColorPicker_OnDevType((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_set_visible(void* self, bool visible) {
    kColorPicker__KColorPicker_SetVisible((kColorPicker__KColorPicker*)self, visible);
}

void k_colorpicker__kcolorpicker_qbase_set_visible(void* self, bool visible) {
    kColorPicker__KColorPicker_QBaseSetVisible((kColorPicker__KColorPicker*)self, visible);
}

void k_colorpicker__kcolorpicker_on_set_visible(void* self, void (*callback)(void*, bool)) {
    kColorPicker__KColorPicker_OnSetVisible((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

int32_t k_colorpicker__kcolorpicker_height_for_width(void* self, int param1) {
    return kColorPicker__KColorPicker_HeightForWidth((kColorPicker__KColorPicker*)self, param1);
}

int32_t k_colorpicker__kcolorpicker_qbase_height_for_width(void* self, int param1) {
    return kColorPicker__KColorPicker_QBaseHeightForWidth((kColorPicker__KColorPicker*)self, param1);
}

void k_colorpicker__kcolorpicker_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    kColorPicker__KColorPicker_OnHeightForWidth((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_has_height_for_width(void* self) {
    return kColorPicker__KColorPicker_HasHeightForWidth((kColorPicker__KColorPicker*)self);
}

bool k_colorpicker__kcolorpicker_qbase_has_height_for_width(void* self) {
    return kColorPicker__KColorPicker_QBaseHasHeightForWidth((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_has_height_for_width(void* self, bool (*callback)()) {
    kColorPicker__KColorPicker_OnHasHeightForWidth((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

QPaintEngine* k_colorpicker__kcolorpicker_paint_engine(void* self) {
    return kColorPicker__KColorPicker_PaintEngine((kColorPicker__KColorPicker*)self);
}

QPaintEngine* k_colorpicker__kcolorpicker_qbase_paint_engine(void* self) {
    return kColorPicker__KColorPicker_QBasePaintEngine((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    kColorPicker__KColorPicker_OnPaintEngine((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_mouse_double_click_event(void* self, void* event) {
    kColorPicker__KColorPicker_MouseDoubleClickEvent((kColorPicker__KColorPicker*)self, (QMouseEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_mouse_double_click_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseMouseDoubleClickEvent((kColorPicker__KColorPicker*)self, (QMouseEvent*)event);
}

void k_colorpicker__kcolorpicker_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnMouseDoubleClickEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_wheel_event(void* self, void* event) {
    kColorPicker__KColorPicker_WheelEvent((kColorPicker__KColorPicker*)self, (QWheelEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_wheel_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseWheelEvent((kColorPicker__KColorPicker*)self, (QWheelEvent*)event);
}

void k_colorpicker__kcolorpicker_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnWheelEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_move_event(void* self, void* event) {
    kColorPicker__KColorPicker_MoveEvent((kColorPicker__KColorPicker*)self, (QMoveEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_move_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseMoveEvent((kColorPicker__KColorPicker*)self, (QMoveEvent*)event);
}

void k_colorpicker__kcolorpicker_on_move_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnMoveEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_resize_event(void* self, void* event) {
    kColorPicker__KColorPicker_ResizeEvent((kColorPicker__KColorPicker*)self, (QResizeEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_resize_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseResizeEvent((kColorPicker__KColorPicker*)self, (QResizeEvent*)event);
}

void k_colorpicker__kcolorpicker_on_resize_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnResizeEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_close_event(void* self, void* event) {
    kColorPicker__KColorPicker_CloseEvent((kColorPicker__KColorPicker*)self, (QCloseEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_close_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseCloseEvent((kColorPicker__KColorPicker*)self, (QCloseEvent*)event);
}

void k_colorpicker__kcolorpicker_on_close_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnCloseEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_context_menu_event(void* self, void* event) {
    kColorPicker__KColorPicker_ContextMenuEvent((kColorPicker__KColorPicker*)self, (QContextMenuEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_context_menu_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseContextMenuEvent((kColorPicker__KColorPicker*)self, (QContextMenuEvent*)event);
}

void k_colorpicker__kcolorpicker_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnContextMenuEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_tablet_event(void* self, void* event) {
    kColorPicker__KColorPicker_TabletEvent((kColorPicker__KColorPicker*)self, (QTabletEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_tablet_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseTabletEvent((kColorPicker__KColorPicker*)self, (QTabletEvent*)event);
}

void k_colorpicker__kcolorpicker_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnTabletEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_drag_enter_event(void* self, void* event) {
    kColorPicker__KColorPicker_DragEnterEvent((kColorPicker__KColorPicker*)self, (QDragEnterEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_drag_enter_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseDragEnterEvent((kColorPicker__KColorPicker*)self, (QDragEnterEvent*)event);
}

void k_colorpicker__kcolorpicker_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnDragEnterEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_drag_move_event(void* self, void* event) {
    kColorPicker__KColorPicker_DragMoveEvent((kColorPicker__KColorPicker*)self, (QDragMoveEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_drag_move_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseDragMoveEvent((kColorPicker__KColorPicker*)self, (QDragMoveEvent*)event);
}

void k_colorpicker__kcolorpicker_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnDragMoveEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_drag_leave_event(void* self, void* event) {
    kColorPicker__KColorPicker_DragLeaveEvent((kColorPicker__KColorPicker*)self, (QDragLeaveEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_drag_leave_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseDragLeaveEvent((kColorPicker__KColorPicker*)self, (QDragLeaveEvent*)event);
}

void k_colorpicker__kcolorpicker_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnDragLeaveEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_drop_event(void* self, void* event) {
    kColorPicker__KColorPicker_DropEvent((kColorPicker__KColorPicker*)self, (QDropEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_drop_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseDropEvent((kColorPicker__KColorPicker*)self, (QDropEvent*)event);
}

void k_colorpicker__kcolorpicker_on_drop_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnDropEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_show_event(void* self, void* event) {
    kColorPicker__KColorPicker_ShowEvent((kColorPicker__KColorPicker*)self, (QShowEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_show_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseShowEvent((kColorPicker__KColorPicker*)self, (QShowEvent*)event);
}

void k_colorpicker__kcolorpicker_on_show_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnShowEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_hide_event(void* self, void* event) {
    kColorPicker__KColorPicker_HideEvent((kColorPicker__KColorPicker*)self, (QHideEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_hide_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseHideEvent((kColorPicker__KColorPicker*)self, (QHideEvent*)event);
}

void k_colorpicker__kcolorpicker_on_hide_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnHideEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return kColorPicker__KColorPicker_NativeEvent((kColorPicker__KColorPicker*)self, qstring(eventType), message, result);
}

bool k_colorpicker__kcolorpicker_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return kColorPicker__KColorPicker_QBaseNativeEvent((kColorPicker__KColorPicker*)self, qstring(eventType), message, result);
}

void k_colorpicker__kcolorpicker_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    kColorPicker__KColorPicker_OnNativeEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

int32_t k_colorpicker__kcolorpicker_metric(void* self, int32_t param1) {
    return kColorPicker__KColorPicker_Metric((kColorPicker__KColorPicker*)self, param1);
}

int32_t k_colorpicker__kcolorpicker_qbase_metric(void* self, int32_t param1) {
    return kColorPicker__KColorPicker_QBaseMetric((kColorPicker__KColorPicker*)self, param1);
}

void k_colorpicker__kcolorpicker_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    kColorPicker__KColorPicker_OnMetric((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_init_painter(void* self, void* painter) {
    kColorPicker__KColorPicker_InitPainter((kColorPicker__KColorPicker*)self, (QPainter*)painter);
}

void k_colorpicker__kcolorpicker_qbase_init_painter(void* self, void* painter) {
    kColorPicker__KColorPicker_QBaseInitPainter((kColorPicker__KColorPicker*)self, (QPainter*)painter);
}

void k_colorpicker__kcolorpicker_on_init_painter(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnInitPainter((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

QPaintDevice* k_colorpicker__kcolorpicker_redirected(void* self, void* offset) {
    return kColorPicker__KColorPicker_Redirected((kColorPicker__KColorPicker*)self, (QPoint*)offset);
}

QPaintDevice* k_colorpicker__kcolorpicker_qbase_redirected(void* self, void* offset) {
    return kColorPicker__KColorPicker_QBaseRedirected((kColorPicker__KColorPicker*)self, (QPoint*)offset);
}

void k_colorpicker__kcolorpicker_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnRedirected((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

QPainter* k_colorpicker__kcolorpicker_shared_painter(void* self) {
    return kColorPicker__KColorPicker_SharedPainter((kColorPicker__KColorPicker*)self);
}

QPainter* k_colorpicker__kcolorpicker_qbase_shared_painter(void* self) {
    return kColorPicker__KColorPicker_QBaseSharedPainter((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_shared_painter(void* self, QPainter* (*callback)()) {
    kColorPicker__KColorPicker_OnSharedPainter((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_input_method_event(void* self, void* param1) {
    kColorPicker__KColorPicker_InputMethodEvent((kColorPicker__KColorPicker*)self, (QInputMethodEvent*)param1);
}

void k_colorpicker__kcolorpicker_qbase_input_method_event(void* self, void* param1) {
    kColorPicker__KColorPicker_QBaseInputMethodEvent((kColorPicker__KColorPicker*)self, (QInputMethodEvent*)param1);
}

void k_colorpicker__kcolorpicker_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnInputMethodEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

QVariant* k_colorpicker__kcolorpicker_input_method_query(void* self, int32_t param1) {
    return kColorPicker__KColorPicker_InputMethodQuery((kColorPicker__KColorPicker*)self, param1);
}

QVariant* k_colorpicker__kcolorpicker_qbase_input_method_query(void* self, int32_t param1) {
    return kColorPicker__KColorPicker_QBaseInputMethodQuery((kColorPicker__KColorPicker*)self, param1);
}

void k_colorpicker__kcolorpicker_on_input_method_query(void* self, QVariant* (*callback)(void*, int32_t)) {
    kColorPicker__KColorPicker_OnInputMethodQuery((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_focus_next_prev_child(void* self, bool next) {
    return kColorPicker__KColorPicker_FocusNextPrevChild((kColorPicker__KColorPicker*)self, next);
}

bool k_colorpicker__kcolorpicker_qbase_focus_next_prev_child(void* self, bool next) {
    return kColorPicker__KColorPicker_QBaseFocusNextPrevChild((kColorPicker__KColorPicker*)self, next);
}

void k_colorpicker__kcolorpicker_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    kColorPicker__KColorPicker_OnFocusNextPrevChild((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_event_filter(void* self, void* watched, void* event) {
    return kColorPicker__KColorPicker_EventFilter((kColorPicker__KColorPicker*)self, (QObject*)watched, (QEvent*)event);
}

bool k_colorpicker__kcolorpicker_qbase_event_filter(void* self, void* watched, void* event) {
    return kColorPicker__KColorPicker_QBaseEventFilter((kColorPicker__KColorPicker*)self, (QObject*)watched, (QEvent*)event);
}

void k_colorpicker__kcolorpicker_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    kColorPicker__KColorPicker_OnEventFilter((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_child_event(void* self, void* event) {
    kColorPicker__KColorPicker_ChildEvent((kColorPicker__KColorPicker*)self, (QChildEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_child_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseChildEvent((kColorPicker__KColorPicker*)self, (QChildEvent*)event);
}

void k_colorpicker__kcolorpicker_on_child_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnChildEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_custom_event(void* self, void* event) {
    kColorPicker__KColorPicker_CustomEvent((kColorPicker__KColorPicker*)self, (QEvent*)event);
}

void k_colorpicker__kcolorpicker_qbase_custom_event(void* self, void* event) {
    kColorPicker__KColorPicker_QBaseCustomEvent((kColorPicker__KColorPicker*)self, (QEvent*)event);
}

void k_colorpicker__kcolorpicker_on_custom_event(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnCustomEvent((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_connect_notify(void* self, void* signal) {
    kColorPicker__KColorPicker_ConnectNotify((kColorPicker__KColorPicker*)self, (QMetaMethod*)signal);
}

void k_colorpicker__kcolorpicker_qbase_connect_notify(void* self, void* signal) {
    kColorPicker__KColorPicker_QBaseConnectNotify((kColorPicker__KColorPicker*)self, (QMetaMethod*)signal);
}

void k_colorpicker__kcolorpicker_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnConnectNotify((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_disconnect_notify(void* self, void* signal) {
    kColorPicker__KColorPicker_DisconnectNotify((kColorPicker__KColorPicker*)self, (QMetaMethod*)signal);
}

void k_colorpicker__kcolorpicker_qbase_disconnect_notify(void* self, void* signal) {
    kColorPicker__KColorPicker_QBaseDisconnectNotify((kColorPicker__KColorPicker*)self, (QMetaMethod*)signal);
}

void k_colorpicker__kcolorpicker_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnDisconnectNotify((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_update_micro_focus(void* self) {
    kColorPicker__KColorPicker_UpdateMicroFocus((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_qbase_update_micro_focus(void* self) {
    kColorPicker__KColorPicker_QBaseUpdateMicroFocus((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_update_micro_focus(void* self, void (*callback)()) {
    kColorPicker__KColorPicker_OnUpdateMicroFocus((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_create(void* self) {
    kColorPicker__KColorPicker_Create((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_qbase_create(void* self) {
    kColorPicker__KColorPicker_QBaseCreate((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_create(void* self, void (*callback)()) {
    kColorPicker__KColorPicker_OnCreate((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_destroy(void* self) {
    kColorPicker__KColorPicker_Destroy((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_qbase_destroy(void* self) {
    kColorPicker__KColorPicker_QBaseDestroy((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_destroy(void* self, void (*callback)()) {
    kColorPicker__KColorPicker_OnDestroy((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_focus_next_child(void* self) {
    return kColorPicker__KColorPicker_FocusNextChild((kColorPicker__KColorPicker*)self);
}

bool k_colorpicker__kcolorpicker_qbase_focus_next_child(void* self) {
    return kColorPicker__KColorPicker_QBaseFocusNextChild((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_focus_next_child(void* self, bool (*callback)()) {
    kColorPicker__KColorPicker_OnFocusNextChild((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_focus_previous_child(void* self) {
    return kColorPicker__KColorPicker_FocusPreviousChild((kColorPicker__KColorPicker*)self);
}

bool k_colorpicker__kcolorpicker_qbase_focus_previous_child(void* self) {
    return kColorPicker__KColorPicker_QBaseFocusPreviousChild((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_focus_previous_child(void* self, bool (*callback)()) {
    kColorPicker__KColorPicker_OnFocusPreviousChild((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

QObject* k_colorpicker__kcolorpicker_sender(void* self) {
    return kColorPicker__KColorPicker_Sender((kColorPicker__KColorPicker*)self);
}

QObject* k_colorpicker__kcolorpicker_qbase_sender(void* self) {
    return kColorPicker__KColorPicker_QBaseSender((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_sender(void* self, QObject* (*callback)()) {
    kColorPicker__KColorPicker_OnSender((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

int32_t k_colorpicker__kcolorpicker_sender_signal_index(void* self) {
    return kColorPicker__KColorPicker_SenderSignalIndex((kColorPicker__KColorPicker*)self);
}

int32_t k_colorpicker__kcolorpicker_qbase_sender_signal_index(void* self) {
    return kColorPicker__KColorPicker_QBaseSenderSignalIndex((kColorPicker__KColorPicker*)self);
}

void k_colorpicker__kcolorpicker_on_sender_signal_index(void* self, int32_t (*callback)()) {
    kColorPicker__KColorPicker_OnSenderSignalIndex((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

int32_t k_colorpicker__kcolorpicker_receivers(void* self, const char* signal) {
    return kColorPicker__KColorPicker_Receivers((kColorPicker__KColorPicker*)self, signal);
}

int32_t k_colorpicker__kcolorpicker_qbase_receivers(void* self, const char* signal) {
    return kColorPicker__KColorPicker_QBaseReceivers((kColorPicker__KColorPicker*)self, signal);
}

void k_colorpicker__kcolorpicker_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    kColorPicker__KColorPicker_OnReceivers((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

bool k_colorpicker__kcolorpicker_is_signal_connected(void* self, void* signal) {
    return kColorPicker__KColorPicker_IsSignalConnected((kColorPicker__KColorPicker*)self, (QMetaMethod*)signal);
}

bool k_colorpicker__kcolorpicker_qbase_is_signal_connected(void* self, void* signal) {
    return kColorPicker__KColorPicker_QBaseIsSignalConnected((kColorPicker__KColorPicker*)self, (QMetaMethod*)signal);
}

void k_colorpicker__kcolorpicker_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    kColorPicker__KColorPicker_OnIsSignalConnected((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

double k_colorpicker__kcolorpicker_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return kColorPicker__KColorPicker_GetDecodedMetricF((kColorPicker__KColorPicker*)self, metricA, metricB);
}

double k_colorpicker__kcolorpicker_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return kColorPicker__KColorPicker_QBaseGetDecodedMetricF((kColorPicker__KColorPicker*)self, metricA, metricB);
}

void k_colorpicker__kcolorpicker_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    kColorPicker__KColorPicker_OnGetDecodedMetricF((kColorPicker__KColorPicker*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_colorpicker__kcolorpicker_delete(void* self) {
    kColorPicker__KColorPicker_Delete((kColorPicker__KColorPicker*)(self));
}
