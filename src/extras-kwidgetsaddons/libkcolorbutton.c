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
#include "../libqpushbutton.hpp"
#include "../libqsize.hpp"
#include "../libqstyleoption.hpp"
#include "../libqvariant.hpp"
#include "../libqwidget.hpp"
#include "libkcolorbutton.hpp"
#include "libkcolorbutton.h"

KColorButton* k_colorbutton_new(void* parent) {
    return KColorButton_new((QWidget*)parent);
}

KColorButton* k_colorbutton_new2() {
    return KColorButton_new2();
}

KColorButton* k_colorbutton_new3(void* c) {
    return KColorButton_new3((QColor*)c);
}

KColorButton* k_colorbutton_new4(void* c, void* defaultColor) {
    return KColorButton_new4((QColor*)c, (QColor*)defaultColor);
}

KColorButton* k_colorbutton_new5(void* c, void* parent) {
    return KColorButton_new5((QColor*)c, (QWidget*)parent);
}

KColorButton* k_colorbutton_new6(void* c, void* defaultColor, void* parent) {
    return KColorButton_new6((QColor*)c, (QColor*)defaultColor, (QWidget*)parent);
}

const QMetaObject* k_colorbutton_meta_object(void* self) {
    return KColorButton_MetaObject((KColorButton*)self);
}

void* k_colorbutton_metacast(void* self, const char* param1) {
    return KColorButton_Metacast((KColorButton*)self, param1);
}

int32_t k_colorbutton_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorButton_Metacall((KColorButton*)self, param1, param2, param3);
}

void k_colorbutton_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    KColorButton_OnMetacall((KColorButton*)self, (intptr_t)callback);
}

int32_t k_colorbutton_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return KColorButton_QBaseMetacall((KColorButton*)self, param1, param2, param3);
}

const char* k_colorbutton_tr(const char* s) {
    libqt_string _str = KColorButton_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QColor* k_colorbutton_color(void* self) {
    return KColorButton_Color((KColorButton*)self);
}

void k_colorbutton_set_color(void* self, void* c) {
    KColorButton_SetColor((KColorButton*)self, (QColor*)c);
}

void k_colorbutton_set_alpha_channel_enabled(void* self, bool alpha) {
    KColorButton_SetAlphaChannelEnabled((KColorButton*)self, alpha);
}

bool k_colorbutton_is_alpha_channel_enabled(void* self) {
    return KColorButton_IsAlphaChannelEnabled((KColorButton*)self);
}

QColor* k_colorbutton_default_color(void* self) {
    return KColorButton_DefaultColor((KColorButton*)self);
}

void k_colorbutton_set_default_color(void* self, void* c) {
    KColorButton_SetDefaultColor((KColorButton*)self, (QColor*)c);
}

QSize* k_colorbutton_size_hint(void* self) {
    return KColorButton_SizeHint((KColorButton*)self);
}

void k_colorbutton_on_size_hint(void* self, QSize* (*callback)()) {
    KColorButton_OnSizeHint((KColorButton*)self, (intptr_t)callback);
}

QSize* k_colorbutton_qbase_size_hint(void* self) {
    return KColorButton_QBaseSizeHint((KColorButton*)self);
}

QSize* k_colorbutton_minimum_size_hint(void* self) {
    return KColorButton_MinimumSizeHint((KColorButton*)self);
}

void k_colorbutton_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    KColorButton_OnMinimumSizeHint((KColorButton*)self, (intptr_t)callback);
}

QSize* k_colorbutton_qbase_minimum_size_hint(void* self) {
    return KColorButton_QBaseMinimumSizeHint((KColorButton*)self);
}

void k_colorbutton_changed(void* self, void* newColor) {
    KColorButton_Changed((KColorButton*)self, (QColor*)newColor);
}

