#include "../libqabstractbutton.hpp"
#include "../libqevent.hpp"
#include "../libqcoreevent.hpp"
#include "../libqicon.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "../libqpaintdevice.hpp"
#include "../libqpaintengine.hpp"
#include "../libqpainter.hpp"
#include "../libqpoint.hpp"
#include "../libqpushbutton.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkiconbutton.hpp"
#include "libkiconbutton.h"

KIconButton* k_iconbutton_new(void* parent) {
    return KIconButton_new((QWidget*)parent);
}

KIconButton* k_iconbutton_new2() {
    return KIconButton_new2();
}

const QMetaObject* k_iconbutton_meta_object(void* self) {
    return KIconButton_MetaObject((KIconButton*)self);
}

void* k_iconbutton_metacast(void* self, const char* param1) {
    return KIconButton_Metacast((KIconButton*)self, param1);
}

int32_t k_iconbutton_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIconButton_Metacall((KIconButton*)self, param1, param2, param3);
}

void k_iconbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KIconButton_OnMetacall((KIconButton*)self, (intptr_t)callback);
}

int32_t k_iconbutton_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KIconButton_QBaseMetacall((KIconButton*)self, param1, param2, param3);
}

const char* k_iconbutton_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_strict_icon_size(void* self, bool b) {
    KIconButton_SetStrictIconSize((KIconButton*)self, b);
}

bool k_iconbutton_strict_icon_size(void* self) {
    return KIconButton_StrictIconSize((KIconButton*)self);
}

void k_iconbutton_set_icon_type(void* self, int32_t group, int32_t context) {
    KIconButton_SetIconType((KIconButton*)self, group, context);
}

void k_iconbutton_set_icon(void* self, const char* icon) {
    KIconButton_SetIcon((KIconButton*)self, qstring(icon));
}

void k_iconbutton_set_icon2(void* self, void* icon) {
    KIconButton_SetIcon2((KIconButton*)self, (QIcon*)icon);
}

void k_iconbutton_reset_icon(void* self) {
    KIconButton_ResetIcon((KIconButton*)self);
}

const char* k_iconbutton_icon(void* self) {
    libqt_string _str = KIconButton_Icon((KIconButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_icon_size(void* self, int size) {
    KIconButton_SetIconSize((KIconButton*)self, size);
}

int32_t k_iconbutton_icon_size(void* self) {
    return KIconButton_IconSize((KIconButton*)self);
}

void k_iconbutton_set_button_icon_size(void* self, int size) {
    KIconButton_SetButtonIconSize((KIconButton*)self, size);
}

int32_t k_iconbutton_button_icon_size(void* self) {
    return KIconButton_ButtonIconSize((KIconButton*)self);
}

void k_iconbutton_icon_changed(void* self, const char* icon) {
    KIconButton_IconChanged((KIconButton*)self, qstring(icon));
}

void k_iconbutton_on_icon_changed(void* self, void (*callback)(void*, const char*)) {
    KIconButton_Connect_IconChanged((KIconButton*)self, (intptr_t)callback);
}

const char* k_iconbutton_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_iconbutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_icon_type3(void* self, int32_t group, int32_t context, bool user) {
    KIconButton_SetIconType3((KIconButton*)self, group, context, user);
}

bool k_iconbutton_auto_default(void* self) {
    return QPushButton_AutoDefault((QPushButton*)self);
}

void k_iconbutton_set_auto_default(void* self, bool autoDefault) {
    QPushButton_SetAutoDefault((QPushButton*)self, autoDefault);
}

bool k_iconbutton_is_default(void* self) {
    return QPushButton_IsDefault((QPushButton*)self);
}

void k_iconbutton_set_default(void* self, bool defaultVal) {
    QPushButton_SetDefault((QPushButton*)self, defaultVal);
}

void k_iconbutton_set_menu(void* self, void* menu) {
    QPushButton_SetMenu((QPushButton*)self, (QMenu*)menu);
}

QMenu* k_iconbutton_menu(void* self) {
    return QPushButton_Menu((QPushButton*)self);
}

void k_iconbutton_set_flat(void* self, bool flat) {
    QPushButton_SetFlat((QPushButton*)self, flat);
}

bool k_iconbutton_is_flat(void* self) {
    return QPushButton_IsFlat((QPushButton*)self);
}

void k_iconbutton_show_menu(void* self) {
    QPushButton_ShowMenu((QPushButton*)self);
}

void k_iconbutton_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

const char* k_iconbutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

QKeySequence* k_iconbutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

void k_iconbutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

bool k_iconbutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

bool k_iconbutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

void k_iconbutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

bool k_iconbutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

void k_iconbutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

bool k_iconbutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

void k_iconbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

int32_t k_iconbutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

void k_iconbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

int32_t k_iconbutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

void k_iconbutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

bool k_iconbutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

QButtonGroup* k_iconbutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

void k_iconbutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

void k_iconbutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

void k_iconbutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

void k_iconbutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

void k_iconbutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

void k_iconbutton_on_pressed(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)callback);
}

void k_iconbutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

void k_iconbutton_on_released(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)callback);
}

