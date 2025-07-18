#include "libqevent.hpp"
#include "libqbuttongroup.hpp"
#include "libqicon.hpp"
#include "libqkeysequence.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqabstractbutton.hpp"
#include "libqabstractbutton.h"

QAbstractButton* q_abstractbutton_new(void* parent) {
    return QAbstractButton_new((QWidget*)parent);
}

QAbstractButton* q_abstractbutton_new2() {
    return QAbstractButton_new2();
}

const QMetaObject* q_abstractbutton_meta_object(void* self) {
    return QAbstractButton_MetaObject((QAbstractButton*)self);
}

void* q_abstractbutton_metacast(void* self, const char* param1) {
    return QAbstractButton_Metacast((QAbstractButton*)self, param1);
}

int32_t q_abstractbutton_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractButton_Metacall((QAbstractButton*)self, param1, param2, param3);
}

void q_abstractbutton_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractButton_OnMetacall((QAbstractButton*)self, (intptr_t)slot);
}

int32_t q_abstractbutton_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractButton_QBaseMetacall((QAbstractButton*)self, param1, param2, param3);
}

const char* q_abstractbutton_tr(const char* s) {
    libqt_string _str = QAbstractButton_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_text(void* self, const char* text) {
    QAbstractButton_SetText((QAbstractButton*)self, qstring(text));
}

const char* q_abstractbutton_text(void* self) {
    libqt_string _str = QAbstractButton_Text((QAbstractButton*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_icon(void* self, void* icon) {
    QAbstractButton_SetIcon((QAbstractButton*)self, (QIcon*)icon);
}

QIcon* q_abstractbutton_icon(void* self) {
    return QAbstractButton_Icon((QAbstractButton*)self);
}

QSize* q_abstractbutton_icon_size(void* self) {
    return QAbstractButton_IconSize((QAbstractButton*)self);
}

void q_abstractbutton_set_shortcut(void* self, void* key) {
    QAbstractButton_SetShortcut((QAbstractButton*)self, (QKeySequence*)key);
}

QKeySequence* q_abstractbutton_shortcut(void* self) {
    return QAbstractButton_Shortcut((QAbstractButton*)self);
}

void q_abstractbutton_set_checkable(void* self, bool checkable) {
    QAbstractButton_SetCheckable((QAbstractButton*)self, checkable);
}

bool q_abstractbutton_is_checkable(void* self) {
    return QAbstractButton_IsCheckable((QAbstractButton*)self);
}

bool q_abstractbutton_is_checked(void* self) {
    return QAbstractButton_IsChecked((QAbstractButton*)self);
}

void q_abstractbutton_set_down(void* self, bool down) {
    QAbstractButton_SetDown((QAbstractButton*)self, down);
}

bool q_abstractbutton_is_down(void* self) {
    return QAbstractButton_IsDown((QAbstractButton*)self);
}

void q_abstractbutton_set_auto_repeat(void* self, bool autoRepeat) {
    QAbstractButton_SetAutoRepeat((QAbstractButton*)self, autoRepeat);
}

bool q_abstractbutton_auto_repeat(void* self) {
    return QAbstractButton_AutoRepeat((QAbstractButton*)self);
}

void q_abstractbutton_set_auto_repeat_delay(void* self, int autoRepeatDelay) {
    QAbstractButton_SetAutoRepeatDelay((QAbstractButton*)self, autoRepeatDelay);
}

int32_t q_abstractbutton_auto_repeat_delay(void* self) {
    return QAbstractButton_AutoRepeatDelay((QAbstractButton*)self);
}

void q_abstractbutton_set_auto_repeat_interval(void* self, int autoRepeatInterval) {
    QAbstractButton_SetAutoRepeatInterval((QAbstractButton*)self, autoRepeatInterval);
}

int32_t q_abstractbutton_auto_repeat_interval(void* self) {
    return QAbstractButton_AutoRepeatInterval((QAbstractButton*)self);
}

void q_abstractbutton_set_auto_exclusive(void* self, bool autoExclusive) {
    QAbstractButton_SetAutoExclusive((QAbstractButton*)self, autoExclusive);
}

bool q_abstractbutton_auto_exclusive(void* self) {
    return QAbstractButton_AutoExclusive((QAbstractButton*)self);
}

QButtonGroup* q_abstractbutton_group(void* self) {
    return QAbstractButton_Group((QAbstractButton*)self);
}

void q_abstractbutton_set_icon_size(void* self, void* size) {
    QAbstractButton_SetIconSize((QAbstractButton*)self, (QSize*)size);
}

void q_abstractbutton_animate_click(void* self) {
    QAbstractButton_AnimateClick((QAbstractButton*)self);
}

void q_abstractbutton_click(void* self) {
    QAbstractButton_Click((QAbstractButton*)self);
}

void q_abstractbutton_toggle(void* self) {
    QAbstractButton_Toggle((QAbstractButton*)self);
}

void q_abstractbutton_set_checked(void* self, bool checked) {
    QAbstractButton_SetChecked((QAbstractButton*)self, checked);
}

void q_abstractbutton_pressed(void* self) {
    QAbstractButton_Pressed((QAbstractButton*)self);
}

void q_abstractbutton_on_pressed(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Pressed((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_released(void* self) {
    QAbstractButton_Released((QAbstractButton*)self);
}

void q_abstractbutton_on_released(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Released((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_clicked(void* self) {
    QAbstractButton_Clicked((QAbstractButton*)self);
}

void q_abstractbutton_on_clicked(void* self, void (*slot)(void*)) {
    QAbstractButton_Connect_Clicked((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_toggled(void* self, bool checked) {
    QAbstractButton_Toggled((QAbstractButton*)self, checked);
}

void q_abstractbutton_on_toggled(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Toggled((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_paint_event(void* self, void* e) {
    QAbstractButton_PaintEvent((QAbstractButton*)self, (QPaintEvent*)e);
}

void q_abstractbutton_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnPaintEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_paint_event(void* self, void* e) {
    QAbstractButton_QBasePaintEvent((QAbstractButton*)self, (QPaintEvent*)e);
}

bool q_abstractbutton_hit_button(void* self, void* pos) {
    return QAbstractButton_HitButton((QAbstractButton*)self, (QPoint*)pos);
}

void q_abstractbutton_on_hit_button(void* self, bool (*slot)(void*, void*)) {
    QAbstractButton_OnHitButton((QAbstractButton*)self, (intptr_t)slot);
}

bool q_abstractbutton_qbase_hit_button(void* self, void* pos) {
    return QAbstractButton_QBaseHitButton((QAbstractButton*)self, (QPoint*)pos);
}

void q_abstractbutton_check_state_set(void* self) {
    QAbstractButton_CheckStateSet((QAbstractButton*)self);
}

void q_abstractbutton_on_check_state_set(void* self, void (*slot)()) {
    QAbstractButton_OnCheckStateSet((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_check_state_set(void* self) {
    QAbstractButton_QBaseCheckStateSet((QAbstractButton*)self);
}

void q_abstractbutton_next_check_state(void* self) {
    QAbstractButton_NextCheckState((QAbstractButton*)self);
}

void q_abstractbutton_on_next_check_state(void* self, void (*slot)()) {
    QAbstractButton_OnNextCheckState((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_next_check_state(void* self) {
    QAbstractButton_QBaseNextCheckState((QAbstractButton*)self);
}

bool q_abstractbutton_event(void* self, void* e) {
    return QAbstractButton_Event((QAbstractButton*)self, (QEvent*)e);
}

void q_abstractbutton_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractButton_OnEvent((QAbstractButton*)self, (intptr_t)slot);
}

bool q_abstractbutton_qbase_event(void* self, void* e) {
    return QAbstractButton_QBaseEvent((QAbstractButton*)self, (QEvent*)e);
}

void q_abstractbutton_key_press_event(void* self, void* e) {
    QAbstractButton_KeyPressEvent((QAbstractButton*)self, (QKeyEvent*)e);
}

void q_abstractbutton_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnKeyPressEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_key_press_event(void* self, void* e) {
    QAbstractButton_QBaseKeyPressEvent((QAbstractButton*)self, (QKeyEvent*)e);
}

void q_abstractbutton_key_release_event(void* self, void* e) {
    QAbstractButton_KeyReleaseEvent((QAbstractButton*)self, (QKeyEvent*)e);
}

void q_abstractbutton_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnKeyReleaseEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_key_release_event(void* self, void* e) {
    QAbstractButton_QBaseKeyReleaseEvent((QAbstractButton*)self, (QKeyEvent*)e);
}

void q_abstractbutton_mouse_press_event(void* self, void* e) {
    QAbstractButton_MousePressEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

void q_abstractbutton_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMousePressEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_mouse_press_event(void* self, void* e) {
    QAbstractButton_QBaseMousePressEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

void q_abstractbutton_mouse_release_event(void* self, void* e) {
    QAbstractButton_MouseReleaseEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

void q_abstractbutton_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMouseReleaseEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_mouse_release_event(void* self, void* e) {
    QAbstractButton_QBaseMouseReleaseEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

void q_abstractbutton_mouse_move_event(void* self, void* e) {
    QAbstractButton_MouseMoveEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

void q_abstractbutton_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMouseMoveEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_mouse_move_event(void* self, void* e) {
    QAbstractButton_QBaseMouseMoveEvent((QAbstractButton*)self, (QMouseEvent*)e);
}

void q_abstractbutton_focus_in_event(void* self, void* e) {
    QAbstractButton_FocusInEvent((QAbstractButton*)self, (QFocusEvent*)e);
}

void q_abstractbutton_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnFocusInEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_focus_in_event(void* self, void* e) {
    QAbstractButton_QBaseFocusInEvent((QAbstractButton*)self, (QFocusEvent*)e);
}

void q_abstractbutton_focus_out_event(void* self, void* e) {
    QAbstractButton_FocusOutEvent((QAbstractButton*)self, (QFocusEvent*)e);
}

void q_abstractbutton_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnFocusOutEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_focus_out_event(void* self, void* e) {
    QAbstractButton_QBaseFocusOutEvent((QAbstractButton*)self, (QFocusEvent*)e);
}

void q_abstractbutton_change_event(void* self, void* e) {
    QAbstractButton_ChangeEvent((QAbstractButton*)self, (QEvent*)e);
}

void q_abstractbutton_on_change_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnChangeEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_change_event(void* self, void* e) {
    QAbstractButton_QBaseChangeEvent((QAbstractButton*)self, (QEvent*)e);
}

void q_abstractbutton_timer_event(void* self, void* e) {
    QAbstractButton_TimerEvent((QAbstractButton*)self, (QTimerEvent*)e);
}

void q_abstractbutton_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnTimerEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_qbase_timer_event(void* self, void* e) {
    QAbstractButton_QBaseTimerEvent((QAbstractButton*)self, (QTimerEvent*)e);
}

const char* q_abstractbutton_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractButton_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractbutton_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractButton_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_clicked1(void* self, bool checked) {
    QAbstractButton_Clicked1((QAbstractButton*)self, checked);
}

void q_abstractbutton_on_clicked1(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_Connect_Clicked1((QAbstractButton*)self, (intptr_t)slot);
}

uintptr_t q_abstractbutton_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_abstractbutton_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_abstractbutton_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_abstractbutton_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_abstractbutton_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_abstractbutton_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_abstractbutton_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_abstractbutton_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_abstractbutton_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_abstractbutton_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_abstractbutton_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_abstractbutton_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_abstractbutton_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_abstractbutton_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_abstractbutton_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_abstractbutton_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_abstractbutton_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_abstractbutton_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_abstractbutton_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_abstractbutton_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_abstractbutton_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_abstractbutton_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_abstractbutton_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_abstractbutton_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_abstractbutton_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_abstractbutton_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_abstractbutton_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_abstractbutton_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_abstractbutton_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_abstractbutton_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_abstractbutton_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_abstractbutton_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_abstractbutton_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_abstractbutton_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_abstractbutton_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_abstractbutton_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_abstractbutton_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_abstractbutton_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_abstractbutton_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_abstractbutton_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_abstractbutton_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_abstractbutton_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_abstractbutton_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_abstractbutton_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_abstractbutton_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_abstractbutton_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_abstractbutton_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_abstractbutton_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_abstractbutton_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_abstractbutton_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_abstractbutton_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_abstractbutton_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_abstractbutton_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_abstractbutton_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractbutton_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractbutton_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractbutton_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractbutton_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractbutton_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractbutton_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractbutton_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractbutton_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_abstractbutton_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_abstractbutton_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_abstractbutton_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_abstractbutton_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_abstractbutton_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_abstractbutton_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_abstractbutton_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_abstractbutton_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_abstractbutton_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_abstractbutton_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_abstractbutton_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_abstractbutton_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_abstractbutton_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_abstractbutton_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_abstractbutton_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_abstractbutton_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_abstractbutton_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_abstractbutton_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_abstractbutton_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_abstractbutton_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_abstractbutton_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_abstractbutton_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_abstractbutton_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_abstractbutton_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_abstractbutton_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_abstractbutton_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_abstractbutton_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_abstractbutton_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_abstractbutton_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_abstractbutton_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_abstractbutton_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_abstractbutton_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_abstractbutton_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_abstractbutton_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_abstractbutton_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_abstractbutton_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_abstractbutton_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_abstractbutton_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractbutton_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_abstractbutton_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_abstractbutton_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_abstractbutton_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_abstractbutton_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_abstractbutton_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_abstractbutton_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_abstractbutton_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_abstractbutton_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_abstractbutton_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_abstractbutton_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_abstractbutton_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_abstractbutton_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_abstractbutton_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractbutton_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_abstractbutton_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_abstractbutton_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_abstractbutton_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_abstractbutton_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_abstractbutton_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_abstractbutton_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_abstractbutton_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_abstractbutton_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_abstractbutton_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_abstractbutton_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_abstractbutton_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_abstractbutton_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_abstractbutton_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_abstractbutton_set_focus2(void* self, int64_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int64_t q_abstractbutton_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_abstractbutton_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_abstractbutton_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_abstractbutton_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_abstractbutton_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_abstractbutton_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_abstractbutton_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_abstractbutton_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_abstractbutton_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_abstractbutton_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_abstractbutton_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_abstractbutton_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_abstractbutton_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_abstractbutton_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_abstractbutton_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_abstractbutton_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_abstractbutton_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_abstractbutton_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_abstractbutton_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_abstractbutton_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_abstractbutton_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_abstractbutton_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_abstractbutton_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_abstractbutton_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_abstractbutton_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_abstractbutton_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_abstractbutton_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_abstractbutton_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_abstractbutton_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_abstractbutton_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_abstractbutton_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_abstractbutton_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_abstractbutton_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_abstractbutton_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_abstractbutton_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_abstractbutton_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_abstractbutton_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_abstractbutton_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_abstractbutton_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_abstractbutton_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_abstractbutton_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_abstractbutton_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_abstractbutton_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_abstractbutton_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_abstractbutton_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_abstractbutton_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_abstractbutton_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_abstractbutton_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractbutton_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_abstractbutton_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_abstractbutton_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_abstractbutton_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_abstractbutton_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_abstractbutton_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_abstractbutton_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_abstractbutton_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_abstractbutton_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_abstractbutton_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_abstractbutton_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_abstractbutton_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_abstractbutton_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_abstractbutton_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_abstractbutton_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_abstractbutton_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_abstractbutton_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_abstractbutton_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_abstractbutton_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_abstractbutton_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_abstractbutton_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_abstractbutton_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_abstractbutton_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_abstractbutton_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_abstractbutton_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_abstractbutton_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_abstractbutton_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_abstractbutton_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_abstractbutton_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_abstractbutton_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_abstractbutton_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_abstractbutton_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_abstractbutton_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_abstractbutton_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_abstractbutton_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_abstractbutton_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_abstractbutton_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_abstractbutton_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_abstractbutton_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_abstractbutton_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_abstractbutton_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_abstractbutton_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_abstractbutton_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_abstractbutton_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_abstractbutton_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_abstractbutton_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_abstractbutton_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_abstractbutton_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_abstractbutton_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_abstractbutton_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_abstractbutton_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_abstractbutton_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_abstractbutton_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_abstractbutton_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_abstractbutton_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_abstractbutton_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_abstractbutton_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_abstractbutton_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_abstractbutton_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_abstractbutton_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_abstractbutton_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_abstractbutton_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_abstractbutton_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_abstractbutton_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_abstractbutton_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_abstractbutton_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_abstractbutton_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_abstractbutton_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_abstractbutton_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_abstractbutton_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_abstractbutton_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_abstractbutton_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_abstractbutton_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_abstractbutton_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_abstractbutton_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_abstractbutton_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_abstractbutton_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_abstractbutton_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_abstractbutton_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_abstractbutton_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_abstractbutton_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_abstractbutton_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_abstractbutton_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_abstractbutton_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_abstractbutton_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_abstractbutton_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_abstractbutton_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_abstractbutton_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractbutton_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractbutton_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractbutton_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractbutton_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractbutton_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractbutton_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractbutton_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_abstractbutton_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractbutton_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractbutton_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_abstractbutton_kill_timer2(void* self, int64_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_abstractbutton_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractbutton_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractbutton_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractbutton_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractbutton_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractbutton_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractbutton_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_abstractbutton_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractbutton_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractbutton_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractbutton_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractbutton_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

QBindingStorage* q_abstractbutton_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractbutton_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractbutton_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractbutton_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_abstractbutton_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstractbutton_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractbutton_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_abstractbutton_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_abstractbutton_start_timer22(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractbutton_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstractbutton_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstractbutton_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractbutton_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_abstractbutton_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_abstractbutton_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_abstractbutton_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_abstractbutton_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_abstractbutton_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_abstractbutton_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_abstractbutton_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_abstractbutton_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_abstractbutton_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_abstractbutton_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_abstractbutton_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_abstractbutton_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_abstractbutton_encode_metric_f(int64_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

int32_t q_abstractbutton_dev_type(void* self) {
    return QAbstractButton_DevType((QAbstractButton*)self);
}

int32_t q_abstractbutton_qbase_dev_type(void* self) {
    return QAbstractButton_QBaseDevType((QAbstractButton*)self);
}

void q_abstractbutton_on_dev_type(void* self, int32_t (*slot)()) {
    QAbstractButton_OnDevType((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_set_visible(void* self, bool visible) {
    QAbstractButton_SetVisible((QAbstractButton*)self, visible);
}

void q_abstractbutton_qbase_set_visible(void* self, bool visible) {
    QAbstractButton_QBaseSetVisible((QAbstractButton*)self, visible);
}

void q_abstractbutton_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QAbstractButton_OnSetVisible((QAbstractButton*)self, (intptr_t)slot);
}

QSize* q_abstractbutton_size_hint(void* self) {
    return QAbstractButton_SizeHint((QAbstractButton*)self);
}

QSize* q_abstractbutton_qbase_size_hint(void* self) {
    return QAbstractButton_QBaseSizeHint((QAbstractButton*)self);
}

void q_abstractbutton_on_size_hint(void* self, QSize* (*slot)()) {
    QAbstractButton_OnSizeHint((QAbstractButton*)self, (intptr_t)slot);
}

QSize* q_abstractbutton_minimum_size_hint(void* self) {
    return QAbstractButton_MinimumSizeHint((QAbstractButton*)self);
}

QSize* q_abstractbutton_qbase_minimum_size_hint(void* self) {
    return QAbstractButton_QBaseMinimumSizeHint((QAbstractButton*)self);
}

void q_abstractbutton_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QAbstractButton_OnMinimumSizeHint((QAbstractButton*)self, (intptr_t)slot);
}

int32_t q_abstractbutton_height_for_width(void* self, int param1) {
    return QAbstractButton_HeightForWidth((QAbstractButton*)self, param1);
}

int32_t q_abstractbutton_qbase_height_for_width(void* self, int param1) {
    return QAbstractButton_QBaseHeightForWidth((QAbstractButton*)self, param1);
}

void q_abstractbutton_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QAbstractButton_OnHeightForWidth((QAbstractButton*)self, (intptr_t)slot);
}

bool q_abstractbutton_has_height_for_width(void* self) {
    return QAbstractButton_HasHeightForWidth((QAbstractButton*)self);
}

bool q_abstractbutton_qbase_has_height_for_width(void* self) {
    return QAbstractButton_QBaseHasHeightForWidth((QAbstractButton*)self);
}

void q_abstractbutton_on_has_height_for_width(void* self, bool (*slot)()) {
    QAbstractButton_OnHasHeightForWidth((QAbstractButton*)self, (intptr_t)slot);
}

QPaintEngine* q_abstractbutton_paint_engine(void* self) {
    return QAbstractButton_PaintEngine((QAbstractButton*)self);
}

QPaintEngine* q_abstractbutton_qbase_paint_engine(void* self) {
    return QAbstractButton_QBasePaintEngine((QAbstractButton*)self);
}

void q_abstractbutton_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QAbstractButton_OnPaintEngine((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_mouse_double_click_event(void* self, void* event) {
    QAbstractButton_MouseDoubleClickEvent((QAbstractButton*)self, (QMouseEvent*)event);
}

void q_abstractbutton_qbase_mouse_double_click_event(void* self, void* event) {
    QAbstractButton_QBaseMouseDoubleClickEvent((QAbstractButton*)self, (QMouseEvent*)event);
}

void q_abstractbutton_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMouseDoubleClickEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_wheel_event(void* self, void* event) {
    QAbstractButton_WheelEvent((QAbstractButton*)self, (QWheelEvent*)event);
}

void q_abstractbutton_qbase_wheel_event(void* self, void* event) {
    QAbstractButton_QBaseWheelEvent((QAbstractButton*)self, (QWheelEvent*)event);
}

void q_abstractbutton_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnWheelEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_enter_event(void* self, void* event) {
    QAbstractButton_EnterEvent((QAbstractButton*)self, (QEnterEvent*)event);
}

void q_abstractbutton_qbase_enter_event(void* self, void* event) {
    QAbstractButton_QBaseEnterEvent((QAbstractButton*)self, (QEnterEvent*)event);
}

void q_abstractbutton_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnEnterEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_leave_event(void* self, void* event) {
    QAbstractButton_LeaveEvent((QAbstractButton*)self, (QEvent*)event);
}

void q_abstractbutton_qbase_leave_event(void* self, void* event) {
    QAbstractButton_QBaseLeaveEvent((QAbstractButton*)self, (QEvent*)event);
}

void q_abstractbutton_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnLeaveEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_move_event(void* self, void* event) {
    QAbstractButton_MoveEvent((QAbstractButton*)self, (QMoveEvent*)event);
}

void q_abstractbutton_qbase_move_event(void* self, void* event) {
    QAbstractButton_QBaseMoveEvent((QAbstractButton*)self, (QMoveEvent*)event);
}

void q_abstractbutton_on_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnMoveEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_resize_event(void* self, void* event) {
    QAbstractButton_ResizeEvent((QAbstractButton*)self, (QResizeEvent*)event);
}

void q_abstractbutton_qbase_resize_event(void* self, void* event) {
    QAbstractButton_QBaseResizeEvent((QAbstractButton*)self, (QResizeEvent*)event);
}

void q_abstractbutton_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnResizeEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_close_event(void* self, void* event) {
    QAbstractButton_CloseEvent((QAbstractButton*)self, (QCloseEvent*)event);
}

void q_abstractbutton_qbase_close_event(void* self, void* event) {
    QAbstractButton_QBaseCloseEvent((QAbstractButton*)self, (QCloseEvent*)event);
}

void q_abstractbutton_on_close_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnCloseEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_context_menu_event(void* self, void* event) {
    QAbstractButton_ContextMenuEvent((QAbstractButton*)self, (QContextMenuEvent*)event);
}

void q_abstractbutton_qbase_context_menu_event(void* self, void* event) {
    QAbstractButton_QBaseContextMenuEvent((QAbstractButton*)self, (QContextMenuEvent*)event);
}

void q_abstractbutton_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnContextMenuEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_tablet_event(void* self, void* event) {
    QAbstractButton_TabletEvent((QAbstractButton*)self, (QTabletEvent*)event);
}

void q_abstractbutton_qbase_tablet_event(void* self, void* event) {
    QAbstractButton_QBaseTabletEvent((QAbstractButton*)self, (QTabletEvent*)event);
}

void q_abstractbutton_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnTabletEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_action_event(void* self, void* event) {
    QAbstractButton_ActionEvent((QAbstractButton*)self, (QActionEvent*)event);
}

void q_abstractbutton_qbase_action_event(void* self, void* event) {
    QAbstractButton_QBaseActionEvent((QAbstractButton*)self, (QActionEvent*)event);
}

void q_abstractbutton_on_action_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnActionEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_drag_enter_event(void* self, void* event) {
    QAbstractButton_DragEnterEvent((QAbstractButton*)self, (QDragEnterEvent*)event);
}

void q_abstractbutton_qbase_drag_enter_event(void* self, void* event) {
    QAbstractButton_QBaseDragEnterEvent((QAbstractButton*)self, (QDragEnterEvent*)event);
}

void q_abstractbutton_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDragEnterEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_drag_move_event(void* self, void* event) {
    QAbstractButton_DragMoveEvent((QAbstractButton*)self, (QDragMoveEvent*)event);
}

void q_abstractbutton_qbase_drag_move_event(void* self, void* event) {
    QAbstractButton_QBaseDragMoveEvent((QAbstractButton*)self, (QDragMoveEvent*)event);
}

void q_abstractbutton_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDragMoveEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_drag_leave_event(void* self, void* event) {
    QAbstractButton_DragLeaveEvent((QAbstractButton*)self, (QDragLeaveEvent*)event);
}

void q_abstractbutton_qbase_drag_leave_event(void* self, void* event) {
    QAbstractButton_QBaseDragLeaveEvent((QAbstractButton*)self, (QDragLeaveEvent*)event);
}

void q_abstractbutton_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDragLeaveEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_drop_event(void* self, void* event) {
    QAbstractButton_DropEvent((QAbstractButton*)self, (QDropEvent*)event);
}

void q_abstractbutton_qbase_drop_event(void* self, void* event) {
    QAbstractButton_QBaseDropEvent((QAbstractButton*)self, (QDropEvent*)event);
}

void q_abstractbutton_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDropEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_show_event(void* self, void* event) {
    QAbstractButton_ShowEvent((QAbstractButton*)self, (QShowEvent*)event);
}

void q_abstractbutton_qbase_show_event(void* self, void* event) {
    QAbstractButton_QBaseShowEvent((QAbstractButton*)self, (QShowEvent*)event);
}

void q_abstractbutton_on_show_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnShowEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_hide_event(void* self, void* event) {
    QAbstractButton_HideEvent((QAbstractButton*)self, (QHideEvent*)event);
}

void q_abstractbutton_qbase_hide_event(void* self, void* event) {
    QAbstractButton_QBaseHideEvent((QAbstractButton*)self, (QHideEvent*)event);
}

void q_abstractbutton_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnHideEvent((QAbstractButton*)self, (intptr_t)slot);
}

bool q_abstractbutton_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractButton_NativeEvent((QAbstractButton*)self, qstring(eventType), message, result);
}

bool q_abstractbutton_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractButton_QBaseNativeEvent((QAbstractButton*)self, qstring(eventType), message, result);
}

void q_abstractbutton_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QAbstractButton_OnNativeEvent((QAbstractButton*)self, (intptr_t)slot);
}

int32_t q_abstractbutton_metric(void* self, int64_t param1) {
    return QAbstractButton_Metric((QAbstractButton*)self, param1);
}

int32_t q_abstractbutton_qbase_metric(void* self, int64_t param1) {
    return QAbstractButton_QBaseMetric((QAbstractButton*)self, param1);
}

void q_abstractbutton_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QAbstractButton_OnMetric((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_init_painter(void* self, void* painter) {
    QAbstractButton_InitPainter((QAbstractButton*)self, (QPainter*)painter);
}

void q_abstractbutton_qbase_init_painter(void* self, void* painter) {
    QAbstractButton_QBaseInitPainter((QAbstractButton*)self, (QPainter*)painter);
}

void q_abstractbutton_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnInitPainter((QAbstractButton*)self, (intptr_t)slot);
}

QPaintDevice* q_abstractbutton_redirected(void* self, void* offset) {
    return QAbstractButton_Redirected((QAbstractButton*)self, (QPoint*)offset);
}

QPaintDevice* q_abstractbutton_qbase_redirected(void* self, void* offset) {
    return QAbstractButton_QBaseRedirected((QAbstractButton*)self, (QPoint*)offset);
}

void q_abstractbutton_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QAbstractButton_OnRedirected((QAbstractButton*)self, (intptr_t)slot);
}

QPainter* q_abstractbutton_shared_painter(void* self) {
    return QAbstractButton_SharedPainter((QAbstractButton*)self);
}

QPainter* q_abstractbutton_qbase_shared_painter(void* self) {
    return QAbstractButton_QBaseSharedPainter((QAbstractButton*)self);
}

void q_abstractbutton_on_shared_painter(void* self, QPainter* (*slot)()) {
    QAbstractButton_OnSharedPainter((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_input_method_event(void* self, void* param1) {
    QAbstractButton_InputMethodEvent((QAbstractButton*)self, (QInputMethodEvent*)param1);
}

void q_abstractbutton_qbase_input_method_event(void* self, void* param1) {
    QAbstractButton_QBaseInputMethodEvent((QAbstractButton*)self, (QInputMethodEvent*)param1);
}

void q_abstractbutton_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnInputMethodEvent((QAbstractButton*)self, (intptr_t)slot);
}

QVariant* q_abstractbutton_input_method_query(void* self, int64_t param1) {
    return QAbstractButton_InputMethodQuery((QAbstractButton*)self, param1);
}

QVariant* q_abstractbutton_qbase_input_method_query(void* self, int64_t param1) {
    return QAbstractButton_QBaseInputMethodQuery((QAbstractButton*)self, param1);
}

void q_abstractbutton_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QAbstractButton_OnInputMethodQuery((QAbstractButton*)self, (intptr_t)slot);
}

bool q_abstractbutton_focus_next_prev_child(void* self, bool next) {
    return QAbstractButton_FocusNextPrevChild((QAbstractButton*)self, next);
}

bool q_abstractbutton_qbase_focus_next_prev_child(void* self, bool next) {
    return QAbstractButton_QBaseFocusNextPrevChild((QAbstractButton*)self, next);
}

void q_abstractbutton_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QAbstractButton_OnFocusNextPrevChild((QAbstractButton*)self, (intptr_t)slot);
}

bool q_abstractbutton_event_filter(void* self, void* watched, void* event) {
    return QAbstractButton_EventFilter((QAbstractButton*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractbutton_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractButton_QBaseEventFilter((QAbstractButton*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractbutton_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractButton_OnEventFilter((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_child_event(void* self, void* event) {
    QAbstractButton_ChildEvent((QAbstractButton*)self, (QChildEvent*)event);
}

void q_abstractbutton_qbase_child_event(void* self, void* event) {
    QAbstractButton_QBaseChildEvent((QAbstractButton*)self, (QChildEvent*)event);
}

void q_abstractbutton_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnChildEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_custom_event(void* self, void* event) {
    QAbstractButton_CustomEvent((QAbstractButton*)self, (QEvent*)event);
}

void q_abstractbutton_qbase_custom_event(void* self, void* event) {
    QAbstractButton_QBaseCustomEvent((QAbstractButton*)self, (QEvent*)event);
}

void q_abstractbutton_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnCustomEvent((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_connect_notify(void* self, void* signal) {
    QAbstractButton_ConnectNotify((QAbstractButton*)self, (QMetaMethod*)signal);
}

void q_abstractbutton_qbase_connect_notify(void* self, void* signal) {
    QAbstractButton_QBaseConnectNotify((QAbstractButton*)self, (QMetaMethod*)signal);
}

void q_abstractbutton_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnConnectNotify((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_disconnect_notify(void* self, void* signal) {
    QAbstractButton_DisconnectNotify((QAbstractButton*)self, (QMetaMethod*)signal);
}

void q_abstractbutton_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractButton_QBaseDisconnectNotify((QAbstractButton*)self, (QMetaMethod*)signal);
}

void q_abstractbutton_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractButton_OnDisconnectNotify((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_update_micro_focus(void* self) {
    QAbstractButton_UpdateMicroFocus((QAbstractButton*)self);
}

void q_abstractbutton_qbase_update_micro_focus(void* self) {
    QAbstractButton_QBaseUpdateMicroFocus((QAbstractButton*)self);
}

void q_abstractbutton_on_update_micro_focus(void* self, void (*slot)()) {
    QAbstractButton_OnUpdateMicroFocus((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_create(void* self) {
    QAbstractButton_Create((QAbstractButton*)self);
}

void q_abstractbutton_qbase_create(void* self) {
    QAbstractButton_QBaseCreate((QAbstractButton*)self);
}

void q_abstractbutton_on_create(void* self, void (*slot)()) {
    QAbstractButton_OnCreate((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_destroy(void* self) {
    QAbstractButton_Destroy((QAbstractButton*)self);
}

void q_abstractbutton_qbase_destroy(void* self) {
    QAbstractButton_QBaseDestroy((QAbstractButton*)self);
}

void q_abstractbutton_on_destroy(void* self, void (*slot)()) {
    QAbstractButton_OnDestroy((QAbstractButton*)self, (intptr_t)slot);
}

bool q_abstractbutton_focus_next_child(void* self) {
    return QAbstractButton_FocusNextChild((QAbstractButton*)self);
}

bool q_abstractbutton_qbase_focus_next_child(void* self) {
    return QAbstractButton_QBaseFocusNextChild((QAbstractButton*)self);
}

void q_abstractbutton_on_focus_next_child(void* self, bool (*slot)()) {
    QAbstractButton_OnFocusNextChild((QAbstractButton*)self, (intptr_t)slot);
}

bool q_abstractbutton_focus_previous_child(void* self) {
    return QAbstractButton_FocusPreviousChild((QAbstractButton*)self);
}

bool q_abstractbutton_qbase_focus_previous_child(void* self) {
    return QAbstractButton_QBaseFocusPreviousChild((QAbstractButton*)self);
}

void q_abstractbutton_on_focus_previous_child(void* self, bool (*slot)()) {
    QAbstractButton_OnFocusPreviousChild((QAbstractButton*)self, (intptr_t)slot);
}

QObject* q_abstractbutton_sender(void* self) {
    return QAbstractButton_Sender((QAbstractButton*)self);
}

QObject* q_abstractbutton_qbase_sender(void* self) {
    return QAbstractButton_QBaseSender((QAbstractButton*)self);
}

void q_abstractbutton_on_sender(void* self, QObject* (*slot)()) {
    QAbstractButton_OnSender((QAbstractButton*)self, (intptr_t)slot);
}

int32_t q_abstractbutton_sender_signal_index(void* self) {
    return QAbstractButton_SenderSignalIndex((QAbstractButton*)self);
}

int32_t q_abstractbutton_qbase_sender_signal_index(void* self) {
    return QAbstractButton_QBaseSenderSignalIndex((QAbstractButton*)self);
}

void q_abstractbutton_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractButton_OnSenderSignalIndex((QAbstractButton*)self, (intptr_t)slot);
}

int32_t q_abstractbutton_receivers(void* self, const char* signal) {
    return QAbstractButton_Receivers((QAbstractButton*)self, signal);
}

int32_t q_abstractbutton_qbase_receivers(void* self, const char* signal) {
    return QAbstractButton_QBaseReceivers((QAbstractButton*)self, signal);
}

void q_abstractbutton_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractButton_OnReceivers((QAbstractButton*)self, (intptr_t)slot);
}

bool q_abstractbutton_is_signal_connected(void* self, void* signal) {
    return QAbstractButton_IsSignalConnected((QAbstractButton*)self, (QMetaMethod*)signal);
}

bool q_abstractbutton_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractButton_QBaseIsSignalConnected((QAbstractButton*)self, (QMetaMethod*)signal);
}

void q_abstractbutton_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractButton_OnIsSignalConnected((QAbstractButton*)self, (intptr_t)slot);
}

double q_abstractbutton_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QAbstractButton_GetDecodedMetricF((QAbstractButton*)self, metricA, metricB);
}

double q_abstractbutton_qbase_get_decoded_metric_f(void* self, int64_t metricA, int64_t metricB) {
    return QAbstractButton_QBaseGetDecodedMetricF((QAbstractButton*)self, metricA, metricB);
}

void q_abstractbutton_on_get_decoded_metric_f(void* self, double (*slot)(void*, int64_t, int64_t)) {
    QAbstractButton_OnGetDecodedMetricF((QAbstractButton*)self, (intptr_t)slot);
}

void q_abstractbutton_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_abstractbutton_delete(void* self) {
    QAbstractButton_Delete((QAbstractButton*)(self));
}
