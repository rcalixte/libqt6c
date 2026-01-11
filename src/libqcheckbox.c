#include "libqabstractbutton.hpp"
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
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcheckbox.hpp"
#include "libqcheckbox.h"

QCheckBox* q_checkbox_new(void* parent) {
    return QCheckBox_new((QWidget*)parent);
}

QCheckBox* q_checkbox_new2() {
    return QCheckBox_new2();
}

QCheckBox* q_checkbox_new3(const char* text) {
    return QCheckBox_new3(qstring(text));
}

QCheckBox* q_checkbox_new4(const char* text, void* parent) {
    return QCheckBox_new4(qstring(text), (QWidget*)parent);
}

const QMetaObject* q_checkbox_meta_object(void* self) {
    return QCheckBox_MetaObject((QCheckBox*)self);
}

void* q_checkbox_metacast(void* self, const char* param1) {
    return QCheckBox_Metacast((QCheckBox*)self, param1);
}

int32_t q_checkbox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCheckBox_Metacall((QCheckBox*)self, param1, param2, param3);
}

void q_checkbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QCheckBox_OnMetacall((QCheckBox*)self, (intptr_t)callback);
}

int32_t q_checkbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QCheckBox_QBaseMetacall((QCheckBox*)self, param1, param2, param3);
}

const char* q_checkbox_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QSize* q_checkbox_size_hint(void* self) {
    return QCheckBox_SizeHint((QCheckBox*)self);
}

void q_checkbox_on_size_hint(void* self, QSize* (*callback)()) {
    QCheckBox_OnSizeHint((QCheckBox*)self, (intptr_t)callback);
}

QSize* q_checkbox_qbase_size_hint(void* self) {
    return QCheckBox_QBaseSizeHint((QCheckBox*)self);
}

QSize* q_checkbox_minimum_size_hint(void* self) {
    return QCheckBox_MinimumSizeHint((QCheckBox*)self);
}

void q_checkbox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QCheckBox_OnMinimumSizeHint((QCheckBox*)self, (intptr_t)callback);
}

QSize* q_checkbox_qbase_minimum_size_hint(void* self) {
    return QCheckBox_QBaseMinimumSizeHint((QCheckBox*)self);
}

void q_checkbox_set_tristate(void* self) {
    QCheckBox_SetTristate((QCheckBox*)self);
}

bool q_checkbox_is_tristate(void* self) {
    return QCheckBox_IsTristate((QCheckBox*)self);
}

int32_t q_checkbox_check_state(void* self) {
    return QCheckBox_CheckState((QCheckBox*)self);
}

void q_checkbox_set_check_state(void* self, int32_t state) {
    QCheckBox_SetCheckState((QCheckBox*)self, state);
}

void q_checkbox_state_changed(void* self, int param1) {
    QCheckBox_StateChanged((QCheckBox*)self, param1);
}