void k_iconbutton_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

void k_iconbutton_on_clicked(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)callback);
}

void k_iconbutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

void k_iconbutton_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)callback);
}

void k_iconbutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

void k_iconbutton_on_clicked1(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)callback);
}

uintptr_t k_iconbutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_iconbutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_iconbutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_iconbutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_iconbutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_iconbutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_iconbutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_iconbutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_iconbutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_iconbutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_iconbutton_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_iconbutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_iconbutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_iconbutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_iconbutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_iconbutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_iconbutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_iconbutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_iconbutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_iconbutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_iconbutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_iconbutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_iconbutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_iconbutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_iconbutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_iconbutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_iconbutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_iconbutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_iconbutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_iconbutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_iconbutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_iconbutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_iconbutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_iconbutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_iconbutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_iconbutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_iconbutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_iconbutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_iconbutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_iconbutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_iconbutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_iconbutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_iconbutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_iconbutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_iconbutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_iconbutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_iconbutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_iconbutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_iconbutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_iconbutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_iconbutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_iconbutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_iconbutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_iconbutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_iconbutton_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_iconbutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_iconbutton_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_iconbutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_iconbutton_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_iconbutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_iconbutton_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_iconbutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_iconbutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_iconbutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_iconbutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_iconbutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_iconbutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_iconbutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_iconbutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_iconbutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_iconbutton_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_iconbutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_iconbutton_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_iconbutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_iconbutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_iconbutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_iconbutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_iconbutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_iconbutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_iconbutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_iconbutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_iconbutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_iconbutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_iconbutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_iconbutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_iconbutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_iconbutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_iconbutton_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_iconbutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_iconbutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_iconbutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_iconbutton_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_iconbutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_iconbutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_iconbutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_iconbutton_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void k_iconbutton_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void k_iconbutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_iconbutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_iconbutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_iconbutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_iconbutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_iconbutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_iconbutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_iconbutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_iconbutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_iconbutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_iconbutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_iconbutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_iconbutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_iconbutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_iconbutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_iconbutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_iconbutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_iconbutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_iconbutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_iconbutton_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_iconbutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_iconbutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_iconbutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_iconbutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_iconbutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_iconbutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_iconbutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_iconbutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_iconbutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_iconbutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_iconbutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_iconbutton_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_iconbutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_iconbutton_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_iconbutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_iconbutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_iconbutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_iconbutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_iconbutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_iconbutton_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_iconbutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_iconbutton_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_iconbutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_iconbutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_iconbutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_iconbutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_iconbutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_iconbutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_iconbutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_iconbutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_iconbutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_iconbutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_iconbutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_iconbutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_iconbutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_iconbutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_iconbutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_iconbutton_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_iconbutton_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_iconbutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_iconbutton_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_iconbutton_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_iconbutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_iconbutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_iconbutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_iconbutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_iconbutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_iconbutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_iconbutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_iconbutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_iconbutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_iconbutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_iconbutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_iconbutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_iconbutton_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_iconbutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_iconbutton_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_iconbutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_iconbutton_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_iconbutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_iconbutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_iconbutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_iconbutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_iconbutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_iconbutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_iconbutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_iconbutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_iconbutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_iconbutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_iconbutton_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_iconbutton_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_iconbutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_iconbutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_iconbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_iconbutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_iconbutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_iconbutton_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_iconbutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_iconbutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_iconbutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_iconbutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_iconbutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_iconbutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_iconbutton_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_iconbutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_iconbutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_iconbutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_iconbutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_iconbutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_iconbutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_iconbutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_iconbutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_iconbutton_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_iconbutton_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_iconbutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_iconbutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_iconbutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_iconbutton_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_iconbutton_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_iconbutton_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_iconbutton_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_iconbutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_iconbutton_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t k_iconbutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_iconbutton_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_iconbutton_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t k_iconbutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_iconbutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_iconbutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_iconbutton_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_iconbutton_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_iconbutton_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_iconbutton_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_iconbutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_iconbutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_iconbutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_iconbutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_iconbutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_iconbutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_iconbutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_iconbutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_iconbutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_iconbutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_iconbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_iconbutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_iconbutton_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_iconbutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_iconbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_iconbutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_iconbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_iconbutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_iconbutton_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_iconbutton_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_iconbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_iconbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_iconbutton_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_iconbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_iconbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_iconbutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_iconbutton_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t k_iconbutton_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_iconbutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_iconbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_iconbutton_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_iconbutton_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_iconbutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_iconbutton_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_iconbutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_iconbutton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_iconbutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_iconbutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_iconbutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_iconbutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_iconbutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_iconbutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_iconbutton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_iconbutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_iconbutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_iconbutton_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_iconbutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_iconbutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_iconbutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_iconbutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_iconbutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_iconbutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_iconbutton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_iconbutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_iconbutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_iconbutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_iconbutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_iconbutton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_iconbutton_dynamic_property_names");
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