void k_colorbutton_on_changed(void* self, void (*callback)(void*, void*)) {
    KColorButton_Connect_Changed((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_paint_event(void* self, void* pe) {
    KColorButton_PaintEvent((KColorButton*)self, (QPaintEvent*)pe);
}

void k_colorbutton_on_paint_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnPaintEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_qbase_paint_event(void* self, void* pe) {
    KColorButton_QBasePaintEvent((KColorButton*)self, (QPaintEvent*)pe);
}

void k_colorbutton_drag_enter_event(void* self, void* param1) {
    KColorButton_DragEnterEvent((KColorButton*)self, (QDragEnterEvent*)param1);
}

void k_colorbutton_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnDragEnterEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_qbase_drag_enter_event(void* self, void* param1) {
    KColorButton_QBaseDragEnterEvent((KColorButton*)self, (QDragEnterEvent*)param1);
}

void k_colorbutton_drop_event(void* self, void* param1) {
    KColorButton_DropEvent((KColorButton*)self, (QDropEvent*)param1);
}

void k_colorbutton_on_drop_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnDropEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_qbase_drop_event(void* self, void* param1) {
    KColorButton_QBaseDropEvent((KColorButton*)self, (QDropEvent*)param1);
}

void k_colorbutton_mouse_press_event(void* self, void* e) {
    KColorButton_MousePressEvent((KColorButton*)self, (QMouseEvent*)e);
}

void k_colorbutton_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnMousePressEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_qbase_mouse_press_event(void* self, void* e) {
    KColorButton_QBaseMousePressEvent((KColorButton*)self, (QMouseEvent*)e);
}

void k_colorbutton_mouse_move_event(void* self, void* e) {
    KColorButton_MouseMoveEvent((KColorButton*)self, (QMouseEvent*)e);
}

void k_colorbutton_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnMouseMoveEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_qbase_mouse_move_event(void* self, void* e) {
    KColorButton_QBaseMouseMoveEvent((KColorButton*)self, (QMouseEvent*)e);
}

void k_colorbutton_key_press_event(void* self, void* e) {
    KColorButton_KeyPressEvent((KColorButton*)self, (QKeyEvent*)e);
}

void k_colorbutton_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnKeyPressEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_qbase_key_press_event(void* self, void* e) {
    KColorButton_QBaseKeyPressEvent((KColorButton*)self, (QKeyEvent*)e);
}

const char* k_colorbutton_tr2(const char* s, const char* c) {
    libqt_string _str = KColorButton_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorbutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = KColorButton_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_colorbutton_auto_default(void* self) {
    return QPushButton_AutoDefault((QPushButton*)self);
}

void k_colorbutton_set_auto_default(void* self, bool autoDefault) {
    QPushButton_SetAutoDefault((QPushButton*)self, autoDefault);
}

bool k_colorbutton_is_default(void* self) {
    return QPushButton_IsDefault((QPushButton*)self);
}

void k_colorbutton_set_default(void* self, bool defaultVal) {
    QPushButton_SetDefault((QPushButton*)self, defaultVal);
}

void k_colorbutton_set_menu(void* self, void* menu) {
    QPushButton_SetMenu((QPushButton*)self, (QMenu*)menu);
}

QMenu* k_colorbutton_menu(void* self) {
    return QPushButton_Menu((QPushButton*)self);
}

void k_colorbutton_set_flat(void* self, bool flat) {
    QPushButton_SetFlat((QPushButton*)self, flat);
}

bool k_colorbutton_is_flat(void* self) {
    return QPushButton_IsFlat((QPushButton*)self);
}

void k_colorbutton_show_menu(void* self) {
    QPushButton_ShowMenu((QPushButton*)self);
}

void k_colorbutton_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

const char* k_colorbutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

QIcon* k_colorbutton_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

QSize* k_colorbutton_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

void k_colorbutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

QKeySequence* k_colorbutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

void k_colorbutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

bool k_colorbutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

bool k_colorbutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

void k_colorbutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

bool k_colorbutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

void k_colorbutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

bool k_colorbutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

void k_colorbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

int32_t k_colorbutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

void k_colorbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

int32_t k_colorbutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

void k_colorbutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

bool k_colorbutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

QButtonGroup* k_colorbutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

void k_colorbutton_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

void k_colorbutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

void k_colorbutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

void k_colorbutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

void k_colorbutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

void k_colorbutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

void k_colorbutton_on_pressed(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)callback);
}

void k_colorbutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

void k_colorbutton_on_released(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)callback);
}

void k_colorbutton_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

void k_colorbutton_on_clicked(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)callback);
}

void k_colorbutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

void k_colorbutton_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)callback);
}

void k_colorbutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

void k_colorbutton_on_clicked1(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)callback);
}

