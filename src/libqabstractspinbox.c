#include "libqevent.hpp"
#include "libqlineedit.hpp"
#include "libqmetaobject.hpp"
#include "libqobject.hpp"
#include "libqpaintdevice.hpp"
#include "libqpaintengine.hpp"
#include "libqpainter.hpp"
#include "libqpoint.hpp"
#include "libqsize.hpp"
#include <string.h>
#include "libqstyleoption.hpp"
#include "libqvariant.hpp"
#include "libqwidget.hpp"
#include "libqcoreevent.hpp"
#include "libqabstractspinbox.hpp"
#include "libqabstractspinbox.h"

QAbstractSpinBox* q_abstractspinbox_new(void* parent) {
    return QAbstractSpinBox_new((QWidget*)parent);
}

QAbstractSpinBox* q_abstractspinbox_new2() {
    return QAbstractSpinBox_new2();
}

const QMetaObject* q_abstractspinbox_meta_object(void* self) {
    return QAbstractSpinBox_MetaObject((QAbstractSpinBox*)self);
}

void* q_abstractspinbox_metacast(void* self, const char* param1) {
    return QAbstractSpinBox_Metacast((QAbstractSpinBox*)self, param1);
}

int32_t q_abstractspinbox_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractSpinBox_Metacall((QAbstractSpinBox*)self, param1, param2, param3);
}

void q_abstractspinbox_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QAbstractSpinBox_OnMetacall((QAbstractSpinBox*)self, (intptr_t)slot);
}

int32_t q_abstractspinbox_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QAbstractSpinBox_QBaseMetacall((QAbstractSpinBox*)self, param1, param2, param3);
}