QBindingStorage* k_iconbutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_iconbutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_iconbutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_iconbutton_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_iconbutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_iconbutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_iconbutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_iconbutton_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_iconbutton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_iconbutton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* k_iconbutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void k_iconbutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_iconbutton_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_iconbutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_iconbutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_iconbutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_iconbutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_iconbutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_iconbutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_iconbutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_iconbutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_iconbutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_iconbutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_iconbutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_iconbutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_iconbutton_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* k_iconbutton_size_hint(void* self) {
    return KIconButton_SizeHint((KIconButton*)self);
}

QSize* k_iconbutton_qbase_size_hint(void* self) {
    return KIconButton_QBaseSizeHint((KIconButton*)self);
}

void k_iconbutton_on_size_hint(void* self, QSize* (*callback)()) {
    KIconButton_OnSizeHint((KIconButton*)self, (intptr_t)callback);
}

QSize* k_iconbutton_minimum_size_hint(void* self) {
    return KIconButton_MinimumSizeHint((KIconButton*)self);
}

QSize* k_iconbutton_qbase_minimum_size_hint(void* self) {
    return KIconButton_QBaseMinimumSizeHint((KIconButton*)self);
}

void k_iconbutton_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KIconButton_OnMinimumSizeHint((KIconButton*)self, (intptr_t)callback);
}

bool k_iconbutton_event(void* self, void* e) {
    return KIconButton_Event((KIconButton*)self, (QEvent*)e);
}

bool k_iconbutton_qbase_event(void* self, void* e) {
    return KIconButton_QBaseEvent((KIconButton*)self, (QEvent*)e);
}

void k_iconbutton_on_event(void* self, bool (*callback)(void*, void*)) {
    KIconButton_OnEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_paint_event(void* self, void* param1) {
    KIconButton_PaintEvent((KIconButton*)self, (QPaintEvent*)param1);
}

void k_iconbutton_qbase_paint_event(void* self, void* param1) {
    KIconButton_QBasePaintEvent((KIconButton*)self, (QPaintEvent*)param1);
}

void k_iconbutton_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnPaintEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_key_press_event(void* self, void* param1) {
    KIconButton_KeyPressEvent((KIconButton*)self, (QKeyEvent*)param1);
}

void k_iconbutton_qbase_key_press_event(void* self, void* param1) {
    KIconButton_QBaseKeyPressEvent((KIconButton*)self, (QKeyEvent*)param1);
}

void k_iconbutton_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnKeyPressEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_focus_in_event(void* self, void* param1) {
    KIconButton_FocusInEvent((KIconButton*)self, (QFocusEvent*)param1);
}

void k_iconbutton_qbase_focus_in_event(void* self, void* param1) {
    KIconButton_QBaseFocusInEvent((KIconButton*)self, (QFocusEvent*)param1);
}

void k_iconbutton_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnFocusInEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_focus_out_event(void* self, void* param1) {
    KIconButton_FocusOutEvent((KIconButton*)self, (QFocusEvent*)param1);
}

void k_iconbutton_qbase_focus_out_event(void* self, void* param1) {
    KIconButton_QBaseFocusOutEvent((KIconButton*)self, (QFocusEvent*)param1);
}

void k_iconbutton_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnFocusOutEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_mouse_move_event(void* self, void* param1) {
    KIconButton_MouseMoveEvent((KIconButton*)self, (QMouseEvent*)param1);
}

void k_iconbutton_qbase_mouse_move_event(void* self, void* param1) {
    KIconButton_QBaseMouseMoveEvent((KIconButton*)self, (QMouseEvent*)param1);
}

void k_iconbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnMouseMoveEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_init_style_option(void* self, void* option) {
    KIconButton_InitStyleOption((KIconButton*)self, (QStyleOptionButton*)option);
}

void k_iconbutton_qbase_init_style_option(void* self, void* option) {
    KIconButton_QBaseInitStyleOption((KIconButton*)self, (QStyleOptionButton*)option);
}

void k_iconbutton_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnInitStyleOption((KIconButton*)self, (intptr_t)callback);
}

