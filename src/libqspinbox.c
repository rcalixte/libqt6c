#include "libqabstractspinbox.hpp"
#include "libqevent.hpp"
#include "libqcoreevent.hpp"
#include "libqlineedit.hpp"
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
#include "libqspinbox.hpp"
#include "libqspinbox.h"

QSpinBox* q_spinbox_new(void* parent) {
    return QSpinBox_new((QWidget*)parent);
}

QSpinBox* q_spinbox_new2() {
    return QSpinBox_new2();
}

const QMetaObject* q_spinbox_meta_object(void* self) {
    return QSpinBox_MetaObject((QSpinBox*)self);
}

void* q_spinbox_metacast(void* self, const char* param1) {
    return QSpinBox_Metacast((QSpinBox*)self, param1);
}

int32_t q_spinbox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSpinBox_Metacall((QSpinBox*)self, param1, param2, param3);
}

void q_spinbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QSpinBox_OnMetacall((QSpinBox*)self, (intptr_t)callback);
}

int32_t q_spinbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QSpinBox_QBaseMetacall((QSpinBox*)self, param1, param2, param3);
}

const char* q_spinbox_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_spinbox_value(void* self) {
    return QSpinBox_Value((QSpinBox*)self);
}

const char* q_spinbox_prefix(void* self) {
    libqt_string _str = QSpinBox_Prefix((QSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_prefix(void* self, const char* prefix) {
    QSpinBox_SetPrefix((QSpinBox*)self, qstring(prefix));
}

const char* q_spinbox_suffix(void* self) {
    libqt_string _str = QSpinBox_Suffix((QSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_suffix(void* self, const char* suffix) {
    QSpinBox_SetSuffix((QSpinBox*)self, qstring(suffix));
}

const char* q_spinbox_clean_text(void* self) {
    libqt_string _str = QSpinBox_CleanText((QSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_spinbox_single_step(void* self) {
    return QSpinBox_SingleStep((QSpinBox*)self);
}

void q_spinbox_set_single_step(void* self, int val) {
    QSpinBox_SetSingleStep((QSpinBox*)self, val);
}

int32_t q_spinbox_minimum(void* self) {
    return QSpinBox_Minimum((QSpinBox*)self);
}

void q_spinbox_set_minimum(void* self, int min) {
    QSpinBox_SetMinimum((QSpinBox*)self, min);
}

int32_t q_spinbox_maximum(void* self) {
    return QSpinBox_Maximum((QSpinBox*)self);
}

void q_spinbox_set_maximum(void* self, int max) {
    QSpinBox_SetMaximum((QSpinBox*)self, max);
}

void q_spinbox_set_range(void* self, int min, int max) {
    QSpinBox_SetRange((QSpinBox*)self, min, max);
}

int32_t q_spinbox_step_type(void* self) {
    return QSpinBox_StepType((QSpinBox*)self);
}

void q_spinbox_set_step_type(void* self, int32_t stepType) {
    QSpinBox_SetStepType((QSpinBox*)self, stepType);
}

int32_t q_spinbox_display_integer_base(void* self) {
    return QSpinBox_DisplayIntegerBase((QSpinBox*)self);
}

void q_spinbox_set_display_integer_base(void* self, int base) {
    QSpinBox_SetDisplayIntegerBase((QSpinBox*)self, base);
}

bool q_spinbox_event(void* self, void* event) {
    return QSpinBox_Event((QSpinBox*)self, (QEvent*)event);
}

void q_spinbox_on_event(void* self, bool (*callback)(void*, void*)) {
    QSpinBox_OnEvent((QSpinBox*)self, (intptr_t)callback);
}

bool q_spinbox_qbase_event(void* self, void* event) {
    return QSpinBox_QBaseEvent((QSpinBox*)self, (QEvent*)event);
}

int32_t q_spinbox_validate(void* self, const char* input, int* pos) {
    return QSpinBox_Validate((QSpinBox*)self, qstring(input), pos);
}

void q_spinbox_on_validate(void* self, int32_t (*callback)(void*, const char*, int*)) {
    QSpinBox_OnValidate((QSpinBox*)self, (intptr_t)callback);
}

int32_t q_spinbox_qbase_validate(void* self, const char* input, int* pos) {
    return QSpinBox_QBaseValidate((QSpinBox*)self, qstring(input), pos);
}

int32_t q_spinbox_value_from_text(void* self, const char* text) {
    return QSpinBox_ValueFromText((QSpinBox*)self, qstring(text));
}

void q_spinbox_on_value_from_text(void* self, int32_t (*callback)(void*, const char*)) {
    QSpinBox_OnValueFromText((QSpinBox*)self, (intptr_t)callback);
}

int32_t q_spinbox_qbase_value_from_text(void* self, const char* text) {
    return QSpinBox_QBaseValueFromText((QSpinBox*)self, qstring(text));
}

const char* q_spinbox_text_from_value(void* self, int val) {
    libqt_string _str = QSpinBox_TextFromValue((QSpinBox*)self, val);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_on_text_from_value(void* self, const char* (*callback)(void*, int)) {
    QSpinBox_OnTextFromValue((QSpinBox*)self, (intptr_t)callback);
}

const char* q_spinbox_qbase_text_from_value(void* self, int val) {
    libqt_string _str = QSpinBox_QBaseTextFromValue((QSpinBox*)self, val);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_fixup(void* self, const char* str) {
    QSpinBox_Fixup((QSpinBox*)self, qstring(str));
}

void q_spinbox_on_fixup(void* self, void (*callback)(void*, const char*)) {
    QSpinBox_OnFixup((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_qbase_fixup(void* self, const char* str) {
    QSpinBox_QBaseFixup((QSpinBox*)self, qstring(str));
}

void q_spinbox_set_value(void* self, int val) {
    QSpinBox_SetValue((QSpinBox*)self, val);
}

void q_spinbox_value_changed(void* self, int param1) {
    QSpinBox_ValueChanged((QSpinBox*)self, param1);
}

void q_spinbox_on_value_changed(void* self, void (*callback)(void*, int)) {
    QSpinBox_Connect_ValueChanged((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_text_changed(void* self, const char* param1) {
    QSpinBox_TextChanged((QSpinBox*)self, qstring(param1));
}

void q_spinbox_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    QSpinBox_Connect_TextChanged((QSpinBox*)self, (intptr_t)callback);
}

const char* q_spinbox_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_spinbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_spinbox_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

void q_spinbox_set_button_symbols(void* self, int32_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

void q_spinbox_set_correction_mode(void* self, int32_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

int32_t q_spinbox_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

bool q_spinbox_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

const char* q_spinbox_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_spinbox_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

bool q_spinbox_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

void q_spinbox_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

void q_spinbox_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

bool q_spinbox_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

void q_spinbox_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

bool q_spinbox_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

void q_spinbox_set_alignment(void* self, int32_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

int32_t q_spinbox_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

void q_spinbox_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

bool q_spinbox_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

void q_spinbox_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

bool q_spinbox_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

void q_spinbox_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

bool q_spinbox_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

void q_spinbox_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

void q_spinbox_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

void q_spinbox_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

void q_spinbox_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

void q_spinbox_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

void q_spinbox_on_editing_finished(void* self, void (*callback)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)callback);
}

uintptr_t q_spinbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_spinbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_spinbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_spinbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_spinbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_spinbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_spinbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_spinbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_spinbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_spinbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_spinbox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_spinbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_spinbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_spinbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_spinbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_spinbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_spinbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_spinbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_spinbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_spinbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_spinbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_spinbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_spinbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_spinbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_spinbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_spinbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_spinbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_spinbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_spinbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_spinbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_spinbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_spinbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_spinbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_spinbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_spinbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_spinbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_spinbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_spinbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_spinbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_spinbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_spinbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_spinbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_spinbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_spinbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_spinbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_spinbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_spinbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_spinbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_spinbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_spinbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_spinbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_spinbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_spinbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_spinbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_spinbox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_spinbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_spinbox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_spinbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_spinbox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_spinbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_spinbox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_spinbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_spinbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_spinbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_spinbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_spinbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_spinbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_spinbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_spinbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_spinbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_spinbox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_spinbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_spinbox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_spinbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_spinbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_spinbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_spinbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_spinbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_spinbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_spinbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_spinbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_spinbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_spinbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_spinbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_spinbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_spinbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_spinbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_spinbox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_spinbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_spinbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_spinbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_spinbox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_spinbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_spinbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_spinbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_spinbox_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_spinbox_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_spinbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_spinbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_spinbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_spinbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_spinbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_spinbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_spinbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_spinbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_spinbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_spinbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_spinbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_spinbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_spinbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_spinbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_spinbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_spinbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_spinbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_spinbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_spinbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_spinbox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_spinbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_spinbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_spinbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_spinbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_spinbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_spinbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_spinbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_spinbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_spinbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_spinbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_spinbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_spinbox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_spinbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_spinbox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_spinbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_spinbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_spinbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_spinbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_spinbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_spinbox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_spinbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_spinbox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_spinbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_spinbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_spinbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_spinbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_spinbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_spinbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_spinbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_spinbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_spinbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_spinbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_spinbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_spinbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_spinbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_spinbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_spinbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_spinbox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_spinbox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_spinbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_spinbox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_spinbox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_spinbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_spinbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_spinbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_spinbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_spinbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_spinbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_spinbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_spinbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_spinbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_spinbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_spinbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_spinbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_spinbox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_spinbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_spinbox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_spinbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_spinbox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_spinbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_spinbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_spinbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_spinbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_spinbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_spinbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_spinbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_spinbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_spinbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_spinbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_spinbox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_spinbox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_spinbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_spinbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_spinbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_spinbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_spinbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_spinbox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_spinbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_spinbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_spinbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_spinbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_spinbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_spinbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_spinbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_spinbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_spinbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_spinbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_spinbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_spinbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_spinbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_spinbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_spinbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_spinbox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_spinbox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_spinbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_spinbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_spinbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_spinbox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_spinbox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_spinbox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_spinbox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_spinbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_spinbox_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_spinbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_spinbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_spinbox_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_spinbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_spinbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_spinbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_spinbox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_spinbox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_spinbox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_spinbox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_spinbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_spinbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_spinbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_spinbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_spinbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_spinbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_spinbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_spinbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_spinbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_spinbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_spinbox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_spinbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_spinbox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_spinbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_spinbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_spinbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_spinbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_spinbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_spinbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_spinbox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_spinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_spinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_spinbox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_spinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_spinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_spinbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_spinbox_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_spinbox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_spinbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_spinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_spinbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_spinbox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_spinbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_spinbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_spinbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_spinbox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_spinbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_spinbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_spinbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_spinbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_spinbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_spinbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_spinbox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_spinbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_spinbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_spinbox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_spinbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_spinbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_spinbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_spinbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_spinbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_spinbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_spinbox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_spinbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_spinbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_spinbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_spinbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_spinbox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_spinbox_dynamic_property_names");
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

QBindingStorage* q_spinbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_spinbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_spinbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_spinbox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_spinbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_spinbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_spinbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_spinbox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_spinbox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_spinbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_spinbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_spinbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_spinbox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_spinbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_spinbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_spinbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_spinbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_spinbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_spinbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_spinbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_spinbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_spinbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_spinbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_spinbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_spinbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_spinbox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_spinbox_size_hint(void* self) {
    return QSpinBox_SizeHint((QSpinBox*)self);
}

QSize* q_spinbox_qbase_size_hint(void* self) {
    return QSpinBox_QBaseSizeHint((QSpinBox*)self);
}

void q_spinbox_on_size_hint(void* self, QSize* (*callback)()) {
    QSpinBox_OnSizeHint((QSpinBox*)self, (intptr_t)callback);
}

QSize* q_spinbox_minimum_size_hint(void* self) {
    return QSpinBox_MinimumSizeHint((QSpinBox*)self);
}

QSize* q_spinbox_qbase_minimum_size_hint(void* self) {
    return QSpinBox_QBaseMinimumSizeHint((QSpinBox*)self);
}

void q_spinbox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QSpinBox_OnMinimumSizeHint((QSpinBox*)self, (intptr_t)callback);
}

QVariant* q_spinbox_input_method_query(void* self, int64_t param1) {
    return QSpinBox_InputMethodQuery((QSpinBox*)self, param1);
}

QVariant* q_spinbox_qbase_input_method_query(void* self, int64_t param1) {
    return QSpinBox_QBaseInputMethodQuery((QSpinBox*)self, param1);
}

void q_spinbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QSpinBox_OnInputMethodQuery((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_step_by(void* self, int steps) {
    QSpinBox_StepBy((QSpinBox*)self, steps);
}

void q_spinbox_qbase_step_by(void* self, int steps) {
    QSpinBox_QBaseStepBy((QSpinBox*)self, steps);
}

void q_spinbox_on_step_by(void* self, void (*callback)(void*, int)) {
    QSpinBox_OnStepBy((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_clear(void* self) {
    QSpinBox_Clear((QSpinBox*)self);
}

void q_spinbox_qbase_clear(void* self) {
    QSpinBox_QBaseClear((QSpinBox*)self);
}

void q_spinbox_on_clear(void* self, void (*callback)()) {
    QSpinBox_OnClear((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_resize_event(void* self, void* event) {
    QSpinBox_ResizeEvent((QSpinBox*)self, (QResizeEvent*)event);
}

void q_spinbox_qbase_resize_event(void* self, void* event) {
    QSpinBox_QBaseResizeEvent((QSpinBox*)self, (QResizeEvent*)event);
}

void q_spinbox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnResizeEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_key_press_event(void* self, void* event) {
    QSpinBox_KeyPressEvent((QSpinBox*)self, (QKeyEvent*)event);
}

void q_spinbox_qbase_key_press_event(void* self, void* event) {
    QSpinBox_QBaseKeyPressEvent((QSpinBox*)self, (QKeyEvent*)event);
}

void q_spinbox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnKeyPressEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_key_release_event(void* self, void* event) {
    QSpinBox_KeyReleaseEvent((QSpinBox*)self, (QKeyEvent*)event);
}

void q_spinbox_qbase_key_release_event(void* self, void* event) {
    QSpinBox_QBaseKeyReleaseEvent((QSpinBox*)self, (QKeyEvent*)event);
}

void q_spinbox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnKeyReleaseEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_wheel_event(void* self, void* event) {
    QSpinBox_WheelEvent((QSpinBox*)self, (QWheelEvent*)event);
}

void q_spinbox_qbase_wheel_event(void* self, void* event) {
    QSpinBox_QBaseWheelEvent((QSpinBox*)self, (QWheelEvent*)event);
}

void q_spinbox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnWheelEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_focus_in_event(void* self, void* event) {
    QSpinBox_FocusInEvent((QSpinBox*)self, (QFocusEvent*)event);
}

void q_spinbox_qbase_focus_in_event(void* self, void* event) {
    QSpinBox_QBaseFocusInEvent((QSpinBox*)self, (QFocusEvent*)event);
}

void q_spinbox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnFocusInEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_focus_out_event(void* self, void* event) {
    QSpinBox_FocusOutEvent((QSpinBox*)self, (QFocusEvent*)event);
}

void q_spinbox_qbase_focus_out_event(void* self, void* event) {
    QSpinBox_QBaseFocusOutEvent((QSpinBox*)self, (QFocusEvent*)event);
}

void q_spinbox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnFocusOutEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_context_menu_event(void* self, void* event) {
    QSpinBox_ContextMenuEvent((QSpinBox*)self, (QContextMenuEvent*)event);
}

void q_spinbox_qbase_context_menu_event(void* self, void* event) {
    QSpinBox_QBaseContextMenuEvent((QSpinBox*)self, (QContextMenuEvent*)event);
}

void q_spinbox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnContextMenuEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_change_event(void* self, void* event) {
    QSpinBox_ChangeEvent((QSpinBox*)self, (QEvent*)event);
}

void q_spinbox_qbase_change_event(void* self, void* event) {
    QSpinBox_QBaseChangeEvent((QSpinBox*)self, (QEvent*)event);
}

void q_spinbox_on_change_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnChangeEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_close_event(void* self, void* event) {
    QSpinBox_CloseEvent((QSpinBox*)self, (QCloseEvent*)event);
}

void q_spinbox_qbase_close_event(void* self, void* event) {
    QSpinBox_QBaseCloseEvent((QSpinBox*)self, (QCloseEvent*)event);
}

void q_spinbox_on_close_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnCloseEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_hide_event(void* self, void* event) {
    QSpinBox_HideEvent((QSpinBox*)self, (QHideEvent*)event);
}

void q_spinbox_qbase_hide_event(void* self, void* event) {
    QSpinBox_QBaseHideEvent((QSpinBox*)self, (QHideEvent*)event);
}

void q_spinbox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnHideEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_mouse_press_event(void* self, void* event) {
    QSpinBox_MousePressEvent((QSpinBox*)self, (QMouseEvent*)event);
}

void q_spinbox_qbase_mouse_press_event(void* self, void* event) {
    QSpinBox_QBaseMousePressEvent((QSpinBox*)self, (QMouseEvent*)event);
}

void q_spinbox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnMousePressEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_mouse_release_event(void* self, void* event) {
    QSpinBox_MouseReleaseEvent((QSpinBox*)self, (QMouseEvent*)event);
}

void q_spinbox_qbase_mouse_release_event(void* self, void* event) {
    QSpinBox_QBaseMouseReleaseEvent((QSpinBox*)self, (QMouseEvent*)event);
}

void q_spinbox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnMouseReleaseEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_mouse_move_event(void* self, void* event) {
    QSpinBox_MouseMoveEvent((QSpinBox*)self, (QMouseEvent*)event);
}

void q_spinbox_qbase_mouse_move_event(void* self, void* event) {
    QSpinBox_QBaseMouseMoveEvent((QSpinBox*)self, (QMouseEvent*)event);
}

void q_spinbox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnMouseMoveEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_timer_event(void* self, void* event) {
    QSpinBox_TimerEvent((QSpinBox*)self, (QTimerEvent*)event);
}

void q_spinbox_qbase_timer_event(void* self, void* event) {
    QSpinBox_QBaseTimerEvent((QSpinBox*)self, (QTimerEvent*)event);
}

void q_spinbox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnTimerEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_paint_event(void* self, void* event) {
    QSpinBox_PaintEvent((QSpinBox*)self, (QPaintEvent*)event);
}

void q_spinbox_qbase_paint_event(void* self, void* event) {
    QSpinBox_QBasePaintEvent((QSpinBox*)self, (QPaintEvent*)event);
}

void q_spinbox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnPaintEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_show_event(void* self, void* event) {
    QSpinBox_ShowEvent((QSpinBox*)self, (QShowEvent*)event);
}

void q_spinbox_qbase_show_event(void* self, void* event) {
    QSpinBox_QBaseShowEvent((QSpinBox*)self, (QShowEvent*)event);
}

void q_spinbox_on_show_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnShowEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_init_style_option(void* self, void* option) {
    QSpinBox_InitStyleOption((QSpinBox*)self, (QStyleOptionSpinBox*)option);
}

void q_spinbox_qbase_init_style_option(void* self, void* option) {
    QSpinBox_QBaseInitStyleOption((QSpinBox*)self, (QStyleOptionSpinBox*)option);
}

void q_spinbox_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnInitStyleOption((QSpinBox*)self, (intptr_t)callback);
}

int32_t q_spinbox_step_enabled(void* self) {
    return QSpinBox_StepEnabled((QSpinBox*)self);
}

int32_t q_spinbox_qbase_step_enabled(void* self) {
    return QSpinBox_QBaseStepEnabled((QSpinBox*)self);
}

void q_spinbox_on_step_enabled(void* self, int32_t (*callback)()) {
    QSpinBox_OnStepEnabled((QSpinBox*)self, (intptr_t)callback);
}

int32_t q_spinbox_dev_type(void* self) {
    return QSpinBox_DevType((QSpinBox*)self);
}

int32_t q_spinbox_qbase_dev_type(void* self) {
    return QSpinBox_QBaseDevType((QSpinBox*)self);
}

void q_spinbox_on_dev_type(void* self, int32_t (*callback)()) {
    QSpinBox_OnDevType((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_set_visible(void* self, bool visible) {
    QSpinBox_SetVisible((QSpinBox*)self, visible);
}

void q_spinbox_qbase_set_visible(void* self, bool visible) {
    QSpinBox_QBaseSetVisible((QSpinBox*)self, visible);
}

void q_spinbox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QSpinBox_OnSetVisible((QSpinBox*)self, (intptr_t)callback);
}

int32_t q_spinbox_height_for_width(void* self, int param1) {
    return QSpinBox_HeightForWidth((QSpinBox*)self, param1);
}

int32_t q_spinbox_qbase_height_for_width(void* self, int param1) {
    return QSpinBox_QBaseHeightForWidth((QSpinBox*)self, param1);
}

void q_spinbox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QSpinBox_OnHeightForWidth((QSpinBox*)self, (intptr_t)callback);
}

bool q_spinbox_has_height_for_width(void* self) {
    return QSpinBox_HasHeightForWidth((QSpinBox*)self);
}

bool q_spinbox_qbase_has_height_for_width(void* self) {
    return QSpinBox_QBaseHasHeightForWidth((QSpinBox*)self);
}

void q_spinbox_on_has_height_for_width(void* self, bool (*callback)()) {
    QSpinBox_OnHasHeightForWidth((QSpinBox*)self, (intptr_t)callback);
}

QPaintEngine* q_spinbox_paint_engine(void* self) {
    return QSpinBox_PaintEngine((QSpinBox*)self);
}

QPaintEngine* q_spinbox_qbase_paint_engine(void* self) {
    return QSpinBox_QBasePaintEngine((QSpinBox*)self);
}

void q_spinbox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QSpinBox_OnPaintEngine((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_mouse_double_click_event(void* self, void* event) {
    QSpinBox_MouseDoubleClickEvent((QSpinBox*)self, (QMouseEvent*)event);
}

void q_spinbox_qbase_mouse_double_click_event(void* self, void* event) {
    QSpinBox_QBaseMouseDoubleClickEvent((QSpinBox*)self, (QMouseEvent*)event);
}

void q_spinbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnMouseDoubleClickEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_enter_event(void* self, void* event) {
    QSpinBox_EnterEvent((QSpinBox*)self, (QEnterEvent*)event);
}

void q_spinbox_qbase_enter_event(void* self, void* event) {
    QSpinBox_QBaseEnterEvent((QSpinBox*)self, (QEnterEvent*)event);
}

void q_spinbox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnEnterEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_leave_event(void* self, void* event) {
    QSpinBox_LeaveEvent((QSpinBox*)self, (QEvent*)event);
}

void q_spinbox_qbase_leave_event(void* self, void* event) {
    QSpinBox_QBaseLeaveEvent((QSpinBox*)self, (QEvent*)event);
}

void q_spinbox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnLeaveEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_move_event(void* self, void* event) {
    QSpinBox_MoveEvent((QSpinBox*)self, (QMoveEvent*)event);
}

void q_spinbox_qbase_move_event(void* self, void* event) {
    QSpinBox_QBaseMoveEvent((QSpinBox*)self, (QMoveEvent*)event);
}

void q_spinbox_on_move_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnMoveEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_tablet_event(void* self, void* event) {
    QSpinBox_TabletEvent((QSpinBox*)self, (QTabletEvent*)event);
}

void q_spinbox_qbase_tablet_event(void* self, void* event) {
    QSpinBox_QBaseTabletEvent((QSpinBox*)self, (QTabletEvent*)event);
}

void q_spinbox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnTabletEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_action_event(void* self, void* event) {
    QSpinBox_ActionEvent((QSpinBox*)self, (QActionEvent*)event);
}

void q_spinbox_qbase_action_event(void* self, void* event) {
    QSpinBox_QBaseActionEvent((QSpinBox*)self, (QActionEvent*)event);
}

void q_spinbox_on_action_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnActionEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_drag_enter_event(void* self, void* event) {
    QSpinBox_DragEnterEvent((QSpinBox*)self, (QDragEnterEvent*)event);
}

void q_spinbox_qbase_drag_enter_event(void* self, void* event) {
    QSpinBox_QBaseDragEnterEvent((QSpinBox*)self, (QDragEnterEvent*)event);
}

void q_spinbox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnDragEnterEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_drag_move_event(void* self, void* event) {
    QSpinBox_DragMoveEvent((QSpinBox*)self, (QDragMoveEvent*)event);
}

void q_spinbox_qbase_drag_move_event(void* self, void* event) {
    QSpinBox_QBaseDragMoveEvent((QSpinBox*)self, (QDragMoveEvent*)event);
}

void q_spinbox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnDragMoveEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_drag_leave_event(void* self, void* event) {
    QSpinBox_DragLeaveEvent((QSpinBox*)self, (QDragLeaveEvent*)event);
}

void q_spinbox_qbase_drag_leave_event(void* self, void* event) {
    QSpinBox_QBaseDragLeaveEvent((QSpinBox*)self, (QDragLeaveEvent*)event);
}

void q_spinbox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnDragLeaveEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_drop_event(void* self, void* event) {
    QSpinBox_DropEvent((QSpinBox*)self, (QDropEvent*)event);
}

void q_spinbox_qbase_drop_event(void* self, void* event) {
    QSpinBox_QBaseDropEvent((QSpinBox*)self, (QDropEvent*)event);
}

void q_spinbox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnDropEvent((QSpinBox*)self, (intptr_t)callback);
}

bool q_spinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSpinBox_NativeEvent((QSpinBox*)self, qstring(eventType), message, result);
}

bool q_spinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QSpinBox_QBaseNativeEvent((QSpinBox*)self, qstring(eventType), message, result);
}

void q_spinbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QSpinBox_OnNativeEvent((QSpinBox*)self, (intptr_t)callback);
}

int32_t q_spinbox_metric(void* self, int32_t param1) {
    return QSpinBox_Metric((QSpinBox*)self, param1);
}

int32_t q_spinbox_qbase_metric(void* self, int32_t param1) {
    return QSpinBox_QBaseMetric((QSpinBox*)self, param1);
}

void q_spinbox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QSpinBox_OnMetric((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_init_painter(void* self, void* painter) {
    QSpinBox_InitPainter((QSpinBox*)self, (QPainter*)painter);
}

void q_spinbox_qbase_init_painter(void* self, void* painter) {
    QSpinBox_QBaseInitPainter((QSpinBox*)self, (QPainter*)painter);
}

void q_spinbox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnInitPainter((QSpinBox*)self, (intptr_t)callback);
}

QPaintDevice* q_spinbox_redirected(void* self, void* offset) {
    return QSpinBox_Redirected((QSpinBox*)self, (QPoint*)offset);
}

QPaintDevice* q_spinbox_qbase_redirected(void* self, void* offset) {
    return QSpinBox_QBaseRedirected((QSpinBox*)self, (QPoint*)offset);
}

void q_spinbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QSpinBox_OnRedirected((QSpinBox*)self, (intptr_t)callback);
}

QPainter* q_spinbox_shared_painter(void* self) {
    return QSpinBox_SharedPainter((QSpinBox*)self);
}

QPainter* q_spinbox_qbase_shared_painter(void* self) {
    return QSpinBox_QBaseSharedPainter((QSpinBox*)self);
}

void q_spinbox_on_shared_painter(void* self, QPainter* (*callback)()) {
    QSpinBox_OnSharedPainter((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_input_method_event(void* self, void* param1) {
    QSpinBox_InputMethodEvent((QSpinBox*)self, (QInputMethodEvent*)param1);
}

void q_spinbox_qbase_input_method_event(void* self, void* param1) {
    QSpinBox_QBaseInputMethodEvent((QSpinBox*)self, (QInputMethodEvent*)param1);
}

void q_spinbox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnInputMethodEvent((QSpinBox*)self, (intptr_t)callback);
}

bool q_spinbox_focus_next_prev_child(void* self, bool next) {
    return QSpinBox_FocusNextPrevChild((QSpinBox*)self, next);
}

bool q_spinbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QSpinBox_QBaseFocusNextPrevChild((QSpinBox*)self, next);
}

void q_spinbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QSpinBox_OnFocusNextPrevChild((QSpinBox*)self, (intptr_t)callback);
}

bool q_spinbox_event_filter(void* self, void* watched, void* event) {
    return QSpinBox_EventFilter((QSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

bool q_spinbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QSpinBox_QBaseEventFilter((QSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

void q_spinbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QSpinBox_OnEventFilter((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_child_event(void* self, void* event) {
    QSpinBox_ChildEvent((QSpinBox*)self, (QChildEvent*)event);
}

void q_spinbox_qbase_child_event(void* self, void* event) {
    QSpinBox_QBaseChildEvent((QSpinBox*)self, (QChildEvent*)event);
}

void q_spinbox_on_child_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnChildEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_custom_event(void* self, void* event) {
    QSpinBox_CustomEvent((QSpinBox*)self, (QEvent*)event);
}

void q_spinbox_qbase_custom_event(void* self, void* event) {
    QSpinBox_QBaseCustomEvent((QSpinBox*)self, (QEvent*)event);
}

void q_spinbox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnCustomEvent((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_connect_notify(void* self, void* signal) {
    QSpinBox_ConnectNotify((QSpinBox*)self, (QMetaMethod*)signal);
}

void q_spinbox_qbase_connect_notify(void* self, void* signal) {
    QSpinBox_QBaseConnectNotify((QSpinBox*)self, (QMetaMethod*)signal);
}

void q_spinbox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnConnectNotify((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_disconnect_notify(void* self, void* signal) {
    QSpinBox_DisconnectNotify((QSpinBox*)self, (QMetaMethod*)signal);
}

void q_spinbox_qbase_disconnect_notify(void* self, void* signal) {
    QSpinBox_QBaseDisconnectNotify((QSpinBox*)self, (QMetaMethod*)signal);
}

void q_spinbox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnDisconnectNotify((QSpinBox*)self, (intptr_t)callback);
}

QLineEdit* q_spinbox_line_edit(void* self) {
    return QSpinBox_LineEdit((QSpinBox*)self);
}

QLineEdit* q_spinbox_qbase_line_edit(void* self) {
    return QSpinBox_QBaseLineEdit((QSpinBox*)self);
}

void q_spinbox_on_line_edit(void* self, QLineEdit* (*callback)()) {
    QSpinBox_OnLineEdit((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_set_line_edit(void* self, void* edit) {
    QSpinBox_SetLineEdit((QSpinBox*)self, (QLineEdit*)edit);
}

void q_spinbox_qbase_set_line_edit(void* self, void* edit) {
    QSpinBox_QBaseSetLineEdit((QSpinBox*)self, (QLineEdit*)edit);
}

void q_spinbox_on_set_line_edit(void* self, void (*callback)(void*, void*)) {
    QSpinBox_OnSetLineEdit((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_update_micro_focus(void* self) {
    QSpinBox_UpdateMicroFocus((QSpinBox*)self);
}

void q_spinbox_qbase_update_micro_focus(void* self) {
    QSpinBox_QBaseUpdateMicroFocus((QSpinBox*)self);
}

void q_spinbox_on_update_micro_focus(void* self, void (*callback)()) {
    QSpinBox_OnUpdateMicroFocus((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_create(void* self) {
    QSpinBox_Create((QSpinBox*)self);
}

void q_spinbox_qbase_create(void* self) {
    QSpinBox_QBaseCreate((QSpinBox*)self);
}

void q_spinbox_on_create(void* self, void (*callback)()) {
    QSpinBox_OnCreate((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_destroy(void* self) {
    QSpinBox_Destroy((QSpinBox*)self);
}

void q_spinbox_qbase_destroy(void* self) {
    QSpinBox_QBaseDestroy((QSpinBox*)self);
}

void q_spinbox_on_destroy(void* self, void (*callback)()) {
    QSpinBox_OnDestroy((QSpinBox*)self, (intptr_t)callback);
}

bool q_spinbox_focus_next_child(void* self) {
    return QSpinBox_FocusNextChild((QSpinBox*)self);
}

bool q_spinbox_qbase_focus_next_child(void* self) {
    return QSpinBox_QBaseFocusNextChild((QSpinBox*)self);
}

void q_spinbox_on_focus_next_child(void* self, bool (*callback)()) {
    QSpinBox_OnFocusNextChild((QSpinBox*)self, (intptr_t)callback);
}

bool q_spinbox_focus_previous_child(void* self) {
    return QSpinBox_FocusPreviousChild((QSpinBox*)self);
}

bool q_spinbox_qbase_focus_previous_child(void* self) {
    return QSpinBox_QBaseFocusPreviousChild((QSpinBox*)self);
}

void q_spinbox_on_focus_previous_child(void* self, bool (*callback)()) {
    QSpinBox_OnFocusPreviousChild((QSpinBox*)self, (intptr_t)callback);
}

QObject* q_spinbox_sender(void* self) {
    return QSpinBox_Sender((QSpinBox*)self);
}

QObject* q_spinbox_qbase_sender(void* self) {
    return QSpinBox_QBaseSender((QSpinBox*)self);
}

void q_spinbox_on_sender(void* self, QObject* (*callback)()) {
    QSpinBox_OnSender((QSpinBox*)self, (intptr_t)callback);
}

int32_t q_spinbox_sender_signal_index(void* self) {
    return QSpinBox_SenderSignalIndex((QSpinBox*)self);
}

int32_t q_spinbox_qbase_sender_signal_index(void* self) {
    return QSpinBox_QBaseSenderSignalIndex((QSpinBox*)self);
}

void q_spinbox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QSpinBox_OnSenderSignalIndex((QSpinBox*)self, (intptr_t)callback);
}

int32_t q_spinbox_receivers(void* self, const char* signal) {
    return QSpinBox_Receivers((QSpinBox*)self, signal);
}

int32_t q_spinbox_qbase_receivers(void* self, const char* signal) {
    return QSpinBox_QBaseReceivers((QSpinBox*)self, signal);
}

void q_spinbox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QSpinBox_OnReceivers((QSpinBox*)self, (intptr_t)callback);
}

bool q_spinbox_is_signal_connected(void* self, void* signal) {
    return QSpinBox_IsSignalConnected((QSpinBox*)self, (QMetaMethod*)signal);
}

bool q_spinbox_qbase_is_signal_connected(void* self, void* signal) {
    return QSpinBox_QBaseIsSignalConnected((QSpinBox*)self, (QMetaMethod*)signal);
}

void q_spinbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QSpinBox_OnIsSignalConnected((QSpinBox*)self, (intptr_t)callback);
}

double q_spinbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QSpinBox_GetDecodedMetricF((QSpinBox*)self, metricA, metricB);
}

double q_spinbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QSpinBox_QBaseGetDecodedMetricF((QSpinBox*)self, metricA, metricB);
}

void q_spinbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QSpinBox_OnGetDecodedMetricF((QSpinBox*)self, (intptr_t)callback);
}

void q_spinbox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_spinbox_delete(void* self) {
    QSpinBox_Delete((QSpinBox*)(self));
}

QDoubleSpinBox* q_doublespinbox_new(void* parent) {
    return QDoubleSpinBox_new((QWidget*)parent);
}

QDoubleSpinBox* q_doublespinbox_new2() {
    return QDoubleSpinBox_new2();
}

const QMetaObject* q_doublespinbox_meta_object(void* self) {
    return QDoubleSpinBox_MetaObject((QDoubleSpinBox*)self);
}

void* q_doublespinbox_metacast(void* self, const char* param1) {
    return QDoubleSpinBox_Metacast((QDoubleSpinBox*)self, param1);
}

int32_t q_doublespinbox_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDoubleSpinBox_Metacall((QDoubleSpinBox*)self, param1, param2, param3);
}

void q_doublespinbox_on_metacall(void* self, int32_t (*callback)(void*, int32_t, int, void*)) {
    QDoubleSpinBox_OnMetacall((QDoubleSpinBox*)self, (intptr_t)callback);
}

int32_t q_doublespinbox_qbase_metacall(void* self, int32_t param1, int param2, void* param3) {
    return QDoubleSpinBox_QBaseMetacall((QDoubleSpinBox*)self, param1, param2, param3);
}

const char* q_doublespinbox_tr(const char* s) {
    libqt_string _str = QObject_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_doublespinbox_value(void* self) {
    return QDoubleSpinBox_Value((QDoubleSpinBox*)self);
}

const char* q_doublespinbox_prefix(void* self) {
    libqt_string _str = QDoubleSpinBox_Prefix((QDoubleSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_prefix(void* self, const char* prefix) {
    QDoubleSpinBox_SetPrefix((QDoubleSpinBox*)self, qstring(prefix));
}

const char* q_doublespinbox_suffix(void* self) {
    libqt_string _str = QDoubleSpinBox_Suffix((QDoubleSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_suffix(void* self, const char* suffix) {
    QDoubleSpinBox_SetSuffix((QDoubleSpinBox*)self, qstring(suffix));
}

const char* q_doublespinbox_clean_text(void* self) {
    libqt_string _str = QDoubleSpinBox_CleanText((QDoubleSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_doublespinbox_single_step(void* self) {
    return QDoubleSpinBox_SingleStep((QDoubleSpinBox*)self);
}

void q_doublespinbox_set_single_step(void* self, double val) {
    QDoubleSpinBox_SetSingleStep((QDoubleSpinBox*)self, val);
}

double q_doublespinbox_minimum(void* self) {
    return QDoubleSpinBox_Minimum((QDoubleSpinBox*)self);
}

void q_doublespinbox_set_minimum(void* self, double min) {
    QDoubleSpinBox_SetMinimum((QDoubleSpinBox*)self, min);
}

double q_doublespinbox_maximum(void* self) {
    return QDoubleSpinBox_Maximum((QDoubleSpinBox*)self);
}

void q_doublespinbox_set_maximum(void* self, double max) {
    QDoubleSpinBox_SetMaximum((QDoubleSpinBox*)self, max);
}

void q_doublespinbox_set_range(void* self, double min, double max) {
    QDoubleSpinBox_SetRange((QDoubleSpinBox*)self, min, max);
}

int32_t q_doublespinbox_step_type(void* self) {
    return QDoubleSpinBox_StepType((QDoubleSpinBox*)self);
}

void q_doublespinbox_set_step_type(void* self, int32_t stepType) {
    QDoubleSpinBox_SetStepType((QDoubleSpinBox*)self, stepType);
}

int32_t q_doublespinbox_decimals(void* self) {
    return QDoubleSpinBox_Decimals((QDoubleSpinBox*)self);
}

void q_doublespinbox_set_decimals(void* self, int prec) {
    QDoubleSpinBox_SetDecimals((QDoubleSpinBox*)self, prec);
}

int32_t q_doublespinbox_validate(void* self, const char* input, int* pos) {
    return QDoubleSpinBox_Validate((QDoubleSpinBox*)self, qstring(input), pos);
}

void q_doublespinbox_on_validate(void* self, int32_t (*callback)(void*, const char*, int*)) {
    QDoubleSpinBox_OnValidate((QDoubleSpinBox*)self, (intptr_t)callback);
}

int32_t q_doublespinbox_qbase_validate(void* self, const char* input, int* pos) {
    return QDoubleSpinBox_QBaseValidate((QDoubleSpinBox*)self, qstring(input), pos);
}

double q_doublespinbox_value_from_text(void* self, const char* text) {
    return QDoubleSpinBox_ValueFromText((QDoubleSpinBox*)self, qstring(text));
}

void q_doublespinbox_on_value_from_text(void* self, double (*callback)(void*, const char*)) {
    QDoubleSpinBox_OnValueFromText((QDoubleSpinBox*)self, (intptr_t)callback);
}

double q_doublespinbox_qbase_value_from_text(void* self, const char* text) {
    return QDoubleSpinBox_QBaseValueFromText((QDoubleSpinBox*)self, qstring(text));
}

const char* q_doublespinbox_text_from_value(void* self, double val) {
    libqt_string _str = QDoubleSpinBox_TextFromValue((QDoubleSpinBox*)self, val);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_on_text_from_value(void* self, const char* (*callback)(void*, double)) {
    QDoubleSpinBox_OnTextFromValue((QDoubleSpinBox*)self, (intptr_t)callback);
}

const char* q_doublespinbox_qbase_text_from_value(void* self, double val) {
    libqt_string _str = QDoubleSpinBox_QBaseTextFromValue((QDoubleSpinBox*)self, val);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_fixup(void* self, const char* str) {
    QDoubleSpinBox_Fixup((QDoubleSpinBox*)self, qstring(str));
}

void q_doublespinbox_on_fixup(void* self, void (*callback)(void*, const char*)) {
    QDoubleSpinBox_OnFixup((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_qbase_fixup(void* self, const char* str) {
    QDoubleSpinBox_QBaseFixup((QDoubleSpinBox*)self, qstring(str));
}

void q_doublespinbox_set_value(void* self, double val) {
    QDoubleSpinBox_SetValue((QDoubleSpinBox*)self, val);
}

void q_doublespinbox_value_changed(void* self, double param1) {
    QDoubleSpinBox_ValueChanged((QDoubleSpinBox*)self, param1);
}

void q_doublespinbox_on_value_changed(void* self, void (*callback)(void*, double)) {
    QDoubleSpinBox_Connect_ValueChanged((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_text_changed(void* self, const char* param1) {
    QDoubleSpinBox_TextChanged((QDoubleSpinBox*)self, qstring(param1));
}

void q_doublespinbox_on_text_changed(void* self, void (*callback)(void*, const char*)) {
    QDoubleSpinBox_Connect_TextChanged((QDoubleSpinBox*)self, (intptr_t)callback);
}

const char* q_doublespinbox_tr2(const char* s, const char* c) {
    libqt_string _str = QObject_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_doublespinbox_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QObject_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int32_t q_doublespinbox_button_symbols(void* self) {
    return QAbstractSpinBox_ButtonSymbols((QAbstractSpinBox*)self);
}

void q_doublespinbox_set_button_symbols(void* self, int32_t bs) {
    QAbstractSpinBox_SetButtonSymbols((QAbstractSpinBox*)self, bs);
}

void q_doublespinbox_set_correction_mode(void* self, int32_t cm) {
    QAbstractSpinBox_SetCorrectionMode((QAbstractSpinBox*)self, cm);
}

int32_t q_doublespinbox_correction_mode(void* self) {
    return QAbstractSpinBox_CorrectionMode((QAbstractSpinBox*)self);
}

bool q_doublespinbox_has_acceptable_input(void* self) {
    return QAbstractSpinBox_HasAcceptableInput((QAbstractSpinBox*)self);
}

const char* q_doublespinbox_text(void* self) {
    libqt_string _str = QAbstractSpinBox_Text((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_doublespinbox_special_value_text(void* self) {
    libqt_string _str = QAbstractSpinBox_SpecialValueText((QAbstractSpinBox*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_special_value_text(void* self, const char* txt) {
    QAbstractSpinBox_SetSpecialValueText((QAbstractSpinBox*)self, qstring(txt));
}

bool q_doublespinbox_wrapping(void* self) {
    return QAbstractSpinBox_Wrapping((QAbstractSpinBox*)self);
}

void q_doublespinbox_set_wrapping(void* self, bool w) {
    QAbstractSpinBox_SetWrapping((QAbstractSpinBox*)self, w);
}

void q_doublespinbox_set_read_only(void* self, bool r) {
    QAbstractSpinBox_SetReadOnly((QAbstractSpinBox*)self, r);
}

bool q_doublespinbox_is_read_only(void* self) {
    return QAbstractSpinBox_IsReadOnly((QAbstractSpinBox*)self);
}

void q_doublespinbox_set_keyboard_tracking(void* self, bool kt) {
    QAbstractSpinBox_SetKeyboardTracking((QAbstractSpinBox*)self, kt);
}

bool q_doublespinbox_keyboard_tracking(void* self) {
    return QAbstractSpinBox_KeyboardTracking((QAbstractSpinBox*)self);
}

void q_doublespinbox_set_alignment(void* self, int32_t flag) {
    QAbstractSpinBox_SetAlignment((QAbstractSpinBox*)self, flag);
}

int32_t q_doublespinbox_alignment(void* self) {
    return QAbstractSpinBox_Alignment((QAbstractSpinBox*)self);
}

void q_doublespinbox_set_frame(void* self, bool frame) {
    QAbstractSpinBox_SetFrame((QAbstractSpinBox*)self, frame);
}

bool q_doublespinbox_has_frame(void* self) {
    return QAbstractSpinBox_HasFrame((QAbstractSpinBox*)self);
}

void q_doublespinbox_set_accelerated(void* self, bool on) {
    QAbstractSpinBox_SetAccelerated((QAbstractSpinBox*)self, on);
}

bool q_doublespinbox_is_accelerated(void* self) {
    return QAbstractSpinBox_IsAccelerated((QAbstractSpinBox*)self);
}

void q_doublespinbox_set_group_separator_shown(void* self, bool shown) {
    QAbstractSpinBox_SetGroupSeparatorShown((QAbstractSpinBox*)self, shown);
}

bool q_doublespinbox_is_group_separator_shown(void* self) {
    return QAbstractSpinBox_IsGroupSeparatorShown((QAbstractSpinBox*)self);
}

void q_doublespinbox_interpret_text(void* self) {
    QAbstractSpinBox_InterpretText((QAbstractSpinBox*)self);
}

void q_doublespinbox_step_up(void* self) {
    QAbstractSpinBox_StepUp((QAbstractSpinBox*)self);
}

void q_doublespinbox_step_down(void* self) {
    QAbstractSpinBox_StepDown((QAbstractSpinBox*)self);
}

void q_doublespinbox_select_all(void* self) {
    QAbstractSpinBox_SelectAll((QAbstractSpinBox*)self);
}

void q_doublespinbox_editing_finished(void* self) {
    QAbstractSpinBox_EditingFinished((QAbstractSpinBox*)self);
}

void q_doublespinbox_on_editing_finished(void* self, void (*callback)(void*)) {
    QAbstractSpinBox_Connect_EditingFinished((QAbstractSpinBox*)self, (intptr_t)callback);
}

uintptr_t q_doublespinbox_win_id(void* self) {
    return QWidget_WinId((QWidget*)self);
}

void q_doublespinbox_create_win_id(void* self) {
    QWidget_CreateWinId((QWidget*)self);
}

uintptr_t q_doublespinbox_internal_win_id(void* self) {
    return QWidget_InternalWinId((QWidget*)self);
}

uintptr_t q_doublespinbox_effective_win_id(void* self) {
    return QWidget_EffectiveWinId((QWidget*)self);
}

QStyle* q_doublespinbox_style(void* self) {
    return QWidget_Style((QWidget*)self);
}

void q_doublespinbox_set_style(void* self, void* style) {
    QWidget_SetStyle((QWidget*)self, (QStyle*)style);
}

bool q_doublespinbox_is_top_level(void* self) {
    return QWidget_IsTopLevel((QWidget*)self);
}

bool q_doublespinbox_is_window(void* self) {
    return QWidget_IsWindow((QWidget*)self);
}

bool q_doublespinbox_is_modal(void* self) {
    return QWidget_IsModal((QWidget*)self);
}

int32_t q_doublespinbox_window_modality(void* self) {
    return QWidget_WindowModality((QWidget*)self);
}

void q_doublespinbox_set_window_modality(void* self, int32_t windowModality) {
    QWidget_SetWindowModality((QWidget*)self, windowModality);
}

bool q_doublespinbox_is_enabled(void* self) {
    return QWidget_IsEnabled((QWidget*)self);
}

bool q_doublespinbox_is_enabled_to(void* self, void* param1) {
    return QWidget_IsEnabledTo((QWidget*)self, (QWidget*)param1);
}

void q_doublespinbox_set_enabled(void* self, bool enabled) {
    QWidget_SetEnabled((QWidget*)self, enabled);
}

void q_doublespinbox_set_disabled(void* self, bool disabled) {
    QWidget_SetDisabled((QWidget*)self, disabled);
}

void q_doublespinbox_set_window_modified(void* self, bool windowModified) {
    QWidget_SetWindowModified((QWidget*)self, windowModified);
}

QRect* q_doublespinbox_frame_geometry(void* self) {
    return QWidget_FrameGeometry((QWidget*)self);
}

const QRect* q_doublespinbox_geometry(void* self) {
    return QWidget_Geometry((QWidget*)self);
}

QRect* q_doublespinbox_normal_geometry(void* self) {
    return QWidget_NormalGeometry((QWidget*)self);
}

int32_t q_doublespinbox_x(void* self) {
    return QWidget_X((QWidget*)self);
}

int32_t q_doublespinbox_y(void* self) {
    return QWidget_Y((QWidget*)self);
}

QPoint* q_doublespinbox_pos(void* self) {
    return QWidget_Pos((QWidget*)self);
}

QSize* q_doublespinbox_frame_size(void* self) {
    return QWidget_FrameSize((QWidget*)self);
}

QSize* q_doublespinbox_size(void* self) {
    return QWidget_Size((QWidget*)self);
}

int32_t q_doublespinbox_width(void* self) {
    return QWidget_Width((QWidget*)self);
}

int32_t q_doublespinbox_height(void* self) {
    return QWidget_Height((QWidget*)self);
}

QRect* q_doublespinbox_rect(void* self) {
    return QWidget_Rect((QWidget*)self);
}

QRect* q_doublespinbox_children_rect(void* self) {
    return QWidget_ChildrenRect((QWidget*)self);
}

QRegion* q_doublespinbox_children_region(void* self) {
    return QWidget_ChildrenRegion((QWidget*)self);
}

QSize* q_doublespinbox_minimum_size(void* self) {
    return QWidget_MinimumSize((QWidget*)self);
}

QSize* q_doublespinbox_maximum_size(void* self) {
    return QWidget_MaximumSize((QWidget*)self);
}

int32_t q_doublespinbox_minimum_width(void* self) {
    return QWidget_MinimumWidth((QWidget*)self);
}

int32_t q_doublespinbox_minimum_height(void* self) {
    return QWidget_MinimumHeight((QWidget*)self);
}

int32_t q_doublespinbox_maximum_width(void* self) {
    return QWidget_MaximumWidth((QWidget*)self);
}

int32_t q_doublespinbox_maximum_height(void* self) {
    return QWidget_MaximumHeight((QWidget*)self);
}

void q_doublespinbox_set_minimum_size(void* self, void* minimumSize) {
    QWidget_SetMinimumSize((QWidget*)self, (QSize*)minimumSize);
}

void q_doublespinbox_set_minimum_size2(void* self, int minw, int minh) {
    QWidget_SetMinimumSize2((QWidget*)self, minw, minh);
}

void q_doublespinbox_set_maximum_size(void* self, void* maximumSize) {
    QWidget_SetMaximumSize((QWidget*)self, (QSize*)maximumSize);
}

void q_doublespinbox_set_maximum_size2(void* self, int maxw, int maxh) {
    QWidget_SetMaximumSize2((QWidget*)self, maxw, maxh);
}

void q_doublespinbox_set_minimum_width(void* self, int minw) {
    QWidget_SetMinimumWidth((QWidget*)self, minw);
}

void q_doublespinbox_set_minimum_height(void* self, int minh) {
    QWidget_SetMinimumHeight((QWidget*)self, minh);
}

void q_doublespinbox_set_maximum_width(void* self, int maxw) {
    QWidget_SetMaximumWidth((QWidget*)self, maxw);
}

void q_doublespinbox_set_maximum_height(void* self, int maxh) {
    QWidget_SetMaximumHeight((QWidget*)self, maxh);
}

QSize* q_doublespinbox_size_increment(void* self) {
    return QWidget_SizeIncrement((QWidget*)self);
}

void q_doublespinbox_set_size_increment(void* self, void* sizeIncrement) {
    QWidget_SetSizeIncrement((QWidget*)self, (QSize*)sizeIncrement);
}

void q_doublespinbox_set_size_increment2(void* self, int w, int h) {
    QWidget_SetSizeIncrement2((QWidget*)self, w, h);
}

QSize* q_doublespinbox_base_size(void* self) {
    return QWidget_BaseSize((QWidget*)self);
}

void q_doublespinbox_set_base_size(void* self, void* baseSize) {
    QWidget_SetBaseSize((QWidget*)self, (QSize*)baseSize);
}

void q_doublespinbox_set_base_size2(void* self, int basew, int baseh) {
    QWidget_SetBaseSize2((QWidget*)self, basew, baseh);
}

void q_doublespinbox_set_fixed_size(void* self, void* fixedSize) {
    QWidget_SetFixedSize((QWidget*)self, (QSize*)fixedSize);
}

void q_doublespinbox_set_fixed_size2(void* self, int w, int h) {
    QWidget_SetFixedSize2((QWidget*)self, w, h);
}

void q_doublespinbox_set_fixed_width(void* self, int w) {
    QWidget_SetFixedWidth((QWidget*)self, w);
}

void q_doublespinbox_set_fixed_height(void* self, int h) {
    QWidget_SetFixedHeight((QWidget*)self, h);
}

QPointF* q_doublespinbox_map_to_global(void* self, void* param1) {
    return QWidget_MapToGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_doublespinbox_map_to_global2(void* self, void* param1) {
    return QWidget_MapToGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_doublespinbox_map_from_global(void* self, void* param1) {
    return QWidget_MapFromGlobal((QWidget*)self, (QPointF*)param1);
}

QPoint* q_doublespinbox_map_from_global2(void* self, void* param1) {
    return QWidget_MapFromGlobal2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_doublespinbox_map_to_parent(void* self, void* param1) {
    return QWidget_MapToParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_doublespinbox_map_to_parent2(void* self, void* param1) {
    return QWidget_MapToParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_doublespinbox_map_from_parent(void* self, void* param1) {
    return QWidget_MapFromParent((QWidget*)self, (QPointF*)param1);
}

QPoint* q_doublespinbox_map_from_parent2(void* self, void* param1) {
    return QWidget_MapFromParent2((QWidget*)self, (QPoint*)param1);
}

QPointF* q_doublespinbox_map_to(void* self, void* param1, void* param2) {
    return QWidget_MapTo((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_doublespinbox_map_to2(void* self, void* param1, void* param2) {
    return QWidget_MapTo2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QPointF* q_doublespinbox_map_from(void* self, void* param1, void* param2) {
    return QWidget_MapFrom((QWidget*)self, (QWidget*)param1, (QPointF*)param2);
}

QPoint* q_doublespinbox_map_from2(void* self, void* param1, void* param2) {
    return QWidget_MapFrom2((QWidget*)self, (QWidget*)param1, (QPoint*)param2);
}

QWidget* q_doublespinbox_window(void* self) {
    return QWidget_Window((QWidget*)self);
}

QWidget* q_doublespinbox_native_parent_widget(void* self) {
    return QWidget_NativeParentWidget((QWidget*)self);
}

QWidget* q_doublespinbox_top_level_widget(void* self) {
    return QWidget_TopLevelWidget((QWidget*)self);
}

const QPalette* q_doublespinbox_palette(void* self) {
    return QWidget_Palette((QWidget*)self);
}

void q_doublespinbox_set_palette(void* self, void* palette) {
    QWidget_SetPalette((QWidget*)self, (QPalette*)palette);
}

void q_doublespinbox_set_background_role(void* self, int32_t backgroundRole) {
    QWidget_SetBackgroundRole((QWidget*)self, backgroundRole);
}

int32_t q_doublespinbox_background_role(void* self) {
    return QWidget_BackgroundRole((QWidget*)self);
}

void q_doublespinbox_set_foreground_role(void* self, int32_t foregroundRole) {
    QWidget_SetForegroundRole((QWidget*)self, foregroundRole);
}

int32_t q_doublespinbox_foreground_role(void* self) {
    return QWidget_ForegroundRole((QWidget*)self);
}

const QFont* q_doublespinbox_font(void* self) {
    return QWidget_Font((QWidget*)self);
}

void q_doublespinbox_set_font(void* self, void* font) {
    QWidget_SetFont((QWidget*)self, (QFont*)font);
}

QFontMetrics* q_doublespinbox_font_metrics(void* self) {
    return QWidget_FontMetrics((QWidget*)self);
}

QFontInfo* q_doublespinbox_font_info(void* self) {
    return QWidget_FontInfo((QWidget*)self);
}

QCursor* q_doublespinbox_cursor(void* self) {
    return QWidget_Cursor((QWidget*)self);
}

void q_doublespinbox_set_cursor(void* self, void* cursor) {
    QWidget_SetCursor((QWidget*)self, (QCursor*)cursor);
}

void q_doublespinbox_unset_cursor(void* self) {
    QWidget_UnsetCursor((QWidget*)self);
}

void q_doublespinbox_set_mouse_tracking(void* self, bool enable) {
    QWidget_SetMouseTracking((QWidget*)self, enable);
}

bool q_doublespinbox_has_mouse_tracking(void* self) {
    return QWidget_HasMouseTracking((QWidget*)self);
}

bool q_doublespinbox_under_mouse(void* self) {
    return QWidget_UnderMouse((QWidget*)self);
}

void q_doublespinbox_set_tablet_tracking(void* self, bool enable) {
    QWidget_SetTabletTracking((QWidget*)self, enable);
}

bool q_doublespinbox_has_tablet_tracking(void* self) {
    return QWidget_HasTabletTracking((QWidget*)self);
}

void q_doublespinbox_set_mask(void* self, void* mask) {
    QWidget_SetMask((QWidget*)self, (QBitmap*)mask);
}

void q_doublespinbox_set_mask2(void* self, void* mask) {
    QWidget_SetMask2((QWidget*)self, (QRegion*)mask);
}

QRegion* q_doublespinbox_mask(void* self) {
    return QWidget_Mask((QWidget*)self);
}

void q_doublespinbox_clear_mask(void* self) {
    QWidget_ClearMask((QWidget*)self);
}

void q_doublespinbox_render(void* self, void* target) {
    QWidget_Render((QWidget*)self, (QPaintDevice*)target);
}

void q_doublespinbox_render2(void* self, void* painter) {
    QWidget_Render2((QWidget*)self, (QPainter*)painter);
}

QPixmap* q_doublespinbox_grab(void* self) {
    return QWidget_Grab((QWidget*)self);
}

QGraphicsEffect* q_doublespinbox_graphics_effect(void* self) {
    return QWidget_GraphicsEffect((QWidget*)self);
}

void q_doublespinbox_set_graphics_effect(void* self, void* effect) {
    QWidget_SetGraphicsEffect((QWidget*)self, (QGraphicsEffect*)effect);
}

void q_doublespinbox_grab_gesture(void* self, int64_t type) {
    QWidget_GrabGesture((QWidget*)self, type);
}

void q_doublespinbox_ungrab_gesture(void* self, int64_t type) {
    QWidget_UngrabGesture((QWidget*)self, type);
}

void q_doublespinbox_set_window_title(void* self, const char* windowTitle) {
    QWidget_SetWindowTitle((QWidget*)self, qstring(windowTitle));
}

void q_doublespinbox_set_style_sheet(void* self, const char* styleSheet) {
    QWidget_SetStyleSheet((QWidget*)self, qstring(styleSheet));
}

const char* q_doublespinbox_style_sheet(void* self) {
    libqt_string _str = QWidget_StyleSheet((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_doublespinbox_window_title(void* self) {
    libqt_string _str = QWidget_WindowTitle((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_window_icon(void* self, void* icon) {
    QWidget_SetWindowIcon((QWidget*)self, (QIcon*)icon);
}

QIcon* q_doublespinbox_window_icon(void* self) {
    return QWidget_WindowIcon((QWidget*)self);
}

void q_doublespinbox_set_window_icon_text(void* self, const char* windowIconText) {
    QWidget_SetWindowIconText((QWidget*)self, qstring(windowIconText));
}

const char* q_doublespinbox_window_icon_text(void* self) {
    libqt_string _str = QWidget_WindowIconText((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_window_role(void* self, const char* windowRole) {
    QWidget_SetWindowRole((QWidget*)self, qstring(windowRole));
}

const char* q_doublespinbox_window_role(void* self) {
    libqt_string _str = QWidget_WindowRole((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_window_file_path(void* self, const char* filePath) {
    QWidget_SetWindowFilePath((QWidget*)self, qstring(filePath));
}

const char* q_doublespinbox_window_file_path(void* self) {
    libqt_string _str = QWidget_WindowFilePath((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_window_opacity(void* self, double level) {
    QWidget_SetWindowOpacity((QWidget*)self, level);
}

double q_doublespinbox_window_opacity(void* self) {
    return QWidget_WindowOpacity((QWidget*)self);
}

bool q_doublespinbox_is_window_modified(void* self) {
    return QWidget_IsWindowModified((QWidget*)self);
}

void q_doublespinbox_set_tool_tip(void* self, const char* toolTip) {
    QWidget_SetToolTip((QWidget*)self, qstring(toolTip));
}

const char* q_doublespinbox_tool_tip(void* self) {
    libqt_string _str = QWidget_ToolTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_tool_tip_duration(void* self, int msec) {
    QWidget_SetToolTipDuration((QWidget*)self, msec);
}

int32_t q_doublespinbox_tool_tip_duration(void* self) {
    return QWidget_ToolTipDuration((QWidget*)self);
}

void q_doublespinbox_set_status_tip(void* self, const char* statusTip) {
    QWidget_SetStatusTip((QWidget*)self, qstring(statusTip));
}

const char* q_doublespinbox_status_tip(void* self) {
    libqt_string _str = QWidget_StatusTip((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_whats_this(void* self, const char* whatsThis) {
    QWidget_SetWhatsThis((QWidget*)self, qstring(whatsThis));
}

const char* q_doublespinbox_whats_this(void* self) {
    libqt_string _str = QWidget_WhatsThis((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_doublespinbox_accessible_name(void* self) {
    libqt_string _str = QWidget_AccessibleName((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_accessible_name(void* self, const char* name) {
    QWidget_SetAccessibleName((QWidget*)self, qstring(name));
}

const char* q_doublespinbox_accessible_description(void* self) {
    libqt_string _str = QWidget_AccessibleDescription((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_accessible_description(void* self, const char* description) {
    QWidget_SetAccessibleDescription((QWidget*)self, qstring(description));
}

void q_doublespinbox_set_layout_direction(void* self, int32_t direction) {
    QWidget_SetLayoutDirection((QWidget*)self, direction);
}

int32_t q_doublespinbox_layout_direction(void* self) {
    return QWidget_LayoutDirection((QWidget*)self);
}

void q_doublespinbox_unset_layout_direction(void* self) {
    QWidget_UnsetLayoutDirection((QWidget*)self);
}

void q_doublespinbox_set_locale(void* self, void* locale) {
    QWidget_SetLocale((QWidget*)self, (QLocale*)locale);
}

QLocale* q_doublespinbox_locale(void* self) {
    return QWidget_Locale((QWidget*)self);
}

void q_doublespinbox_unset_locale(void* self) {
    QWidget_UnsetLocale((QWidget*)self);
}

bool q_doublespinbox_is_right_to_left(void* self) {
    return QWidget_IsRightToLeft((QWidget*)self);
}

bool q_doublespinbox_is_left_to_right(void* self) {
    return QWidget_IsLeftToRight((QWidget*)self);
}

void q_doublespinbox_set_focus(void* self) {
    QWidget_SetFocus((QWidget*)self);
}

bool q_doublespinbox_is_active_window(void* self) {
    return QWidget_IsActiveWindow((QWidget*)self);
}

void q_doublespinbox_activate_window(void* self) {
    QWidget_ActivateWindow((QWidget*)self);
}

void q_doublespinbox_clear_focus(void* self) {
    QWidget_ClearFocus((QWidget*)self);
}

void q_doublespinbox_set_focus2(void* self, int32_t reason) {
    QWidget_SetFocus2((QWidget*)self, reason);
}

int32_t q_doublespinbox_focus_policy(void* self) {
    return QWidget_FocusPolicy((QWidget*)self);
}

void q_doublespinbox_set_focus_policy(void* self, int32_t policy) {
    QWidget_SetFocusPolicy((QWidget*)self, policy);
}

bool q_doublespinbox_has_focus(void* self) {
    return QWidget_HasFocus((QWidget*)self);
}

void q_doublespinbox_set_tab_order(void* param1, void* param2) {
    QWidget_SetTabOrder((QWidget*)param1, (QWidget*)param2);
}

void q_doublespinbox_set_focus_proxy(void* self, void* focusProxy) {
    QWidget_SetFocusProxy((QWidget*)self, (QWidget*)focusProxy);
}

QWidget* q_doublespinbox_focus_proxy(void* self) {
    return QWidget_FocusProxy((QWidget*)self);
}

int32_t q_doublespinbox_context_menu_policy(void* self) {
    return QWidget_ContextMenuPolicy((QWidget*)self);
}

void q_doublespinbox_set_context_menu_policy(void* self, int32_t policy) {
    QWidget_SetContextMenuPolicy((QWidget*)self, policy);
}

void q_doublespinbox_grab_mouse(void* self) {
    QWidget_GrabMouse((QWidget*)self);
}

void q_doublespinbox_grab_mouse2(void* self, void* param1) {
    QWidget_GrabMouse2((QWidget*)self, (QCursor*)param1);
}

void q_doublespinbox_release_mouse(void* self) {
    QWidget_ReleaseMouse((QWidget*)self);
}

void q_doublespinbox_grab_keyboard(void* self) {
    QWidget_GrabKeyboard((QWidget*)self);
}

void q_doublespinbox_release_keyboard(void* self) {
    QWidget_ReleaseKeyboard((QWidget*)self);
}

int32_t q_doublespinbox_grab_shortcut(void* self, void* key) {
    return QWidget_GrabShortcut((QWidget*)self, (QKeySequence*)key);
}

void q_doublespinbox_release_shortcut(void* self, int id) {
    QWidget_ReleaseShortcut((QWidget*)self, id);
}

void q_doublespinbox_set_shortcut_enabled(void* self, int id) {
    QWidget_SetShortcutEnabled((QWidget*)self, id);
}

void q_doublespinbox_set_shortcut_auto_repeat(void* self, int id) {
    QWidget_SetShortcutAutoRepeat((QWidget*)self, id);
}

QWidget* q_doublespinbox_mouse_grabber() {
    return QWidget_MouseGrabber();
}

QWidget* q_doublespinbox_keyboard_grabber() {
    return QWidget_KeyboardGrabber();
}

bool q_doublespinbox_updates_enabled(void* self) {
    return QWidget_UpdatesEnabled((QWidget*)self);
}

void q_doublespinbox_set_updates_enabled(void* self, bool enable) {
    QWidget_SetUpdatesEnabled((QWidget*)self, enable);
}

QGraphicsProxyWidget* q_doublespinbox_graphics_proxy_widget(void* self) {
    return QWidget_GraphicsProxyWidget((QWidget*)self);
}

void q_doublespinbox_update(void* self) {
    QWidget_Update((QWidget*)self);
}

void q_doublespinbox_repaint(void* self) {
    QWidget_Repaint((QWidget*)self);
}

void q_doublespinbox_update2(void* self, int x, int y, int w, int h) {
    QWidget_Update2((QWidget*)self, x, y, w, h);
}

void q_doublespinbox_update3(void* self, void* param1) {
    QWidget_Update3((QWidget*)self, (QRect*)param1);
}

void q_doublespinbox_update4(void* self, void* param1) {
    QWidget_Update4((QWidget*)self, (QRegion*)param1);
}

void q_doublespinbox_repaint2(void* self, int x, int y, int w, int h) {
    QWidget_Repaint2((QWidget*)self, x, y, w, h);
}

void q_doublespinbox_repaint3(void* self, void* param1) {
    QWidget_Repaint3((QWidget*)self, (QRect*)param1);
}

void q_doublespinbox_repaint4(void* self, void* param1) {
    QWidget_Repaint4((QWidget*)self, (QRegion*)param1);
}

void q_doublespinbox_set_hidden(void* self, bool hidden) {
    QWidget_SetHidden((QWidget*)self, hidden);
}

void q_doublespinbox_show(void* self) {
    QWidget_Show((QWidget*)self);
}

void q_doublespinbox_hide(void* self) {
    QWidget_Hide((QWidget*)self);
}

void q_doublespinbox_show_minimized(void* self) {
    QWidget_ShowMinimized((QWidget*)self);
}

void q_doublespinbox_show_maximized(void* self) {
    QWidget_ShowMaximized((QWidget*)self);
}

void q_doublespinbox_show_full_screen(void* self) {
    QWidget_ShowFullScreen((QWidget*)self);
}

void q_doublespinbox_show_normal(void* self) {
    QWidget_ShowNormal((QWidget*)self);
}

bool q_doublespinbox_close(void* self) {
    return QWidget_Close((QWidget*)self);
}

void q_doublespinbox_raise(void* self) {
    QWidget_Raise((QWidget*)self);
}

void q_doublespinbox_lower(void* self) {
    QWidget_Lower((QWidget*)self);
}

void q_doublespinbox_stack_under(void* self, void* param1) {
    QWidget_StackUnder((QWidget*)self, (QWidget*)param1);
}

void q_doublespinbox_move(void* self, int x, int y) {
    QWidget_Move((QWidget*)self, x, y);
}

void q_doublespinbox_move2(void* self, void* param1) {
    QWidget_Move2((QWidget*)self, (QPoint*)param1);
}

void q_doublespinbox_resize(void* self, int w, int h) {
    QWidget_Resize((QWidget*)self, w, h);
}

void q_doublespinbox_resize2(void* self, void* param1) {
    QWidget_Resize2((QWidget*)self, (QSize*)param1);
}

void q_doublespinbox_set_geometry(void* self, int x, int y, int w, int h) {
    QWidget_SetGeometry((QWidget*)self, x, y, w, h);
}

void q_doublespinbox_set_geometry2(void* self, void* geometry) {
    QWidget_SetGeometry2((QWidget*)self, (QRect*)geometry);
}

char* q_doublespinbox_save_geometry(void* self) {
    libqt_string _str = QWidget_SaveGeometry((QWidget*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_doublespinbox_restore_geometry(void* self, const char* geometry) {
    return QWidget_RestoreGeometry((QWidget*)self, qstring(geometry));
}

void q_doublespinbox_adjust_size(void* self) {
    QWidget_AdjustSize((QWidget*)self);
}

bool q_doublespinbox_is_visible(void* self) {
    return QWidget_IsVisible((QWidget*)self);
}

bool q_doublespinbox_is_visible_to(void* self, void* param1) {
    return QWidget_IsVisibleTo((QWidget*)self, (QWidget*)param1);
}

bool q_doublespinbox_is_hidden(void* self) {
    return QWidget_IsHidden((QWidget*)self);
}

bool q_doublespinbox_is_minimized(void* self) {
    return QWidget_IsMinimized((QWidget*)self);
}

bool q_doublespinbox_is_maximized(void* self) {
    return QWidget_IsMaximized((QWidget*)self);
}

bool q_doublespinbox_is_full_screen(void* self) {
    return QWidget_IsFullScreen((QWidget*)self);
}

int32_t q_doublespinbox_window_state(void* self) {
    return QWidget_WindowState((QWidget*)self);
}

void q_doublespinbox_set_window_state(void* self, int32_t state) {
    QWidget_SetWindowState((QWidget*)self, state);
}

void q_doublespinbox_override_window_state(void* self, int32_t state) {
    QWidget_OverrideWindowState((QWidget*)self, state);
}

QSizePolicy* q_doublespinbox_size_policy(void* self) {
    return QWidget_SizePolicy((QWidget*)self);
}

void q_doublespinbox_set_size_policy(void* self, void* sizePolicy) {
    QWidget_SetSizePolicy((QWidget*)self, (QSizePolicy*)sizePolicy);
}

void q_doublespinbox_set_size_policy2(void* self, int32_t horizontal, int32_t vertical) {
    QWidget_SetSizePolicy2((QWidget*)self, horizontal, vertical);
}

QRegion* q_doublespinbox_visible_region(void* self) {
    return QWidget_VisibleRegion((QWidget*)self);
}

void q_doublespinbox_set_contents_margins(void* self, int left, int top, int right, int bottom) {
    QWidget_SetContentsMargins((QWidget*)self, left, top, right, bottom);
}

void q_doublespinbox_set_contents_margins2(void* self, void* margins) {
    QWidget_SetContentsMargins2((QWidget*)self, (QMargins*)margins);
}

QMargins* q_doublespinbox_contents_margins(void* self) {
    return QWidget_ContentsMargins((QWidget*)self);
}

QRect* q_doublespinbox_contents_rect(void* self) {
    return QWidget_ContentsRect((QWidget*)self);
}

QLayout* q_doublespinbox_layout(void* self) {
    return QWidget_Layout((QWidget*)self);
}

void q_doublespinbox_set_layout(void* self, void* layout) {
    QWidget_SetLayout((QWidget*)self, (QLayout*)layout);
}

void q_doublespinbox_update_geometry(void* self) {
    QWidget_UpdateGeometry((QWidget*)self);
}

void q_doublespinbox_set_parent(void* self, void* parent) {
    QWidget_SetParent((QWidget*)self, (QWidget*)parent);
}

void q_doublespinbox_set_parent2(void* self, void* parent, int64_t f) {
    QWidget_SetParent2((QWidget*)self, (QWidget*)parent, f);
}

void q_doublespinbox_scroll(void* self, int dx, int dy) {
    QWidget_Scroll((QWidget*)self, dx, dy);
}

void q_doublespinbox_scroll2(void* self, int dx, int dy, void* param3) {
    QWidget_Scroll2((QWidget*)self, dx, dy, (QRect*)param3);
}

QWidget* q_doublespinbox_focus_widget(void* self) {
    return QWidget_FocusWidget((QWidget*)self);
}

QWidget* q_doublespinbox_next_in_focus_chain(void* self) {
    return QWidget_NextInFocusChain((QWidget*)self);
}

QWidget* q_doublespinbox_previous_in_focus_chain(void* self) {
    return QWidget_PreviousInFocusChain((QWidget*)self);
}

bool q_doublespinbox_accept_drops(void* self) {
    return QWidget_AcceptDrops((QWidget*)self);
}

void q_doublespinbox_set_accept_drops(void* self, bool on) {
    QWidget_SetAcceptDrops((QWidget*)self, on);
}

void q_doublespinbox_add_action(void* self, void* action) {
    QWidget_AddAction((QWidget*)self, (QAction*)action);
}

void q_doublespinbox_add_actions(void* self, libqt_list actions) {
    QWidget_AddActions((QWidget*)self, actions);
}

void q_doublespinbox_insert_actions(void* self, void* before, libqt_list actions) {
    QWidget_InsertActions((QWidget*)self, (QAction*)before, actions);
}

void q_doublespinbox_insert_action(void* self, void* before, void* action) {
    QWidget_InsertAction((QWidget*)self, (QAction*)before, (QAction*)action);
}

void q_doublespinbox_remove_action(void* self, void* action) {
    QWidget_RemoveAction((QWidget*)self, (QAction*)action);
}

libqt_list /* of QAction* */ q_doublespinbox_actions(void* self) {
    libqt_list _arr = QWidget_Actions((QWidget*)self);
    return _arr;
}

QAction* q_doublespinbox_add_action2(void* self, const char* text) {
    return QWidget_AddAction2((QWidget*)self, qstring(text));
}

QAction* q_doublespinbox_add_action3(void* self, void* icon, const char* text) {
    return QWidget_AddAction3((QWidget*)self, (QIcon*)icon, qstring(text));
}

QAction* q_doublespinbox_add_action4(void* self, const char* text, void* shortcut) {
    return QWidget_AddAction4((QWidget*)self, qstring(text), (QKeySequence*)shortcut);
}

QAction* q_doublespinbox_add_action5(void* self, void* icon, const char* text, void* shortcut) {
    return QWidget_AddAction5((QWidget*)self, (QIcon*)icon, qstring(text), (QKeySequence*)shortcut);
}

QWidget* q_doublespinbox_parent_widget(void* self) {
    return QWidget_ParentWidget((QWidget*)self);
}

void q_doublespinbox_set_window_flags(void* self, int64_t type) {
    QWidget_SetWindowFlags((QWidget*)self, type);
}

int64_t q_doublespinbox_window_flags(void* self) {
    return QWidget_WindowFlags((QWidget*)self);
}

void q_doublespinbox_set_window_flag(void* self, int64_t param1) {
    QWidget_SetWindowFlag((QWidget*)self, param1);
}

void q_doublespinbox_override_window_flags(void* self, int64_t type) {
    QWidget_OverrideWindowFlags((QWidget*)self, type);
}

int64_t q_doublespinbox_window_type(void* self) {
    return QWidget_WindowType((QWidget*)self);
}

QWidget* q_doublespinbox_find(uint64_t param1) {
    return QWidget_Find(param1);
}

QWidget* q_doublespinbox_child_at(void* self, int x, int y) {
    return QWidget_ChildAt((QWidget*)self, x, y);
}

QWidget* q_doublespinbox_child_at2(void* self, void* p) {
    return QWidget_ChildAt2((QWidget*)self, (QPoint*)p);
}

QWidget* q_doublespinbox_child_at3(void* self, void* p) {
    return QWidget_ChildAt3((QWidget*)self, (QPointF*)p);
}

void q_doublespinbox_set_attribute(void* self, int32_t param1) {
    QWidget_SetAttribute((QWidget*)self, param1);
}

bool q_doublespinbox_test_attribute(void* self, int32_t param1) {
    return QWidget_TestAttribute((QWidget*)self, param1);
}

void q_doublespinbox_ensure_polished(void* self) {
    QWidget_EnsurePolished((QWidget*)self);
}

bool q_doublespinbox_is_ancestor_of(void* self, void* child) {
    return QWidget_IsAncestorOf((QWidget*)self, (QWidget*)child);
}

bool q_doublespinbox_auto_fill_background(void* self) {
    return QWidget_AutoFillBackground((QWidget*)self);
}

void q_doublespinbox_set_auto_fill_background(void* self, bool enabled) {
    QWidget_SetAutoFillBackground((QWidget*)self, enabled);
}

QBackingStore* q_doublespinbox_backing_store(void* self) {
    return QWidget_BackingStore((QWidget*)self);
}

QWindow* q_doublespinbox_window_handle(void* self) {
    return QWidget_WindowHandle((QWidget*)self);
}

QScreen* q_doublespinbox_screen(void* self) {
    return QWidget_Screen((QWidget*)self);
}

void q_doublespinbox_set_screen(void* self, void* screen) {
    QWidget_SetScreen((QWidget*)self, (QScreen*)screen);
}

QWidget* q_doublespinbox_create_window_container(void* window) {
    return QWidget_CreateWindowContainer((QWindow*)window);
}

void q_doublespinbox_window_title_changed(void* self, const char* title) {
    QWidget_WindowTitleChanged((QWidget*)self, qstring(title));
}

void q_doublespinbox_on_window_title_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowTitleChanged((QWidget*)self, (intptr_t)callback);
}

void q_doublespinbox_window_icon_changed(void* self, void* icon) {
    QWidget_WindowIconChanged((QWidget*)self, (QIcon*)icon);
}

void q_doublespinbox_on_window_icon_changed(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_WindowIconChanged((QWidget*)self, (intptr_t)callback);
}

void q_doublespinbox_window_icon_text_changed(void* self, const char* iconText) {
    QWidget_WindowIconTextChanged((QWidget*)self, qstring(iconText));
}

void q_doublespinbox_on_window_icon_text_changed(void* self, void (*callback)(void*, const char*)) {
    QWidget_Connect_WindowIconTextChanged((QWidget*)self, (intptr_t)callback);
}

void q_doublespinbox_custom_context_menu_requested(void* self, void* pos) {
    QWidget_CustomContextMenuRequested((QWidget*)self, (QPoint*)pos);
}

void q_doublespinbox_on_custom_context_menu_requested(void* self, void (*callback)(void*, void*)) {
    QWidget_Connect_CustomContextMenuRequested((QWidget*)self, (intptr_t)callback);
}

int64_t q_doublespinbox_input_method_hints(void* self) {
    return QWidget_InputMethodHints((QWidget*)self);
}

void q_doublespinbox_set_input_method_hints(void* self, int64_t hints) {
    QWidget_SetInputMethodHints((QWidget*)self, hints);
}

void q_doublespinbox_render22(void* self, void* target, void* targetOffset) {
    QWidget_Render22((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset);
}

void q_doublespinbox_render3(void* self, void* target, void* targetOffset, void* sourceRegion) {
    QWidget_Render3((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_doublespinbox_render4(void* self, void* target, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render4((QWidget*)self, (QPaintDevice*)target, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

void q_doublespinbox_render23(void* self, void* painter, void* targetOffset) {
    QWidget_Render23((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset);
}

void q_doublespinbox_render32(void* self, void* painter, void* targetOffset, void* sourceRegion) {
    QWidget_Render32((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion);
}

void q_doublespinbox_render42(void* self, void* painter, void* targetOffset, void* sourceRegion, int32_t renderFlags) {
    QWidget_Render42((QWidget*)self, (QPainter*)painter, (QPoint*)targetOffset, (QRegion*)sourceRegion, renderFlags);
}

QPixmap* q_doublespinbox_grab1(void* self, void* rectangle) {
    return QWidget_Grab1((QWidget*)self, (QRect*)rectangle);
}

void q_doublespinbox_grab_gesture2(void* self, int64_t type, int32_t flags) {
    QWidget_GrabGesture2((QWidget*)self, type, flags);
}

int32_t q_doublespinbox_grab_shortcut2(void* self, void* key, int32_t context) {
    return QWidget_GrabShortcut2((QWidget*)self, (QKeySequence*)key, context);
}

void q_doublespinbox_set_shortcut_enabled2(void* self, int id, bool enable) {
    QWidget_SetShortcutEnabled2((QWidget*)self, id, enable);
}

void q_doublespinbox_set_shortcut_auto_repeat2(void* self, int id, bool enable) {
    QWidget_SetShortcutAutoRepeat2((QWidget*)self, id, enable);
}

void q_doublespinbox_set_window_flag2(void* self, int64_t param1, bool on) {
    QWidget_SetWindowFlag2((QWidget*)self, param1, on);
}

void q_doublespinbox_set_attribute2(void* self, int32_t param1, bool on) {
    QWidget_SetAttribute2((QWidget*)self, param1, on);
}

QWidget* q_doublespinbox_create_window_container2(void* window, void* parent) {
    return QWidget_CreateWindowContainer2((QWindow*)window, (QWidget*)parent);
}

QWidget* q_doublespinbox_create_window_container3(void* window, void* parent, int64_t flags) {
    return QWidget_CreateWindowContainer3((QWindow*)window, (QWidget*)parent, flags);
}

const char* q_doublespinbox_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_doublespinbox_set_object_name(void* self, char* name) {
    QObject_SetObjectName((QObject*)self, name);
}

bool q_doublespinbox_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_doublespinbox_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_doublespinbox_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_doublespinbox_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_doublespinbox_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_doublespinbox_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

bool q_doublespinbox_move_to_thread(void* self, void* thread) {
    return QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_doublespinbox_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_doublespinbox_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

void q_doublespinbox_kill_timer2(void* self, int32_t id) {
    QObject_KillTimer2((QObject*)self, id);
}

libqt_list /* of QObject* */ q_doublespinbox_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_doublespinbox_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_doublespinbox_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_doublespinbox_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_doublespinbox_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_doublespinbox_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_doublespinbox_disconnect2(void* param1) {
    return QObject_Disconnect2((QMetaObject__Connection*)param1);
}

void q_doublespinbox_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_doublespinbox_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_doublespinbox_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_doublespinbox_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

const char** q_doublespinbox_dynamic_property_names(void* self) {
    libqt_list _arr = QObject_DynamicPropertyNames((QObject*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Failed to allocate memory for string list in q_doublespinbox_dynamic_property_names");
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

QBindingStorage* q_doublespinbox_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

const QBindingStorage* q_doublespinbox_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_doublespinbox_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_doublespinbox_on_destroyed(void* self, void (*callback)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)callback);
}

QObject* q_doublespinbox_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_doublespinbox_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_doublespinbox_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

bool q_doublespinbox_move_to_thread2(void* self, void* thread, void* param2) {
    return QObject_MoveToThread2((QObject*)self, (QThread*)thread, (Disambiguated_t*)param2);
}

int32_t q_doublespinbox_start_timer22(void* self, int interval, int32_t timerType) {
    return QObject_StartTimer22((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_doublespinbox_connect5(void* sender, void* signal, void* receiver, void* method, int32_t type) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, type);
}

QMetaObject__Connection* q_doublespinbox_connect4(void* self, void* sender, const char* signal, const char* member, int32_t type) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, type);
}

void q_doublespinbox_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_doublespinbox_on_destroyed1(void* self, void (*callback)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)callback);
}

bool q_doublespinbox_painting_active(void* self) {
    return QPaintDevice_PaintingActive((QPaintDevice*)self);
}

int32_t q_doublespinbox_width_m_m(void* self) {
    return QPaintDevice_WidthMM((QPaintDevice*)self);
}

int32_t q_doublespinbox_height_m_m(void* self) {
    return QPaintDevice_HeightMM((QPaintDevice*)self);
}

int32_t q_doublespinbox_logical_dpi_x(void* self) {
    return QPaintDevice_LogicalDpiX((QPaintDevice*)self);
}

int32_t q_doublespinbox_logical_dpi_y(void* self) {
    return QPaintDevice_LogicalDpiY((QPaintDevice*)self);
}

int32_t q_doublespinbox_physical_dpi_x(void* self) {
    return QPaintDevice_PhysicalDpiX((QPaintDevice*)self);
}

int32_t q_doublespinbox_physical_dpi_y(void* self) {
    return QPaintDevice_PhysicalDpiY((QPaintDevice*)self);
}

double q_doublespinbox_device_pixel_ratio(void* self) {
    return QPaintDevice_DevicePixelRatio((QPaintDevice*)self);
}

double q_doublespinbox_device_pixel_ratio_f(void* self) {
    return QPaintDevice_DevicePixelRatioF((QPaintDevice*)self);
}

int32_t q_doublespinbox_color_count(void* self) {
    return QPaintDevice_ColorCount((QPaintDevice*)self);
}

int32_t q_doublespinbox_depth(void* self) {
    return QPaintDevice_Depth((QPaintDevice*)self);
}

double q_doublespinbox_device_pixel_ratio_f_scale() {
    return QPaintDevice_DevicePixelRatioFScale();
}

int32_t q_doublespinbox_encode_metric_f(int32_t metric, double value) {
    return QPaintDevice_EncodeMetricF(metric, value);
}

QSize* q_doublespinbox_size_hint(void* self) {
    return QDoubleSpinBox_SizeHint((QDoubleSpinBox*)self);
}

QSize* q_doublespinbox_qbase_size_hint(void* self) {
    return QDoubleSpinBox_QBaseSizeHint((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_size_hint(void* self, QSize* (*callback)()) {
    QDoubleSpinBox_OnSizeHint((QDoubleSpinBox*)self, (intptr_t)callback);
}

QSize* q_doublespinbox_minimum_size_hint(void* self) {
    return QDoubleSpinBox_MinimumSizeHint((QDoubleSpinBox*)self);
}

QSize* q_doublespinbox_qbase_minimum_size_hint(void* self) {
    return QDoubleSpinBox_QBaseMinimumSizeHint((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_minimum_size_hint(void* self, QSize* (*callback)()) {
    QDoubleSpinBox_OnMinimumSizeHint((QDoubleSpinBox*)self, (intptr_t)callback);
}

bool q_doublespinbox_event(void* self, void* event) {
    return QDoubleSpinBox_Event((QDoubleSpinBox*)self, (QEvent*)event);
}

bool q_doublespinbox_qbase_event(void* self, void* event) {
    return QDoubleSpinBox_QBaseEvent((QDoubleSpinBox*)self, (QEvent*)event);
}

void q_doublespinbox_on_event(void* self, bool (*callback)(void*, void*)) {
    QDoubleSpinBox_OnEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

QVariant* q_doublespinbox_input_method_query(void* self, int64_t param1) {
    return QDoubleSpinBox_InputMethodQuery((QDoubleSpinBox*)self, param1);
}

QVariant* q_doublespinbox_qbase_input_method_query(void* self, int64_t param1) {
    return QDoubleSpinBox_QBaseInputMethodQuery((QDoubleSpinBox*)self, param1);
}

void q_doublespinbox_on_input_method_query(void* self, QVariant* (*callback)(void*, int64_t)) {
    QDoubleSpinBox_OnInputMethodQuery((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_step_by(void* self, int steps) {
    QDoubleSpinBox_StepBy((QDoubleSpinBox*)self, steps);
}

void q_doublespinbox_qbase_step_by(void* self, int steps) {
    QDoubleSpinBox_QBaseStepBy((QDoubleSpinBox*)self, steps);
}

void q_doublespinbox_on_step_by(void* self, void (*callback)(void*, int)) {
    QDoubleSpinBox_OnStepBy((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_clear(void* self) {
    QDoubleSpinBox_Clear((QDoubleSpinBox*)self);
}

void q_doublespinbox_qbase_clear(void* self) {
    QDoubleSpinBox_QBaseClear((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_clear(void* self, void (*callback)()) {
    QDoubleSpinBox_OnClear((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_resize_event(void* self, void* event) {
    QDoubleSpinBox_ResizeEvent((QDoubleSpinBox*)self, (QResizeEvent*)event);
}

void q_doublespinbox_qbase_resize_event(void* self, void* event) {
    QDoubleSpinBox_QBaseResizeEvent((QDoubleSpinBox*)self, (QResizeEvent*)event);
}

void q_doublespinbox_on_resize_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnResizeEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_key_press_event(void* self, void* event) {
    QDoubleSpinBox_KeyPressEvent((QDoubleSpinBox*)self, (QKeyEvent*)event);
}

void q_doublespinbox_qbase_key_press_event(void* self, void* event) {
    QDoubleSpinBox_QBaseKeyPressEvent((QDoubleSpinBox*)self, (QKeyEvent*)event);
}

void q_doublespinbox_on_key_press_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnKeyPressEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_key_release_event(void* self, void* event) {
    QDoubleSpinBox_KeyReleaseEvent((QDoubleSpinBox*)self, (QKeyEvent*)event);
}

void q_doublespinbox_qbase_key_release_event(void* self, void* event) {
    QDoubleSpinBox_QBaseKeyReleaseEvent((QDoubleSpinBox*)self, (QKeyEvent*)event);
}

void q_doublespinbox_on_key_release_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnKeyReleaseEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_wheel_event(void* self, void* event) {
    QDoubleSpinBox_WheelEvent((QDoubleSpinBox*)self, (QWheelEvent*)event);
}

void q_doublespinbox_qbase_wheel_event(void* self, void* event) {
    QDoubleSpinBox_QBaseWheelEvent((QDoubleSpinBox*)self, (QWheelEvent*)event);
}

void q_doublespinbox_on_wheel_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnWheelEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_focus_in_event(void* self, void* event) {
    QDoubleSpinBox_FocusInEvent((QDoubleSpinBox*)self, (QFocusEvent*)event);
}

void q_doublespinbox_qbase_focus_in_event(void* self, void* event) {
    QDoubleSpinBox_QBaseFocusInEvent((QDoubleSpinBox*)self, (QFocusEvent*)event);
}

void q_doublespinbox_on_focus_in_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnFocusInEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_focus_out_event(void* self, void* event) {
    QDoubleSpinBox_FocusOutEvent((QDoubleSpinBox*)self, (QFocusEvent*)event);
}

void q_doublespinbox_qbase_focus_out_event(void* self, void* event) {
    QDoubleSpinBox_QBaseFocusOutEvent((QDoubleSpinBox*)self, (QFocusEvent*)event);
}

void q_doublespinbox_on_focus_out_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnFocusOutEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_context_menu_event(void* self, void* event) {
    QDoubleSpinBox_ContextMenuEvent((QDoubleSpinBox*)self, (QContextMenuEvent*)event);
}

void q_doublespinbox_qbase_context_menu_event(void* self, void* event) {
    QDoubleSpinBox_QBaseContextMenuEvent((QDoubleSpinBox*)self, (QContextMenuEvent*)event);
}

void q_doublespinbox_on_context_menu_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnContextMenuEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_change_event(void* self, void* event) {
    QDoubleSpinBox_ChangeEvent((QDoubleSpinBox*)self, (QEvent*)event);
}

void q_doublespinbox_qbase_change_event(void* self, void* event) {
    QDoubleSpinBox_QBaseChangeEvent((QDoubleSpinBox*)self, (QEvent*)event);
}

void q_doublespinbox_on_change_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnChangeEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_close_event(void* self, void* event) {
    QDoubleSpinBox_CloseEvent((QDoubleSpinBox*)self, (QCloseEvent*)event);
}

void q_doublespinbox_qbase_close_event(void* self, void* event) {
    QDoubleSpinBox_QBaseCloseEvent((QDoubleSpinBox*)self, (QCloseEvent*)event);
}

void q_doublespinbox_on_close_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnCloseEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_hide_event(void* self, void* event) {
    QDoubleSpinBox_HideEvent((QDoubleSpinBox*)self, (QHideEvent*)event);
}

void q_doublespinbox_qbase_hide_event(void* self, void* event) {
    QDoubleSpinBox_QBaseHideEvent((QDoubleSpinBox*)self, (QHideEvent*)event);
}

void q_doublespinbox_on_hide_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnHideEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_mouse_press_event(void* self, void* event) {
    QDoubleSpinBox_MousePressEvent((QDoubleSpinBox*)self, (QMouseEvent*)event);
}

void q_doublespinbox_qbase_mouse_press_event(void* self, void* event) {
    QDoubleSpinBox_QBaseMousePressEvent((QDoubleSpinBox*)self, (QMouseEvent*)event);
}

void q_doublespinbox_on_mouse_press_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnMousePressEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_mouse_release_event(void* self, void* event) {
    QDoubleSpinBox_MouseReleaseEvent((QDoubleSpinBox*)self, (QMouseEvent*)event);
}

void q_doublespinbox_qbase_mouse_release_event(void* self, void* event) {
    QDoubleSpinBox_QBaseMouseReleaseEvent((QDoubleSpinBox*)self, (QMouseEvent*)event);
}

void q_doublespinbox_on_mouse_release_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnMouseReleaseEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_mouse_move_event(void* self, void* event) {
    QDoubleSpinBox_MouseMoveEvent((QDoubleSpinBox*)self, (QMouseEvent*)event);
}

void q_doublespinbox_qbase_mouse_move_event(void* self, void* event) {
    QDoubleSpinBox_QBaseMouseMoveEvent((QDoubleSpinBox*)self, (QMouseEvent*)event);
}

void q_doublespinbox_on_mouse_move_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnMouseMoveEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_timer_event(void* self, void* event) {
    QDoubleSpinBox_TimerEvent((QDoubleSpinBox*)self, (QTimerEvent*)event);
}

void q_doublespinbox_qbase_timer_event(void* self, void* event) {
    QDoubleSpinBox_QBaseTimerEvent((QDoubleSpinBox*)self, (QTimerEvent*)event);
}

void q_doublespinbox_on_timer_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnTimerEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_paint_event(void* self, void* event) {
    QDoubleSpinBox_PaintEvent((QDoubleSpinBox*)self, (QPaintEvent*)event);
}

void q_doublespinbox_qbase_paint_event(void* self, void* event) {
    QDoubleSpinBox_QBasePaintEvent((QDoubleSpinBox*)self, (QPaintEvent*)event);
}

void q_doublespinbox_on_paint_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnPaintEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_show_event(void* self, void* event) {
    QDoubleSpinBox_ShowEvent((QDoubleSpinBox*)self, (QShowEvent*)event);
}

void q_doublespinbox_qbase_show_event(void* self, void* event) {
    QDoubleSpinBox_QBaseShowEvent((QDoubleSpinBox*)self, (QShowEvent*)event);
}

void q_doublespinbox_on_show_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnShowEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_init_style_option(void* self, void* option) {
    QDoubleSpinBox_InitStyleOption((QDoubleSpinBox*)self, (QStyleOptionSpinBox*)option);
}

void q_doublespinbox_qbase_init_style_option(void* self, void* option) {
    QDoubleSpinBox_QBaseInitStyleOption((QDoubleSpinBox*)self, (QStyleOptionSpinBox*)option);
}

void q_doublespinbox_on_init_style_option(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnInitStyleOption((QDoubleSpinBox*)self, (intptr_t)callback);
}

int32_t q_doublespinbox_step_enabled(void* self) {
    return QDoubleSpinBox_StepEnabled((QDoubleSpinBox*)self);
}

int32_t q_doublespinbox_qbase_step_enabled(void* self) {
    return QDoubleSpinBox_QBaseStepEnabled((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_step_enabled(void* self, int32_t (*callback)()) {
    QDoubleSpinBox_OnStepEnabled((QDoubleSpinBox*)self, (intptr_t)callback);
}

int32_t q_doublespinbox_dev_type(void* self) {
    return QDoubleSpinBox_DevType((QDoubleSpinBox*)self);
}

int32_t q_doublespinbox_qbase_dev_type(void* self) {
    return QDoubleSpinBox_QBaseDevType((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_dev_type(void* self, int32_t (*callback)()) {
    QDoubleSpinBox_OnDevType((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_set_visible(void* self, bool visible) {
    QDoubleSpinBox_SetVisible((QDoubleSpinBox*)self, visible);
}

void q_doublespinbox_qbase_set_visible(void* self, bool visible) {
    QDoubleSpinBox_QBaseSetVisible((QDoubleSpinBox*)self, visible);
}

void q_doublespinbox_on_set_visible(void* self, void (*callback)(void*, bool)) {
    QDoubleSpinBox_OnSetVisible((QDoubleSpinBox*)self, (intptr_t)callback);
}

int32_t q_doublespinbox_height_for_width(void* self, int param1) {
    return QDoubleSpinBox_HeightForWidth((QDoubleSpinBox*)self, param1);
}

int32_t q_doublespinbox_qbase_height_for_width(void* self, int param1) {
    return QDoubleSpinBox_QBaseHeightForWidth((QDoubleSpinBox*)self, param1);
}

void q_doublespinbox_on_height_for_width(void* self, int32_t (*callback)(void*, int)) {
    QDoubleSpinBox_OnHeightForWidth((QDoubleSpinBox*)self, (intptr_t)callback);
}

bool q_doublespinbox_has_height_for_width(void* self) {
    return QDoubleSpinBox_HasHeightForWidth((QDoubleSpinBox*)self);
}

bool q_doublespinbox_qbase_has_height_for_width(void* self) {
    return QDoubleSpinBox_QBaseHasHeightForWidth((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_has_height_for_width(void* self, bool (*callback)()) {
    QDoubleSpinBox_OnHasHeightForWidth((QDoubleSpinBox*)self, (intptr_t)callback);
}

QPaintEngine* q_doublespinbox_paint_engine(void* self) {
    return QDoubleSpinBox_PaintEngine((QDoubleSpinBox*)self);
}

QPaintEngine* q_doublespinbox_qbase_paint_engine(void* self) {
    return QDoubleSpinBox_QBasePaintEngine((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_paint_engine(void* self, QPaintEngine* (*callback)()) {
    QDoubleSpinBox_OnPaintEngine((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_mouse_double_click_event(void* self, void* event) {
    QDoubleSpinBox_MouseDoubleClickEvent((QDoubleSpinBox*)self, (QMouseEvent*)event);
}

void q_doublespinbox_qbase_mouse_double_click_event(void* self, void* event) {
    QDoubleSpinBox_QBaseMouseDoubleClickEvent((QDoubleSpinBox*)self, (QMouseEvent*)event);
}

void q_doublespinbox_on_mouse_double_click_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnMouseDoubleClickEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_enter_event(void* self, void* event) {
    QDoubleSpinBox_EnterEvent((QDoubleSpinBox*)self, (QEnterEvent*)event);
}

void q_doublespinbox_qbase_enter_event(void* self, void* event) {
    QDoubleSpinBox_QBaseEnterEvent((QDoubleSpinBox*)self, (QEnterEvent*)event);
}

void q_doublespinbox_on_enter_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnEnterEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_leave_event(void* self, void* event) {
    QDoubleSpinBox_LeaveEvent((QDoubleSpinBox*)self, (QEvent*)event);
}

void q_doublespinbox_qbase_leave_event(void* self, void* event) {
    QDoubleSpinBox_QBaseLeaveEvent((QDoubleSpinBox*)self, (QEvent*)event);
}

void q_doublespinbox_on_leave_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnLeaveEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_move_event(void* self, void* event) {
    QDoubleSpinBox_MoveEvent((QDoubleSpinBox*)self, (QMoveEvent*)event);
}

void q_doublespinbox_qbase_move_event(void* self, void* event) {
    QDoubleSpinBox_QBaseMoveEvent((QDoubleSpinBox*)self, (QMoveEvent*)event);
}

void q_doublespinbox_on_move_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnMoveEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_tablet_event(void* self, void* event) {
    QDoubleSpinBox_TabletEvent((QDoubleSpinBox*)self, (QTabletEvent*)event);
}

void q_doublespinbox_qbase_tablet_event(void* self, void* event) {
    QDoubleSpinBox_QBaseTabletEvent((QDoubleSpinBox*)self, (QTabletEvent*)event);
}

void q_doublespinbox_on_tablet_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnTabletEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_action_event(void* self, void* event) {
    QDoubleSpinBox_ActionEvent((QDoubleSpinBox*)self, (QActionEvent*)event);
}

void q_doublespinbox_qbase_action_event(void* self, void* event) {
    QDoubleSpinBox_QBaseActionEvent((QDoubleSpinBox*)self, (QActionEvent*)event);
}

void q_doublespinbox_on_action_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnActionEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_drag_enter_event(void* self, void* event) {
    QDoubleSpinBox_DragEnterEvent((QDoubleSpinBox*)self, (QDragEnterEvent*)event);
}

void q_doublespinbox_qbase_drag_enter_event(void* self, void* event) {
    QDoubleSpinBox_QBaseDragEnterEvent((QDoubleSpinBox*)self, (QDragEnterEvent*)event);
}

void q_doublespinbox_on_drag_enter_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnDragEnterEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_drag_move_event(void* self, void* event) {
    QDoubleSpinBox_DragMoveEvent((QDoubleSpinBox*)self, (QDragMoveEvent*)event);
}

void q_doublespinbox_qbase_drag_move_event(void* self, void* event) {
    QDoubleSpinBox_QBaseDragMoveEvent((QDoubleSpinBox*)self, (QDragMoveEvent*)event);
}

void q_doublespinbox_on_drag_move_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnDragMoveEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_drag_leave_event(void* self, void* event) {
    QDoubleSpinBox_DragLeaveEvent((QDoubleSpinBox*)self, (QDragLeaveEvent*)event);
}

void q_doublespinbox_qbase_drag_leave_event(void* self, void* event) {
    QDoubleSpinBox_QBaseDragLeaveEvent((QDoubleSpinBox*)self, (QDragLeaveEvent*)event);
}

void q_doublespinbox_on_drag_leave_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnDragLeaveEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_drop_event(void* self, void* event) {
    QDoubleSpinBox_DropEvent((QDoubleSpinBox*)self, (QDropEvent*)event);
}

void q_doublespinbox_qbase_drop_event(void* self, void* event) {
    QDoubleSpinBox_QBaseDropEvent((QDoubleSpinBox*)self, (QDropEvent*)event);
}

void q_doublespinbox_on_drop_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnDropEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

bool q_doublespinbox_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDoubleSpinBox_NativeEvent((QDoubleSpinBox*)self, qstring(eventType), message, result);
}

bool q_doublespinbox_qbase_native_event(void* self, const char* eventType, void* message, intptr_t* result) {
    return QDoubleSpinBox_QBaseNativeEvent((QDoubleSpinBox*)self, qstring(eventType), message, result);
}

void q_doublespinbox_on_native_event(void* self, bool (*callback)(void*, const char*, void*, intptr_t*)) {
    QDoubleSpinBox_OnNativeEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

int32_t q_doublespinbox_metric(void* self, int32_t param1) {
    return QDoubleSpinBox_Metric((QDoubleSpinBox*)self, param1);
}

int32_t q_doublespinbox_qbase_metric(void* self, int32_t param1) {
    return QDoubleSpinBox_QBaseMetric((QDoubleSpinBox*)self, param1);
}

void q_doublespinbox_on_metric(void* self, int32_t (*callback)(void*, int32_t)) {
    QDoubleSpinBox_OnMetric((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_init_painter(void* self, void* painter) {
    QDoubleSpinBox_InitPainter((QDoubleSpinBox*)self, (QPainter*)painter);
}

void q_doublespinbox_qbase_init_painter(void* self, void* painter) {
    QDoubleSpinBox_QBaseInitPainter((QDoubleSpinBox*)self, (QPainter*)painter);
}

void q_doublespinbox_on_init_painter(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnInitPainter((QDoubleSpinBox*)self, (intptr_t)callback);
}

QPaintDevice* q_doublespinbox_redirected(void* self, void* offset) {
    return QDoubleSpinBox_Redirected((QDoubleSpinBox*)self, (QPoint*)offset);
}

QPaintDevice* q_doublespinbox_qbase_redirected(void* self, void* offset) {
    return QDoubleSpinBox_QBaseRedirected((QDoubleSpinBox*)self, (QPoint*)offset);
}

void q_doublespinbox_on_redirected(void* self, QPaintDevice* (*callback)(void*, void*)) {
    QDoubleSpinBox_OnRedirected((QDoubleSpinBox*)self, (intptr_t)callback);
}

QPainter* q_doublespinbox_shared_painter(void* self) {
    return QDoubleSpinBox_SharedPainter((QDoubleSpinBox*)self);
}

QPainter* q_doublespinbox_qbase_shared_painter(void* self) {
    return QDoubleSpinBox_QBaseSharedPainter((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_shared_painter(void* self, QPainter* (*callback)()) {
    QDoubleSpinBox_OnSharedPainter((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_input_method_event(void* self, void* param1) {
    QDoubleSpinBox_InputMethodEvent((QDoubleSpinBox*)self, (QInputMethodEvent*)param1);
}

void q_doublespinbox_qbase_input_method_event(void* self, void* param1) {
    QDoubleSpinBox_QBaseInputMethodEvent((QDoubleSpinBox*)self, (QInputMethodEvent*)param1);
}

void q_doublespinbox_on_input_method_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnInputMethodEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

bool q_doublespinbox_focus_next_prev_child(void* self, bool next) {
    return QDoubleSpinBox_FocusNextPrevChild((QDoubleSpinBox*)self, next);
}

bool q_doublespinbox_qbase_focus_next_prev_child(void* self, bool next) {
    return QDoubleSpinBox_QBaseFocusNextPrevChild((QDoubleSpinBox*)self, next);
}

void q_doublespinbox_on_focus_next_prev_child(void* self, bool (*callback)(void*, bool)) {
    QDoubleSpinBox_OnFocusNextPrevChild((QDoubleSpinBox*)self, (intptr_t)callback);
}

bool q_doublespinbox_event_filter(void* self, void* watched, void* event) {
    return QDoubleSpinBox_EventFilter((QDoubleSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

bool q_doublespinbox_qbase_event_filter(void* self, void* watched, void* event) {
    return QDoubleSpinBox_QBaseEventFilter((QDoubleSpinBox*)self, (QObject*)watched, (QEvent*)event);
}

void q_doublespinbox_on_event_filter(void* self, bool (*callback)(void*, void*, void*)) {
    QDoubleSpinBox_OnEventFilter((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_child_event(void* self, void* event) {
    QDoubleSpinBox_ChildEvent((QDoubleSpinBox*)self, (QChildEvent*)event);
}

void q_doublespinbox_qbase_child_event(void* self, void* event) {
    QDoubleSpinBox_QBaseChildEvent((QDoubleSpinBox*)self, (QChildEvent*)event);
}

void q_doublespinbox_on_child_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnChildEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_custom_event(void* self, void* event) {
    QDoubleSpinBox_CustomEvent((QDoubleSpinBox*)self, (QEvent*)event);
}

void q_doublespinbox_qbase_custom_event(void* self, void* event) {
    QDoubleSpinBox_QBaseCustomEvent((QDoubleSpinBox*)self, (QEvent*)event);
}

void q_doublespinbox_on_custom_event(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnCustomEvent((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_connect_notify(void* self, void* signal) {
    QDoubleSpinBox_ConnectNotify((QDoubleSpinBox*)self, (QMetaMethod*)signal);
}

void q_doublespinbox_qbase_connect_notify(void* self, void* signal) {
    QDoubleSpinBox_QBaseConnectNotify((QDoubleSpinBox*)self, (QMetaMethod*)signal);
}

void q_doublespinbox_on_connect_notify(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnConnectNotify((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_disconnect_notify(void* self, void* signal) {
    QDoubleSpinBox_DisconnectNotify((QDoubleSpinBox*)self, (QMetaMethod*)signal);
}

void q_doublespinbox_qbase_disconnect_notify(void* self, void* signal) {
    QDoubleSpinBox_QBaseDisconnectNotify((QDoubleSpinBox*)self, (QMetaMethod*)signal);
}

void q_doublespinbox_on_disconnect_notify(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnDisconnectNotify((QDoubleSpinBox*)self, (intptr_t)callback);
}

QLineEdit* q_doublespinbox_line_edit(void* self) {
    return QDoubleSpinBox_LineEdit((QDoubleSpinBox*)self);
}

QLineEdit* q_doublespinbox_qbase_line_edit(void* self) {
    return QDoubleSpinBox_QBaseLineEdit((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_line_edit(void* self, QLineEdit* (*callback)()) {
    QDoubleSpinBox_OnLineEdit((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_set_line_edit(void* self, void* edit) {
    QDoubleSpinBox_SetLineEdit((QDoubleSpinBox*)self, (QLineEdit*)edit);
}

void q_doublespinbox_qbase_set_line_edit(void* self, void* edit) {
    QDoubleSpinBox_QBaseSetLineEdit((QDoubleSpinBox*)self, (QLineEdit*)edit);
}

void q_doublespinbox_on_set_line_edit(void* self, void (*callback)(void*, void*)) {
    QDoubleSpinBox_OnSetLineEdit((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_update_micro_focus(void* self) {
    QDoubleSpinBox_UpdateMicroFocus((QDoubleSpinBox*)self);
}

void q_doublespinbox_qbase_update_micro_focus(void* self) {
    QDoubleSpinBox_QBaseUpdateMicroFocus((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_update_micro_focus(void* self, void (*callback)()) {
    QDoubleSpinBox_OnUpdateMicroFocus((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_create(void* self) {
    QDoubleSpinBox_Create((QDoubleSpinBox*)self);
}

void q_doublespinbox_qbase_create(void* self) {
    QDoubleSpinBox_QBaseCreate((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_create(void* self, void (*callback)()) {
    QDoubleSpinBox_OnCreate((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_destroy(void* self) {
    QDoubleSpinBox_Destroy((QDoubleSpinBox*)self);
}

void q_doublespinbox_qbase_destroy(void* self) {
    QDoubleSpinBox_QBaseDestroy((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_destroy(void* self, void (*callback)()) {
    QDoubleSpinBox_OnDestroy((QDoubleSpinBox*)self, (intptr_t)callback);
}

bool q_doublespinbox_focus_next_child(void* self) {
    return QDoubleSpinBox_FocusNextChild((QDoubleSpinBox*)self);
}

bool q_doublespinbox_qbase_focus_next_child(void* self) {
    return QDoubleSpinBox_QBaseFocusNextChild((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_focus_next_child(void* self, bool (*callback)()) {
    QDoubleSpinBox_OnFocusNextChild((QDoubleSpinBox*)self, (intptr_t)callback);
}

bool q_doublespinbox_focus_previous_child(void* self) {
    return QDoubleSpinBox_FocusPreviousChild((QDoubleSpinBox*)self);
}

bool q_doublespinbox_qbase_focus_previous_child(void* self) {
    return QDoubleSpinBox_QBaseFocusPreviousChild((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_focus_previous_child(void* self, bool (*callback)()) {
    QDoubleSpinBox_OnFocusPreviousChild((QDoubleSpinBox*)self, (intptr_t)callback);
}

QObject* q_doublespinbox_sender(void* self) {
    return QDoubleSpinBox_Sender((QDoubleSpinBox*)self);
}

QObject* q_doublespinbox_qbase_sender(void* self) {
    return QDoubleSpinBox_QBaseSender((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_sender(void* self, QObject* (*callback)()) {
    QDoubleSpinBox_OnSender((QDoubleSpinBox*)self, (intptr_t)callback);
}

int32_t q_doublespinbox_sender_signal_index(void* self) {
    return QDoubleSpinBox_SenderSignalIndex((QDoubleSpinBox*)self);
}

int32_t q_doublespinbox_qbase_sender_signal_index(void* self) {
    return QDoubleSpinBox_QBaseSenderSignalIndex((QDoubleSpinBox*)self);
}

void q_doublespinbox_on_sender_signal_index(void* self, int32_t (*callback)()) {
    QDoubleSpinBox_OnSenderSignalIndex((QDoubleSpinBox*)self, (intptr_t)callback);
}

int32_t q_doublespinbox_receivers(void* self, const char* signal) {
    return QDoubleSpinBox_Receivers((QDoubleSpinBox*)self, signal);
}

int32_t q_doublespinbox_qbase_receivers(void* self, const char* signal) {
    return QDoubleSpinBox_QBaseReceivers((QDoubleSpinBox*)self, signal);
}

void q_doublespinbox_on_receivers(void* self, int32_t (*callback)(void*, const char*)) {
    QDoubleSpinBox_OnReceivers((QDoubleSpinBox*)self, (intptr_t)callback);
}

bool q_doublespinbox_is_signal_connected(void* self, void* signal) {
    return QDoubleSpinBox_IsSignalConnected((QDoubleSpinBox*)self, (QMetaMethod*)signal);
}

bool q_doublespinbox_qbase_is_signal_connected(void* self, void* signal) {
    return QDoubleSpinBox_QBaseIsSignalConnected((QDoubleSpinBox*)self, (QMetaMethod*)signal);
}

void q_doublespinbox_on_is_signal_connected(void* self, bool (*callback)(void*, void*)) {
    QDoubleSpinBox_OnIsSignalConnected((QDoubleSpinBox*)self, (intptr_t)callback);
}

double q_doublespinbox_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDoubleSpinBox_GetDecodedMetricF((QDoubleSpinBox*)self, metricA, metricB);
}

double q_doublespinbox_qbase_get_decoded_metric_f(void* self, int32_t metricA, int32_t metricB) {
    return QDoubleSpinBox_QBaseGetDecodedMetricF((QDoubleSpinBox*)self, metricA, metricB);
}

void q_doublespinbox_on_get_decoded_metric_f(void* self, double (*callback)(void*, int32_t, int32_t)) {
    QDoubleSpinBox_OnGetDecodedMetricF((QDoubleSpinBox*)self, (intptr_t)callback);
}

void q_doublespinbox_on_object_name_changed(void* self, void (*callback)(void*, const char*)) {
    QObject_Connect_ObjectNameChanged((QObject*)self, (intptr_t)callback);
}

void q_doublespinbox_delete(void* self) {
    QDoubleSpinBox_Delete((QDoubleSpinBox*)(self));
}