const char* q_abstractspinbox_tr(const char* s) {
    libqt_string _str = QAbstractSpinBox_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_abstractspinbox_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

void q_abstractspinbox_set_button_symbols(void* self, int64_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

void q_abstractspinbox_set_correction_mode(void* self, int64_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

int64_t q_abstractspinbox_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

bool q_abstractspinbox_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

const char* q_abstractspinbox_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractspinbox_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

bool q_abstractspinbox_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

void q_abstractspinbox_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

void q_abstractspinbox_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

bool q_abstractspinbox_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

void q_abstractspinbox_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

bool q_abstractspinbox_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

void q_abstractspinbox_set_alignment(void* self, int64_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

int64_t q_abstractspinbox_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

void q_abstractspinbox_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

bool q_abstractspinbox_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

void q_abstractspinbox_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

bool q_abstractspinbox_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

void q_abstractspinbox_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

bool q_abstractspinbox_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

QSize* q_abstractspinbox_size_hint(void* self) {
    return QAbstractSpinBox_SizeHint((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_size_hint(void* self, QSize* (*slot)()) {
    QAbstractSpinBox_OnSizeHint((QAbstractSpinBox*)self, (intptr_t)slot);
}

QSize* q_abstractspinbox_qbase_size_hint(void* self) {
    return QAbstractSpinBox_QBaseSizeHint((QAbstractSpinBox*)self);
}

QSize* q_abstractspinbox_minimum_size_hint(void* self) {
    return QAbstractSpinBox_MinimumSizeHint((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_minimum_size_hint(void* self, QSize* (*slot)()) {
    QAbstractSpinBox_OnMinimumSizeHint((QAbstractSpinBox*)self, (intptr_t)slot);
}

QSize* q_abstractspinbox_qbase_minimum_size_hint(void* self) {
    return QAbstractSpinBox_QBaseMinimumSizeHint((QAbstractSpinBox*)self);
}

void q_abstractspinbox_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

bool q_abstractspinbox_event(void* self, void* event) {
    return QAbstractSpinBox_Event((QAbstractSpinBox*)self, (QEvent*)event);
}

void q_abstractspinbox_on_event(void* self, bool (*slot)(void*, void*)) {
    QAbstractSpinBox_OnEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

bool q_abstractspinbox_qbase_event(void* self, void* event) {
    return QAbstractSpinBox_QBaseEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

QVariant* q_abstractspinbox_input_method_query(void* self, int64_t param1) {
    return QAbstractSpinBox_InputMethodQuery((QAbstractSpinBox*)self, param1);
}

void q_abstractspinbox_on_input_method_query(void* self, QVariant* (*slot)(void*, int64_t)) {
    QAbstractSpinBox_OnInputMethodQuery((QAbstractSpinBox*)self, (intptr_t)slot);
}

QVariant* q_abstractspinbox_qbase_input_method_query(void* self, int64_t param1) {
    return QAbstractSpinBox_QBaseInputMethodQuery((QAbstractSpinBox*)self, param1);
}

int64_t q_abstractspinbox_validate(void* self, const char* input, int* pos) {
    return QAbstractSpinBox_Validate((QAbstractSpinBox*)self, qstring(input), pos);
}

void q_abstractspinbox_on_validate(void* self, int64_t (*slot)(void*, const char*, int*)) {
    QAbstractSpinBox_OnValidate((QAbstractSpinBox*)self, (intptr_t)slot);
}

int64_t q_abstractspinbox_qbase_validate(void* self, const char* input, int* pos) {
    return QAbstractSpinBox_QBaseValidate((QAbstractSpinBox*)self, qstring(input), pos);
}

void q_abstractspinbox_fixup(void* self, const char* input) {
    QAbstractSpinBox_Fixup((QAbstractSpinBox*)self, qstring(input));
}

void q_abstractspinbox_on_fixup(void* self, void (*slot)(void*, const char*)) {
    QAbstractSpinBox_OnFixup((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_fixup(void* self, const char* input) {
    QAbstractSpinBox_QBaseFixup((QAbstractSpinBox*)self, qstring(input));
}

void q_abstractspinbox_step_by(void* self, int steps) {
    QAbstractSpinBox_StepBy((QAbstractSpinBox*)self, steps);
}

void q_abstractspinbox_on_step_by(void* self, void (*slot)(void*, int)) {
    QAbstractSpinBox_OnStepBy((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_step_by(void* self, int steps) {
    QAbstractSpinBox_QBaseStepBy((QAbstractSpinBox*)self, steps);
}

void q_abstractspinbox_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

void q_abstractspinbox_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

void q_abstractspinbox_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

void q_abstractspinbox_clear(void* self) {
    QAbstractSpinBox_Clear((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_clear(void* self, void (*slot)()) {
    QAbstractSpinBox_OnClear((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_clear(void* self) {
    QAbstractSpinBox_QBaseClear((QAbstractSpinBox*)self);
}

void q_abstractspinbox_resize_event(void* self, void* event) {
    QAbstractSpinBox_ResizeEvent((QAbstractSpinBox*)self, (QResizeEvent*)event);
}

void q_abstractspinbox_on_resize_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnResizeEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_resize_event(void* self, void* event) {
    QAbstractSpinBox_QBaseResizeEvent((QAbstractSpinBox*)self, (QResizeEvent*)event);
}

void q_abstractspinbox_key_press_event(void* self, void* event) {
    QAbstractSpinBox_KeyPressEvent((QAbstractSpinBox*)self, (QKeyEvent*)event);
}

void q_abstractspinbox_on_key_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnKeyPressEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_key_press_event(void* self, void* event) {
    QAbstractSpinBox_QBaseKeyPressEvent((QAbstractSpinBox*)self, (QKeyEvent*)event);
}

void q_abstractspinbox_key_release_event(void* self, void* event) {
    QAbstractSpinBox_KeyReleaseEvent((QAbstractSpinBox*)self, (QKeyEvent*)event);
}

void q_abstractspinbox_on_key_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnKeyReleaseEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_key_release_event(void* self, void* event) {
    QAbstractSpinBox_QBaseKeyReleaseEvent((QAbstractSpinBox*)self, (QKeyEvent*)event);
}

void q_abstractspinbox_wheel_event(void* self, void* event) {
    QAbstractSpinBox_WheelEvent((QAbstractSpinBox*)self, (QWheelEvent*)event);
}

void q_abstractspinbox_on_wheel_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnWheelEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_wheel_event(void* self, void* event) {
    QAbstractSpinBox_QBaseWheelEvent((QAbstractSpinBox*)self, (QWheelEvent*)event);
}

void q_abstractspinbox_focus_in_event(void* self, void* event) {
    QAbstractSpinBox_FocusInEvent((QAbstractSpinBox*)self, (QFocusEvent*)event);
}

void q_abstractspinbox_on_focus_in_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnFocusInEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_focus_in_event(void* self, void* event) {
    QAbstractSpinBox_QBaseFocusInEvent((QAbstractSpinBox*)self, (QFocusEvent*)event);
}

void q_abstractspinbox_focus_out_event(void* self, void* event) {
    QAbstractSpinBox_FocusOutEvent((QAbstractSpinBox*)self, (QFocusEvent*)event);
}

void q_abstractspinbox_on_focus_out_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnFocusOutEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_focus_out_event(void* self, void* event) {
    QAbstractSpinBox_QBaseFocusOutEvent((QAbstractSpinBox*)self, (QFocusEvent*)event);
}

void q_abstractspinbox_context_menu_event(void* self, void* event) {
    QAbstractSpinBox_ContextMenuEvent((QAbstractSpinBox*)self, (QContextMenuEvent*)event);
}

void q_abstractspinbox_on_context_menu_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnContextMenuEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_context_menu_event(void* self, void* event) {
    QAbstractSpinBox_QBaseContextMenuEvent((QAbstractSpinBox*)self, (QContextMenuEvent*)event);
}

void q_abstractspinbox_change_event(void* self, void* event) {
    QAbstractSpinBox_ChangeEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

void q_abstractspinbox_on_change_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnChangeEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_change_event(void* self, void* event) {
    QAbstractSpinBox_QBaseChangeEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

void q_abstractspinbox_close_event(void* self, void* event) {
    QAbstractSpinBox_CloseEvent((QAbstractSpinBox*)self, (QCloseEvent*)event);
}

void q_abstractspinbox_on_close_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnCloseEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_close_event(void* self, void* event) {
    QAbstractSpinBox_QBaseCloseEvent((QAbstractSpinBox*)self, (QCloseEvent*)event);
}

void q_abstractspinbox_hide_event(void* self, void* event) {
    QAbstractSpinBox_HideEvent((QAbstractSpinBox*)self, (QHideEvent*)event);
}

void q_abstractspinbox_on_hide_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnHideEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_hide_event(void* self, void* event) {
    QAbstractSpinBox_QBaseHideEvent((QAbstractSpinBox*)self, (QHideEvent*)event);
}

void q_abstractspinbox_mouse_press_event(void* self, void* event) {
    QAbstractSpinBox_MousePressEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

void q_abstractspinbox_on_mouse_press_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMousePressEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_mouse_press_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMousePressEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

void q_abstractspinbox_mouse_release_event(void* self, void* event) {
    QAbstractSpinBox_MouseReleaseEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

void q_abstractspinbox_on_mouse_release_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMouseReleaseEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_mouse_release_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMouseReleaseEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

void q_abstractspinbox_mouse_move_event(void* self, void* event) {
    QAbstractSpinBox_MouseMoveEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

void q_abstractspinbox_on_mouse_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMouseMoveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_mouse_move_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMouseMoveEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

void q_abstractspinbox_timer_event(void* self, void* event) {
    QAbstractSpinBox_TimerEvent((QAbstractSpinBox*)self, (QTimerEvent*)event);
}

void q_abstractspinbox_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnTimerEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_timer_event(void* self, void* event) {
    QAbstractSpinBox_QBaseTimerEvent((QAbstractSpinBox*)self, (QTimerEvent*)event);
}

void q_abstractspinbox_paint_event(void* self, void* event) {
    QAbstractSpinBox_PaintEvent((QAbstractSpinBox*)self, (QPaintEvent*)event);
}

void q_abstractspinbox_on_paint_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnPaintEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_paint_event(void* self, void* event) {
    QAbstractSpinBox_QBasePaintEvent((QAbstractSpinBox*)self, (QPaintEvent*)event);
}

void q_abstractspinbox_show_event(void* self, void* event) {
    QAbstractSpinBox_ShowEvent((QAbstractSpinBox*)self, (QShowEvent*)event);
}

void q_abstractspinbox_on_show_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnShowEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_show_event(void* self, void* event) {
    QAbstractSpinBox_QBaseShowEvent((QAbstractSpinBox*)self, (QShowEvent*)event);
}

void q_abstractspinbox_init_style_option(void* self, void* option) {
    QAbstractSpinBox_InitStyleOption((QAbstractSpinBox*)self, (QStyleOptionSpinBox*)option);
}

void q_abstractspinbox_on_init_style_option(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnInitStyleOption((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_init_style_option(void* self, void* option) {
    QAbstractSpinBox_QBaseInitStyleOption((QAbstractSpinBox*)self, (QStyleOptionSpinBox*)option);
}

QLineEdit* q_abstractspinbox_line_edit(void* self) {
    return QAbstractSpinBox_LineEdit((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_line_edit(void* self, QLineEdit* (*slot)()) {
    QAbstractSpinBox_OnLineEdit((QAbstractSpinBox*)self, (intptr_t)slot);
}

QLineEdit* q_abstractspinbox_qbase_line_edit(void* self) {
    return QAbstractSpinBox_QBaseLineEdit((QAbstractSpinBox*)self);
}

void q_abstractspinbox_set_line_edit(void* self, void* edit) {
    QAbstractSpinBox_SetLineEdit((QAbstractSpinBox*)self, (QLineEdit*)edit);
}

void q_abstractspinbox_on_set_line_edit(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnSetLineEdit((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_qbase_set_line_edit(void* self, void* edit) {
    QAbstractSpinBox_QBaseSetLineEdit((QAbstractSpinBox*)self, (QLineEdit*)edit);
}

int64_t q_abstractspinbox_step_enabled(void* self) {
    return QAbstractSpinBox_StepEnabled((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_step_enabled(void* self, int64_t (*slot)()) {
    QAbstractSpinBox_OnStepEnabled((QAbstractSpinBox*)self, (intptr_t)slot);
}

int64_t q_abstractspinbox_qbase_step_enabled(void* self) {
    return QAbstractSpinBox_QBaseStepEnabled((QAbstractSpinBox*)self);
}

void q_abstractspinbox_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_editing_finished(void* self, void (*slot)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)slot);
}

const char* q_abstractspinbox_tr2(const char* s, const char* c) {
    libqt_string _str = QAbstractSpinBox_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractspinbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QAbstractSpinBox_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

uintptr_t q_abstractspinbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_abstractspinbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_abstractspinbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_abstractspinbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_abstractspinbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_abstractspinbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_abstractspinbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_abstractspinbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_abstractspinbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int64_t q_abstractspinbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_abstractspinbox_set_window_modality(void* self, int64_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_abstractspinbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_abstractspinbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_abstractspinbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_abstractspinbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_abstractspinbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_abstractspinbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_abstractspinbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_abstractspinbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_abstractspinbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_abstractspinbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_abstractspinbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_abstractspinbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_abstractspinbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_abstractspinbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_abstractspinbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_abstractspinbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_abstractspinbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_abstractspinbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_abstractspinbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_abstractspinbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_abstractspinbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_abstractspinbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_abstractspinbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_abstractspinbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_abstractspinbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_abstractspinbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_abstractspinbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_abstractspinbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_abstractspinbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_abstractspinbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_abstractspinbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_abstractspinbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_abstractspinbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_abstractspinbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_abstractspinbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_abstractspinbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_abstractspinbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_abstractspinbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_abstractspinbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_abstractspinbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_abstractspinbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_abstractspinbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_abstractspinbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractspinbox_map_to_global_with_q_point(void* self, void* param1) {
    return QWidget_MapToGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractspinbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractspinbox_map_from_global_with_q_point(void* self, void* param1) {
    return QWidget_MapFromGlobalWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractspinbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractspinbox_map_to_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapToParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractspinbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_abstractspinbox_map_from_parent_with_q_point(void* self, void* param1) {
    return QWidget_MapFromParentWithQPoint((QWidget*)self, (QPoint*)param1);
}

QPointF* q_abstractspinbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_abstractspinbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_abstractspinbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_abstractspinbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_abstractspinbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_abstractspinbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_abstractspinbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_abstractspinbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_abstractspinbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_abstractspinbox_set_background_role(void* self, int64_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int64_t q_abstractspinbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_abstractspinbox_set_foreground_role(void* self, int64_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int64_t q_abstractspinbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_abstractspinbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_abstractspinbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_abstractspinbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_abstractspinbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_abstractspinbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_abstractspinbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_abstractspinbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_abstractspinbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_abstractspinbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_abstractspinbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_abstractspinbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_abstractspinbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_abstractspinbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_abstractspinbox_set_mask_with_mask(void* self, void* mask) {
    QWidget_SetMaskWithMask((QWidget*)self, (QRegion*)mask);
}

QRegion* q_abstractspinbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_abstractspinbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_abstractspinbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_abstractspinbox_render_with_painter(void* self, void* painter) {
    QWidget_RenderWithPainter((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_abstractspinbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_abstractspinbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_abstractspinbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_abstractspinbox_grab_gesture(void* self, int64_t typeVal) {
    QWidget_GrabGesture((QWidget*)self, typeVal);
}

void q_abstractspinbox_ungrab_gesture(void* self, int64_t typeVal) {
    QWidget_UngrabGesture((QWidget*)self, typeVal);
}

void q_abstractspinbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_abstractspinbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_abstractspinbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractspinbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_abstractspinbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_abstractspinbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_abstractspinbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_abstractspinbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_abstractspinbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_abstractspinbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_abstractspinbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_abstractspinbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_abstractspinbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_abstractspinbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_abstractspinbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_abstractspinbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_abstractspinbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_abstractspinbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_abstractspinbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_abstractspinbox_set_layout_direction(void* self, int64_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int64_t q_abstractspinbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_abstractspinbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_abstractspinbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_abstractspinbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_abstractspinbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_abstractspinbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_abstractspinbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_abstractspinbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_abstractspinbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_abstractspinbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_abstractspinbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_abstractspinbox_set_focus_with_reason(void* self, int64_t reason) {
    QWidget_SetFocusWithReason((QWidget*)self, reason);
}

int64_t q_abstractspinbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_abstractspinbox_set_focus_policy(void* self, int64_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_abstractspinbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_abstractspinbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_abstractspinbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_abstractspinbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int64_t q_abstractspinbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_abstractspinbox_set_context_menu_policy(void* self, int64_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_abstractspinbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_abstractspinbox_grab_mouse_with_q_cursor(void* self, void* param1) {
    QWidget_GrabMouseWithQCursor((QWidget*)self, (QCursor*)param1);
}

void q_abstractspinbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_abstractspinbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_abstractspinbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_abstractspinbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_abstractspinbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_abstractspinbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_abstractspinbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_abstractspinbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_abstractspinbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_abstractspinbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_abstractspinbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_abstractspinbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_abstractspinbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_abstractspinbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_abstractspinbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_abstractspinbox_update_with_q_rect(void* self, void* param1) {
    QWidget_UpdateWithQRect((QWidget*)self, (QRect*)param1);
}

void q_abstractspinbox_update_with_q_region(void* self, void* param1) {
    QWidget_UpdateWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_abstractspinbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_abstractspinbox_repaint_with_q_rect(void* self, void* param1) {
    QWidget_RepaintWithQRect((QWidget*)self, (QRect*)param1);
}

void q_abstractspinbox_repaint_with_q_region(void* self, void* param1) {
    QWidget_RepaintWithQRegion((QWidget*)self, (QRegion*)param1);
}

void q_abstractspinbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_abstractspinbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_abstractspinbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_abstractspinbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_abstractspinbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_abstractspinbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_abstractspinbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_abstractspinbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_abstractspinbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_abstractspinbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_abstractspinbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_abstractspinbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_abstractspinbox_move_with_q_point(void* self, void* param1) {
    QWidget_MoveWithQPoint((QWidget*)self, (QPoint*)param1);
}

void q_abstractspinbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_abstractspinbox_resize_with_q_size(void* self, void* param1) {
    QWidget_ResizeWithQSize((QWidget*)self, (QSize*)param1);
}

void q_abstractspinbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_abstractspinbox_set_geometry_with_geometry(void* self, void* geometry) {
    QWidget_SetGeometryWithGeometry((QWidget*)self, (QRect*)geometry);
}

char* q_abstractspinbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_abstractspinbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_abstractspinbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_abstractspinbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_abstractspinbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_abstractspinbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_abstractspinbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_abstractspinbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_abstractspinbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int64_t q_abstractspinbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_abstractspinbox_set_window_state(void* self, int64_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_abstractspinbox_override_window_state(void* self, int64_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_abstractspinbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_abstractspinbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_abstractspinbox_set_size_policy2(void* self, int64_t horizontal, int64_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_abstractspinbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_abstractspinbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_abstractspinbox_set_contents_margins_with_margins(void* self, void* margins) {
    QWidget_SetContentsMarginsWithMargins((QWidget*)self, (QMargins*)margins);
}

QMargins* q_abstractspinbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_abstractspinbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_abstractspinbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_abstractspinbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_abstractspinbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_abstractspinbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_abstractspinbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_abstractspinbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_abstractspinbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_abstractspinbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_abstractspinbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_abstractspinbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_abstractspinbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_abstractspinbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_abstractspinbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_abstractspinbox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_abstractspinbox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_abstractspinbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_abstractspinbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_abstractspinbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_abstractspinbox_add_action_with_text(void* self, const char* text) {
    return QWidget_AddActionWithText((QWidget*)self, qstring(text));
}

QAction* q_abstractspinbox_add_action2(void* self, void* icon, const char* text) {
    return QWidget_AddAction2((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_abstractspinbox_add_action3(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction3((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_abstractspinbox_add_action4(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_abstractspinbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_abstractspinbox_set_window_flags(void* self, int64_t typeVal) {
    QWidget_SetWindowFlags((QWidget*)self, typeVal);
}

int64_t q_abstractspinbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_abstractspinbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_abstractspinbox_override_window_flags(void* self, int64_t typeVal) {
    QWidget_OverrideWindowFlags((QWidget*)self, typeVal);
}

int64_t q_abstractspinbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_abstractspinbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_abstractspinbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_abstractspinbox_child_at_with_q_point(void* self, void* p) {
    return QWidget_ChildAtWithQPoint((QWidget*)self, (QPoint*)p);
}

void q_abstractspinbox_set_attribute(void* self, int64_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_abstractspinbox_test_attribute(void* self, int64_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_abstractspinbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_abstractspinbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_abstractspinbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_abstractspinbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_abstractspinbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_abstractspinbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_abstractspinbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_abstractspinbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_abstractspinbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_abstractspinbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_abstractspinbox_on_window_title_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)slot);
}

void q_abstractspinbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_abstractspinbox_on_window_icon_changed(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)slot);
}

void q_abstractspinbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_abstractspinbox_on_window_icon_text_changed(void* self, void (*slot)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)slot);
}

void q_abstractspinbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_abstractspinbox_on_custom_context_menu_requested(void* self, void (*slot)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)slot);
}

int64_t q_abstractspinbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_abstractspinbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_abstractspinbox_render2(void* self, void* target, void* targetOffset) {
    QWidget_Render2((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_abstractspinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_abstractspinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_abstractspinbox_render22(void* self, void* painter, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_abstractspinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_abstractspinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int64_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_abstractspinbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_abstractspinbox_grab_gesture2(void* self, int64_t typeVal, int64_t flags) {
    QWidget_GrabGesture2((QWidget*)self, typeVal, flags);
}

int32_t q_abstractspinbox_grab_shortcut2(void* self, void* key, int64_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_abstractspinbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_abstractspinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_abstractspinbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_abstractspinbox_set_attribute2(void* self, int64_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_abstractspinbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_abstractspinbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_abstractspinbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_abstractspinbox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_abstractspinbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_abstractspinbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_abstractspinbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_abstractspinbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_abstractspinbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_abstractspinbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_abstractspinbox_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_abstractspinbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_abstractspinbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

const libqt_list /* of QObject* */ q_abstractspinbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_abstractspinbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_abstractspinbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_abstractspinbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_abstractspinbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_abstractspinbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_abstractspinbox_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_abstractspinbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_abstractspinbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_abstractspinbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_abstractspinbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_abstractspinbox_dynamic_property_names(void* self) {
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

QBindingStorage* q_abstractspinbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_abstractspinbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_abstractspinbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_abstractspinbox_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_abstractspinbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_abstractspinbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_abstractspinbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_abstractspinbox_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_abstractspinbox_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_abstractspinbox_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_abstractspinbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_abstractspinbox_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_abstractspinbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_abstractspinbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_abstractspinbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_abstractspinbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_abstractspinbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_abstractspinbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_abstractspinbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_abstractspinbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_abstractspinbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_abstractspinbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_abstractspinbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_abstractspinbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_abstractspinbox_dev_type(void* self) {
    return QAbstractSpinBox_DevType((QAbstractSpinBox*)self);
}

int32_t q_abstractspinbox_qbase_dev_type(void* self) {
    return QAbstractSpinBox_QBaseDevType((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_dev_type(void* self, int32_t (*slot)()) {
    QAbstractSpinBox_OnDevType((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_set_visible(void* self, bool visible) {
    QAbstractSpinBox_SetVisible((QAbstractSpinBox*)self, visible);
}

void q_abstractspinbox_qbase_set_visible(void* self, bool visible) {
    QAbstractSpinBox_QBaseSetVisible((QAbstractSpinBox*)self, visible);
}

void q_abstractspinbox_on_set_visible(void* self, void (*slot)(void*, bool)) {
    QAbstractSpinBox_OnSetVisible((QAbstractSpinBox*)self, (intptr_t)slot);
}

int32_t q_abstractspinbox_height_for_width(void* self, int param1) {
    return QAbstractSpinBox_HeightForWidth((QAbstractSpinBox*)self, param1);
}

int32_t q_abstractspinbox_qbase_height_for_width(void* self, int param1) {
    return QAbstractSpinBox_QBaseHeightForWidth((QAbstractSpinBox*)self, param1);
}

void q_abstractspinbox_on_height_for_width(void* self, int32_t (*slot)(void*, int)) {
    QAbstractSpinBox_OnHeightForWidth((QAbstractSpinBox*)self, (intptr_t)slot);
}

bool q_abstractspinbox_has_height_for_width(void* self) {
    return QAbstractSpinBox_HasHeightForWidth((QAbstractSpinBox*)self);
}

bool q_abstractspinbox_qbase_has_height_for_width(void* self) {
    return QAbstractSpinBox_QBaseHasHeightForWidth((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_has_height_for_width(void* self, bool (*slot)()) {
    QAbstractSpinBox_OnHasHeightForWidth((QAbstractSpinBox*)self, (intptr_t)slot);
}

QPaintEngine* q_abstractspinbox_paint_engine(void* self) {
    return QAbstractSpinBox_PaintEngine((QAbstractSpinBox*)self);
}

QPaintEngine* q_abstractspinbox_qbase_paint_engine(void* self) {
    return QAbstractSpinBox_QBasePaintEngine((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_paint_engine(void* self, QPaintEngine* (*slot)()) {
    QAbstractSpinBox_OnPaintEngine((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_mouse_double_click_event(void* self, void* event) {
    QAbstractSpinBox_MouseDoubleClickEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

void q_abstractspinbox_qbase_mouse_double_click_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMouseDoubleClickEvent((QAbstractSpinBox*)self, (QMouseEvent*)event);
}

void q_abstractspinbox_on_mouse_double_click_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMouseDoubleClickEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_enter_event(void* self, void* event) {
    QAbstractSpinBox_EnterEvent((QAbstractSpinBox*)self, (QEnterEvent*)event);
}

void q_abstractspinbox_qbase_enter_event(void* self, void* event) {
    QAbstractSpinBox_QBaseEnterEvent((QAbstractSpinBox*)self, (QEnterEvent*)event);
}

void q_abstractspinbox_on_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnEnterEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_leave_event(void* self, void* event) {
    QAbstractSpinBox_LeaveEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

void q_abstractspinbox_qbase_leave_event(void* self, void* event) {
    QAbstractSpinBox_QBaseLeaveEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

void q_abstractspinbox_on_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnLeaveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_move_event(void* self, void* event) {
    QAbstractSpinBox_MoveEvent((QAbstractSpinBox*)self, (QMoveEvent*)event);
}

void q_abstractspinbox_qbase_move_event(void* self, void* event) {
    QAbstractSpinBox_QBaseMoveEvent((QAbstractSpinBox*)self, (QMoveEvent*)event);
}

void q_abstractspinbox_on_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnMoveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_tablet_event(void* self, void* event) {
    QAbstractSpinBox_TabletEvent((QAbstractSpinBox*)self, (QTabletEvent*)event);
}

void q_abstractspinbox_qbase_tablet_event(void* self, void* event) {
    QAbstractSpinBox_QBaseTabletEvent((QAbstractSpinBox*)self, (QTabletEvent*)event);
}

void q_abstractspinbox_on_tablet_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnTabletEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_action_event(void* self, void* event) {
    QAbstractSpinBox_ActionEvent((QAbstractSpinBox*)self, (QActionEvent*)event);
}

void q_abstractspinbox_qbase_action_event(void* self, void* event) {
    QAbstractSpinBox_QBaseActionEvent((QAbstractSpinBox*)self, (QActionEvent*)event);
}

void q_abstractspinbox_on_action_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnActionEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_drag_enter_event(void* self, void* event) {
    QAbstractSpinBox_DragEnterEvent((QAbstractSpinBox*)self, (QDragEnterEvent*)event);
}

void q_abstractspinbox_qbase_drag_enter_event(void* self, void* event) {
    QAbstractSpinBox_QBaseDragEnterEvent((QAbstractSpinBox*)self, (QDragEnterEvent*)event);
}

void q_abstractspinbox_on_drag_enter_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDragEnterEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_drag_move_event(void* self, void* event) {
    QAbstractSpinBox_DragMoveEvent((QAbstractSpinBox*)self, (QDragMoveEvent*)event);
}

void q_abstractspinbox_qbase_drag_move_event(void* self, void* event) {
    QAbstractSpinBox_QBaseDragMoveEvent((QAbstractSpinBox*)self, (QDragMoveEvent*)event);
}

void q_abstractspinbox_on_drag_move_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDragMoveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_drag_leave_event(void* self, void* event) {
    QAbstractSpinBox_DragLeaveEvent((QAbstractSpinBox*)self, (QDragLeaveEvent*)event);
}

void q_abstractspinbox_qbase_drag_leave_event(void* self, void* event) {
    QAbstractSpinBox_QBaseDragLeaveEvent((QAbstractSpinBox*)self, (QDragLeaveEvent*)event);
}

void q_abstractspinbox_on_drag_leave_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDragLeaveEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_drop_event(void* self, void* event) {
    QAbstractSpinBox_DropEvent((QAbstractSpinBox*)self, (QDropEvent*)event);
}

void q_abstractspinbox_qbase_drop_event(void* self, void* event) {
    QAbstractSpinBox_QBaseDropEvent((QAbstractSpinBox*)self, (QDropEvent*)event);
}

void q_abstractspinbox_on_drop_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDropEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

bool q_abstractspinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractSpinBox_NativeEvent((QAbstractSpinBox*)self, qstring(eventType), message, result);
}

bool q_abstractspinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractSpinBox_QBaseNativeEvent((QAbstractSpinBox*)self, qstring(eventType), message, result);
}

void q_abstractspinbox_on_native_event(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QAbstractSpinBox_OnNativeEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

int32_t q_abstractspinbox_metric(void* self, int64_t param1) {
    return QAbstractSpinBox_Metric((QAbstractSpinBox*)self, param1);
}

int32_t q_abstractspinbox_qbase_metric(void* self, int64_t param1) {
    return QAbstractSpinBox_QBaseMetric((QAbstractSpinBox*)self, param1);
}

void q_abstractspinbox_on_metric(void* self, int32_t (*slot)(void*, int64_t)) {
    QAbstractSpinBox_OnMetric((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_init_painter(void* self, void* painter) {
    QAbstractSpinBox_InitPainter((QAbstractSpinBox*)self, (QPainter*)painter);
}

void q_abstractspinbox_qbase_init_painter(void* self, void* painter) {
    QAbstractSpinBox_QBaseInitPainter((QAbstractSpinBox*)self, (QPainter*)painter);
}

void q_abstractspinbox_on_init_painter(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnInitPainter((QAbstractSpinBox*)self, (intptr_t)slot);
}

QPaintDevice* q_abstractspinbox_redirected(void* self, void* offset) {
    return QAbstractSpinBox_Redirected((QAbstractSpinBox*)self, (QPoint*)offset);
}

QPaintDevice* q_abstractspinbox_qbase_redirected(void* self, void* offset) {
    return QAbstractSpinBox_QBaseRedirected((QAbstractSpinBox*)self, (QPoint*)offset);
}

void q_abstractspinbox_on_redirected(void* self, QPaintDevice* (*slot)(void*, void*)) {
    QAbstractSpinBox_OnRedirected((QAbstractSpinBox*)self, (intptr_t)slot);
}

QPainter* q_abstractspinbox_shared_painter(void* self) {
    return QAbstractSpinBox_SharedPainter((QAbstractSpinBox*)self);
}

QPainter* q_abstractspinbox_qbase_shared_painter(void* self) {
    return QAbstractSpinBox_QBaseSharedPainter((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_shared_painter(void* self, QPainter* (*slot)()) {
    QAbstractSpinBox_OnSharedPainter((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_input_method_event(void* self, void* param1) {
    QAbstractSpinBox_InputMethodEvent((QAbstractSpinBox*)self, (QInputMethodEvent*)param1);
}

void q_abstractspinbox_qbase_input_method_event(void* self, void* param1) {
    QAbstractSpinBox_QBaseInputMethodEvent((QAbstractSpinBox*)self, (QInputMethodEvent*)param1);
}

void q_abstractspinbox_on_input_method_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnInputMethodEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

bool q_abstractspinbox_focus_next_prev_child(void* self, bool next) {
    return QAbstractSpinBox_FocusNextPrevChild((QAbstractSpinBox*)self, next);
}

bool q_abstractspinbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QAbstractSpinBox_QBaseFocusNextPrevChild((QAbstractSpinBox*)self, next);
}

void q_abstractspinbox_on_focus_next_prev_child(void* self, bool (*slot)(void*, bool)) {
    QAbstractSpinBox_OnFocusNextPrevChild((QAbstractSpinBox*)self, (intptr_t)slot);
}

bool q_abstractspinbox_event_filter(void* self, void* watched, void* event) {
    return QAbstractSpinBox_EventFilter((QAbstractSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

bool q_abstractspinbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QAbstractSpinBox_QBaseEventFilter((QAbstractSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

void q_abstractspinbox_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QAbstractSpinBox_OnEventFilter((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_child_event(void* self, void* event) {
    QAbstractSpinBox_ChildEvent((QAbstractSpinBox*)self, (QChildEvent*)event);
}

void q_abstractspinbox_qbase_child_event(void* self, void* event) {
    QAbstractSpinBox_QBaseChildEvent((QAbstractSpinBox*)self, (QChildEvent*)event);
}

void q_abstractspinbox_on_child_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnChildEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_custom_event(void* self, void* event) {
    QAbstractSpinBox_CustomEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

void q_abstractspinbox_qbase_custom_event(void* self, void* event) {
    QAbstractSpinBox_QBaseCustomEvent((QAbstractSpinBox*)self, (QEvent*)event);
}

void q_abstractspinbox_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnCustomEvent((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_connect_notify(void* self, void* signal) {
    QAbstractSpinBox_ConnectNotify((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

void q_abstractspinbox_qbase_connect_notify(void* self, void* signal) {
    QAbstractSpinBox_QBaseConnectNotify((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

void q_abstractspinbox_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnConnectNotify((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_disconnect_notify(void* self, void* signal) {
    QAbstractSpinBox_DisconnectNotify((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

void q_abstractspinbox_qbase_disconnect_notify(void* self, void* signal) {
    QAbstractSpinBox_QBaseDisconnectNotify((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

void q_abstractspinbox_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QAbstractSpinBox_OnDisconnectNotify((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_update_micro_focus(void* self) {
    QAbstractSpinBox_UpdateMicroFocus((QAbstractSpinBox*)self);
}

void q_abstractspinbox_qbase_update_micro_focus(void* self) {
    QAbstractSpinBox_QBaseUpdateMicroFocus((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_update_micro_focus(void* self, void (*slot)()) {
    QAbstractSpinBox_OnUpdateMicroFocus((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_create(void* self) {
    QAbstractSpinBox_Create((QAbstractSpinBox*)self);
}

void q_abstractspinbox_qbase_create(void* self) {
    QAbstractSpinBox_QBaseCreate((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_create(void* self, void (*slot)()) {
    QAbstractSpinBox_OnCreate((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_destroy(void* self) {
    QAbstractSpinBox_Destroy((QAbstractSpinBox*)self);
}

void q_abstractspinbox_qbase_destroy(void* self) {
    QAbstractSpinBox_QBaseDestroy((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_destroy(void* self, void (*slot)()) {
    QAbstractSpinBox_OnDestroy((QAbstractSpinBox*)self, (intptr_t)slot);
}

bool q_abstractspinbox_focus_next_child(void* self) {
    return QAbstractSpinBox_FocusNextChild((QAbstractSpinBox*)self);
}

bool q_abstractspinbox_qbase_focus_next_child(void* self) {
    return QAbstractSpinBox_QBaseFocusNextChild((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_focus_next_child(void* self, bool (*slot)()) {
    QAbstractSpinBox_OnFocusNextChild((QAbstractSpinBox*)self, (intptr_t)slot);
}

bool q_abstractspinbox_focus_previous_child(void* self) {
    return QAbstractSpinBox_FocusPreviousChild((QAbstractSpinBox*)self);
}

bool q_abstractspinbox_qbase_focus_previous_child(void* self) {
    return QAbstractSpinBox_QBaseFocusPreviousChild((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_focus_previous_child(void* self, bool (*slot)()) {
    QAbstractSpinBox_OnFocusPreviousChild((QAbstractSpinBox*)self, (intptr_t)slot);
}

QObject* q_abstractspinbox_sender(void* self) {
    return QAbstractSpinBox_Sender((QAbstractSpinBox*)self);
}

QObject* q_abstractspinbox_qbase_sender(void* self) {
    return QAbstractSpinBox_QBaseSender((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_sender(void* self, QObject* (*slot)()) {
    QAbstractSpinBox_OnSender((QAbstractSpinBox*)self, (intptr_t)slot);
}

int32_t q_abstractspinbox_sender_signal_index(void* self) {
    return QAbstractSpinBox_SenderSignalIndex((QAbstractSpinBox*)self);
}

int32_t q_abstractspinbox_qbase_sender_signal_index(void* self) {
    return QAbstractSpinBox_QBaseSenderSignalIndex((QAbstractSpinBox*)self);
}

void q_abstractspinbox_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QAbstractSpinBox_OnSenderSignalIndex((QAbstractSpinBox*)self, (intptr_t)slot);
}

int32_t q_abstractspinbox_receivers(void* self, const char* signal) {
    return QAbstractSpinBox_Receivers((QAbstractSpinBox*)self, signal);
}

int32_t q_abstractspinbox_qbase_receivers(void* self, const char* signal) {
    return QAbstractSpinBox_QBaseReceivers((QAbstractSpinBox*)self, signal);
}

void q_abstractspinbox_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QAbstractSpinBox_OnReceivers((QAbstractSpinBox*)self, (intptr_t)slot);
}

bool q_abstractspinbox_is_signal_connected(void* self, void* signal) {
    return QAbstractSpinBox_IsSignalConnected((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

bool q_abstractspinbox_qbase_is_signal_connected(void* self, void* signal) {
    return QAbstractSpinBox_QBaseIsSignalConnected((QAbstractSpinBox*)self, (QMetaMethod*)signal);
}

void q_abstractspinbox_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QAbstractSpinBox_OnIsSignalConnected((QAbstractSpinBox*)self, (intptr_t)slot);
}

void q_abstractspinbox_on_object_name_changed(void* self, void (*slot)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)slot);
}

void q_abstractspinbox_delete(void* self) {
    QAbstractSpinBox_Delete((QAbstractSpinBox*)(self));
}