void q_checkbox_on_state_changed(void* self, void (*callback)(void*, int)) {
    QCheckBox_Connect_StateChanged((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_check_state_changed(void* self, int32_t param1) {
    QCheckBox_CheckStateChanged((QCheckBox*)self, param1);
}

void q_checkbox_on_check_state_changed(void* self, void (*callback)(void*, int32_t)) {
    QCheckBox_Connect_CheckStateChanged((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_event(void* self, void* e) {
    return QCheckBox_Event((QCheckBox*)self, (QEvent*)e);
}

void q_checkbox_on_event(void* self, bool (*callback)(void*, void*)) {
    QCheckBox_OnEvent((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_qbase_event(void* self, void* e) {
    return QCheckBox_QBaseEvent((QCheckBox*)self, (QEvent*)e);
}

bool q_checkbox_hit_button(void* self, void* pos) {
    return QCheckBox_HitButton((QCheckBox*)self, (QPoint*)pos);
}

void q_checkbox_on_hit_button(void* self, bool (*callback)(void*, void*)) {
    QCheckBox_OnHitButton((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_qbase_hit_button(void* self, void* pos) {
    return QCheckBox_QBaseHitButton((QCheckBox*)self, (QPoint*)pos);
}

void q_checkbox_check_state_set(void* self) {
    QCheckBox_CheckStateSet((QCheckBox*)self);
}

void q_checkbox_on_check_state_set(void* self, void (*callback)()) {
    QCheckBox_OnCheckStateSet((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_qbase_check_state_set(void* self) {
    QCheckBox_QBaseCheckStateSet((QCheckBox*)self);
}

void q_checkbox_next_check_state(void* self) {
    QCheckBox_NextCheckState((QCheckBox*)self);
}

void q_checkbox_on_next_check_state(void* self, void (*callback)()) {
    QCheckBox_OnNextCheckState((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_qbase_next_check_state(void* self) {
    QCheckBox_QBaseNextCheckState((QCheckBox*)self);
}

void q_checkbox_paint_event(void* self, void* param1) {
    QCheckBox_PaintEvent((QCheckBox*)self, (QPaintEvent*)param1);
}

void q_checkbox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnPaintEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_qbase_paint_event(void* self, void* param1) {
    QCheckBox_QBasePaintEvent((QCheckBox*)self, (QPaintEvent*)param1);
}

void q_checkbox_mouse_move_event(void* self, void* param1) {
    QCheckBox_MouseMoveEvent((QCheckBox*)self, (QMouseEvent*)param1);
}

void q_checkbox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnMouseMoveEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_qbase_mouse_move_event(void* self, void* param1) {
    QCheckBox_QBaseMouseMoveEvent((QCheckBox*)self, (QMouseEvent*)param1);
}

void q_checkbox_init_style_option(void* self, void* option) {
    QCheckBox_InitStyleOption((QCheckBox*)self, (QStyleOptionButton*)option);
}

void q_checkbox_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnInitStyleOption((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_qbase_init_style_option(void* self, void* option) {
    QCheckBox_QBaseInitStyleOption((QCheckBox*)self, (QStyleOptionButton*)option);
}

const char* q_checkbox_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_checkbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_tristate1(void* self, bool y) {
    QCheckBox_SetTristate1((QCheckBox*)self, y);
}

void q_checkbox_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

const char* q_checkbox_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

QIcon* q_checkbox_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

QSize* q_checkbox_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

void q_checkbox_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

QKeySequence* q_checkbox_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

void q_checkbox_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

bool q_checkbox_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

bool q_checkbox_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

void q_checkbox_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

bool q_checkbox_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

void q_checkbox_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

bool q_checkbox_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

void q_checkbox_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

int32_t q_checkbox_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

void q_checkbox_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

int32_t q_checkbox_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

void q_checkbox_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

bool q_checkbox_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

QButtonGroup* q_checkbox_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

void q_checkbox_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

void q_checkbox_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

void q_checkbox_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

void q_checkbox_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

void q_checkbox_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

void q_checkbox_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

void q_checkbox_on_pressed(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)callback);
}

void q_checkbox_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

void q_checkbox_on_released(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)callback);
}

void q_checkbox_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

void q_checkbox_on_clicked(void* self, void (*callback)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)callback);
}

void q_checkbox_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

void q_checkbox_on_toggled(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)callback);
}

void q_checkbox_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

void q_checkbox_on_clicked1(void* self, void (*callback)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)callback);
}

uintptr_t q_checkbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_checkbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_checkbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_checkbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_checkbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_checkbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_checkbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_checkbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_checkbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_checkbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_checkbox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_checkbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_checkbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_checkbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_checkbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_checkbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_checkbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_checkbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_checkbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_checkbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_checkbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_checkbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_checkbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_checkbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_checkbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_checkbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_checkbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_checkbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_checkbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_checkbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_checkbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_checkbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_checkbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_checkbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_checkbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_checkbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_checkbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_checkbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_checkbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_checkbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_checkbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_checkbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_checkbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_checkbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_checkbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_checkbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_checkbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_checkbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_checkbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_checkbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_checkbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_checkbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_checkbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_checkbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_checkbox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_checkbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_checkbox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_checkbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_checkbox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_checkbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_checkbox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_checkbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_checkbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_checkbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_checkbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_checkbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_checkbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_checkbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_checkbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_checkbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_checkbox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_checkbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_checkbox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_checkbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_checkbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_checkbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_checkbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_checkbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_checkbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_checkbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_checkbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_checkbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_checkbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_checkbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_checkbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_checkbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_checkbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_checkbox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_checkbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_checkbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_checkbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_checkbox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_checkbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_checkbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_checkbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_checkbox_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_checkbox_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_checkbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_checkbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_checkbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_checkbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_checkbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_checkbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_checkbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_checkbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_checkbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_checkbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_checkbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_checkbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_checkbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_checkbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_checkbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_checkbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_checkbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_checkbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_checkbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_checkbox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_checkbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_checkbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_checkbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_checkbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_checkbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_checkbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_checkbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_checkbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_checkbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_checkbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_checkbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_checkbox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_checkbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_checkbox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_checkbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_checkbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_checkbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_checkbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_checkbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_checkbox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_checkbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_checkbox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_checkbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_checkbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_checkbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_checkbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_checkbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_checkbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_checkbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_checkbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_checkbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_checkbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_checkbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_checkbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_checkbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_checkbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_checkbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_checkbox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_checkbox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_checkbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_checkbox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_checkbox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_checkbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_checkbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_checkbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_checkbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_checkbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_checkbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_checkbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_checkbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_checkbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_checkbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_checkbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_checkbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_checkbox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_checkbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_checkbox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_checkbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_checkbox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_checkbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_checkbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_checkbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_checkbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_checkbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_checkbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_checkbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_checkbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_checkbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_checkbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_checkbox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_checkbox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_checkbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_checkbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_checkbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_checkbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_checkbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_checkbox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_checkbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_checkbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_checkbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_checkbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_checkbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_checkbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_checkbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_checkbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_checkbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_checkbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_checkbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_checkbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_checkbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_checkbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_checkbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_checkbox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_checkbox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_checkbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_checkbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_checkbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_checkbox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_checkbox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_checkbox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_checkbox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_checkbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_checkbox_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_checkbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_checkbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_checkbox_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_checkbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_checkbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_checkbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_checkbox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_checkbox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_checkbox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_checkbox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_checkbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_checkbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_checkbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_checkbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_checkbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_checkbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_checkbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_checkbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_checkbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_checkbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_checkbox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_checkbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_checkbox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_checkbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_checkbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_checkbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_checkbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_checkbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_checkbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_checkbox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_checkbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_checkbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_checkbox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_checkbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_checkbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_checkbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_checkbox_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_checkbox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_checkbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_checkbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_checkbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_checkbox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_checkbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_checkbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_checkbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_checkbox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_checkbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_checkbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_checkbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_checkbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_checkbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_checkbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_checkbox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_checkbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_checkbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_checkbox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_checkbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_checkbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_checkbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_checkbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_checkbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_checkbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_checkbox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_checkbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_checkbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_checkbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_checkbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_checkbox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_checkbox_dynamic_property_names");
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

QBindingStorage* q_checkbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_checkbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_checkbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_checkbox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_checkbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_checkbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_checkbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_checkbox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_checkbox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_checkbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_checkbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_checkbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_checkbox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_checkbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_checkbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_checkbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_checkbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_checkbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_checkbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_checkbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_checkbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_checkbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_checkbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_checkbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_checkbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_checkbox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

void q_checkbox_key_press_event(void* self, void* e) {
    QCheckBox_KeyPressEvent((QCheckBox*)self, (QKeyEvent*)e);
}

void q_checkbox_qbase_key_press_event(void* self, void* e) {
    QCheckBox_QBaseKeyPressEvent((QCheckBox*)self, (QKeyEvent*)e);
}

void q_checkbox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnKeyPressEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_key_release_event(void* self, void* e) {
    QCheckBox_KeyReleaseEvent((QCheckBox*)self, (QKeyEvent*)e);
}

void q_checkbox_qbase_key_release_event(void* self, void* e) {
    QCheckBox_QBaseKeyReleaseEvent((QCheckBox*)self, (QKeyEvent*)e);
}

void q_checkbox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnKeyReleaseEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_mouse_press_event(void* self, void* e) {
    QCheckBox_MousePressEvent((QCheckBox*)self, (QMouseEvent*)e);
}

void q_checkbox_qbase_mouse_press_event(void* self, void* e) {
    QCheckBox_QBaseMousePressEvent((QCheckBox*)self, (QMouseEvent*)e);
}

void q_checkbox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnMousePressEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_mouse_release_event(void* self, void* e) {
    QCheckBox_MouseReleaseEvent((QCheckBox*)self, (QMouseEvent*)e);
}

void q_checkbox_qbase_mouse_release_event(void* self, void* e) {
    QCheckBox_QBaseMouseReleaseEvent((QCheckBox*)self, (QMouseEvent*)e);
}

void q_checkbox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnMouseReleaseEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_focus_in_event(void* self, void* e) {
    QCheckBox_FocusInEvent((QCheckBox*)self, (QFocusEvent*)e);
}

void q_checkbox_qbase_focus_in_event(void* self, void* e) {
    QCheckBox_QBaseFocusInEvent((QCheckBox*)self, (QFocusEvent*)e);
}

void q_checkbox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnFocusInEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_focus_out_event(void* self, void* e) {
    QCheckBox_FocusOutEvent((QCheckBox*)self, (QFocusEvent*)e);
}

void q_checkbox_qbase_focus_out_event(void* self, void* e) {
    QCheckBox_QBaseFocusOutEvent((QCheckBox*)self, (QFocusEvent*)e);
}

void q_checkbox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnFocusOutEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_change_event(void* self, void* e) {
    QCheckBox_ChangeEvent((QCheckBox*)self, (QEvent*)e);
}

void q_checkbox_qbase_change_event(void* self, void* e) {
    QCheckBox_QBaseChangeEvent((QCheckBox*)self, (QEvent*)e);
}

void q_checkbox_on_change_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnChangeEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_timer_event(void* self, void* e) {
    QCheckBox_TimerEvent((QCheckBox*)self, (QTimerEvent*)e);
}

void q_checkbox_qbase_timer_event(void* self, void* e) {
    QCheckBox_QBaseTimerEvent((QCheckBox*)self, (QTimerEvent*)e);
}

void q_checkbox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnTimerEvent((QCheckBox*)self, (intptr_t)callback);
}

int32_t q_checkbox_dev_type(void* self) {
    return QCheckBox_DevType((QCheckBox*)self);
}

int32_t q_checkbox_qbase_dev_type(void* self) {
    return QCheckBox_QBaseDevType((QCheckBox*)self);
}

void q_checkbox_on_dev_type(void* self, int32_t (*callback)()) {
    QCheckBox_OnDevType((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_set_visible(void* self, bool visible) {
    QCheckBox_SetVisible((QCheckBox*)self, visible);
}

void q_checkbox_qbase_set_visible(void* self, bool visible) {
    QCheckBox_QBaseSetVisible((QCheckBox*)self, visible);
}

void q_checkbox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QCheckBox_OnSetVisible((QCheckBox*)self, (intptr_t)callback);
}

int32_t q_checkbox_height_for_width(void* self, int param1) {
    return QCheckBox_HeightForWidth((QCheckBox*)self, param1);
}

int32_t q_checkbox_qbase_height_for_width(void* self, int param1) {
    return QCheckBox_QBaseHeightForWidth((QCheckBox*)self, param1);
}

void q_checkbox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QCheckBox_OnHeightForWidth((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_has_height_for_width(void* self) {
    return QCheckBox_HasHeightForWidth((QCheckBox*)self);
}

bool q_checkbox_qbase_has_height_for_width(void* self) {
    return QCheckBox_QBaseHasHeightForWidth((QCheckBox*)self);
}

void q_checkbox_on_has_height_for_width(void* self, bool (*callback)()) {
    QCheckBox_OnHasHeightForWidth((QCheckBox*)self, (intptr_t)callback);
}

QPaintEngine* q_checkbox_paint_engine(void* self) {
    return QCheckBox_PaintEngine((QCheckBox*)self);
}

QPaintEngine* q_checkbox_qbase_paint_engine(void* self) {
    return QCheckBox_QBasePaintEngine((QCheckBox*)self);
}

void q_checkbox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QCheckBox_OnPaintEngine((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_mouse_double_click_event(void* self, void* event) {
    QCheckBox_MouseDoubleClickEvent((QCheckBox*)self, (QMouseEvent*)event);
}

void q_checkbox_qbase_mouse_double_click_event(void* self, void* event) {
    QCheckBox_QBaseMouseDoubleClickEvent((QCheckBox*)self, (QMouseEvent*)event);
}

void q_checkbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnMouseDoubleClickEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_wheel_event(void* self, void* event) {
    QCheckBox_WheelEvent((QCheckBox*)self, (QWheelEvent*)event);
}

void q_checkbox_qbase_wheel_event(void* self, void* event) {
    QCheckBox_QBaseWheelEvent((QCheckBox*)self, (QWheelEvent*)event);
}

void q_checkbox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnWheelEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_enter_event(void* self, void* event) {
    QCheckBox_EnterEvent((QCheckBox*)self, (QEnterEvent*)event);
}

void q_checkbox_qbase_enter_event(void* self, void* event) {
    QCheckBox_QBaseEnterEvent((QCheckBox*)self, (QEnterEvent*)event);
}

void q_checkbox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnEnterEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_leave_event(void* self, void* event) {
    QCheckBox_LeaveEvent((QCheckBox*)self, (QEvent*)event);
}

void q_checkbox_qbase_leave_event(void* self, void* event) {
    QCheckBox_QBaseLeaveEvent((QCheckBox*)self, (QEvent*)event);
}

void q_checkbox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnLeaveEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_move_event(void* self, void* event) {
    QCheckBox_MoveEvent((QCheckBox*)self, (QMoveEvent*)event);
}

void q_checkbox_qbase_move_event(void* self, void* event) {
    QCheckBox_QBaseMoveEvent((QCheckBox*)self, (QMoveEvent*)event);
}

void q_checkbox_on_move_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnMoveEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_resize_event(void* self, void* event) {
    QCheckBox_ResizeEvent((QCheckBox*)self, (QResizeEvent*)event);
}

void q_checkbox_qbase_resize_event(void* self, void* event) {
    QCheckBox_QBaseResizeEvent((QCheckBox*)self, (QResizeEvent*)event);
}

void q_checkbox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnResizeEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_close_event(void* self, void* event) {
    QCheckBox_CloseEvent((QCheckBox*)self, (QCloseEvent*)event);
}

void q_checkbox_qbase_close_event(void* self, void* event) {
    QCheckBox_QBaseCloseEvent((QCheckBox*)self, (QCloseEvent*)event);
}

void q_checkbox_on_close_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnCloseEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_context_menu_event(void* self, void* event) {
    QCheckBox_ContextMenuEvent((QCheckBox*)self, (QContextMenuEvent*)event);
}

void q_checkbox_qbase_context_menu_event(void* self, void* event) {
    QCheckBox_QBaseContextMenuEvent((QCheckBox*)self, (QContextMenuEvent*)event);
}

void q_checkbox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnContextMenuEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_tablet_event(void* self, void* event) {
    QCheckBox_TabletEvent((QCheckBox*)self, (QTabletEvent*)event);
}

void q_checkbox_qbase_tablet_event(void* self, void* event) {
    QCheckBox_QBaseTabletEvent((QCheckBox*)self, (QTabletEvent*)event);
}

void q_checkbox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnTabletEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_action_event(void* self, void* event) {
    QCheckBox_ActionEvent((QCheckBox*)self, (QActionEvent*)event);
}

void q_checkbox_qbase_action_event(void* self, void* event) {
    QCheckBox_QBaseActionEvent((QCheckBox*)self, (QActionEvent*)event);
}

void q_checkbox_on_action_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnActionEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_drag_enter_event(void* self, void* event) {
    QCheckBox_DragEnterEvent((QCheckBox*)self, (QDragEnterEvent*)event);
}

void q_checkbox_qbase_drag_enter_event(void* self, void* event) {
    QCheckBox_QBaseDragEnterEvent((QCheckBox*)self, (QDragEnterEvent*)event);
}

void q_checkbox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnDragEnterEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_drag_move_event(void* self, void* event) {
    QCheckBox_DragMoveEvent((QCheckBox*)self, (QDragMoveEvent*)event);
}

void q_checkbox_qbase_drag_move_event(void* self, void* event) {
    QCheckBox_QBaseDragMoveEvent((QCheckBox*)self, (QDragMoveEvent*)event);
}

void q_checkbox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnDragMoveEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_drag_leave_event(void* self, void* event) {
    QCheckBox_DragLeaveEvent((QCheckBox*)self, (QDragLeaveEvent*)event);
}

void q_checkbox_qbase_drag_leave_event(void* self, void* event) {
    QCheckBox_QBaseDragLeaveEvent((QCheckBox*)self, (QDragLeaveEvent*)event);
}

void q_checkbox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnDragLeaveEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_drop_event(void* self, void* event) {
    QCheckBox_DropEvent((QCheckBox*)self, (QDropEvent*)event);
}

void q_checkbox_qbase_drop_event(void* self, void* event) {
    QCheckBox_QBaseDropEvent((QCheckBox*)self, (QDropEvent*)event);
}

void q_checkbox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnDropEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_show_event(void* self, void* event) {
    QCheckBox_ShowEvent((QCheckBox*)self, (QShowEvent*)event);
}

void q_checkbox_qbase_show_event(void* self, void* event) {
    QCheckBox_QBaseShowEvent((QCheckBox*)self, (QShowEvent*)event);
}

void q_checkbox_on_show_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnShowEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_hide_event(void* self, void* event) {
    QCheckBox_HideEvent((QCheckBox*)self, (QHideEvent*)event);
}

void q_checkbox_qbase_hide_event(void* self, void* event) {
    QCheckBox_QBaseHideEvent((QCheckBox*)self, (QHideEvent*)event);
}

void q_checkbox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnHideEvent((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCheckBox_NativeEvent((QCheckBox*)self, qstring(eventType), message, result);
}

bool q_checkbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QCheckBox_QBaseNativeEvent((QCheckBox*)self, qstring(eventType), message, result);
}

void q_checkbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QCheckBox_OnNativeEvent((QCheckBox*)self, (intptr_t)callback);
}

int32_t q_checkbox_metric(void* self, int32_t param1) {
    return QCheckBox_Metric((QCheckBox*)self, param1);
}

int32_t q_checkbox_qbase_metric(void* self, int32_t param1) {
    return QCheckBox_QBaseMetric((QCheckBox*)self, param1);
}

void q_checkbox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QCheckBox_OnMetric((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_init_painter(void* self, void* painter) {
    QCheckBox_InitPainter((QCheckBox*)self, (QPainter*)painter);
}

void q_checkbox_qbase_init_painter(void* self, void* painter) {
    QCheckBox_QBaseInitPainter((QCheckBox*)self, (QPainter*)painter);
}

void q_checkbox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnInitPainter((QCheckBox*)self, (intptr_t)callback);
}

QPaintDevice* q_checkbox_redirected(void* self, void* offset) {
    return QCheckBox_Redirected((QCheckBox*)self, (QPoint*)offset);
}

QPaintDevice* q_checkbox_qbase_redirected(void* self, void* offset) {
    return QCheckBox_QBaseRedirected((QCheckBox*)self, (QPoint*)offset);
}

void q_checkbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QCheckBox_OnRedirected((QCheckBox*)self, (intptr_t)callback);
}

QPainter* q_checkbox_shared_painter(void* self) {
    return QCheckBox_SharedPainter((QCheckBox*)self);
}

QPainter* q_checkbox_qbase_shared_painter(void* self) {
    return QCheckBox_QBaseSharedPainter((QCheckBox*)self);
}

void q_checkbox_on_shared_painter(void* self, QPainter* (*callback)()) {
    QCheckBox_OnSharedPainter((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_input_method_event(void* self, void* param1) {
    QCheckBox_InputMethodEvent((QCheckBox*)self, (QInputMethodEvent*)param1);
}

void q_checkbox_qbase_input_method_event(void* self, void* param1) {
    QCheckBox_QBaseInputMethodEvent((QCheckBox*)self, (QInputMethodEvent*)param1);
}

void q_checkbox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnInputMethodEvent((QCheckBox*)self, (intptr_t)callback);
}

QVariant* q_checkbox_input_method_query(void* self, int64_t param1) {
    return QCheckBox_InputMethodQuery((QCheckBox*)self, param1);
}

QVariant* q_checkbox_qbase_input_method_query(void* self, int64_t param1) {
    return QCheckBox_QBaseInputMethodQuery((QCheckBox*)self, param1);
}

void q_checkbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QCheckBox_OnInputMethodQuery((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_focus_next_prev_child(void* self, bool next) {
    return QCheckBox_FocusNextPrevChild((QCheckBox*)self, next);
}

bool q_checkbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QCheckBox_QBaseFocusNextPrevChild((QCheckBox*)self, next);
}

void q_checkbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QCheckBox_OnFocusNextPrevChild((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_event_filter(void* self, void* watched, void* event) {
    return QCheckBox_EventFilter((QCheckBox*)self, (QObject*)watched, (QEvent*)event);
}

bool q_checkbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QCheckBox_QBaseEventFilter((QCheckBox*)self, (QObject*)watched, (QEvent*)event);
}

void q_checkbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QCheckBox_OnEventFilter((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_child_event(void* self, void* event) {
    QCheckBox_ChildEvent((QCheckBox*)self, (QChildEvent*)event);
}

void q_checkbox_qbase_child_event(void* self, void* event) {
    QCheckBox_QBaseChildEvent((QCheckBox*)self, (QChildEvent*)event);
}

void q_checkbox_on_child_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnChildEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_custom_event(void* self, void* event) {
    QCheckBox_CustomEvent((QCheckBox*)self, (QEvent*)event);
}

void q_checkbox_qbase_custom_event(void* self, void* event) {
    QCheckBox_QBaseCustomEvent((QCheckBox*)self, (QEvent*)event);
}

void q_checkbox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnCustomEvent((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_connect_notify(void* self, void* signal) {
    QCheckBox_ConnectNotify((QCheckBox*)self, (QMetaMethod*)signal);
}

void q_checkbox_qbase_connect_notify(void* self, void* signal) {
    QCheckBox_QBaseConnectNotify((QCheckBox*)self, (QMetaMethod*)signal);
}

void q_checkbox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnConnectNotify((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_disconnect_notify(void* self, void* signal) {
    QCheckBox_DisconnectNotify((QCheckBox*)self, (QMetaMethod*)signal);
}

void q_checkbox_qbase_disconnect_notify(void* self, void* signal) {
    QCheckBox_QBaseDisconnectNotify((QCheckBox*)self, (QMetaMethod*)signal);
}

void q_checkbox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QCheckBox_OnDisconnectNotify((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_update_micro_focus(void* self) {
    QCheckBox_UpdateMicroFocus((QCheckBox*)self);
}

void q_checkbox_qbase_update_micro_focus(void* self) {
    QCheckBox_QBaseUpdateMicroFocus((QCheckBox*)self);
}

void q_checkbox_on_update_micro_focus(void* self, void (*callback)()) {
    QCheckBox_OnUpdateMicroFocus((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_create(void* self) {
    QCheckBox_Create((QCheckBox*)self);
}

void q_checkbox_qbase_create(void* self) {
    QCheckBox_QBaseCreate((QCheckBox*)self);
}

void q_checkbox_on_create(void* self, void (*callback)()) {
    QCheckBox_OnCreate((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_destroy(void* self) {
    QCheckBox_Destroy((QCheckBox*)self);
}

void q_checkbox_qbase_destroy(void* self) {
    QCheckBox_QBaseDestroy((QCheckBox*)self);
}

void q_checkbox_on_destroy(void* self, void (*callback)()) {
    QCheckBox_OnDestroy((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_focus_next_child(void* self) {
    return QCheckBox_FocusNextChild((QCheckBox*)self);
}

bool q_checkbox_qbase_focus_next_child(void* self) {
    return QCheckBox_QBaseFocusNextChild((QCheckBox*)self);
}

void q_checkbox_on_focus_next_child(void* self, bool (*callback)()) {
    QCheckBox_OnFocusNextChild((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_focus_previous_child(void* self) {
    return QCheckBox_FocusPreviousChild((QCheckBox*)self);
}

bool q_checkbox_qbase_focus_previous_child(void* self) {
    return QCheckBox_QBaseFocusPreviousChild((QCheckBox*)self);
}

void q_checkbox_on_focus_previous_child(void* self, bool (*callback)()) {
    QCheckBox_OnFocusPreviousChild((QCheckBox*)self, (intptr_t)callback);
}

QObject* q_checkbox_sender(void* self) {
    return QCheckBox_Sender((QCheckBox*)self);
}

QObject* q_checkbox_qbase_sender(void* self) {
    return QCheckBox_QBaseSender((QCheckBox*)self);
}

void q_checkbox_on_sender(void* self, QObject* (*callback)()) {
    QCheckBox_OnSender((QCheckBox*)self, (intptr_t)callback);
}

int32_t q_checkbox_sender_signal_index(void* self) {
    return QCheckBox_SenderSignalIndex((QCheckBox*)self);
}

int32_t q_checkbox_qbase_sender_signal_index(void* self) {
    return QCheckBox_QBaseSenderSignalIndex((QCheckBox*)self);
}

void q_checkbox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QCheckBox_OnSenderSignalIndex((QCheckBox*)self, (intptr_t)callback);
}

int32_t q_checkbox_receivers(void* self, const char* signal) {
    return QCheckBox_Receivers((QCheckBox*)self, signal);
}

int32_t q_checkbox_qbase_receivers(void* self, const char* signal) {
    return QCheckBox_QBaseReceivers((QCheckBox*)self, signal);
}

void q_checkbox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QCheckBox_OnReceivers((QCheckBox*)self, (intptr_t)callback);
}

bool q_checkbox_is_signal_connected(void* self, void* signal) {
    return QCheckBox_IsSignalConnected((QCheckBox*)self, (QMetaMethod*)signal);
}

bool q_checkbox_qbase_is_signal_connected(void* self, void* signal) {
    return QCheckBox_QBaseIsSignalConnected((QCheckBox*)self, (QMetaMethod*)signal);
}

void q_checkbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QCheckBox_OnIsSignalConnected((QCheckBox*)self, (intptr_t)callback);
}

double q_checkbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QCheckBox_GetDecodedMetricF((QCheckBox*)self, metricA, metricB);
}

double q_checkbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QCheckBox_QBaseGetDecodedMetricF((QCheckBox*)self, metricA, metricB);
}

void q_checkbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QCheckBox_OnGetDecodedMetricF((QCheckBox*)self, (intptr_t)callback);
}

void q_checkbox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_checkbox_delete(void* self) {
    QCheckBox_Delete((QCheckBox*)(self));
}