uintptr_t k_colorbutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void k_colorbutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t k_colorbutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t k_colorbutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* k_colorbutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void k_colorbutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool k_colorbutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool k_colorbutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool k_colorbutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t k_colorbutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void k_colorbutton_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool k_colorbutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool k_colorbutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void k_colorbutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void k_colorbutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void k_colorbutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* k_colorbutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* k_colorbutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* k_colorbutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t k_colorbutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t k_colorbutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* k_colorbutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* k_colorbutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* k_colorbutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t k_colorbutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t k_colorbutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* k_colorbutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* k_colorbutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* k_colorbutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* k_colorbutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* k_colorbutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t k_colorbutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t k_colorbutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t k_colorbutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t k_colorbutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void k_colorbutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void k_colorbutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void k_colorbutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void k_colorbutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void k_colorbutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void k_colorbutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void k_colorbutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void k_colorbutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* k_colorbutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void k_colorbutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void k_colorbutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* k_colorbutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void k_colorbutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void k_colorbutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void k_colorbutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void k_colorbutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void k_colorbutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void k_colorbutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* k_colorbutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorbutton_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorbutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorbutton_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorbutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorbutton_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorbutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* k_colorbutton_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* k_colorbutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_colorbutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* k_colorbutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* k_colorbutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* k_colorbutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* k_colorbutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* k_colorbutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* k_colorbutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void k_colorbutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void k_colorbutton_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t k_colorbutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void k_colorbutton_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t k_colorbutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* k_colorbutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void k_colorbutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* k_colorbutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* k_colorbutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* k_colorbutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void k_colorbutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void k_colorbutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void k_colorbutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool k_colorbutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool k_colorbutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void k_colorbutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool k_colorbutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void k_colorbutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void k_colorbutton_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* k_colorbutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void k_colorbutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void k_colorbutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void k_colorbutton_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* k_colorbutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* k_colorbutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void k_colorbutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void k_colorbutton_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void k_colorbutton_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void k_colorbutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void k_colorbutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* k_colorbutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorbutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* k_colorbutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void k_colorbutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* k_colorbutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* k_colorbutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* k_colorbutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double k_colorbutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool k_colorbutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void k_colorbutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* k_colorbutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t k_colorbutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void k_colorbutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* k_colorbutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* k_colorbutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_colorbutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* k_colorbutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void k_colorbutton_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t k_colorbutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void k_colorbutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void k_colorbutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* k_colorbutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void k_colorbutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool k_colorbutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool k_colorbutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void k_colorbutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool k_colorbutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void k_colorbutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void k_colorbutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void k_colorbutton_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t k_colorbutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void k_colorbutton_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool k_colorbutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void k_colorbutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void k_colorbutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* k_colorbutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t k_colorbutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void k_colorbutton_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void k_colorbutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void k_colorbutton_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void k_colorbutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void k_colorbutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void k_colorbutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t k_colorbutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void k_colorbutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void k_colorbutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void k_colorbutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* k_colorbutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* k_colorbutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool k_colorbutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void k_colorbutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* k_colorbutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void k_colorbutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void k_colorbutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void k_colorbutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void k_colorbutton_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void k_colorbutton_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void k_colorbutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void k_colorbutton_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void k_colorbutton_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void k_colorbutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void k_colorbutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void k_colorbutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void k_colorbutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void k_colorbutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void k_colorbutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void k_colorbutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool k_colorbutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void k_colorbutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void k_colorbutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void k_colorbutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void k_colorbutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void k_colorbutton_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void k_colorbutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void k_colorbutton_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void k_colorbutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void k_colorbutton_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* k_colorbutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool k_colorbutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void k_colorbutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool k_colorbutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool k_colorbutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool k_colorbutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool k_colorbutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool k_colorbutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool k_colorbutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t k_colorbutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void k_colorbutton_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void k_colorbutton_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* k_colorbutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void k_colorbutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void k_colorbutton_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* k_colorbutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void k_colorbutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void k_colorbutton_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* k_colorbutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* k_colorbutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* k_colorbutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void k_colorbutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void k_colorbutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void k_colorbutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void k_colorbutton_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void k_colorbutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void k_colorbutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* k_colorbutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* k_colorbutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* k_colorbutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool k_colorbutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void k_colorbutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void k_colorbutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void k_colorbutton_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void k_colorbutton_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void k_colorbutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void k_colorbutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ k_colorbutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* k_colorbutton_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* k_colorbutton_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* k_colorbutton_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* k_colorbutton_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* k_colorbutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void k_colorbutton_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t k_colorbutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void k_colorbutton_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void k_colorbutton_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t k_colorbutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* k_colorbutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* k_colorbutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* k_colorbutton_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* k_colorbutton_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void k_colorbutton_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool k_colorbutton_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void k_colorbutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool k_colorbutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool k_colorbutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void k_colorbutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* k_colorbutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* k_colorbutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* k_colorbutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void k_colorbutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* k_colorbutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void k_colorbutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void k_colorbutton_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void k_colorbutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void k_colorbutton_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void k_colorbutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void k_colorbutton_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void k_colorbutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void k_colorbutton_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t k_colorbutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void k_colorbutton_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void k_colorbutton_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void k_colorbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_colorbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void k_colorbutton_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void k_colorbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void k_colorbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* k_colorbutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void k_colorbutton_grab_gesture2(void* self, int64_t typeVal, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t k_colorbutton_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void k_colorbutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void k_colorbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void k_colorbutton_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void k_colorbutton_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* k_colorbutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* k_colorbutton_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* k_colorbutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_colorbutton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool k_colorbutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool k_colorbutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool k_colorbutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool k_colorbutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool k_colorbutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* k_colorbutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool k_colorbutton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t k_colorbutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void k_colorbutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void k_colorbutton_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ k_colorbutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void k_colorbutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void k_colorbutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* k_colorbutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* k_colorbutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool k_colorbutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool k_colorbutton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void k_colorbutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void k_colorbutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool k_colorbutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* k_colorbutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** k_colorbutton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in k_colorbutton_dynamic_property_names");
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

QBindingStorage* k_colorbutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* k_colorbutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void k_colorbutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void k_colorbutton_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* k_colorbutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool k_colorbutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void k_colorbutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool k_colorbutton_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t k_colorbutton_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* k_colorbutton_connect5(void* sender, void* signal, void* receiver, void* method, int32_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* k_colorbutton_connect4(void* self, void* sender, const char* signal, const char* member, int32_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void k_colorbutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void k_colorbutton_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool k_colorbutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t k_colorbutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t k_colorbutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t k_colorbutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t k_colorbutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t k_colorbutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t k_colorbutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double k_colorbutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double k_colorbutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t k_colorbutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t k_colorbutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double k_colorbutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t k_colorbutton_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

bool k_colorbutton_event(void* self, void* e) {
    return KColorButton_Event((KColorButton*)self, (QEvent*)e);
}

bool k_colorbutton_qbase_event(void* self, void* e) {
    return KColorButton_QBaseEvent((KColorButton*)self, (QEvent*)e);
}

void k_colorbutton_on_event(void* self, bool (*callback)(void*, void*)) {
    KColorButton_OnEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_focus_in_event(void* self, void* param1) {
    KColorButton_FocusInEvent((KColorButton*)self, (QFocusEvent*)param1);
}

void k_colorbutton_qbase_focus_in_event(void* self, void* param1) {
    KColorButton_QBaseFocusInEvent((KColorButton*)self, (QFocusEvent*)param1);
}

void k_colorbutton_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnFocusInEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_focus_out_event(void* self, void* param1) {
    KColorButton_FocusOutEvent((KColorButton*)self, (QFocusEvent*)param1);
}

void k_colorbutton_qbase_focus_out_event(void* self, void* param1) {
    KColorButton_QBaseFocusOutEvent((KColorButton*)self, (QFocusEvent*)param1);
}

void k_colorbutton_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnFocusOutEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_init_style_option(void* self, void* option) {
    KColorButton_InitStyleOption((KColorButton*)self, (QStyleOptionButton*)option);
}

void k_colorbutton_qbase_init_style_option(void* self, void* option) {
    KColorButton_QBaseInitStyleOption((KColorButton*)self, (QStyleOptionButton*)option);
}

void k_colorbutton_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnInitStyleOption((KColorButton*)self, (intptr_t)callback);
}

bool k_colorbutton_hit_button(void* self, void* pos) {
    return KColorButton_HitButton((KColorButton*)self, (QPoint*)pos);
}

bool k_colorbutton_qbase_hit_button(void* self, void* pos) {
    return KColorButton_QBaseHitButton((KColorButton*)self, (QPoint*)pos);
}

void k_colorbutton_on_hit_button(void* self, bool (*callback)(void*, void*)) {
    KColorButton_OnHitButton((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_check_state_set(void* self) {
    KColorButton_CheckStateSet((KColorButton*)self);
}

void k_colorbutton_qbase_check_state_set(void* self) {
    KColorButton_QBaseCheckStateSet((KColorButton*)self);
}

void k_colorbutton_on_check_state_set(void* self, void (*callback)()) {
    KColorButton_OnCheckStateSet((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_next_check_state(void* self) {
    KColorButton_NextCheckState((KColorButton*)self);
}

void k_colorbutton_qbase_next_check_state(void* self) {
    KColorButton_QBaseNextCheckState((KColorButton*)self);
}

void k_colorbutton_on_next_check_state(void* self, void (*callback)()) {
    KColorButton_OnNextCheckState((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_key_release_event(void* self, void* e) {
    KColorButton_KeyReleaseEvent((KColorButton*)self, (QKeyEvent*)e);
}

void k_colorbutton_qbase_key_release_event(void* self, void* e) {
    KColorButton_QBaseKeyReleaseEvent((KColorButton*)self, (QKeyEvent*)e);
}

void k_colorbutton_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnKeyReleaseEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_mouse_release_event(void* self, void* e) {
    KColorButton_MouseReleaseEvent((KColorButton*)self, (QMouseEvent*)e);
}

void k_colorbutton_qbase_mouse_release_event(void* self, void* e) {
    KColorButton_QBaseMouseReleaseEvent((KColorButton*)self, (QMouseEvent*)e);
}

void k_colorbutton_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnMouseReleaseEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_change_event(void* self, void* e) {
    KColorButton_ChangeEvent((KColorButton*)self, (QEvent*)e);
}

void k_colorbutton_qbase_change_event(void* self, void* e) {
    KColorButton_QBaseChangeEvent((KColorButton*)self, (QEvent*)e);
}

void k_colorbutton_on_change_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnChangeEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_timer_event(void* self, void* e) {
    KColorButton_TimerEvent((KColorButton*)self, (QTimerEvent*)e);
}

void k_colorbutton_qbase_timer_event(void* self, void* e) {
    KColorButton_QBaseTimerEvent((KColorButton*)self, (QTimerEvent*)e);
}

void k_colorbutton_on_timer_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnTimerEvent((KColorButton*)self, (intptr_t)callback);
}

int32_t k_colorbutton_dev_type(void* self) {
    return KColorButton_DevType((KColorButton*)self);
}

int32_t k_colorbutton_qbase_dev_type(void* self) {
    return KColorButton_QBaseDevType((KColorButton*)self);
}

void k_colorbutton_on_dev_type(void* self, int32_t (*callback)()) {
    KColorButton_OnDevType((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_set_visible(void* self, bool visible) {
    KColorButton_SetVisible((KColorButton*)self, visible);
}

void k_colorbutton_qbase_set_visible(void* self, bool visible) {
    KColorButton_QBaseSetVisible((KColorButton*)self, visible);
}

void k_colorbutton_on_set_visible(void* self, void (*callback)(void*, bool)) {
    KColorButton_OnSetVisible((KColorButton*)self, (intptr_t)callback);
}

int32_t k_colorbutton_height_for_width(void* self, int param1) {
    return KColorButton_HeightForWidth((KColorButton*)self, param1);
}

int32_t k_colorbutton_qbase_height_for_width(void* self, int param1) {
    return KColorButton_QBaseHeightForWidth((KColorButton*)self, param1);
}

void k_colorbutton_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    KColorButton_OnHeightForWidth((KColorButton*)self, (intptr_t)callback);
}

bool k_colorbutton_has_height_for_width(void* self) {
    return KColorButton_HasHeightForWidth((KColorButton*)self);
}

bool k_colorbutton_qbase_has_height_for_width(void* self) {
    return KColorButton_QBaseHasHeightForWidth((KColorButton*)self);
}

void k_colorbutton_on_has_height_for_width(void* self, bool (*callback)()) {
    KColorButton_OnHasHeightForWidth((KColorButton*)self, (intptr_t)callback);
}

QPaintEngine* k_colorbutton_paint_engine(void* self) {
    return KColorButton_PaintEngine((KColorButton*)self);
}

QPaintEngine* k_colorbutton_qbase_paint_engine(void* self) {
    return KColorButton_QBasePaintEngine((KColorButton*)self);
}

void k_colorbutton_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    KColorButton_OnPaintEngine((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_mouse_double_click_event(void* self, void* event) {
    KColorButton_MouseDoubleClickEvent((KColorButton*)self, (QMouseEvent*)event);
}

void k_colorbutton_qbase_mouse_double_click_event(void* self, void* event) {
    KColorButton_QBaseMouseDoubleClickEvent((KColorButton*)self, (QMouseEvent*)event);
}

void k_colorbutton_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnMouseDoubleClickEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_wheel_event(void* self, void* event) {
    KColorButton_WheelEvent((KColorButton*)self, (QWheelEvent*)event);
}

void k_colorbutton_qbase_wheel_event(void* self, void* event) {
    KColorButton_QBaseWheelEvent((KColorButton*)self, (QWheelEvent*)event);
}

void k_colorbutton_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnWheelEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_enter_event(void* self, void* event) {
    KColorButton_EnterEvent((KColorButton*)self, (QEnterEvent*)event);
}

void k_colorbutton_qbase_enter_event(void* self, void* event) {
    KColorButton_QBaseEnterEvent((KColorButton*)self, (QEnterEvent*)event);
}

void k_colorbutton_on_enter_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnEnterEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_leave_event(void* self, void* event) {
    KColorButton_LeaveEvent((KColorButton*)self, (QEvent*)event);
}

void k_colorbutton_qbase_leave_event(void* self, void* event) {
    KColorButton_QBaseLeaveEvent((KColorButton*)self, (QEvent*)event);
}

void k_colorbutton_on_leave_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnLeaveEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_move_event(void* self, void* event) {
    KColorButton_MoveEvent((KColorButton*)self, (QMoveEvent*)event);
}

void k_colorbutton_qbase_move_event(void* self, void* event) {
    KColorButton_QBaseMoveEvent((KColorButton*)self, (QMoveEvent*)event);
}

void k_colorbutton_on_move_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnMoveEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_resize_event(void* self, void* event) {
    KColorButton_ResizeEvent((KColorButton*)self, (QResizeEvent*)event);
}

void k_colorbutton_qbase_resize_event(void* self, void* event) {
    KColorButton_QBaseResizeEvent((KColorButton*)self, (QResizeEvent*)event);
}

void k_colorbutton_on_resize_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnResizeEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_close_event(void* self, void* event) {
    KColorButton_CloseEvent((KColorButton*)self, (QCloseEvent*)event);
}

void k_colorbutton_qbase_close_event(void* self, void* event) {
    KColorButton_QBaseCloseEvent((KColorButton*)self, (QCloseEvent*)event);
}

void k_colorbutton_on_close_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnCloseEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_context_menu_event(void* self, void* event) {
    KColorButton_ContextMenuEvent((KColorButton*)self, (QContextMenuEvent*)event);
}

void k_colorbutton_qbase_context_menu_event(void* self, void* event) {
    KColorButton_QBaseContextMenuEvent((KColorButton*)self, (QContextMenuEvent*)event);
}

void k_colorbutton_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnContextMenuEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_tablet_event(void* self, void* event) {
    KColorButton_TabletEvent((KColorButton*)self, (QTabletEvent*)event);
}

void k_colorbutton_qbase_tablet_event(void* self, void* event) {
    KColorButton_QBaseTabletEvent((KColorButton*)self, (QTabletEvent*)event);
}

void k_colorbutton_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnTabletEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_action_event(void* self, void* event) {
    KColorButton_ActionEvent((KColorButton*)self, (QActionEvent*)event);
}

void k_colorbutton_qbase_action_event(void* self, void* event) {
    KColorButton_QBaseActionEvent((KColorButton*)self, (QActionEvent*)event);
}

void k_colorbutton_on_action_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnActionEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_drag_move_event(void* self, void* event) {
    KColorButton_DragMoveEvent((KColorButton*)self, (QDragMoveEvent*)event);
}

void k_colorbutton_qbase_drag_move_event(void* self, void* event) {
    KColorButton_QBaseDragMoveEvent((KColorButton*)self, (QDragMoveEvent*)event);
}

void k_colorbutton_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnDragMoveEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_drag_leave_event(void* self, void* event) {
    KColorButton_DragLeaveEvent((KColorButton*)self, (QDragLeaveEvent*)event);
}

void k_colorbutton_qbase_drag_leave_event(void* self, void* event) {
    KColorButton_QBaseDragLeaveEvent((KColorButton*)self, (QDragLeaveEvent*)event);
}

void k_colorbutton_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnDragLeaveEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_show_event(void* self, void* event) {
    KColorButton_ShowEvent((KColorButton*)self, (QShowEvent*)event);
}

void k_colorbutton_qbase_show_event(void* self, void* event) {
    KColorButton_QBaseShowEvent((KColorButton*)self, (QShowEvent*)event);
}

void k_colorbutton_on_show_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnShowEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_hide_event(void* self, void* event) {
    KColorButton_HideEvent((KColorButton*)self, (QHideEvent*)event);
}

void k_colorbutton_qbase_hide_event(void* self, void* event) {
    KColorButton_QBaseHideEvent((KColorButton*)self, (QHideEvent*)event);
}

void k_colorbutton_on_hide_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnHideEvent((KColorButton*)self, (intptr_t)callback);
}

bool k_colorbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KColorButton_NativeEvent((KColorButton*)self, qstring(eventType), message, result);
}

bool k_colorbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return KColorButton_QBaseNativeEvent((KColorButton*)self, qstring(eventType), message, result);
}

void k_colorbutton_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    KColorButton_OnNativeEvent((KColorButton*)self, (intptr_t)callback);
}

int32_t k_colorbutton_metric(void* self, int32_t param1) {
    return KColorButton_Metric((KColorButton*)self, param1);
}

int32_t k_colorbutton_qbase_metric(void* self, int32_t param1) {
    return KColorButton_QBaseMetric((KColorButton*)self, param1);
}

void k_colorbutton_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    KColorButton_OnMetric((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_init_painter(void* self, void* painter) {
    KColorButton_InitPainter((KColorButton*)self, (QPainter*)painter);
}

void k_colorbutton_qbase_init_painter(void* self, void* painter) {
    KColorButton_QBaseInitPainter((KColorButton*)self, (QPainter*)painter);
}

void k_colorbutton_on_init_painter(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnInitPainter((KColorButton*)self, (intptr_t)callback);
}

QPaintDevice* k_colorbutton_redirected(void* self, void* offset) {
    return KColorButton_Redirected((KColorButton*)self, (QPoint*)offset);
}

QPaintDevice* k_colorbutton_qbase_redirected(void* self, void* offset) {
    return KColorButton_QBaseRedirected((KColorButton*)self, (QPoint*)offset);
}

void k_colorbutton_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    KColorButton_OnRedirected((KColorButton*)self, (intptr_t)callback);
}

QPainter* k_colorbutton_shared_painter(void* self) {
    return KColorButton_SharedPainter((KColorButton*)self);
}

QPainter* k_colorbutton_qbase_shared_painter(void* self) {
    return KColorButton_QBaseSharedPainter((KColorButton*)self);
}

void k_colorbutton_on_shared_painter(void* self, QPainter* (*callback)()) {
    KColorButton_OnSharedPainter((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_input_method_event(void* self, void* param1) {
    KColorButton_InputMethodEvent((KColorButton*)self, (QInputMethodEvent*)param1);
}

void k_colorbutton_qbase_input_method_event(void* self, void* param1) {
    KColorButton_QBaseInputMethodEvent((KColorButton*)self, (QInputMethodEvent*)param1);
}

void k_colorbutton_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnInputMethodEvent((KColorButton*)self, (intptr_t)callback);
}

QVariant* k_colorbutton_input_method_query(void* self, int64_t param1) {
    return KColorButton_InputMethodQuery((KColorButton*)self, param1);
}

QVariant* k_colorbutton_qbase_input_method_query(void* self, int64_t param1) {
    return KColorButton_QBaseInputMethodQuery((KColorButton*)self, param1);
}

void k_colorbutton_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    KColorButton_OnInputMethodQuery((KColorButton*)self, (intptr_t)callback);
}

bool k_colorbutton_focus_next_prev_child(void* self, bool next) {
    return KColorButton_FocusNextPrevChild((KColorButton*)self, next);
}

bool k_colorbutton_qbase_focus_next_prev_child(void* self, bool next) {
    return KColorButton_QBaseFocusNextPrevChild((KColorButton*)self, next);
}

void k_colorbutton_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    KColorButton_OnFocusNextPrevChild((KColorButton*)self, (intptr_t)callback);
}

bool k_colorbutton_event_filter(void* self, void* watched, void* event) {
    return KColorButton_EventFilter((KColorButton*)self, (QObject*)watched, (QEvent*)event);
}

bool k_colorbutton_qbase_event_filter(void* self, void* watched, void* event) {
    return KColorButton_QBaseEventFilter((KColorButton*)self, (QObject*)watched, (QEvent*)event);
}

void k_colorbutton_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    KColorButton_OnEventFilter((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_child_event(void* self, void* event) {
    KColorButton_ChildEvent((KColorButton*)self, (QChildEvent*)event);
}

void k_colorbutton_qbase_child_event(void* self, void* event) {
    KColorButton_QBaseChildEvent((KColorButton*)self, (QChildEvent*)event);
}

void k_colorbutton_on_child_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnChildEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_custom_event(void* self, void* event) {
    KColorButton_CustomEvent((KColorButton*)self, (QEvent*)event);
}

void k_colorbutton_qbase_custom_event(void* self, void* event) {
    KColorButton_QBaseCustomEvent((KColorButton*)self, (QEvent*)event);
}

void k_colorbutton_on_custom_event(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnCustomEvent((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_connect_notify(void* self, void* signal) {
    KColorButton_ConnectNotify((KColorButton*)self, (QMetaMethod*)signal);
}

void k_colorbutton_qbase_connect_notify(void* self, void* signal) {
    KColorButton_QBaseConnectNotify((KColorButton*)self, (QMetaMethod*)signal);
}

void k_colorbutton_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnConnectNotify((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_disconnect_notify(void* self, void* signal) {
    KColorButton_DisconnectNotify((KColorButton*)self, (QMetaMethod*)signal);
}

void k_colorbutton_qbase_disconnect_notify(void* self, void* signal) {
    KColorButton_QBaseDisconnectNotify((KColorButton*)self, (QMetaMethod*)signal);
}

void k_colorbutton_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    KColorButton_OnDisconnectNotify((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_update_micro_focus(void* self) {
    KColorButton_UpdateMicroFocus((KColorButton*)self);
}

void k_colorbutton_qbase_update_micro_focus(void* self) {
    KColorButton_QBaseUpdateMicroFocus((KColorButton*)self);
}

void k_colorbutton_on_update_micro_focus(void* self, void (*callback)()) {
    KColorButton_OnUpdateMicroFocus((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_create(void* self) {
    KColorButton_Create((KColorButton*)self);
}

void k_colorbutton_qbase_create(void* self) {
    KColorButton_QBaseCreate((KColorButton*)self);
}

void k_colorbutton_on_create(void* self, void (*callback)()) {
    KColorButton_OnCreate((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_destroy(void* self) {
    KColorButton_Destroy((KColorButton*)self);
}

void k_colorbutton_qbase_destroy(void* self) {
    KColorButton_QBaseDestroy((KColorButton*)self);
}

void k_colorbutton_on_destroy(void* self, void (*callback)()) {
    KColorButton_OnDestroy((KColorButton*)self, (intptr_t)callback);
}

bool k_colorbutton_focus_next_child(void* self) {
    return KColorButton_FocusNextChild((KColorButton*)self);
}

bool k_colorbutton_qbase_focus_next_child(void* self) {
    return KColorButton_QBaseFocusNextChild((KColorButton*)self);
}

void k_colorbutton_on_focus_next_child(void* self, bool (*callback)()) {
    KColorButton_OnFocusNextChild((KColorButton*)self, (intptr_t)callback);
}

bool k_colorbutton_focus_previous_child(void* self) {
    return KColorButton_FocusPreviousChild((KColorButton*)self);
}

bool k_colorbutton_qbase_focus_previous_child(void* self) {
    return KColorButton_QBaseFocusPreviousChild((KColorButton*)self);
}

void k_colorbutton_on_focus_previous_child(void* self, bool (*callback)()) {
    KColorButton_OnFocusPreviousChild((KColorButton*)self, (intptr_t)callback);
}

QObject* k_colorbutton_sender(void* self) {
    return KColorButton_Sender((KColorButton*)self);
}

QObject* k_colorbutton_qbase_sender(void* self) {
    return KColorButton_QBaseSender((KColorButton*)self);
}

void k_colorbutton_on_sender(void* self, QObject* (*callback)()) {
    KColorButton_OnSender((KColorButton*)self, (intptr_t)callback);
}

int32_t k_colorbutton_sender_signal_index(void* self) {
    return KColorButton_SenderSignalIndex((KColorButton*)self);
}

int32_t k_colorbutton_qbase_sender_signal_index(void* self) {
    return KColorButton_QBaseSenderSignalIndex((KColorButton*)self);
}

void k_colorbutton_on_sender_signal_index(void* self, int32_t (*callback)()) {
    KColorButton_OnSenderSignalIndex((KColorButton*)self, (intptr_t)callback);
}

int32_t k_colorbutton_receivers(void* self, const char* signal) {
    return KColorButton_Receivers((KColorButton*)self, signal);
}

int32_t k_colorbutton_qbase_receivers(void* self, const char* signal) {
    return KColorButton_QBaseReceivers((KColorButton*)self, signal);
}

void k_colorbutton_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    KColorButton_OnReceivers((KColorButton*)self, (intptr_t)callback);
}

bool k_colorbutton_is_signal_connected(void* self, void* signal) {
    return KColorButton_IsSignalConnected((KColorButton*)self, (QMetaMethod*)signal);
}

bool k_colorbutton_qbase_is_signal_connected(void* self, void* signal) {
    return KColorButton_QBaseIsSignalConnected((KColorButton*)self, (QMetaMethod*)signal);
}

void k_colorbutton_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    KColorButton_OnIsSignalConnected((KColorButton*)self, (intptr_t)callback);
}

double k_colorbutton_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KColorButton_GetDecodedMetricF((KColorButton*)self, metricA, metricB);
}

double k_colorbutton_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return KColorButton_QBaseGetDecodedMetricF((KColorButton*)self, metricA, metricB);
}

void k_colorbutton_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    KColorButton_OnGetDecodedMetricF((KColorButton*)self, (intptr_t)callback);
}

void k_colorbutton_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void k_colorbutton_delete(void* self) {
    KColorButton_Delete((KColorButton*)(self));
}