bool k_iconbutton_hit_button(void* self, void* pos) {
    return KIconButton_HitButton((KIconButton*)self, (QPoint*)pos);
}

bool k_iconbutton_qbase_hit_button(void* self, void* pos) {
    return KIconButton_QBaseHitButton((KIconButton*)self, (QPoint*)pos);
}

void k_iconbutton_on_hit_button(void* self, bool (*callback)(void*, void*)) {
    KIconButton_OnHitButton((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_check_state_set(void* self) {
    KIconButton_CheckStateSet((KIconButton*)self);
}

void k_iconbutton_qbase_check_state_set(void* self) {
    KIconButton_QBaseCheckStateSet((KIconButton*)self);
}

void k_iconbutton_on_check_state_set(void* self, void (*callback)()) {
    KIconButton_OnCheckStateSet((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_next_check_state(void* self) {
    KIconButton_NextCheckState((KIconButton*)self);
}

void k_iconbutton_qbase_next_check_state(void* self) {
    KIconButton_QBaseNextCheckState((KIconButton*)self);
}

void k_iconbutton_on_next_check_state(void* self, void (*callback)()) {
    KIconButton_OnNextCheckState((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_key_release_event(void* self, void* e) {
    KIconButton_KeyReleaseEvent((KIconButton*)self, (QKeyEvent*)e);
}

void k_iconbutton_qbase_key_release_event(void* self, void* e) {
    KIconButton_QBaseKeyReleaseEvent((KIconButton*)self, (QKeyEvent*)e);
}

void k_iconbutton_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnKeyReleaseEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_mouse_press_event(void* self, void* e) {
    KIconButton_MousePressEvent((KIconButton*)self, (QMouseEvent*)e);
}

void k_iconbutton_qbase_mouse_press_event(void* self, void* e) {
    KIconButton_QBaseMousePressEvent((KIconButton*)self, (QMouseEvent*)e);
}

void k_iconbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnMousePressEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_mouse_release_event(void* self, void* e) {
    KIconButton_MouseReleaseEvent((KIconButton*)self, (QMouseEvent*)e);
}

void k_iconbutton_qbase_mouse_release_event(void* self, void* e) {
    KIconButton_QBaseMouseReleaseEvent((KIconButton*)self, (QMouseEvent*)e);
}

void k_iconbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnMouseReleaseEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_change_event(void* self, void* e) {
    KIconButton_ChangeEvent((KIconButton*)self, (QEvent*)e);
}

void k_iconbutton_qbase_change_event(void* self, void* e) {
    KIconButton_QBaseChangeEvent((KIconButton*)self, (QEvent*)e);
}

void k_iconbutton_on_change_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnChangeEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_timer_event(void* self, void* e) {
    KIconButton_TimerEvent((KIconButton*)self, (QTimerEvent*)e);
}

void k_iconbutton_qbase_timer_event(void* self, void* e) {
    KIconButton_QBaseTimerEvent((KIconButton*)self, (QTimerEvent*)e);
}

void k_iconbutton_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnTimerEvent((KIconButton*)self, (intptr_t)callback);
}

int32_t k_iconbutton_dev_type(void* self) {
    return KIconButton_DevType((KIconButton*)self);
}

int32_t k_iconbutton_qbase_dev_type(void* self) {
    return KIconButton_QBaseDevType((KIconButton*)self);
}

void k_iconbutton_on_dev_type(void* self, int32_t (*callback)()) {
    KIconButton_OnDevType((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_set_visible(void* self, bool visible) {
    KIconButton_SetVisible((KIconButton*)self, visible);
}

void k_iconbutton_qbase_set_visible(void* self, bool visible) {
    KIconButton_QBaseSetVisible((KIconButton*)self, visible);
}

void k_iconbutton_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KIconButton_OnSetVisible((KIconButton*)self, (intptr_t)callback);
}

int32_t k_iconbutton_height_for_width(void* self, int param1) {
    return KIconButton_HeightForWidth((KIconButton*)self, param1);
}

int32_t k_iconbutton_qbase_height_for_width(void* self, int param1) {
    return KIconButton_QBaseHeightForWidth((KIconButton*)self, param1);
}

void k_iconbutton_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KIconButton_OnHeightForWidth((KIconButton*)self, (intptr_t)callback);
}

bool k_iconbutton_has_height_for_width(void* self) {
    return KIconButton_HasHeightForWidth((KIconButton*)self);
}

bool k_iconbutton_qbase_has_height_for_width(void* self) {
    return KIconButton_QBaseHasHeightForWidth((KIconButton*)self);
}

void k_iconbutton_on_has_height_for_width(void* self, bool (*callback)()) {
    KIconButton_OnHasHeightForWidth((KIconButton*)self, (intptr_t)callback);
}

QPaintEngine* k_iconbutton_paint_engine(void* self) {
    return KIconButton_PaintEngine((KIconButton*)self);
}

QPaintEngine* k_iconbutton_qbase_paint_engine(void* self) {
    return KIconButton_QBasePaintEngine((KIconButton*)self);
}

void k_iconbutton_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KIconButton_OnPaintEngine((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_mouse_double_click_event(void* self, void* event) {
    KIconButton_MouseDoubleClickEvent((KIconButton*)self, (QMouseEvent*)event);
}

void k_iconbutton_qbase_mouse_double_click_event(void* self, void* event) {
    KIconButton_QBaseMouseDoubleClickEvent((KIconButton*)self, (QMouseEvent*)event);
}

void k_iconbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnMouseDoubleClickEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_wheel_event(void* self, void* event) {
    KIconButton_WheelEvent((KIconButton*)self, (QWheelEvent*)event);
}

void k_iconbutton_qbase_wheel_event(void* self, void* event) {
    KIconButton_QBaseWheelEvent((KIconButton*)self, (QWheelEvent*)event);
}

void k_iconbutton_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnWheelEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_enter_event(void* self, void* event) {
    KIconButton_EnterEvent((KIconButton*)self, (QEnterEvent*)event);
}

void k_iconbutton_qbase_enter_event(void* self, void* event) {
    KIconButton_QBaseEnterEvent((KIconButton*)self, (QEnterEvent*)event);
}

void k_iconbutton_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnEnterEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_leave_event(void* self, void* event) {
    KIconButton_LeaveEvent((KIconButton*)self, (QEvent*)event);
}

void k_iconbutton_qbase_leave_event(void* self, void* event) {
    KIconButton_QBaseLeaveEvent((KIconButton*)self, (QEvent*)event);
}

void k_iconbutton_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnLeaveEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_move_event(void* self, void* event) {
    KIconButton_MoveEvent((KIconButton*)self, (QMoveEvent*)event);
}

void k_iconbutton_qbase_move_event(void* self, void* event) {
    KIconButton_QBaseMoveEvent((KIconButton*)self, (QMoveEvent*)event);
}

void k_iconbutton_on_move_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnMoveEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_resize_event(void* self, void* event) {
    KIconButton_ResizeEvent((KIconButton*)self, (QResizeEvent*)event);
}

void k_iconbutton_qbase_resize_event(void* self, void* event) {
    KIconButton_QBaseResizeEvent((KIconButton*)self, (QResizeEvent*)event);
}

void k_iconbutton_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnResizeEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_close_event(void* self, void* event) {
    KIconButton_CloseEvent((KIconButton*)self, (QCloseEvent*)event);
}

void k_iconbutton_qbase_close_event(void* self, void* event) {
    KIconButton_QBaseCloseEvent((KIconButton*)self, (QCloseEvent*)event);
}

void k_iconbutton_on_close_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnCloseEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_context_menu_event(void* self, void* event) {
    KIconButton_ContextMenuEvent((KIconButton*)self, (QContextMenuEvent*)event);
}

void k_iconbutton_qbase_context_menu_event(void* self, void* event) {
    KIconButton_QBaseContextMenuEvent((KIconButton*)self, (QContextMenuEvent*)event);
}

void k_iconbutton_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnContextMenuEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_tablet_event(void* self, void* event) {
    KIconButton_TabletEvent((KIconButton*)self, (QTabletEvent*)event);
}

void k_iconbutton_qbase_tablet_event(void* self, void* event) {
    KIconButton_QBaseTabletEvent((KIconButton*)self, (QTabletEvent*)event);
}

void k_iconbutton_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnTabletEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_action_event(void* self, void* event) {
    KIconButton_ActionEvent((KIconButton*)self, (QActionEvent*)event);
}

void k_iconbutton_qbase_action_event(void* self, void* event) {
    KIconButton_QBaseActionEvent((KIconButton*)self, (QActionEvent*)event);
}

void k_iconbutton_on_action_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnActionEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_drag_enter_event(void* self, void* event) {
    KIconButton_DragEnterEvent((KIconButton*)self, (QDragEnterEvent*)event);
}

void k_iconbutton_qbase_drag_enter_event(void* self, void* event) {
    KIconButton_QBaseDragEnterEvent((KIconButton*)self, (QDragEnterEvent*)event);
}

void k_iconbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnDragEnterEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_drag_move_event(void* self, void* event) {
    KIconButton_DragMoveEvent((KIconButton*)self, (QDragMoveEvent*)event);
}

void k_iconbutton_qbase_drag_move_event(void* self, void* event) {
    KIconButton_QBaseDragMoveEvent((KIconButton*)self, (QDragMoveEvent*)event);
}

void k_iconbutton_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnDragMoveEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_drag_leave_event(void* self, void* event) {
    KIconButton_DragLeaveEvent((KIconButton*)self, (QDragLeaveEvent*)event);
}

void k_iconbutton_qbase_drag_leave_event(void* self, void* event) {
    KIconButton_QBaseDragLeaveEvent((KIconButton*)self, (QDragLeaveEvent*)event);
}

void k_iconbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnDragLeaveEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_drop_event(void* self, void* event) {
    KIconButton_DropEvent((KIconButton*)self, (QDropEvent*)event);
}

void k_iconbutton_qbase_drop_event(void* self, void* event) {
    KIconButton_QBaseDropEvent((KIconButton*)self, (QDropEvent*)event);
}

void k_iconbutton_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnDropEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_show_event(void* self, void* event) {
    KIconButton_ShowEvent((KIconButton*)self, (QShowEvent*)event);
}

void k_iconbutton_qbase_show_event(void* self, void* event) {
    KIconButton_QBaseShowEvent((KIconButton*)self, (QShowEvent*)event);
}

void k_iconbutton_on_show_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnShowEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_hide_event(void* self, void* event) {
    KIconButton_HideEvent((KIconButton*)self, (QHideEvent*)event);
}

void k_iconbutton_qbase_hide_event(void* self, void* event) {
    KIconButton_QBaseHideEvent((KIconButton*)self, (QHideEvent*)event);
}

void k_iconbutton_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnHideEvent((KIconButton*)self, (intptr_t)callback);
}

bool k_iconbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KIconButton_NativeEvent((KIconButton*)self, qstring(eventType), message, result);
}

bool k_iconbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KIconButton_QBaseNativeEvent((KIconButton*)self, qstring(eventType), message, result);
}

void k_iconbutton_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KIconButton_OnNativeEvent((KIconButton*)self, (intptr_t)callback);
}

int32_t k_iconbutton_metric(void* self, int32_t param1) {
    return KIconButton_Metric((KIconButton*)self, param1);
}

int32_t k_iconbutton_qbase_metric(void* self, int32_t param1) {
    return KIconButton_QBaseMetric((KIconButton*)self, param1);
}

void k_iconbutton_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KIconButton_OnMetric((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_init_painter(void* self, void* painter) {
    KIconButton_InitPainter((KIconButton*)self, (QPainter*)painter);
}

void k_iconbutton_qbase_init_painter(void* self, void* painter) {
    KIconButton_QBaseInitPainter((KIconButton*)self, (QPainter*)painter);
}

void k_iconbutton_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnInitPainter((KIconButton*)self, (intptr_t)callback);
}

QPaintDevice* k_iconbutton_redirected(void* self, void* offset) {
    return KIconButton_Redirected((KIconButton*)self, (QPoint*)offset);
}

QPaintDevice* k_iconbutton_qbase_redirected(void* self, void* offset) {
    return KIconButton_QBaseRedirected((KIconButton*)self, (QPoint*)offset);
}

void k_iconbutton_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KIconButton_OnRedirected((KIconButton*)self, (intptr_t)callback);
}

QPainter* k_iconbutton_shared_painter(void* self) {
    return KIconButton_SharedPainter((KIconButton*)self);
}

QPainter* k_iconbutton_qbase_shared_painter(void* self) {
    return KIconButton_QBaseSharedPainter((KIconButton*)self);
}

void k_iconbutton_on_shared_painter(void* self, QPainter* (*callback)()) {
    KIconButton_OnSharedPainter((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_input_method_event(void* self, void* param1) {
    KIconButton_InputMethodEvent((KIconButton*)self, (QInputMethodEvent*)param1);
}

void k_iconbutton_qbase_input_method_event(void* self, void* param1) {
    KIconButton_QBaseInputMethodEvent((KIconButton*)self, (QInputMethodEvent*)param1);
}

void k_iconbutton_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnInputMethodEvent((KIconButton*)self, (intptr_t)callback);
}

QVariant* k_iconbutton_input_method_query(void* self, int64_t param1) {
    return KIconButton_InputMethodQuery((KIconButton*)self, param1);
}

QVariant* k_iconbutton_qbase_input_method_query(void* self, int64_t param1) {
    return KIconButton_QBaseInputMethodQuery((KIconButton*)self, param1);
}

void k_iconbutton_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KIconButton_OnInputMethodQuery((KIconButton*)self, (intptr_t)callback);
}

bool k_iconbutton_focus_next_prev_child(void* self, bool next) {
    return KIconButton_FocusNextPrevChild((KIconButton*)self, next);
}

bool k_iconbutton_qbase_focus_next_prev_child(void* self, bool next) {
    return KIconButton_QBaseFocusNextPrevChild((KIconButton*)self, next);
}

void k_iconbutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KIconButton_OnFocusNextPrevChild((KIconButton*)self, (intptr_t)callback);
}

bool k_iconbutton_event_filter(void* self, void* watched, void* event) {
    return KIconButton_EventFilter((KIconButton*)self, (QObject*)watched, (QEvent*)event);
}

bool k_iconbutton_qbase_event_filter(void* self, void* watched, void* event) {
    return KIconButton_QBaseEventFilter((KIconButton*)self, (QObject*)watched, (QEvent*)event);
}

void k_iconbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KIconButton_OnEventFilter((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_child_event(void* self, void* event) {
    KIconButton_ChildEvent((KIconButton*)self, (QChildEvent*)event);
}

void k_iconbutton_qbase_child_event(void* self, void* event) {
    KIconButton_QBaseChildEvent((KIconButton*)self, (QChildEvent*)event);
}

void k_iconbutton_on_child_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnChildEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_custom_event(void* self, void* event) {
    KIconButton_CustomEvent((KIconButton*)self, (QEvent*)event);
}

void k_iconbutton_qbase_custom_event(void* self, void* event) {
    KIconButton_QBaseCustomEvent((KIconButton*)self, (QEvent*)event);
}

void k_iconbutton_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnCustomEvent((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_connect_notify(void* self, void* signal) {
    KIconButton_ConnectNotify((KIconButton*)self, (QMetaMethod*)signal);
}

void k_iconbutton_qbase_connect_notify(void* self, void* signal) {
    KIconButton_QBaseConnectNotify((KIconButton*)self, (QMetaMethod*)signal);
}

void k_iconbutton_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnConnectNotify((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_disconnect_notify(void* self, void* signal) {
    KIconButton_DisconnectNotify((KIconButton*)self, (QMetaMethod*)signal);
}

void k_iconbutton_qbase_disconnect_notify(void* self, void* signal) {
    KIconButton_QBaseDisconnectNotify((KIconButton*)self, (QMetaMethod*)signal);
}

void k_iconbutton_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KIconButton_OnDisconnectNotify((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_update_micro_focus(void* self) {
    KIconButton_UpdateMicroFocus((KIconButton*)self);
}

void k_iconbutton_qbase_update_micro_focus(void* self) {
    KIconButton_QBaseUpdateMicroFocus((KIconButton*)self);
}

void k_iconbutton_on_update_micro_focus(void* self, void (*callback)()) {
    KIconButton_OnUpdateMicroFocus((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_create(void* self) {
    KIconButton_Create((KIconButton*)self);
}

void k_iconbutton_qbase_create(void* self) {
    KIconButton_QBaseCreate((KIconButton*)self);
}

void k_iconbutton_on_create(void* self, void (*callback)()) {
    KIconButton_OnCreate((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_destroy(void* self) {
    KIconButton_Destroy((KIconButton*)self);
}

void k_iconbutton_qbase_destroy(void* self) {
    KIconButton_QBaseDestroy((KIconButton*)self);
}

void k_iconbutton_on_destroy(void* self, void (*callback)()) {
    KIconButton_OnDestroy((KIconButton*)self, (intptr_t)callback);
}

bool k_iconbutton_focus_next_child(void* self) {
    return KIconButton_FocusNextChild((KIconButton*)self);
}

bool k_iconbutton_qbase_focus_next_child(void* self) {
    return KIconButton_QBaseFocusNextChild((KIconButton*)self);
}

void k_iconbutton_on_focus_next_child(void* self, bool (*callback)()) {
    KIconButton_OnFocusNextChild((KIconButton*)self, (intptr_t)callback);
}

bool k_iconbutton_focus_previous_child(void* self) {
    return KIconButton_FocusPreviousChild((KIconButton*)self);
}

bool k_iconbutton_qbase_focus_previous_child(void* self) {
    return KIconButton_QBaseFocusPreviousChild((KIconButton*)self);
}

void k_iconbutton_on_focus_previous_child(void* self, bool (*callback)()) {
    KIconButton_OnFocusPreviousChild((KIconButton*)self, (intptr_t)callback);
}

QObject* k_iconbutton_sender(void* self) {
    return KIconButton_Sender((KIconButton*)self);
}

QObject* k_iconbutton_qbase_sender(void* self) {
    return KIconButton_QBaseSender((KIconButton*)self);
}

void k_iconbutton_on_sender(void* self, QObject* (*callback)()) {
    KIconButton_OnSender((KIconButton*)self, (intptr_t)callback);
}

int32_t k_iconbutton_sender_signal_index(void* self) {
    return KIconButton_SenderSignalIndex((KIconButton*)self);
}

int32_t k_iconbutton_qbase_sender_signal_index(void* self) {
    return KIconButton_QBaseSenderSignalIndex((KIconButton*)self);
}

void k_iconbutton_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KIconButton_OnSenderSignalIndex((KIconButton*)self, (intptr_t)callback);
}

int32_t k_iconbutton_receivers(void* self, const char* signal) {
    return KIconButton_Receivers((KIconButton*)self, signal);
}

int32_t k_iconbutton_qbase_receivers(void* self, const char* signal) {
    return KIconButton_QBaseReceivers((KIconButton*)self, signal);
}

void k_iconbutton_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KIconButton_OnReceivers((KIconButton*)self, (intptr_t)callback);
}

bool k_iconbutton_is_signal_connected(void* self, void* signal) {
    return KIconButton_IsSignalConnected((KIconButton*)self, (QMetaMethod*)signal);
}

bool k_iconbutton_qbase_is_signal_connected(void* self, void* signal) {
    return KIconButton_QBaseIsSignalConnected((KIconButton*)self, (QMetaMethod*)signal);
}

void k_iconbutton_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KIconButton_OnIsSignalConnected((KIconButton*)self, (intptr_t)callback);
}

double k_iconbutton_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KIconButton_GetDecodedMetricF((KIconButton*)self, metricA, metricB);
}

double k_iconbutton_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KIconButton_QBaseGetDecodedMetricF((KIconButton*)self, metricA, metricB);
}

void k_iconbutton_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KIconButton_OnGetDecodedMetricF((KIconButton*)self, (intptr_t)callback);
}

void k_iconbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_iconbutton_delete(void* self) {
    KIconButton_Delete((KIconButton*)(self));
}
